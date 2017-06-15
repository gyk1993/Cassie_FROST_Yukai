% Set Bounds
model_bounds = cassie.getLimits();
bounds = struct();

%% Right Stance
bounds.RightStance = model_bounds;

bounds.RightStance.time.t0.lb = 0;
bounds.RightStance.time.t0.ub = 0;
bounds.RightStance.time.t0.x0 = 0;

bounds.RightStance.time.tf.lb = 0.5;
bounds.RightStance.time.tf.ub = 1;
bounds.RightStance.time.tf.x0 = 1;

bounds.RightStance.time.duration.lb = 0.5;
bounds.RightStance.time.duration.ub = 1;
bounds.RightStance.time.duration.x0 = 1;

bounds.RightStance.inputs.ConstraintWrench.fRightToeBottom.lb = -10000;
bounds.RightStance.inputs.ConstraintWrench.fRightToeBottom.ub = 10000;
bounds.RightStance.inputs.ConstraintWrench.fRightToeBottom.x0 = 100;

bounds.RightStance.inputs.ConstraintWrench.fqFixed.lb = -10000;
bounds.RightStance.inputs.ConstraintWrench.fqFixed.ub = 10000;
bounds.RightStance.inputs.ConstraintWrench.fqFixed.x0 = 100;

bounds.RightStance.inputs.ConstraintWrench.ffourBar.lb = -10000;
bounds.RightStance.inputs.ConstraintWrench.ffourBar.ub = 10000;
bounds.RightStance.inputs.ConstraintWrench.ffourBar.x0 = 100;

bounds.RightStance.params.pqFixed.lb = -0*ones(4,1);
bounds.RightStance.params.pqFixed.ub = 0*ones(4,1);
bounds.RightStance.params.pqFixed.x0 = zeros(4,1);

bounds.RightStance.params.pfourBar.lb = -0*ones(2,1);
bounds.RightStance.params.pfourBar.ub = 0*ones(2,1);
bounds.RightStance.params.pfourBar.x0 = zeros(2,1);

bounds.RightStance.params.pRightToeBottom.lb = [0;0;0;0;-pi];
bounds.RightStance.params.pRightToeBottom.ub = [0;0;0;0;pi];
bounds.RightStance.params.pRightToeBottom.x0 = [0;0;0;0;-pi/2];

bounds.RightStance.params.atime.lb = -10*ones(6*10,1);
bounds.RightStance.params.atime.ub = 10*ones(6*10,1);
bounds.RightStance.params.atime.x0 = zeros(6*10,1);

bounds.RightStance.params.ptime.lb = [bounds.RightStance.time.tf.lb, bounds.RightStance.time.t0.lb];
bounds.RightStance.params.ptime.ub = [bounds.RightStance.time.tf.ub, bounds.RightStance.time.t0.ub];
bounds.RightStance.params.ptime.x0 = [bounds.RightStance.time.t0.x0, bounds.RightStance.time.tf.x0];

bounds.RightStance.time.kp = 100;
bounds.RightStance.time.kd = 20;

%% Left Stance
bounds.LeftStance = model_bounds;

bounds.LeftStance.time.t0.lb = 0;
bounds.LeftStance.time.t0.ub = 0;
bounds.LeftStance.time.t0.x0 = 0;

bounds.LeftStance.time.tf.lb = 0.5;
bounds.LeftStance.time.tf.ub = 1;
bounds.LeftStance.time.tf.x0 = 1;

bounds.LeftStance.time.duration.lb = 0.5;
bounds.LeftStance.time.duration.ub = 1;
bounds.LeftStance.time.duration.x0 = 1;

bounds.LeftStance.inputs.ConstraintWrench.fLeftToeBottom.lb = -10000;
bounds.LeftStance.inputs.ConstraintWrench.fLeftToeBottom.ub = 10000;
bounds.LeftStance.inputs.ConstraintWrench.fLeftToeBottom.x0 = 100;

bounds.LeftStance.inputs.ConstraintWrench.fqFixed.lb = -10000;
bounds.LeftStance.inputs.ConstraintWrench.fqFixed.ub = 10000;
bounds.LeftStance.inputs.ConstraintWrench.fqFixed.x0 = 100;

bounds.LeftStance.inputs.ConstraintWrench.ffourBar.lb = -10000;
bounds.LeftStance.inputs.ConstraintWrench.ffourBar.ub = 10000;
bounds.LeftStance.inputs.ConstraintWrench.ffourBar.x0 = 100;

% bounds.LeftStance.params.pLeftToeBottom.lb = -0*ones(5,1);
% bounds.LeftStance.params.pLeftToeBottom.ub = 0*ones(5,1);
% bounds.LeftStance.params.pLeftToeBottom.x0 = zeros(5,1);

bounds.LeftStance.params.pqFixed.lb = -0*ones(4,1);
bounds.LeftStance.params.pqFixed.ub = 0*ones(4,1);
bounds.LeftStance.params.pqFixed.x0 = zeros(4,1);

bounds.LeftStance.params.pfourBar.lb = -0*ones(2,1);
bounds.LeftStance.params.pfourBar.ub = 0*ones(2,1);
bounds.LeftStance.params.pfourBar.x0 = zeros(2,1);

bounds.LeftStance.params.atime.lb = -10*ones(6*10,1);
bounds.LeftStance.params.atime.ub = 10*ones(6*10,1);
bounds.LeftStance.params.atime.x0 = zeros(6*10,1);

bounds.LeftStance.params.ptime.lb = [bounds.RightStance.time.tf.lb, bounds.RightStance.time.t0.lb];
bounds.LeftStance.params.ptime.ub = [bounds.RightStance.time.tf.ub, bounds.RightStance.time.t0.ub];
bounds.LeftStance.params.ptime.x0 = [bounds.RightStance.time.t0.x0, bounds.RightStance.time.tf.x0];

bounds.LeftStance.time.kp = 100;
bounds.LeftStance.time.kd = 20;

%% Impacts

% Right Impact
bounds.RightImpact = model_bounds;
% Left Impact
bounds.LeftImpact = model_bounds;

