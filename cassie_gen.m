%% Setup
clear; clc;
cur = pwd;
addpath(genpath(cur));
export_path = fullfile(cur, 'gen\');
if ~exist(export_path,'dir')
    mkdir(export_path);
    addpath(export_path);
end

% Set FROST path
FROST_PATH = 'D:\Graduate\robots\SomePackage\frost';
addpath(FROST_PATH)
frost_addpath;

% Load model
cassie = CASSIE('urdf/cassie.urdf');
cassie.configureDynamics('DelayCoriolisSet',true);

% Define domains
r_stance = RightStance(cassie);
% l_stance = LeftStance(cassie);
r_impact = RightImpact(r_stance, l_stance);
% l_impact = LeftImpact(l_stance, r_stance);

% Export Kinematics and Dynamics
cassie.ExportKinematics([export_path,'kinematics\']);
r_stance.compile([export_path,'dynamics\']);
% l_stance.compile([export_path,'dynamics\']);
r_impact.compile([export_path,'dynamics\']);
% l_impact.compile([export_path,'dynamics\']);


