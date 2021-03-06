function right_stance_constraints(nlp, bounds, varargin)
    
    domain = nlp.Plant;

    %% relative degree 2 outputs
    domain.VirtualConstraints.time.imposeNLPConstraint(nlp, [bounds.time.kp, bounds.time.kd], [1,1]);
    
    %% tau boundary [0,1]
    T  = SymVariable('t',[2,1]);
    p = {SymVariable(tomatrix(domain.VirtualConstraints.time.PhaseParams(:)))};
    p_name = domain.VirtualConstraints.time.PhaseParamName;
    tau_0 = SymFunction(['tau_0_',domain.Name], T(1) - p{1}(2), [{T},p]);
    tau_F = SymFunction(['tau_F_',domain.Name], T(2) - p{1}(1), [{T},p]);
    addNodeConstraint(nlp, tau_0, {'T',p_name}, 'first', 0, 0, 'Nonlinear');
    addNodeConstraint(nlp, tau_F, {'T',p_name}, 'last', 0, 0, 'Nonlinear');

    %% average velocity
    velocity_desired = [0];
    T  = SymVariable('t',[2,1]);
    X0  = SymVariable('x0',[domain.numState,1]);
    XF  = SymVariable('xF',[domain.numState,1]);
    avg_vel = (XF(1) - X0(1)) ./ (T(2) - T(1));
    avg_vel_fun = SymFunction('average_velocity', avg_vel, {T,X0,XF});
    
    avg_vel_cstr = NlpFunction('Name','average_velocity',...
        'Dimension',1,...
        'lb', velocity_desired,...
        'ub', velocity_desired,...
        'Type','Linear',...
        'SymFun',avg_vel_fun,...
        'DepVariables',[nlp.OptVarTable.T(1); nlp.OptVarTable.x(1); nlp.OptVarTable.x(end)]);    
    
    addConstraint(nlp, 'average_velocity', 'last', avg_vel_cstr);
    
    %% Swing Foot Clearance
    X  = SymVariable('x',[domain.numState,1]);
    swingFootHeight = SymFunction(['swingFootClearance_',domain.Name], nlp.Plant.EventFuncs.leftFootHeight.ConstrExpr, {X});
    addNodeConstraint(nlp, swingFootHeight, {'x'}, floor(nlp.NumNode/2), 0.1, Inf,'Linear');
    
    %% Level swing toe
%     J_swToe = domain.ContactPoints.LeftToeBottom.computeBodyJacobian(domain.numState);
%     v_swToe = J_swToe*domain.States.dx;
%     swToePitch = SymFunction(['swingToePitch_',domain.Name], v_swToe(4), {domain.States.x, domain.States.dx});
%     addNodeConstraint(nlp, swToePitch, {'x','dx'}, 'all', 0, 0, 'Nonlinear');
    
    %% Distance from Body to Toe
    p_stToe = domain.ContactPoints.RightToeBottom.computeCartesianPosition;
    p_body = domain.States.x(1:3);
    Body2ToeDistance = SymFunction(['Body2ToeDistance_',domain.Name], tomatrix(sqrt(sum((p_stToe-p_body).^2))), {domain.States.x});
    addNodeConstraint(nlp, Body2ToeDistance, {'x'}, 'all', 0.5, 1.5, 'Nonlinear');
    
    %% Distance between Toes
    p_RightToe = domain.ContactPoints.RightToeBottom.computeCartesianPosition;
    p_LeftToe = domain.ContactPoints.LeftToeBottom.computeCartesianPosition;
    Toe2ToeDistance = SymFunction(['Toe2ToeDistance_',domain.Name], tomatrix(sqrt(sum((p_RightToe(1:2)-p_LeftToe(1:2)).^2))), {domain.States.x});
    addNodeConstraint(nlp, Toe2ToeDistance, {'x'}, 'all', 0.25, 0.3, 'Nonlinear');
    
      %% Contrain Hip Abduction and Rotation Angles 
%     HipAbductonAngles = SymFunction(['HipAbductonAngles_',domain.Name], domain.States.x([8,16]), {domain.States.x});
    HipRotationAngles = SymFunction(['HipRotationAngles_',domain.Name], domain.States.x([9,17]), {domain.States.x});
%     addNodeConstraint(nlp, HipAbductonAngles, {'x'}, 'all', deg2rad(-5), deg2rad(5), 'Nonlinear');
    addNodeConstraint(nlp, HipRotationAngles, {'x'}, 'all', deg2rad(-5), deg2rad(5), 'Nonlinear');
    
%% Final swing foot velocity
%     p_swToe = domain.ContactPoints.LeftToeBottom.computeCartesianPosition;
%     v_swToe = jacobian(p_swToe, domain.States.x)*domain.States.dx;
%     
%     swingToeVelocity_x = SymFunction(['SwingToeVelocity_x_',domain.Name],v_swToe(1), {domain.States.x, domain.States.dx});
%     addNodeConstraint(nlp, swingToeVelocity_x, {'x','dx'}, 'last', -0.1, 0.1, 'Nonlinear');
%     
%     swingToeVelocity_y = SymFunction(['SwingToeVelocity_y_',domain.Name],v_swToe(2), {domain.States.x, domain.States.dx});
%     addNodeConstraint(nlp, swingToeVelocity_y, {'x','dx'}, 'last', -0.1, 0.1, 'Nonlinear');
%     
%     swingToeVelocity_z = SymFunction(['SwingToeVelocity_z_',domain.Name],v_swToe(3), {domain.States.x, domain.States.dx});
%     addNodeConstraint(nlp, swingToeVelocity_z, {'x','dx'}, 'last', -0.5, 0, 'Nonlinear');
end


