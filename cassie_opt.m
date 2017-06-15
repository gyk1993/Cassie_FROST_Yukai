%% Setup
clear; clc;
cur = pwd;
addpath(genpath(cur));
export_path = fullfile(cur, 'gen\');
if ~exist(export_path,'dir')
    mkdir(export_path);
    addpath(export_path);
end

COMPILE = false;

% Set FROST path
FROST_PATH = 'D:\Graduate\robots\SomePackage\frost';
addpath(FROST_PATH)
frost_addpath;

% Load model
cassie = CASSIE('urdf/cassie.urdf');
cassie.configureDynamics('DelayCoriolisSet',true);

% Define domains
r_stance = RightStance(cassie);
r_impact = RightImpact(r_stance);

%% Define hybrid system
cassie_sys = HybridSystem('Cassie_oneStep');
cassie_sys = addVertex(cassie_sys, {'RightStance'}, 'Domain', {r_stance});
srcs = {'RightStance'};
tars = {'RightStance'};
cassie_sys = addEdge(cassie_sys, srcs, tars);
cassie_sys = setEdgeProperties(cassie_sys, srcs, tars, 'Guard', {r_impact});

%% Define User Constraints
r_stance.UserNlpConstraint = str2func('right_stance_constraints');
r_impact.UserNlpConstraint = str2func('right_impact_constraints');

%% Create optimization problem
num_grid.RightStance = 10;
num_grid.LeftStance = 10;
nlp = HybridTrajectoryOptimization('Cassie_oneStep',cassie_sys,num_grid,[],'EqualityConstraintBoundary',1e-4);
nlp.update;

% Configure bounds and update
setBounds;
nlp.configure(bounds);

%% Define User Costs

% Torque Cost
u = r_stance.Inputs.Control.u;
u2 = sum((u).^2);
u2_fun = SymFunction('torque',u2,{u});
addRunningCost(nlp.Phase(getPhaseIndex(nlp,'RightStance')),u2_fun,'u');

% Hip Abduction Cost
q_torso = r_stance.States.x([4,5]);
cost = {sum((100.*q_torso).^2)};
cost_fun = SymFunction('q_torso',cost,{r_stance.States.x});
addRunningCost(nlp.Phase(getPhaseIndex(nlp,'RightStance')),cost_fun,'x');

% Hip Abduction Cost
q_hip_abduction = r_stance.States.x([8,16]);
cost = {sum((100.*q_hip_abduction).^2)};
cost_fun = SymFunction('q_hip_abduction',cost,{r_stance.States.x});
addRunningCost(nlp.Phase(getPhaseIndex(nlp,'RightStance')),cost_fun,'x');

% Hip Rotation Cost
q_hip_rotation = r_stance.States.x([9,17]);
cost = {sum((100.*q_hip_rotation).^2)};
cost_fun = SymFunction('q_hip_rotation',cost,{r_stance.States.x});
addRunningCost(nlp.Phase(getPhaseIndex(nlp,'RightStance')),cost_fun,'x');

% Update
nlp.update;

%% Compile
if COMPILE
    if ~exist([export_path,'opt'],'dir')
        mkdir([export_path,'opt']);
        addpath([export_path,'opt']);
    end
    cassie.ExportKinematics([export_path,'kinematics\']);
    compileConstraint(nlp,[],[],[export_path,'opt']);
    compileObjective(nlp,[],[],[export_path,'opt']);
%     compileConstraint(nlp,[],[],[export_path,'opt'],'dynamics_equation');
end

% compileConstraint(nlp.Phase(1),'Toe2ToeDistance_RightToeBottom',[export_path,'opt'],[],'ForceExport',true);

% Remove constraints
% removeConstraint(nlp.Phase(1),'u_zmp_RightToeBottom');
% removeConstraint(nlp.Phase(1),'average_velocity');
% removeConstraint(nlp.Phase(1),'u_leftFootHeight_RightStance');
% removeConstraint(nlp.Phase(1),'time_output_dynamics');
% removeConstraint(nlp.Phase(1),'d1y_time_RightStance');
% removeConstraint(nlp.Phase(1),'y_time_RightStance');
% removeConstraint(nlp.Phase(1),'u_friction_cone_RightToeBottom');
% removeConstraint(nlp.Phase(1),'swingFootClearance_RightStance');
% removeConstraint(nlp.Phase(1),'tau_0_RightStance');
% removeConstraint(nlp.Phase(1),'tau_F_RightStance');

% removeConstraint(nlp.Phase(2),'xDiscreteMapRightImpact');
% removeConstraint(nlp.Phase(2),'dxDiscreteMapRightImpact');

% removeConstraint(nlp.Phase(3),'dynamics_equation');
% removeConstraint(nlp.Phase(3),'average_velocity');
% removeConstraint(nlp.Phase(3),'u_rightFootHeight_LeftStance');
% removeConstraint(nlp.Phase(3),'time_output_dynamics');
% removeConstraint(nlp.Phase(3),'d1y_time_LeftStance');
% removeConstraint(nlp.Phase(3),'y_time_LeftStance');
% removeConstraint(nlp.Phase(3),'u_friction_cone_LeftToeBottom');
% removeConstraint(nlp.Phase(3),'swingFootClearance_LeftStance');
% removeConstraint(nlp.Phase(3),'tau_0_LeftStance');
% removeConstraint(nlp.Phase(3),'tau_F_LeftStance');
% 
% removeConstraint(nlp.Phase(4),'xDiscreteMapLeftImpact');
% removeConstraint(nlp.Phase(4),'dxDiscreteMapLeftImpact');

% Create Ipopt solver
ipopt_options.max_iter         = 3000;
ipopt_options.tol              = 1e2;
ipopt_options.dual_inf_tol           = 1e2;
ipopt_options.constr_viol_tol        = 1e-3;
ipopt_options.compl_inf_tol          = 1e2;
% ipopt_options.derivative_test = 'first-order';
% ipopt_options.derivative_test_perturbation = 1e-8;
% ipopt_options.derivative_test_print_all = 'no';

nlp.update;
solver = IpoptApplication(nlp, ipopt_options);

% Run Optimization
old = load('x0');
[sol, info] = optimize(solver, old.sol);
% [sol, info] = optimize(solver);
[tspan, states, inputs, params] = exportSolution(nlp, sol);


%% Animate 
q_log_R = states{1}.x; % Right stance
q_log_L = q_log_R([1:6,15:22,7:14],:); % symmetric Left stance
q_log_L(1:3,:) = q_log_L(1:3,:) + repmat((q_log_R(1:3,end)-q_log_R(1:3,1)),1,21);
q_log_L(2,:) = q_log_R(2,1) + (q_log_R(2,1)-q_log_R(2,:));
q_log_L([4,6,8,9,16,17],:) = -q_log_L([4,6,8,9,16,17],:);

t_log_R = tspan{1};
t_log_L = t_log_R + t_log_R(end);

q_log = [q_log_R, q_log_L];
t_log = [t_log_R, t_log_L];

f = figure;
anim = Animator.CassieAnimator(t_log, q_log);
anim.pov = Animator.AnimatorPointOfView.Free;
anim.Animate(true);
anim.isLooping = false;
anim.updateWorldPosition = true;
anim.endTime = 20;
conGUI = Animator.AnimatorControls();
conGUI.anim = anim;

