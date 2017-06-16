%     p_RightToe = domain.ContactPoints.RightToeBottom.computeCartesianPosition;
%     p_LeftToe = domain.ContactPoints.LeftToeBottom.computeCartesianPosition;
%     test = sqrt(sum((p_RightToe(1:2)-p_LeftToe(1:2)).^2));
    subs(test,domain.States.x,test_q)