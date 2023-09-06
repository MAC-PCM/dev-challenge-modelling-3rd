#include "SparkEV.h"
real_T rtP__CtrlVcuEvChrgLmtBpt2f2EvVCU_sldd_ [ 11 ] = { 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 0.7 , 0.35 , 0.0 } ; real_T
rtP__CtrlVcuEvRegenBrkCutOff2f2EvVCU_sldd_ [ 2 ] = { 0.0 , 1.0 } ; real_T
rtP__CtrlVcuEvRegenBrkSpdBpt2f2EvVCU_sldd_ [ 2 ] = { 5.0 , 9.0 } ; real_T
rtP__CtrlVcuEvSocBpt2f2EvVCU_sldd_ [ 11 ] = { 0.0 , 10.0 , 20.0 , 30.0 , 40.0
, 50.0 , 60.0 , 70.0 , 80.0 , 90.0 , 100.0 } ; real_T
rtP__DriverAeroRes2f2Driver_sldd_ = 0.5 ; real_T
rtP__DriverDrivelineRes2f2Driver_sldd_ = 2.5 ; real_T
rtP__DriverInitialGear2f2Driver_sldd_ = 0.0 ; real_T
rtP__DriverPreviewDist2f2Driver_sldd_ = 4.0 ; real_T
rtP__DriverRollRes2f2Driver_sldd_ = 200.0 ; real_T
rtP__DriverShiftTime2f2Driver_sldd_ = 0.1 ; real_T
rtP__DriverTimeConst2f2Driver_sldd_ = 0.3 ; real_T
rtP__DriverTractiveForce2f2Driver_sldd_ = 15000.0 ; real_T
rtP__EnvAirTemp2f2Environment_sldd_ = 298.0 ; real_T
rtP__EnvGrvty2f2Environment_sldd_ = 9.81 ; real_T
rtP__EnvNomFrictionScaling2f2Environment_sldd_ = 1.0 ; real_T
rtP__EnvNominalGrade2f2Environment_sldd_ = 0.0 ; real_T
rtP__EnvWindVelX2f2Environment_sldd_ = 0.0 ; real_T
rtP__EnvWindVelY2f2Environment_sldd_ = 0.0 ; real_T
rtP__EnvWindVelZ2f2Environment_sldd_ = 0.0 ; real_T
rtP__PlntBattSocInit2f2BatteryDCDC_sldd_ = 0.8 ; real_T
rtP__PlntBattTempInitDegC2f2BatteryDCDC_sldd_ = 25.0 ; real_T
rtP__PlntBrkFrntBias2f2PassVeh_sldd_ = 1.0 ; real_T
rtP__PlntBrkKinFricCffFrnt2f2PassVeh_sldd_ = 0.35 ; real_T
rtP__PlntBrkNumPadsFrnt2f2PassVeh_sldd_ = 2.0 ; real_T
rtP__PlntBrkPadMeanRadiusFrnt2f2PassVeh_sldd_ = 0.15 ; real_T
rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ = 8.0E+6 ; real_T
rtP__PlntBrkRearBias2f2PassVeh_sldd_ = 0.6 ; real_T
rtP__PlntBrkWc2f2PassVeh_sldd_ = 125.66370614359172 ; real_T
rtP__PlntDCDCVoltInit2f2BatteryDCDC_sldd_ = 650.0 ; real_T
rtP__PlntDiffrntl2Eff2f2Drivetrain_sldd_ = 0.98 ; real_T
rtP__PlntDiffrntl2Ratio2f2Drivetrain_sldd_ = 3.87 ; real_T
rtP__PlntDiffrntlEff2f2Drivetrain_sldd_ = 0.98 ; real_T
rtP__PlntDiffrntlRatio2f2Drivetrain_sldd_ = 3.87 ; real_T
rtP__PlntEM1EffTbl2f2ElectricMachine1_sldd_ [ 154 ] = { 52.0 , 52.0 , 52.0 ,
52.0 , 52.0 , 52.0 , 52.0 , 52.0 , 52.0 , 62.0 , 66.0 , 70.0 , 70.0 , 72.0 ,
78.0 , 78.0 , 78.0 , 80.0 , 80.0 , 80.0 , 82.0 , 82.0 , 84.0 , 86.0 , 86.0 ,
86.0 , 86.0 , 86.0 , 80.0 , 80.0 , 84.0 , 86.0 , 86.0 , 86.0 , 88.0 , 88.0 ,
90.0 , 91.0 , 91.0 , 92.0 , 92.0 , 91.0 , 82.0 , 82.0 , 86.0 , 86.0 , 88.0 ,
88.0 , 90.0 , 91.0 , 92.0 , 93.0 , 93.0 , 93.0 , 93.0 , 93.0 , 82.0 , 82.0 ,
86.0 , 88.0 , 88.0 , 90.0 , 91.0 , 91.0 , 92.0 , 93.0 , 93.0 , 93.0 , 93.0 ,
93.0 , 80.0 , 80.0 , 86.0 , 88.0 , 88.0 , 90.0 , 91.0 , 92.0 , 93.0 , 93.0 ,
93.0 , 93.0 , 93.0 , 93.0 , 78.0 , 78.0 , 86.0 , 88.0 , 88.0 , 90.0 , 92.0 ,
93.0 , 93.0 , 93.0 , 93.0 , 93.0 , 93.0 , 93.0 , 78.0 , 78.0 , 84.0 , 86.0 ,
88.0 , 90.0 , 92.0 , 93.0 , 93.0 , 93.0 , 93.0 , 93.0 , 93.0 , 93.0 , 76.0 ,
76.0 , 84.0 , 86.0 , 86.0 , 88.0 , 92.0 , 93.0 , 93.0 , 93.0 , 93.0 , 93.0 ,
93.0 , 93.0 , 74.0 , 74.0 , 82.0 , 84.0 , 86.0 , 88.0 , 91.0 , 93.0 , 93.0 ,
93.0 , 93.0 , 93.0 , 93.0 , 93.0 , 70.0 , 70.0 , 82.0 , 84.0 , 86.0 , 88.0 ,
91.0 , 93.0 , 93.0 , 93.0 , 93.0 , 93.0 , 93.0 , 93.0 } ; real_T
rtP__PlntEM1Spd2f2ElectricMachine1_sldd_ [ 14 ] = { 0.0 , 139.62634015954637
, 279.25268031909275 , 418.87902047863906 , 468.88888888888891 ,
558.50536063818549 , 698.13170079773181 , 837.75804095727813 ,
977.38438111682456 , 1117.010721276371 , 1256.6370614359173 ,
1396.2634015954636 , 1535.88974175501 , 1675.5160819145563 } ; real_T
rtP__PlntEM1TrqEff2f2ElectricMachine1_sldd_ [ 11 ] = { 0.0 , 45.0 , 90.0 ,
135.0 , 180.0 , 225.0 , 270.0 , 315.0 , 360.0 , 405.0 , 450.0 } ; real_T
rtP__PlntEM2EffTbl2f2ElectricMachine2_sldd_ [ 154 ] = { 52.0 , 52.0 , 52.0 ,
52.0 , 52.0 , 52.0 , 52.0 , 52.0 , 52.0 , 62.0 , 66.0 , 70.0 , 70.0 , 72.0 ,
78.0 , 78.0 , 78.0 , 80.0 , 80.0 , 80.0 , 82.0 , 82.0 , 84.0 , 86.0 , 86.0 ,
86.0 , 86.0 , 86.0 , 80.0 , 80.0 , 84.0 , 86.0 , 86.0 , 86.0 , 88.0 , 88.0 ,
90.0 , 91.0 , 91.0 , 92.0 , 92.0 , 91.0 , 82.0 , 82.0 , 86.0 , 86.0 , 88.0 ,
88.0 , 90.0 , 91.0 , 92.0 , 93.0 , 93.0 , 93.0 , 93.0 , 93.0 , 82.0 , 82.0 ,
86.0 , 88.0 , 88.0 , 90.0 , 91.0 , 91.0 , 92.0 , 93.0 , 93.0 , 93.0 , 93.0 ,
93.0 , 80.0 , 80.0 , 86.0 , 88.0 , 88.0 , 90.0 , 91.0 , 92.0 , 93.0 , 93.0 ,
93.0 , 93.0 , 93.0 , 93.0 , 78.0 , 78.0 , 86.0 , 88.0 , 88.0 , 90.0 , 92.0 ,
93.0 , 93.0 , 93.0 , 93.0 , 93.0 , 93.0 , 93.0 , 78.0 , 78.0 , 84.0 , 86.0 ,
88.0 , 90.0 , 92.0 , 93.0 , 93.0 , 93.0 , 93.0 , 93.0 , 93.0 , 93.0 , 76.0 ,
76.0 , 84.0 , 86.0 , 86.0 , 88.0 , 92.0 , 93.0 , 93.0 , 93.0 , 93.0 , 93.0 ,
93.0 , 93.0 , 74.0 , 74.0 , 82.0 , 84.0 , 86.0 , 88.0 , 91.0 , 93.0 , 93.0 ,
93.0 , 93.0 , 93.0 , 93.0 , 93.0 , 70.0 , 70.0 , 82.0 , 84.0 , 86.0 , 88.0 ,
91.0 , 93.0 , 93.0 , 93.0 , 93.0 , 93.0 , 93.0 , 93.0 } ; real_T
rtP__PlntEM2Spd2f2ElectricMachine2_sldd_ [ 14 ] = { 0.0 , 52.359877559829883
, 104.71975511965977 , 149.99964920693077 , 157.07963267948966 ,
209.43951023931953 , 261.79938779914943 , 314.15926535897933 ,
366.51914291880917 , 418.87902047863906 , 471.238898038469 ,
523.59877559829886 , 575.95865315812864 , 628.31853071795865 } ; real_T
rtP__PlntEM2TrqEff2f2ElectricMachine2_sldd_ [ 11 ] = { 0.0 , 20.0 , 40.0 ,
60.0 , 80.0 , 100.0 , 120.0 , 140.0 , 160.0 , 180.0 , 200.0 } ; real_T
rtP__PlntVehDstCGFrntAxl2f2PassVeh_sldd_ = 1.09 ; real_T
rtP__PlntVehDstCGRearAxl2f2PassVeh_sldd_ = 1.7 ; real_T
rtP__PlntVehMass2f2PassVeh_sldd_ = 1512.0 ; real_T
rtP__PlntWhlLdRadius2f2PassVeh_sldd_ = 0.2598801 ; real_T
rtP__Spark_MaxTrq2f2SparkEM_sldd_ [ 29 ] = { 360.0 , 360.0 , 360.0 , 360.0 ,
360.0 , 357.728404316261 , 357.682405078656 , 356.960983702214 ,
356.300227986961 , 355.51814094933 , 355.472141711725 , 351.285699987009 ,
343.284814075766 , 334.455149023278 , 326.3978124807 , 307.963362459085 ,
289.161940741908 , 276.934802218937 , 265.691686602383 , 254.400604378871 ,
242.676261199004 , 229.462130210989 , 218.075437684875 , 207.776256300937 ,
192.222891861329 , 178.005775209291 , 168.578005975641 , 157.19263710183 ,
152.195121951219 } ; real_T rtP__Spark_MaxTrq_Spd2f2SparkEM_sldd_ [ 29 ] = {
1.0 , 300.0 , 700.0 , 1000.0 , 1300.0 , 1600.0 , 1900.0 , 2200.0 , 2500.0 ,
2800.0 , 3100.0 , 3400.0 , 3700.0 , 4000.0 , 4300.0 , 4600.0 , 4900.0 ,
5200.0 , 5500.0 , 5800.0 , 6100.0 , 6400.0 , 6700.0 , 7000.0 , 7400.0 ,
7800.0 , 8200.0 , 8600.0 , 8810.0 } ; kjmvupbl2i3 kjmvupbl2i ;
