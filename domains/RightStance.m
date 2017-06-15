 % Right Stance Domain 
 %
 % Contact: Right Toe
function domain = RightStance(model)
    % construct the right stance domain of RABBIT
    %
    % Parameters:
    % model: the right body model of ATLAS robot
    
    %% first make a copy of the robot model
    %| @note Do not directly assign with the model variable, since it is a
    %handle object.
    domain = copy(model);
    % set the name of the new copy
    domain.setName('RightStance');
    
    % Extract state variables
    x = domain.States.x;
    dx = domain.States.dx;
    
    % Add 4-bar holonomic constraint
    four_bar = [x('knee_joint_left'); x('knee_joint_right')] + ...
               [x('ankle_joint_left'); x('ankle_joint_right')] - ...
               [deg2rad(13); deg2rad(13)];
    four_bar_constr = HolonomicConstraint(domain, four_bar, 'fourBar', ...
        'ConstrLabel', {{'four_bar_left', 'four_bar_right'}}, ...
        'Jacobian', jacobian(four_bar, x));
    domain = addHolonomicConstraint(domain, four_bar_constr);
    
    % Add contact
    right_sole = ToContactFrame(domain.ContactPoints.RightToeBottom,...
        'LineContactWithFriction');
    fric_coef.mu = 0.6;
    fric_coef.gamma = 100;
    geometry.la = 0.05;
    geometry.lb = 0.05;
    domain = addContact(domain,right_sole,fric_coef,geometry);
    
    % Add event
    % height of non-stance foot (left toe)
    p_swingFoot = getCartesianPosition(domain, domain.ContactPoints.LeftToeBottom);
    h_nsf = UnilateralConstraint(domain,p_swingFoot(3),'leftFootHeight','x');
    domain = addEvent(domain, h_nsf);
   
    % phase variable: time
    t = SymVariable('t');
    p = SymVariable('p',[2,1]);
    tau = (t-p(2))/(p(1)-p(2));
    
    % relative degree two outputs:
    y_hip_abduction_left = x('hip_abduction_left');
    y_hip_rotation_left = x('hip_rotation_left');
    y_hip_flexion_left = x('hip_flexion_left');
    y_knee_joint_left = x('knee_joint_left');
    y_toe_joint_left= x('toe_joint_left');
    y_hip_abduction_right = x('hip_abduction_right');
    y_hip_rotation_right = x('hip_rotation_right');
    y_hip_flexion_right = x('hip_flexion_right');
    y_knee_joint_right = x('knee_joint_right');
    y_toe_joint_right = x('toe_joint_right');
    
    ya_2 = [y_hip_abduction_left;
            y_hip_rotation_left;
            y_hip_flexion_left;
            y_knee_joint_left;
            y_toe_joint_left;
            y_hip_abduction_right;
            y_hip_rotation_right;
            y_hip_flexion_right;
            y_knee_joint_right;
            y_toe_joint_right];
    
    y2_label = {'hip_abduction_left',...
                'hip_rotation_left',...
                'hip_flexion_left',...
                'knee_joint_left',...
                'toe_joint_left',...
                'hip_abduction_right',...
                'hip_rotation_right',...
                'hip_flexion_right',...
                'knee_joint_right',...
                'toe_joint_right'};
    
    y2 = VirtualConstraint(domain,ya_2,'time','DesiredType','Bezier','PolyDegree',5,...
        'RelativeDegree',2,'OutputLabel',{y2_label},'PhaseType','TimeBased',...
        'PhaseVariable',tau,'PhaseParams',p,'Holonomic',true);
    
    domain = addVirtualConstraint(domain,y2);
    
end
    