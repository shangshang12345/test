clear;
clc;
%% Get Information
% from V2I
lighttype="green";
lighttime=20;
vehicle_num=0;

%from roadinf
roadinf.vmax=70;     %km/h
roadinf.vmin=20;
roadinf.redtime=62;
roadinf.greentime=55;
roadinf.yellowtime=3;
roadinf.velocity=0.8;     %每秒走几辆车

roadinf.s=500;

%%
[tmin,tmax,suggest] = Constraint_T_V(lighttype,vehicle_num,lighttime,roadinf);