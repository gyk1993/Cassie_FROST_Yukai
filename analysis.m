load('00dms_6')

joint_index = [8,9,10,11,14,16,17,18,19,22];

figure
for i = 1: 10
    subplot(2,5,i)
    plot(tspan{1},states{1}.x(joint_index(i),:))
end

figure
for i = 1:6
    subplot(2,3,i)
    plot(tspan{1},states{1}.x(i,:));
end
