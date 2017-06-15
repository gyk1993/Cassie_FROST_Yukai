% Right Foot Impact (guard)
function guard = RightImpact(domain)
    
    % set impact
    guard = RigidImpact('RightImpact',domain,'leftFootHeight');
    
    % reset map
    guard.R = [guard.R(:,1:6), guard.R(:,15:22), guard.R(:,7:14)];
    guard.R(:,[4,6,8,9,16,17]) = -guard.R(:,[4,6,8,9,16,17]);

    % set the impact constraint
    guard.addImpactConstraint(struct2array(domain.HolonomicConstraints));
end