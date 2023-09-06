mdl = 'SparkEV';
open_system(mdl);

%%

%Test 1 
in(1) = Simulink.SimulationInput(mdl); 
in(1) = setParamforManeuverAndDriver('SparkEV','Drive Cycle', 'FTP75', 'Longitudinal Driver',1,in(1),6);
out = sim(in, 'ShowSimulationManager', 'on');
