#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "SparkEV_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 21
#endif
#ifndef SS_INT64
#define SS_INT64 22
#endif
#else
#include "builtin_typeid_types.h"
#include "SparkEV.h"
#include "SparkEV_capi.h"
#include "SparkEV_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"SparkEV/Environment/Vector Concatenate" ) , TARGET_STRING ( "Wind" ) , 0 , 0
, 0 , 0 , 0 } , { 1 , 0 , TARGET_STRING ( "SparkEV/Environment/Constant3" ) ,
TARGET_STRING ( "X" ) , 0 , 0 , 1 , 0 , 0 } , { 2 , 0 , TARGET_STRING (
"SparkEV/Environment/Constant4" ) , TARGET_STRING ( "Y" ) , 0 , 0 , 1 , 0 , 0
} , { 3 , 0 , TARGET_STRING ( "SparkEV/Environment/Constant5" ) ,
TARGET_STRING ( "Z" ) , 0 , 0 , 1 , 0 , 0 } , { 4 , 0 , TARGET_STRING (
"SparkEV/Environment/Temp_degK" ) , TARGET_STRING ( "Temp" ) , 0 , 0 , 1 , 0
, 0 } , { 5 , 0 , TARGET_STRING (
"SparkEV/Longitudinal Driver/Unit Conversion1" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 1 } , { 6 , 0 , TARGET_STRING (
"SparkEV/Visualization/Rate Transition1" ) , TARGET_STRING ( "Battery SOC" )
, 0 , 0 , 1 , 0 , 2 } , { 7 , 0 , TARGET_STRING (
"SparkEV/Visualization/Rate Transition10" ) , TARGET_STRING (
"Battery Current (A)" ) , 0 , 0 , 1 , 0 , 2 } , { 8 , 0 , TARGET_STRING (
"SparkEV/Visualization/Rate Transition2" ) , TARGET_STRING ( "" ) , 0 , 0 , 1
, 0 , 2 } , { 9 , 0 , TARGET_STRING (
"SparkEV/Visualization/Rate Transition4" ) , TARGET_STRING (
"Trace Velocity, Target, Actual (mph)" ) , 0 , 0 , 2 , 0 , 2 } , { 10 , 0 ,
TARGET_STRING ( "SparkEV/Visualization/Rate Transition5" ) , TARGET_STRING (
"" ) , 0 , 0 , 2 , 0 , 2 } , { 11 , 0 , TARGET_STRING (
"SparkEV/Visualization/Rate Transition7" ) , TARGET_STRING ( "" ) , 0 , 0 , 1
, 0 , 2 } , { 12 , 0 , TARGET_STRING (
"SparkEV/Visualization/Rate Transition8" ) , TARGET_STRING ( "" ) , 0 , 0 , 2
, 0 , 2 } , { 13 , 0 , TARGET_STRING (
"SparkEV/Visualization/Unit Conversion2" ) , TARGET_STRING ( "" ) , 0 , 0 , 1
, 0 , 3 } , { 14 , 0 , TARGET_STRING (
"SparkEV/Visualization/Unit Conversion4" ) , TARGET_STRING ( "" ) , 0 , 0 , 1
, 0 , 3 } , { 15 , 0 , TARGET_STRING (
"SparkEV/Visualization/Unit Conversion5" ) , TARGET_STRING ( "" ) , 0 , 0 , 2
, 0 , 1 } , { 16 , 0 , TARGET_STRING (
"SparkEV/Visualization/Unit Conversion6" ) , TARGET_STRING ( "" ) , 0 , 0 , 1
, 0 , 1 } , { 17 , 0 , TARGET_STRING (
"SparkEV/Controllers/Brake Control Unit (BCU)/Open Loop Braking" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 4 } , { 18 , 0 , TARGET_STRING (
"SparkEV/Controllers/VCU Input/Rate Transition" ) , TARGET_STRING (
"AccelFdbk" ) , 0 , 0 , 1 , 0 , 4 } , { 19 , 0 , TARGET_STRING (
"SparkEV/Controllers/VCU Input/Rate Transition1" ) , TARGET_STRING (
"Vehicle" ) , 0 , 0 , 1 , 0 , 4 } , { 20 , 0 , TARGET_STRING (
"SparkEV/Controllers/VCU Input/Rate Transition10" ) , TARGET_STRING (
"TransGear" ) , 0 , 0 , 1 , 0 , 4 } , { 21 , 0 , TARGET_STRING (
"SparkEV/Controllers/VCU Input/Rate Transition18" ) , TARGET_STRING (
"BattPackVolt" ) , 0 , 0 , 1 , 0 , 4 } , { 22 , 0 , TARGET_STRING (
"SparkEV/Controllers/VCU Input/Rate Transition19" ) , TARGET_STRING (
"SOC_CC" ) , 0 , 0 , 1 , 0 , 4 } , { 23 , 0 , TARGET_STRING (
"SparkEV/Controllers/VCU Input/Rate Transition20" ) , TARGET_STRING (
"DischrgCurrLmt" ) , 0 , 0 , 1 , 0 , 4 } , { 24 , 0 , TARGET_STRING (
"SparkEV/Controllers/VCU Input/Rate Transition21" ) , TARGET_STRING (
"ChrgCurrLmt" ) , 0 , 0 , 1 , 0 , 4 } , { 25 , 0 , TARGET_STRING (
"SparkEV/Controllers/VCU Input/Rate Transition5" ) , TARGET_STRING ( "EMSpd"
) , 0 , 0 , 2 , 0 , 4 } , { 26 , 0 , TARGET_STRING (
"SparkEV/Controllers/Vehicle Control Unit (VCU)/EV 2EM" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 4 } , { 27 , 0 , TARGET_STRING (
"SparkEV/Controllers/Vehicle Control Unit (VCU)/EV 2EM" ) , TARGET_STRING (
"" ) , 1 , 0 , 2 , 0 , 4 } , { 28 , 0 , TARGET_STRING (
"SparkEV/Controllers/Vehicle Control Unit (VCU)/EV 2EM" ) , TARGET_STRING (
"" ) , 2 , 0 , 3 , 0 , 4 } , { 29 , 0 , TARGET_STRING (
"SparkEV/Controllers/Vehicle Control Unit (VCU)/EV 2EM" ) , TARGET_STRING (
"" ) , 3 , 0 , 1 , 0 , 4 } , { 30 , 0 , TARGET_STRING (
"SparkEV/Controllers/Vehicle Control Unit (VCU)/EV 2EM" ) , TARGET_STRING (
"" ) , 4 , 0 , 1 , 0 , 4 } , { 31 , 0 , TARGET_STRING (
"SparkEV/Controllers/Vehicle Control Unit (VCU)/EV 2EM" ) , TARGET_STRING (
"" ) , 5 , 0 , 1 , 0 , 4 } , { 32 , 0 , TARGET_STRING (
"SparkEV/Controllers/Vehicle Control Unit (VCU)/EV 2EM" ) , TARGET_STRING (
"" ) , 6 , 0 , 1 , 0 , 4 } , { 33 , 0 , TARGET_STRING (
"SparkEV/Environment/Estimated Grade/Subtract" ) , TARGET_STRING ( "" ) , 0 ,
0 , 1 , 0 , 3 } , { 34 , 0 , TARGET_STRING (
"SparkEV/Environment/Estimated Grade/Grade Source" ) , TARGET_STRING (
"Grade" ) , 0 , 0 , 1 , 0 , 0 } , { 35 , 0 , TARGET_STRING (
"SparkEV/Longitudinal Driver/Hill Hold/Dead Zone" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 1 } , { 36 , 0 , TARGET_STRING (
"SparkEV/Vehicle/Chassis Input/First Order Hold1" ) , TARGET_STRING ( "" ) ,
0 , 0 , 3 , 0 , 1 } , { 37 , 0 , TARGET_STRING (
"SparkEV/Vehicle/Electrical System Input/First Order Hold" ) , TARGET_STRING
( "EMTrqCmd" ) , 0 , 0 , 2 , 0 , 1 } , { 38 , 0 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/m to km" ) , TARGET_STRING ( ""
) , 0 , 0 , 1 , 0 , 1 } , { 39 , 0 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/m to mi" ) , TARGET_STRING ( ""
) , 0 , 0 , 1 , 0 , 1 } , { 40 , 0 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/Integrator" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 1 } , { 41 , 0 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/Unit Conversion5" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 42 , 0 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/m to 100Km" ) , TARGET_STRING
( "" ) , 0 , 0 , 1 , 0 , 1 } , { 43 , 0 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/m^3 per gal" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 44 , 0 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/m^3 to US Gal" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 45 , 0 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Integrator" ) , TARGET_STRING
( "" ) , 0 , 0 , 1 , 0 , 1 } , { 46 , 0 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Integrator1" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 47 , 0 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Divide" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 1 } , { 48 , 0 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Divide1" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 1 } , { 49 , 0 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Divide2" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 1 } , { 50 , 0 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Product" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 1 } , { 51 , 0 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/US MPG Calc" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 52 , 0 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Rate Transition3" ) ,
TARGET_STRING ( "US MPG" ) , 0 , 0 , 1 , 0 , 2 } , { 53 , 0 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Add" ) , TARGET_STRING ( "" )
, 0 , 0 , 1 , 0 , 1 } , { 54 , 0 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Sqrt" ) , TARGET_STRING ( ""
) , 0 , 0 , 1 , 0 , 1 } , { 55 , 0 , TARGET_STRING (
"SparkEV/Longitudinal Driver/Hill Hold/Compare To Constant1/Compare" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 1 , 0 , 0 } , { 56 , 0 , TARGET_STRING (
"SparkEV/Longitudinal Driver/Hill Hold/Compare To Constant2/Compare" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 1 , 0 , 0 } , { 57 , 0 , TARGET_STRING (
"SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Sum7" )
, TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 58 , 0 , TARGET_STRING (
"SparkEV/Visualization/Scope Type/None/Unit Conversion4" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 3 } , { 59 , 0 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simscape Models/Pedal, Cluster, Cabin/Dead Zone2"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 60 , 0 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simscape Models/Pedal, Cluster, Cabin/Dead Zone3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 3 } , { 61 , 0 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Gain"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 62 , 0 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 63 , 0 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 64 , 0 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Product1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 65 , 0 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Add"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 66 , 0 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Add1"
) , TARGET_STRING ( "u_o(t)" ) , 0 , 0 , 1 , 0 , 1 } , { 67 , 0 ,
TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Add2"
) , TARGET_STRING ( "y(t+T*)" ) , 0 , 0 , 1 , 0 , 1 } , { 68 , 0 ,
TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Add4"
) , TARGET_STRING ( "e(t+T*)" ) , 0 , 0 , 1 , 0 , 1 } , { 69 , 0 ,
TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 70 , 0 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 71 , 0 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Unit Delay"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 4 } , { 72 , 15 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Shift Controller"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 73 , 0 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Shift Controller/GearSelect.is_GearSelect"
) , TARGET_STRING ( "is_GearSelect" ) , 0 , 2 , 1 , 0 , 0 } , { 74 , 0 ,
TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Shift Controller/is_active_c6_autolibsharedcommon"
) , TARGET_STRING ( "is_active_c6_autolibsharedcommon" ) , 0 , 3 , 1 , 0 , 0
} , { 75 , 0 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Shift Controller/GearSelect.is_active_GearSelect"
) , TARGET_STRING ( "is_active_GearSelect" ) , 0 , 3 , 1 , 0 , 0 } , { 76 , 0
, TARGET_STRING (
 "SparkEV/Reference Generator/Reference Generator/Drive Cycle/Drive Cycle Source/Signal Routing/UnitConversion"
) , TARGET_STRING ( "Reference Speed" ) , 0 , 0 , 1 , 0 , 1 } , { 77 , 0 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Constant3"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 78 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Constant4"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 79 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Product2"
) , TARGET_STRING ( "BattPwr" ) , 0 , 0 , 1 , 0 , 1 } , { 80 , 0 ,
TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simscape Models/Engine/No Engine/TPCO" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 81 , 0 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simscape Models/Engine/No Engine/TPCO2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 82 , 0 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simscape Models/Engine/No Engine/TPHC" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 83 , 0 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simscape Models/Engine/No Engine/TPNOx" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 84 , 0 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simscape Models/Engine/No Engine/Product2" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 85 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver Configuration/Solver Configuration/RTP_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 86 , 0 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Logical Operator2"
) , TARGET_STRING ( "" ) , 0 , 1 , 1 , 0 , 3 } , { 87 , 0 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Cont LPF/Integrator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 88 , 0 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Cont LPF/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 89 , 0 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Cont LPF/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 90 , 0 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Logical Operator1"
) , TARGET_STRING ( "" ) , 0 , 1 , 1 , 0 , 3 } , { 91 , 0 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Reverse Change/Logical Operator"
) , TARGET_STRING ( "" ) , 0 , 1 , 1 , 0 , 0 } , { 92 , 0 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Reverse Change/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 1 } , { 93 , 0 , TARGET_STRING (
 "SparkEV/Reference Generator/Reference Generator/Drive Cycle/Drive Cycle Source/Timing Mode/Continuous/Digital Clock"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 5 } , { 94 , 0 , TARGET_STRING (
 "SparkEV/Reference Generator/Reference Generator/Drive Cycle/Drive Cycle Source/Timing Mode/Continuous/Add1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 95 , 0 , TARGET_STRING (
 "SparkEV/Reference Generator/Reference Generator/Drive Cycle/Drive Cycle Source/Timing Mode/Continuous/Switch"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 96 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Front Bias"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 97 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Rear Bias"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 98 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Dead Zone"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 99 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Gain4"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 100 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Product"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 101 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver Configuration/Solver Configuration/EVAL_KEY/INPUT_10_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 102 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver Configuration/Solver Configuration/EVAL_KEY/INPUT_11_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 103 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver Configuration/Solver Configuration/EVAL_KEY/INPUT_1_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 104 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver Configuration/Solver Configuration/EVAL_KEY/INPUT_2_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 105 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver Configuration/Solver Configuration/EVAL_KEY/INPUT_3_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 106 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver Configuration/Solver Configuration/EVAL_KEY/INPUT_4_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 107 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver Configuration/Solver Configuration/EVAL_KEY/INPUT_5_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 108 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver Configuration/Solver Configuration/EVAL_KEY/INPUT_6_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 109 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver Configuration/Solver Configuration/EVAL_KEY/INPUT_7_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 110 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver Configuration/Solver Configuration/EVAL_KEY/INPUT_8_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 111 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver Configuration/Solver Configuration/EVAL_KEY/INPUT_9_1_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 112 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver Configuration/Solver Configuration/EVAL_KEY/OUTPUT_1_0"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 113 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver Configuration/Solver Configuration/EVAL_KEY/STATE_1"
) , TARGET_STRING ( "" ) , 0 , 0 , 5 , 0 , 1 } , { 114 , 2 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/Pass Through"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 115 , 0 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/NOT"
) , TARGET_STRING ( "" ) , 0 , 1 , 1 , 0 , 3 } , { 116 , 5 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/Pass Through"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 117 , 0 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/NOT"
) , TARGET_STRING ( "" ) , 0 , 1 , 1 , 0 , 3 } , { 118 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Valve/Integrator1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 119 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Valve/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 120 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Valve/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 } , { 121 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Gain1"
) , TARGET_STRING ( "BattSoc" ) , 0 , 0 , 1 , 0 , 1 } , { 122 , 2 ,
TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold/Pass Through/u"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 123 , 5 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold/Pass Through/u"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 124 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/PS-Simulink Converter/EVAL_KEY/RESHAPE"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 125 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Power Acc/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 126 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Power Acc/Saturation"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 127 , 0 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Sensor VI/Transfer Fcn5"
) , TARGET_STRING ( "BattVolt" ) , 0 , 0 , 1 , 0 , 1 } , { 128 , 0 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/vehBus/BdyFrm/Cg/vehBus_Values_BdyFrm_Cg_Acc/ay"
) , TARGET_STRING ( "ay" ) , 0 , 0 , 1 , 0 , 3 } , { 0 , 0 , ( NULL ) , (
NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 129 , TARGET_STRING (
"SparkEV/Environment/Estimated Grade/Gain" ) , TARGET_STRING ( "Gain" ) , 0 ,
1 , 0 } , { 130 , TARGET_STRING ( "SparkEV/Environment/Estimated Grade/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 131 , TARGET_STRING (
"SparkEV/Environment/Estimated Grade/Grade Source" ) , TARGET_STRING (
"CurrentSetting" ) , 3 , 1 , 0 } , { 132 , TARGET_STRING (
"SparkEV/Longitudinal Driver/Hill Hold/Compare To Constant" ) , TARGET_STRING
( "const" ) , 0 , 1 , 0 } , { 133 , TARGET_STRING (
"SparkEV/Longitudinal Driver/Hill Hold/Compare To Constant1" ) ,
TARGET_STRING ( "const" ) , 0 , 1 , 0 } , { 134 , TARGET_STRING (
"SparkEV/Longitudinal Driver/Hill Hold/Compare To Constant2" ) ,
TARGET_STRING ( "const" ) , 0 , 1 , 0 } , { 135 , TARGET_STRING (
"SparkEV/Longitudinal Driver/Hill Hold/Compare To Constant3" ) ,
TARGET_STRING ( "const" ) , 0 , 1 , 0 } , { 136 , TARGET_STRING (
"SparkEV/Longitudinal Driver/Hill Hold/Compare To Constant4" ) ,
TARGET_STRING ( "const" ) , 0 , 1 , 0 } , { 137 , TARGET_STRING (
"SparkEV/Longitudinal Driver/Hill Hold/Dead Zone" ) , TARGET_STRING (
"LowerValue" ) , 0 , 1 , 0 } , { 138 , TARGET_STRING (
"SparkEV/Longitudinal Driver/Hill Hold/Dead Zone" ) , TARGET_STRING (
"UpperValue" ) , 0 , 1 , 0 } , { 139 , TARGET_STRING (
"SparkEV/Vehicle/Chassis Input/First Order Hold1" ) , TARGET_STRING (
"InitialOutput" ) , 0 , 1 , 0 } , { 140 , TARGET_STRING (
"SparkEV/Vehicle/Chassis Input/First Order Hold1" ) , TARGET_STRING (
"ErrorTolerance" ) , 0 , 1 , 0 } , { 141 , TARGET_STRING (
"SparkEV/Vehicle/Electrical System Input/First Order Hold" ) , TARGET_STRING
( "InitialOutput" ) , 0 , 1 , 0 } , { 142 , TARGET_STRING (
"SparkEV/Vehicle/Electrical System Input/First Order Hold" ) , TARGET_STRING
( "ErrorTolerance" ) , 0 , 1 , 0 } , { 143 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/m to km" ) , TARGET_STRING (
"Gain" ) , 0 , 1 , 0 } , { 144 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/m to mi" ) , TARGET_STRING (
"Gain" ) , 0 , 1 , 0 } , { 145 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/Integrator" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 1 , 0 } , { 146 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/Integrator1" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 1 , 0 } , { 147 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/Integrator2" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 1 , 0 } , { 148 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/Integrator3" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 1 , 0 } , { 149 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/Integrator4" ) , TARGET_STRING (
"InitialCondition" ) , 0 , 1 , 0 } , { 150 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/Saturation" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 1 , 0 } , { 151 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/Saturation" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 1 , 0 } , { 152 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/Saturation1" ) , TARGET_STRING (
"UpperLimit" ) , 0 , 1 , 0 } , { 153 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/Saturation1" ) , TARGET_STRING (
"LowerLimit" ) , 0 , 1 , 0 } , { 154 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/US EPA kwh//USgal equivalent"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 155 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/s per h" ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 156 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/w per kw" ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 157 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/m to 100Km" ) , TARGET_STRING
( "Gain" ) , 0 , 1 , 0 } , { 158 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/m to mile" ) , TARGET_STRING
( "Gain" ) , 0 , 1 , 0 } , { 159 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/m^3 per gal" ) ,
TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 160 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/m^3 to US Gal" ) ,
TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 161 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Integrator" ) , TARGET_STRING
( "InitialCondition" ) , 0 , 1 , 0 } , { 162 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Integrator1" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 163 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Saturation" ) , TARGET_STRING
( "UpperLimit" ) , 0 , 1 , 0 } , { 164 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Saturation" ) , TARGET_STRING
( "LowerLimit" ) , 0 , 1 , 0 } , { 165 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Saturation1" ) ,
TARGET_STRING ( "UpperLimit" ) , 0 , 1 , 0 } , { 166 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Saturation1" ) ,
TARGET_STRING ( "LowerLimit" ) , 0 , 1 , 0 } , { 167 , TARGET_STRING (
"SparkEV/Controllers/Active Differential Control (ACD)/No Control/Constant" )
, TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 168 , TARGET_STRING (
"SparkEV/Controllers/Battery Management System (BMS)/No BMS/Constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 169 , TARGET_STRING (
"SparkEV/Controllers/Battery Management System (BMS)/No BMS/Constant1" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 170 , TARGET_STRING (
"SparkEV/Controllers/Battery Management System (BMS)/No BMS/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 171 , TARGET_STRING (
"SparkEV/Environment/Ground Feedback/Constant/Constant1" ) , TARGET_STRING (
"Value" ) , 0 , 3 , 0 } , { 172 , TARGET_STRING (
"SparkEV/Reference Generator/Reference Generator/Drive Cycle/Constant10" ) ,
TARGET_STRING ( "Value" ) , 1 , 1 , 0 } , { 173 , TARGET_STRING (
"SparkEV/Reference Generator/Reference Generator/Drive Cycle/Constant11" ) ,
TARGET_STRING ( "Value" ) , 1 , 1 , 0 } , { 174 , TARGET_STRING (
"SparkEV/Reference Generator/Reference Generator/Drive Cycle/Constant12" ) ,
TARGET_STRING ( "Value" ) , 1 , 1 , 0 } , { 175 , TARGET_STRING (
"SparkEV/Reference Generator/Reference Generator/Drive Cycle/Constant2" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 176 , TARGET_STRING (
"SparkEV/Reference Generator/Reference Generator/Drive Cycle/Constant3" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 177 , TARGET_STRING (
"SparkEV/Reference Generator/Reference Generator/Drive Cycle/Constant6" ) ,
TARGET_STRING ( "Value" ) , 1 , 1 , 0 } , { 178 , TARGET_STRING (
"SparkEV/Reference Generator/Reference Generator/Drive Cycle/Constant7" ) ,
TARGET_STRING ( "Value" ) , 1 , 1 , 0 } , { 179 , TARGET_STRING (
"SparkEV/Reference Generator/Reference Generator/Drive Cycle/Constant8" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 180 , TARGET_STRING (
"SparkEV/Reference Generator/Reference Generator/Drive Cycle/Constant9" ) ,
TARGET_STRING ( "Value" ) , 1 , 1 , 0 } , { 181 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simscape Models/Pedal, Cluster, Cabin/Dead Zone2"
) , TARGET_STRING ( "LowerValue" ) , 0 , 1 , 0 } , { 182 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simscape Models/Pedal, Cluster, Cabin/Dead Zone2"
) , TARGET_STRING ( "UpperValue" ) , 0 , 1 , 0 } , { 183 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simscape Models/Pedal, Cluster, Cabin/Dead Zone3"
) , TARGET_STRING ( "LowerValue" ) , 0 , 1 , 0 } , { 184 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simscape Models/Pedal, Cluster, Cabin/Dead Zone3"
) , TARGET_STRING ( "UpperValue" ) , 0 , 1 , 0 } , { 185 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Integrator2"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 186 ,
TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 6 , 0 } , { 187 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 188 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simscape Models/Engine/No Engine/ClsdLpFuelMult"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 189 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simscape Models/Engine/No Engine/EngSpd" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 190 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simscape Models/Engine/No Engine/EngTrq" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 191 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simscape Models/Engine/No Engine/FuelVolFlw" )
, TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 192 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simscape Models/Engine/No Engine/TPCO" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 193 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simscape Models/Engine/No Engine/TPCO2" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 194 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simscape Models/Engine/No Engine/TPHC" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 195 , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simscape Models/Engine/No Engine/TPNOx" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 196 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Signal Hold"
) , TARGET_STRING ( "IC" ) , 0 , 1 , 0 } , { 197 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 198 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/0~1"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 1 , 0 } , { 199 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/0~1"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 1 , 0 } , { 200 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 1 , 0 } , { 201 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Accel Override/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 1 , 0 } , { 202 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Cont LPF/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 203 ,
TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Signal Hold"
) , TARGET_STRING ( "IC" ) , 0 , 1 , 0 } , { 204 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 205 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/-1~0"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 1 , 0 } , { 206 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/-1~0"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 1 , 0 } , { 207 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 1 , 0 } , { 208 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Deccel Override/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 1 , 0 } , { 209 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Reverse Change/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 210 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Reverse Change/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 211 , TARGET_STRING (
 "SparkEV/Reference Generator/Reference Generator/Drive Cycle/Drive Cycle Source/Timing Mode/Continuous/repeat"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 212 , TARGET_STRING (
 "SparkEV/Reference Generator/Reference Generator/Drive Cycle/Drive Cycle Source/Timing Mode/Continuous/tFinal"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 213 , TARGET_STRING (
 "SparkEV/Reference Generator/Reference Generator/Drive Cycle/Drive Cycle Source/Timing Mode/Continuous/Hit  Crossing"
) , TARGET_STRING ( "HitCrossingOffset" ) , 0 , 1 , 0 } , { 214 ,
TARGET_STRING (
 "SparkEV/Reference Generator/Reference Generator/Drive Cycle/Drive Cycle Source/Timing Mode/Continuous/1-D Lookup Table"
) , TARGET_STRING ( "Table" ) , 0 , 7 , 0 } , { 215 , TARGET_STRING (
 "SparkEV/Reference Generator/Reference Generator/Drive Cycle/Drive Cycle Source/Timing Mode/Continuous/1-D Lookup Table"
) , TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 7 , 0 } , { 216 ,
TARGET_STRING (
 "SparkEV/Reference Generator/Reference Generator/Drive Cycle/Drive Cycle Source/Timing Mode/Continuous/Switch"
) , TARGET_STRING ( "Threshold" ) , 0 , 1 , 0 } , { 217 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Dead Zone"
) , TARGET_STRING ( "LowerValue" ) , 0 , 1 , 0 } , { 218 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Dead Zone"
) , TARGET_STRING ( "UpperValue" ) , 0 , 1 , 0 } , { 219 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Reverse Change/Compare To Zero/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 220 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Shift/Basic/Reverse Change/Compare To Zero1/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 221 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Valve/Integrator1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 222 ,
TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Unused Info Signals/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 223 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Gain1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 224 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/Alpha/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 225 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/Alpha/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 226 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/Alpha/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 227 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/Alpha/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 228 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/Fx/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 229 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/Fx/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 230 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/Fx/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 231 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/Fx/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 232 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/Fy/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 233 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/Fy/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 234 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/Fy/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 235 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/Fy/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 236 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/Mx/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 237 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/Mx/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 238 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/Mx/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 239 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/Mx/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 240 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/My/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 241 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/My/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 242 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/My/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 243 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/My/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 244 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/Mz/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 245 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/Mz/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 246 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/Mz/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 247 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/Mz/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 248 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/z/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 249 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/z/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 250 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/z/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 251 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/z/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 252 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/zdot/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 253 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/zdot/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 254 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/zdot/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 255 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Bus Creation/zdot/Constant3"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 256 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Power Acc/Saturation"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 1 , 0 } , { 257 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Power Acc/Saturation"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 1 , 0 } , { 258 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Sensor VI/Transfer Fcn5"
) , TARGET_STRING ( "A" ) , 0 , 1 , 0 } , { 259 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Sensor VI/Transfer Fcn5"
) , TARGET_STRING ( "C" ) , 0 , 1 , 0 } , { 260 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Unused signals for Mapped Battery/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 261 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Subsystem_around_RTP_52118A8B_vc/Subsystem_around_RTP_52118A8B_vc"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 262 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/vehBus/BdyFrm/Cg/vehBus_Values_BdyFrm_Cg_Acc/ax"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 263 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/vehBus/BdyFrm/Cg/vehBus_Values_BdyFrm_Cg_Acc/ay"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 264 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/vehBus/BdyFrm/Cg/vehBus_Values_BdyFrm_Cg_Acc/az"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 265 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/vehBus/BdyFrm/Cg/vehBus_Values_BdyFrm_Cg_AngVel/r"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 0 , ( NULL ) , ( NULL ) , 0 ,
0 , 0 } } ; static const rtwCAPI_States rtBlockStates [ ] = { { 266 , 75 ,
TARGET_STRING ( "SparkEV/Visualization/Emission Calculations/Integrator" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 , 1 , - 1 , 0
} , { 267 , 76 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/Integrator1" ) , TARGET_STRING (
"" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 , 1 , - 1 , 0 } , { 268 , 77
, TARGET_STRING ( "SparkEV/Visualization/Emission Calculations/Integrator2" )
, TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 , 1 , - 1 ,
0 } , { 269 , 78 , TARGET_STRING (
"SparkEV/Visualization/Emission Calculations/Integrator3" ) , TARGET_STRING (
"" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 , 1 , - 1 , 0 } , { 270 , 79
, TARGET_STRING ( "SparkEV/Visualization/Emission Calculations/Integrator4" )
, TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 , 1 , - 1 ,
0 } , { 271 , 73 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Integrator" ) , TARGET_STRING
( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 , 1 , - 1 , 0 } , { 272 ,
74 , TARGET_STRING (
"SparkEV/Visualization/Performance Calculations/Integrator1" ) ,
TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 , 1 , - 1 , 0
} , { 273 , 80 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Integrator2"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 , 1 , - 1
, 0 } , { 274 , - 1 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Routing/Error Metrics/Unit Delay"
) , TARGET_STRING ( "DSTATE" ) , "" , 0 , 0 , 2 , 0 , 4 , 0 , - 1 , 0 } , {
275 , 0 , TARGET_STRING (
 "SparkEV/Longitudinal Driver/Longitudinal Driver/Longitudinal Driver/Control/Predictive/Cont LPF/Integrator1"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 , 1 , - 1
, 0 } , { 276 , - 1 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/INPUT_10_1_1"
) , TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 2 , 0 , 1 , 0 , - 1 , 0 } , {
277 , - 1 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/INPUT_11_1_1"
) , TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 2 , 0 , 1 , 0 , - 1 , 0 } , {
278 , - 1 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/INPUT_1_1_1"
) , TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 2 , 0 , 1 , 0 , - 1 , 0 } , {
279 , - 1 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/INPUT_2_1_1"
) , TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 2 , 0 , 1 , 0 , - 1 , 0 } , {
280 , - 1 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/INPUT_3_1_1"
) , TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 2 , 0 , 1 , 0 , - 1 , 0 } , {
281 , - 1 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/INPUT_4_1_1"
) , TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 2 , 0 , 1 , 0 , - 1 , 0 } , {
282 , - 1 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/INPUT_5_1_1"
) , TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 2 , 0 , 1 , 0 , - 1 , 0 } , {
283 , - 1 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/INPUT_6_1_1"
) , TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 2 , 0 , 1 , 0 , - 1 , 0 } , {
284 , - 1 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/INPUT_7_1_1"
) , TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 1 , 0 , 1 , 0 , - 1 , 0 } , {
285 , - 1 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/INPUT_7_1_1"
) , TARGET_STRING ( "FirstOutput" ) , "" , 0 , 0 , 1 , 0 , 1 , 0 , - 1 , 0 }
, { 286 , 6 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/INPUT_7_1_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Power_Acc.Simulink_PS_Converter.outputFiltered_995783724_0"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Power Acc/Simulink-PS\nConverter"
) , 0 , 0 , 1 , 0 , 1 , 1 , - 1 , 0 } , { 287 , - 1 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/INPUT_8_1_1"
) , TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 2 , 0 , 1 , 0 , - 1 , 0 } , {
288 , - 1 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/INPUT_9_1_1"
) , TARGET_STRING ( "Discrete" ) , "" , 0 , 0 , 2 , 0 , 1 , 0 , - 1 , 0 } , {
289 , 7 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.tire_inertia.w"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 290 , 8 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Inertia.w"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Inertia"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 291 , 9 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.tire_inertia.w"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 292 , 10 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.tire_inertia.w"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 293 , 11 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Inertia1.w"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Inertia1"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 294 , 12 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.tire_inertia.w"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 295 , 13 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Longitudinal_Vehicle_Body.v"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/Longitudinal Vehicle Body"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 296 , 14 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd2.Ideal_Rotational_Motion_Sensor.phi"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd2/Ideal Rotational Motion Sensor"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 297 , 15 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd3.Ideal_Rotational_Motion_Sensor.phi"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd3/Ideal Rotational Motion Sensor"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 298 , 16 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd4.Ideal_Rotational_Motion_Sensor.phi"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd4/Ideal Rotational Motion Sensor"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 299 , 17 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpdFL.Ideal_Rotational_Motion_Sensor.phi"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpdFL/Ideal Rotational Motion Sensor"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 300 , 18 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.Two_Actuator_AWD.Spd1.Ideal_Rotational_Motion_Sensor.phi"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/DriveshftTrq Routing/Two Actuator AWD/Spd1/Ideal Rotational Motion Sensor"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 301 , 19 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.Two_Actuator_AWD.Spd2.Ideal_Rotational_Motion_Sensor.phi"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/DriveshftTrq Routing/Two Actuator AWD/Spd2/Ideal Rotational Motion Sensor"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 302 , 20 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Spd_Sensor.Ideal_Rotational_Motion_Sensor.phi"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Spd Sensor/Ideal Rotational Motion Sensor"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 303 , 21 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Spd_Sensor1.Ideal_Rotational_Motion_Sensor.phi"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Spd Sensor1/Ideal Rotational Motion Sensor"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 304 , 22 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.cell_temperature"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 305 , 23 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.charge"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 306 , 24 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.num_cycles"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 307 , 25 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Capacitor.vc"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 308 , 26 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Capacitor1.vc"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor1"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 309 , 27 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive.torque_ref"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 310 , 28 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive.torque_ref"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 311 , 29 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.tire_inertia.t"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 312 , 30 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.tire_road_interaction.f_tread"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 313 , 31 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_left.t_S"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 314 , 32 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.tire_inertia.t"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 315 , 33 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.tire_road_interaction.f_tread"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 316 , 34 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_left.t_P"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 317 , 35 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.tire_inertia.t"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 318 , 36 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.tire_road_interaction.f_tread"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 319 , 37 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_left.t_S"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 320 , 38 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.tire_inertia.t"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 321 , 39 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.tire_road_interaction.f_tread"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 322 , 40 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_left.t_P"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 323 , 41 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.FzF"
) , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 324 , 42 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.FzR"
) , TARGET_STRING (
"SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 325 , 43 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Longitudinal_Vehicle_Body.f"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/Longitudinal Vehicle Body"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 326 , 44 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.S"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 327 , 45 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.tire_road_interaction.f_hub"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 328 , 46 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.resistance.fH"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 329 , 47 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.tire_road_interaction.f_hub"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 330 , 48 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.resistance.fH"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 331 , 49 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.tire_road_interaction.f_hub"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 332 , 50 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.resistance.fH"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 333 , 51 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.tire_road_interaction.f_hub"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 334 , 52 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.S"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 335 , 53 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.S"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 336 , 54 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.S"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 337 , 55 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Inertia.t"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Inertia"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 338 , 56 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive.torque_elec"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 339 , 57 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_left.t_C"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 340 , 58 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Inertia1.t"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Inertia1"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 341 , 59 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive.torque_elec"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 342 , 60 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_left.t_C"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 343 , 61 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.i"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 344 , 62 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.xVint"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 345 , 63 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Capacitor.i"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 346 , 64 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.power_dissipated"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 347 , 65 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.stateOfCharge"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 348 , 66 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.xR0"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 349 , 67 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.xqnom"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 350 , 68 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Capacitor1.i"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor1"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 351 , 69 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Elec_Sensor.Current_Sensor2.I"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Elec Sensor/Current Sensor2"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 352 , 70 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Elec_Sensor.Current_Sensor2.I"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Elec Sensor/Current Sensor2"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 353 , 71 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive.torqueLimit"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 354 , 72 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver\nConfiguration/Solver\nConfiguration/EVAL_KEY/STATE_1"
) , TARGET_STRING (
 "SparkEV.Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive.torqueLimit"
) , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
) , 0 , 0 , 8 , 0 , 1 , 1 , - 1 , 0 } , { 355 , 1 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Valve/Integrator1"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 1 , 1 , - 1
, 0 } , { 356 , 5 , TARGET_STRING (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Sensor VI/Transfer Fcn5"
) , TARGET_STRING ( "" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 , 1 , - 1
, 0 } , { 0 , - 1 , ( NULL ) , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 , 0 ,
- 1 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { 7 , 8 , 9 , 10 , 11
, 5 , 6 , 12 , 12 , 0 , 11 , 9 , 0 , 2 , 1 , 3 , 5 , 4 , 7 , 8 , 3 , 6 , 10 ,
4 , 1 , 2 } ; static const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , (
NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals
rtRootOutputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ;
static const rtwCAPI_ModelParameters rtModelParameters [ ] = { { 357 ,
TARGET_STRING ( "_CtrlVcuEvChrgLmtBpt2f2EvVCU_sldd_" ) , 0 , 9 , 0 } , { 358
, TARGET_STRING ( "_CtrlVcuEvRegenBrkCutOff2f2EvVCU_sldd_" ) , 0 , 6 , 0 } ,
{ 359 , TARGET_STRING ( "_CtrlVcuEvRegenBrkSpdBpt2f2EvVCU_sldd_" ) , 0 , 6 ,
0 } , { 360 , TARGET_STRING ( "_CtrlVcuEvSocBpt2f2EvVCU_sldd_" ) , 0 , 9 , 0
} , { 361 , TARGET_STRING ( "_DriverAeroRes2f2Driver_sldd_" ) , 0 , 1 , 0 } ,
{ 362 , TARGET_STRING ( "_DriverDrivelineRes2f2Driver_sldd_" ) , 0 , 1 , 0 }
, { 363 , TARGET_STRING ( "_DriverInitialGear2f2Driver_sldd_" ) , 0 , 1 , 0 }
, { 364 , TARGET_STRING ( "_DriverPreviewDist2f2Driver_sldd_" ) , 0 , 1 , 0 }
, { 365 , TARGET_STRING ( "_DriverRollRes2f2Driver_sldd_" ) , 0 , 1 , 0 } , {
366 , TARGET_STRING ( "_DriverShiftTime2f2Driver_sldd_" ) , 0 , 1 , 0 } , {
367 , TARGET_STRING ( "_DriverTimeConst2f2Driver_sldd_" ) , 0 , 1 , 0 } , {
368 , TARGET_STRING ( "_DriverTractiveForce2f2Driver_sldd_" ) , 0 , 1 , 0 } ,
{ 369 , TARGET_STRING ( "_EnvAirTemp2f2Environment_sldd_" ) , 0 , 1 , 0 } , {
370 , TARGET_STRING ( "_EnvGrvty2f2Environment_sldd_" ) , 0 , 1 , 0 } , { 371
, TARGET_STRING ( "_EnvNomFrictionScaling2f2Environment_sldd_" ) , 0 , 1 , 0
} , { 372 , TARGET_STRING ( "_EnvNominalGrade2f2Environment_sldd_" ) , 0 , 1
, 0 } , { 373 , TARGET_STRING ( "_EnvWindVelX2f2Environment_sldd_" ) , 0 , 1
, 0 } , { 374 , TARGET_STRING ( "_EnvWindVelY2f2Environment_sldd_" ) , 0 , 1
, 0 } , { 375 , TARGET_STRING ( "_EnvWindVelZ2f2Environment_sldd_" ) , 0 , 1
, 0 } , { 376 , TARGET_STRING ( "_PlntBattSocInit2f2BatteryDCDC_sldd_" ) , 0
, 1 , 0 } , { 377 , TARGET_STRING (
"_PlntBattTempInitDegC2f2BatteryDCDC_sldd_" ) , 0 , 1 , 0 } , { 378 ,
TARGET_STRING ( "_PlntBrkFrntBias2f2PassVeh_sldd_" ) , 0 , 1 , 0 } , { 379 ,
TARGET_STRING ( "_PlntBrkKinFricCffFrnt2f2PassVeh_sldd_" ) , 0 , 1 , 0 } , {
380 , TARGET_STRING ( "_PlntBrkNumPadsFrnt2f2PassVeh_sldd_" ) , 0 , 1 , 0 } ,
{ 381 , TARGET_STRING ( "_PlntBrkPadMeanRadiusFrnt2f2PassVeh_sldd_" ) , 0 , 1
, 0 } , { 382 , TARGET_STRING ( "_PlntBrkPrsFctr2f2PassVeh_sldd_" ) , 0 , 1 ,
0 } , { 383 , TARGET_STRING ( "_PlntBrkRearBias2f2PassVeh_sldd_" ) , 0 , 1 ,
0 } , { 384 , TARGET_STRING ( "_PlntBrkWc2f2PassVeh_sldd_" ) , 0 , 1 , 0 } ,
{ 385 , TARGET_STRING ( "_PlntDCDCVoltInit2f2BatteryDCDC_sldd_" ) , 0 , 1 , 0
} , { 386 , TARGET_STRING ( "_PlntDiffrntl2Eff2f2Drivetrain_sldd_" ) , 0 , 1
, 0 } , { 387 , TARGET_STRING ( "_PlntDiffrntl2Ratio2f2Drivetrain_sldd_" ) ,
0 , 1 , 0 } , { 388 , TARGET_STRING ( "_PlntDiffrntlEff2f2Drivetrain_sldd_" )
, 0 , 1 , 0 } , { 389 , TARGET_STRING (
"_PlntDiffrntlRatio2f2Drivetrain_sldd_" ) , 0 , 1 , 0 } , { 390 ,
TARGET_STRING ( "_PlntEM1EffTbl2f2ElectricMachine1_sldd_" ) , 0 , 10 , 0 } ,
{ 391 , TARGET_STRING ( "_PlntEM1Spd2f2ElectricMachine1_sldd_" ) , 0 , 11 , 0
} , { 392 , TARGET_STRING ( "_PlntEM1TrqEff2f2ElectricMachine1_sldd_" ) , 0 ,
9 , 0 } , { 393 , TARGET_STRING ( "_PlntEM2EffTbl2f2ElectricMachine2_sldd_" )
, 0 , 10 , 0 } , { 394 , TARGET_STRING (
"_PlntEM2Spd2f2ElectricMachine2_sldd_" ) , 0 , 11 , 0 } , { 395 ,
TARGET_STRING ( "_PlntEM2TrqEff2f2ElectricMachine2_sldd_" ) , 0 , 9 , 0 } , {
396 , TARGET_STRING ( "_PlntVehDstCGFrntAxl2f2PassVeh_sldd_" ) , 0 , 1 , 0 }
, { 397 , TARGET_STRING ( "_PlntVehDstCGRearAxl2f2PassVeh_sldd_" ) , 0 , 1 ,
0 } , { 398 , TARGET_STRING ( "_PlntVehMass2f2PassVeh_sldd_" ) , 0 , 1 , 0 }
, { 399 , TARGET_STRING ( "_PlntWhlLdRadius2f2PassVeh_sldd_" ) , 0 , 1 , 0 }
, { 400 , TARGET_STRING ( "_Spark_MaxTrq2f2SparkEM_sldd_" ) , 0 , 12 , 0 } ,
{ 401 , TARGET_STRING ( "_Spark_MaxTrq_Spd2f2SparkEM_sldd_" ) , 0 , 12 , 0 }
, { 0 , ( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & iowqpk3eub2 . hzjndpcd5s [ 0 ] , &
iowqpk3eub2 . hzjndpcd5s [ 0 ] , ( & iowqpk3eub2 . hzjndpcd5s [ 0 ] + 1 ) , (
& iowqpk3eub2 . hzjndpcd5s [ 0 ] + 2 ) , & iowqpk3eub2 . fjnu3gvsoe , &
iowqpk3eub2 . o4djdimsdm , & iowqpk3eub2 . k4zukswayf , & iowqpk3eub2 .
mytvvfcg1y , & iowqpk3eub2 . ivcelveswb , & iowqpk3eub2 . liyhqocsj3 [ 0 ] ,
& iowqpk3eub2 . pupxf42qyi [ 0 ] , & iowqpk3eub2 . c02ood1bjt , & iowqpk3eub2
. p0b3m4xtnw [ 0 ] , & iowqpk3eub2 . nz1eo0mhjt , & iowqpk3eub2 . pvdiosiz3s
, & iowqpk3eub2 . cyvi2yk4zm [ 0 ] , & iowqpk3eub2 . dttp424sgc , &
iowqpk3eub2 . hvofgrdmb4 [ 0 ] , & iowqpk3eub2 . ckogufqgce , & iowqpk3eub2 .
orjxb10cau , & iowqpk3eub2 . b02kbm44cq , & iowqpk3eub2 . btpqtt4ve2 , &
iowqpk3eub2 . ay4cfinsfw , & iowqpk3eub2 . dfmae2tshm , & iowqpk3eub2 .
ozcfs2wm5f , & iowqpk3eub2 . bqypj3eyiq [ 0 ] , & iowqpk3eub2 . g1n4ddzbcb ,
& iowqpk3eub2 . e1oqshled2 [ 0 ] , & iowqpk3eub2 . i0f0kaduop [ 0 ] , &
iowqpk3eub2 . oi1l1zfk0l , & iowqpk3eub2 . az43xb15iv , & iowqpk3eub2 .
iefandv1mx , & iowqpk3eub2 . jywmdz2pm0 , & iowqpk3eub2 . hpa0jnkmab , &
iowqpk3eub2 . cgjlckur0q , & iowqpk3eub2 . jpcr1f245w , & iowqpk3eub2 .
fhd2qe1xn4 [ 0 ] , & iowqpk3eub2 . hdpouphvxx [ 0 ] , & iowqpk3eub2 .
fygmwizxbe , & iowqpk3eub2 . hkfoqcrcaa , & iowqpk3eub2 . nk5i1tvfs4 , &
iowqpk3eub2 . if3ap21cin , & iowqpk3eub2 . iqd4x5zmdq , & iowqpk3eub2 .
gtc1bz3bpt , & iowqpk3eub2 . pjeugxnijx , & iowqpk3eub2 . khcqvoneta , &
iowqpk3eub2 . ffjzw3xpup , & iowqpk3eub2 . bbwodlczuz , & iowqpk3eub2 .
gk5c3nru3t , & iowqpk3eub2 . cfykfdt0uw , & iowqpk3eub2 . dxggtyvppm , &
iowqpk3eub2 . j5ydyic0d5 , & iowqpk3eub2 . kvtxbs1osx , & iowqpk3eub2 .
ll5kvzbeqe , & iowqpk3eub2 . fslb3e0kt4 , & iowqpk3eub2 . fjkq3v532f , &
iowqpk3eub2 . jtrhoigdxv , & iowqpk3eub2 . dtch5f4az1 , & iowqpk3eub2 .
fyv5hziyzu , & iowqpk3eub2 . jqbzi0b53m , & iowqpk3eub2 . hd5tn4m4oh , &
iowqpk3eub2 . ciy0n0fvf4 , & iowqpk3eub2 . hvrj3ku4rl , & iowqpk3eub2 .
or4x0ngped , & iowqpk3eub2 . o2cjlwehyr , & iowqpk3eub2 . m3s2vgesq4 , &
iowqpk3eub2 . niktayqu0g , & iowqpk3eub2 . gfa1pnn0i5 , & iowqpk3eub2 .
j4h3u5o2s0 , & iowqpk3eub2 . oqfbznbud3 , & iowqpk3eub2 . eycgm5czdn [ 0 ] ,
& iowqpk3eub2 . b25h3lrxlo [ 0 ] , & iowqpk3eub2 . ivqnpc0uok , & cz5yqt3r3xb
. metkb44aex , & cz5yqt3r3xb . ldpanoehpw , & cz5yqt3r3xb . iyzfufaeyj , &
iowqpk3eub2 . jfa1nbks1u , & iowqpk3eub2 . m41crq5gno , & iowqpk3eub2 .
jj4uuhdxay , & iowqpk3eub2 . fgkckqf33e , & iowqpk3eub2 . oxtftcyamo , &
iowqpk3eub2 . cvaoaiilfy , & iowqpk3eub2 . bol3toc3da , & iowqpk3eub2 .
dccuh1poqm , & iowqpk3eub2 . hcj2ikcjyk , & iowqpk3eub2 . bfwwnvikrt , &
iowqpk3eub2 . np15oib1kn , & iowqpk3eub2 . atfdsr0huc , & iowqpk3eub2 .
jlncf1nhxu , & iowqpk3eub2 . n1qbwalijw , & iowqpk3eub2 . jiym3rqvan , &
iowqpk3eub2 . ceqisvxe55 , & iowqpk3eub2 . axn1d2xjab [ 0 ] , & iowqpk3eub2 .
hiqbgqctfu , & iowqpk3eub2 . bwgdzgdu1v , & iowqpk3eub2 . dqh4oe22xa , &
iowqpk3eub2 . npj2crdbpe , & iowqpk3eub2 . b1ipo3flxd , & iowqpk3eub2 .
cb3kw2uoce [ 0 ] , & iowqpk3eub2 . fbcbuzgnbt [ 0 ] , & iowqpk3eub2 .
n2qyp3jaox [ 0 ] , & iowqpk3eub2 . ibos4vblha [ 0 ] , & iowqpk3eub2 .
guhcbwpvv2 [ 0 ] , & iowqpk3eub2 . brfljizvcb [ 0 ] , & iowqpk3eub2 .
cgvpcvur0e [ 0 ] , & iowqpk3eub2 . hk3t1uj3s1 [ 0 ] , & iowqpk3eub2 .
hlacplpmlq [ 0 ] , & iowqpk3eub2 . cbv0fng454 [ 0 ] , & iowqpk3eub2 .
fhodh2srma [ 0 ] , & iowqpk3eub2 . clajzw4qwk [ 0 ] , & iowqpk3eub2 .
jckfwcjotl [ 0 ] , & iowqpk3eub2 . k042txegzi [ 0 ] , & iowqpk3eub2 .
jbgpjywn3z [ 0 ] , & iowqpk3eub2 . m1nza5khum [ 0 ] , & iowqpk3eub2 .
fuob0ddam2h . motv0pybyv , & iowqpk3eub2 . puwtafzry1 , & iowqpk3eub2 .
dwnfs4t0ur . motv0pybyv , & iowqpk3eub2 . gcn3sxipyq , & iowqpk3eub2 .
eabfogqpnn [ 0 ] , & iowqpk3eub2 . b0ggdb4gbt [ 0 ] , & iowqpk3eub2 .
c5agzst0mq [ 0 ] , & iowqpk3eub2 . efiylruo1t , & iowqpk3eub2 . fuob0ddam2h .
motv0pybyv , & iowqpk3eub2 . dwnfs4t0ur . motv0pybyv , & iowqpk3eub2 .
ogs4ehkbam , & iowqpk3eub2 . ir1e3eamgb , & iowqpk3eub2 . puhbleyldk , &
iowqpk3eub2 . bvt0cxt3h4 , & iowqpk3eub2 . nkjka2mvua , & kjmvupbl2i .
Gain_Gain , & kjmvupbl2i . Gain1_Gain_b2x0xrdboa , & kjmvupbl2i .
GradeSource_CurrentSetting , & kjmvupbl2i . CompareToConstant_const , &
kjmvupbl2i . CompareToConstant1_const , & kjmvupbl2i .
CompareToConstant2_const , & kjmvupbl2i . CompareToConstant3_const , &
kjmvupbl2i . CompareToConstant4_const , & kjmvupbl2i . DeadZone_Start , &
kjmvupbl2i . DeadZone_End , & kjmvupbl2i . FirstOrderHold1_IniOut , &
kjmvupbl2i . FirstOrderHold1_ErrTol , & kjmvupbl2i . FirstOrderHold_IniOut ,
& kjmvupbl2i . FirstOrderHold_ErrTol , & kjmvupbl2i . mtokm_Gain , &
kjmvupbl2i . mtomi_Gain , & kjmvupbl2i . Integrator_IC_m2ei5srufe , &
kjmvupbl2i . Integrator1_IC_exhcff4x2k , & kjmvupbl2i . Integrator2_IC , &
kjmvupbl2i . Integrator3_IC , & kjmvupbl2i . Integrator4_IC , & kjmvupbl2i .
Saturation_UpperSat_petchupvyj , & kjmvupbl2i .
Saturation_LowerSat_deqaxwlb4p , & kjmvupbl2i .
Saturation1_UpperSat_jybwri54h2 , & kjmvupbl2i .
Saturation1_LowerSat_indvuhds5q , & kjmvupbl2i .
USEPAkwhUSgalequivalent_Value , & kjmvupbl2i . sperh_Value , & kjmvupbl2i .
wperkw_Value , & kjmvupbl2i . mto100Km_Gain , & kjmvupbl2i . mtomile_Gain , &
kjmvupbl2i . m3pergal_Gain , & kjmvupbl2i . m3toUSGal_Gain , & kjmvupbl2i .
Integrator_IC , & kjmvupbl2i . Integrator1_IC_b5h1v25iea , & kjmvupbl2i .
Saturation_UpperSat_ffmhckns0u , & kjmvupbl2i .
Saturation_LowerSat_git52jcjbr , & kjmvupbl2i . Saturation1_UpperSat , &
kjmvupbl2i . Saturation1_LowerSat , & kjmvupbl2i . Constant_Value_hmxpxo4t1j
, & kjmvupbl2i . Constant_Value_io2mkec4u1 , & kjmvupbl2i . Constant1_Value ,
& kjmvupbl2i . Constant2_Value , & kjmvupbl2i . Constant1_Value_m0radogykp [
0 ] , & kjmvupbl2i . Constant10_Value , & kjmvupbl2i . Constant11_Value , &
kjmvupbl2i . Constant12_Value , & kjmvupbl2i . Constant2_Value_cv5k10omis , &
kjmvupbl2i . Constant3_Value_hsmcqc2qzw , & kjmvupbl2i . Constant6_Value , &
kjmvupbl2i . Constant7_Value , & kjmvupbl2i . Constant8_Value , & kjmvupbl2i
. Constant9_Value , & kjmvupbl2i . DeadZone2_Start , & kjmvupbl2i .
DeadZone2_End , & kjmvupbl2i . DeadZone3_Start , & kjmvupbl2i . DeadZone3_End
, & kjmvupbl2i . Integrator2_IC_fjcqqry33i , & kjmvupbl2i .
UnitDelay_InitialCondition [ 0 ] , & kjmvupbl2i . Constant3_Value , &
kjmvupbl2i . ClsdLpFuelMult_Value , & kjmvupbl2i . EngSpd_Value , &
kjmvupbl2i . EngTrq_Value , & kjmvupbl2i . FuelVolFlw_Value , & kjmvupbl2i .
TPCO_Value , & kjmvupbl2i . TPCO2_Value , & kjmvupbl2i . TPHC_Value , &
kjmvupbl2i . TPNOx_Value , & kjmvupbl2i . SignalHold_IC , & kjmvupbl2i .
Constant_Value_i0lrc5dd0p , & kjmvupbl2i . u1_UpperSat , & kjmvupbl2i .
u1_LowerSat , & kjmvupbl2i . Saturation_UpperSat , & kjmvupbl2i .
Saturation_LowerSat , & kjmvupbl2i . Integrator1_IC , & kjmvupbl2i .
SignalHold_IC_bl0xhwyuht , & kjmvupbl2i . Constant_Value_lmvdjicp50 , &
kjmvupbl2i . u0_UpperSat , & kjmvupbl2i . u0_LowerSat , & kjmvupbl2i .
Saturation_UpperSat_ncjkk1jucd , & kjmvupbl2i .
Saturation_LowerSat_g5xnm5rrtb , & kjmvupbl2i . Constant_Value_gn4owpvnhh , &
kjmvupbl2i . Constant1_Value_krev4j2l44 , & kjmvupbl2i . repeat_Value , &
kjmvupbl2i . tFinal_Value , & kjmvupbl2i . HitCrossing_Offset , & kjmvupbl2i
. uDLookupTable_tableData [ 0 ] , & kjmvupbl2i . uDLookupTable_bp01Data [ 0 ]
, & kjmvupbl2i . Switch_Threshold , & kjmvupbl2i . DeadZone_Start_pdp2e4smtt
, & kjmvupbl2i . DeadZone_End_h4yw2iuj1m , & kjmvupbl2i . Constant_Value , &
kjmvupbl2i . Constant_Value_agm4xpnhd5 , & kjmvupbl2i .
Integrator1_IC_aqlk4zxkuo , & kjmvupbl2i . Constant_Value_cjhlneuw3m , &
kjmvupbl2i . Gain1_Gain , & kjmvupbl2i . Constant_Value_b34nxk3dgo , &
kjmvupbl2i . Constant1_Value_pax3psgy31 , & kjmvupbl2i .
Constant2_Value_by3qj3o4r5 , & kjmvupbl2i . Constant3_Value_le3cdgojsj , &
kjmvupbl2i . Constant_Value_dwrtimrkpk , & kjmvupbl2i .
Constant1_Value_fmqelelhtu , & kjmvupbl2i . Constant2_Value_co5abyzjen , &
kjmvupbl2i . Constant3_Value_naifcpvkcj , & kjmvupbl2i .
Constant_Value_dcic5o3pg3 , & kjmvupbl2i . Constant1_Value_dnfmb11brh , &
kjmvupbl2i . Constant2_Value_hik2ab434v , & kjmvupbl2i .
Constant3_Value_jo3m2g12mp , & kjmvupbl2i . Constant_Value_mddw5eobxq , &
kjmvupbl2i . Constant1_Value_cfyr5n1bli , & kjmvupbl2i .
Constant2_Value_mfce3nzwnp , & kjmvupbl2i . Constant3_Value_jf3fbvya1l , &
kjmvupbl2i . Constant_Value_onlw3pqasr , & kjmvupbl2i .
Constant1_Value_mromuqkuuw , & kjmvupbl2i . Constant2_Value_ozpwuu3brx , &
kjmvupbl2i . Constant3_Value_obgnptdz2h , & kjmvupbl2i .
Constant_Value_ibzc4hj1ld , & kjmvupbl2i . Constant1_Value_gtiaijeqmv , &
kjmvupbl2i . Constant2_Value_epzlk2keku , & kjmvupbl2i .
Constant3_Value_kcpbrp4amn , & kjmvupbl2i . Constant_Value_ld5ybk2byx , &
kjmvupbl2i . Constant1_Value_iiav0d51jb , & kjmvupbl2i .
Constant2_Value_fblzzrbbio , & kjmvupbl2i . Constant3_Value_nfapyqt2rs , &
kjmvupbl2i . Constant_Value_os1jn220hr , & kjmvupbl2i .
Constant1_Value_h1skcdg22w , & kjmvupbl2i . Constant2_Value_m4pyuelgtu , &
kjmvupbl2i . Constant3_Value_f11k3loabn , & kjmvupbl2i .
Saturation_UpperSat_l3n5201rqk , & kjmvupbl2i .
Saturation_LowerSat_daadgw5azp , & kjmvupbl2i . TransferFcn5_A , & kjmvupbl2i
. TransferFcn5_C , & kjmvupbl2i . Constant_Value_eh1gybqgws , & kjmvupbl2i .
RTP_52118A8B_vc_Value , & kjmvupbl2i . ax_Value , & kjmvupbl2i . ay_Value , &
kjmvupbl2i . az_Value , & kjmvupbl2i . r_Value , & chmgkez0tpf . lywux4fr45 ,
& chmgkez0tpf . igaknrnpbi , & chmgkez0tpf . fnlgzvne04 , & chmgkez0tpf .
blfalouxud , & chmgkez0tpf . icfrc3vdyk , & chmgkez0tpf . bhmvyo1hjl , &
chmgkez0tpf . iarnkoswlx , & chmgkez0tpf . e3mnx1zztt , & cz5yqt3r3xb .
ovftuesk53 [ 0 ] , & chmgkez0tpf . h3jcgsxl3g , & cz5yqt3r3xb . acangtzbxh [
0 ] , & cz5yqt3r3xb . pz2p5tww5r [ 0 ] , & cz5yqt3r3xb . mkt5abmauk [ 0 ] , &
cz5yqt3r3xb . lfrgrevnct [ 0 ] , & cz5yqt3r3xb . cz5mx3nggl [ 0 ] , &
cz5yqt3r3xb . m3vfpsg3ir [ 0 ] , & cz5yqt3r3xb . cxsxj110xc [ 0 ] , &
cz5yqt3r3xb . cxyhghs0r4 [ 0 ] , & cz5yqt3r3xb . lnpmbzyfub , & cz5yqt3r3xb .
erhws3aqax , & chmgkez0tpf . o44tjxyaqi , & cz5yqt3r3xb . jdazc15ain [ 0 ] ,
& cz5yqt3r3xb . gcbnlbndyh [ 0 ] , & chmgkez0tpf . ewdrbcmz1i [ 0 ] , &
chmgkez0tpf . ewdrbcmz1i [ 1 ] , & chmgkez0tpf . ewdrbcmz1i [ 2 ] , &
chmgkez0tpf . ewdrbcmz1i [ 3 ] , & chmgkez0tpf . ewdrbcmz1i [ 4 ] , &
chmgkez0tpf . ewdrbcmz1i [ 5 ] , & chmgkez0tpf . ewdrbcmz1i [ 6 ] , &
chmgkez0tpf . ewdrbcmz1i [ 7 ] , & chmgkez0tpf . ewdrbcmz1i [ 8 ] , &
chmgkez0tpf . ewdrbcmz1i [ 9 ] , & chmgkez0tpf . ewdrbcmz1i [ 10 ] , &
chmgkez0tpf . ewdrbcmz1i [ 11 ] , & chmgkez0tpf . ewdrbcmz1i [ 12 ] , &
chmgkez0tpf . ewdrbcmz1i [ 13 ] , & chmgkez0tpf . ewdrbcmz1i [ 14 ] , &
chmgkez0tpf . ewdrbcmz1i [ 15 ] , & chmgkez0tpf . ewdrbcmz1i [ 16 ] , &
chmgkez0tpf . ewdrbcmz1i [ 17 ] , & chmgkez0tpf . ewdrbcmz1i [ 18 ] , &
chmgkez0tpf . ewdrbcmz1i [ 19 ] , & chmgkez0tpf . ewdrbcmz1i [ 20 ] , &
chmgkez0tpf . ewdrbcmz1i [ 21 ] , & chmgkez0tpf . ewdrbcmz1i [ 22 ] , &
chmgkez0tpf . ewdrbcmz1i [ 23 ] , & chmgkez0tpf . ewdrbcmz1i [ 24 ] , &
chmgkez0tpf . ewdrbcmz1i [ 25 ] , & chmgkez0tpf . ewdrbcmz1i [ 26 ] , &
chmgkez0tpf . ewdrbcmz1i [ 27 ] , & chmgkez0tpf . ewdrbcmz1i [ 28 ] , &
chmgkez0tpf . ewdrbcmz1i [ 29 ] , & chmgkez0tpf . ewdrbcmz1i [ 30 ] , &
chmgkez0tpf . ewdrbcmz1i [ 31 ] , & chmgkez0tpf . ewdrbcmz1i [ 32 ] , &
chmgkez0tpf . ewdrbcmz1i [ 33 ] , & chmgkez0tpf . ewdrbcmz1i [ 34 ] , &
chmgkez0tpf . ewdrbcmz1i [ 35 ] , & chmgkez0tpf . ewdrbcmz1i [ 36 ] , &
chmgkez0tpf . ewdrbcmz1i [ 37 ] , & chmgkez0tpf . ewdrbcmz1i [ 38 ] , &
chmgkez0tpf . ewdrbcmz1i [ 39 ] , & chmgkez0tpf . ewdrbcmz1i [ 40 ] , &
chmgkez0tpf . ewdrbcmz1i [ 41 ] , & chmgkez0tpf . ewdrbcmz1i [ 42 ] , &
chmgkez0tpf . ewdrbcmz1i [ 43 ] , & chmgkez0tpf . ewdrbcmz1i [ 44 ] , &
chmgkez0tpf . ewdrbcmz1i [ 45 ] , & chmgkez0tpf . ewdrbcmz1i [ 46 ] , &
chmgkez0tpf . ewdrbcmz1i [ 47 ] , & chmgkez0tpf . ewdrbcmz1i [ 48 ] , &
chmgkez0tpf . ewdrbcmz1i [ 49 ] , & chmgkez0tpf . ewdrbcmz1i [ 50 ] , &
chmgkez0tpf . ewdrbcmz1i [ 51 ] , & chmgkez0tpf . ewdrbcmz1i [ 52 ] , &
chmgkez0tpf . ewdrbcmz1i [ 53 ] , & chmgkez0tpf . ewdrbcmz1i [ 54 ] , &
chmgkez0tpf . ewdrbcmz1i [ 55 ] , & chmgkez0tpf . ewdrbcmz1i [ 56 ] , &
chmgkez0tpf . ewdrbcmz1i [ 57 ] , & chmgkez0tpf . ewdrbcmz1i [ 58 ] , &
chmgkez0tpf . ewdrbcmz1i [ 59 ] , & chmgkez0tpf . ewdrbcmz1i [ 60 ] , &
chmgkez0tpf . ewdrbcmz1i [ 61 ] , & chmgkez0tpf . ewdrbcmz1i [ 62 ] , &
chmgkez0tpf . ewdrbcmz1i [ 63 ] , & chmgkez0tpf . ewdrbcmz1i [ 64 ] , &
chmgkez0tpf . ewdrbcmz1i [ 65 ] , & chmgkez0tpf . nbhyf45pww [ 0 ] , &
chmgkez0tpf . gs5cem5nqo , rtP__CtrlVcuEvChrgLmtBpt2f2EvVCU_sldd_ ,
rtP__CtrlVcuEvRegenBrkCutOff2f2EvVCU_sldd_ ,
rtP__CtrlVcuEvRegenBrkSpdBpt2f2EvVCU_sldd_ ,
rtP__CtrlVcuEvSocBpt2f2EvVCU_sldd_ , & rtP__DriverAeroRes2f2Driver_sldd_ , &
rtP__DriverDrivelineRes2f2Driver_sldd_ , &
rtP__DriverInitialGear2f2Driver_sldd_ , &
rtP__DriverPreviewDist2f2Driver_sldd_ , & rtP__DriverRollRes2f2Driver_sldd_ ,
& rtP__DriverShiftTime2f2Driver_sldd_ , & rtP__DriverTimeConst2f2Driver_sldd_
, & rtP__DriverTractiveForce2f2Driver_sldd_ , &
rtP__EnvAirTemp2f2Environment_sldd_ , & rtP__EnvGrvty2f2Environment_sldd_ , &
rtP__EnvNomFrictionScaling2f2Environment_sldd_ , &
rtP__EnvNominalGrade2f2Environment_sldd_ , &
rtP__EnvWindVelX2f2Environment_sldd_ , & rtP__EnvWindVelY2f2Environment_sldd_
, & rtP__EnvWindVelZ2f2Environment_sldd_ , &
rtP__PlntBattSocInit2f2BatteryDCDC_sldd_ , &
rtP__PlntBattTempInitDegC2f2BatteryDCDC_sldd_ , &
rtP__PlntBrkFrntBias2f2PassVeh_sldd_ , &
rtP__PlntBrkKinFricCffFrnt2f2PassVeh_sldd_ , &
rtP__PlntBrkNumPadsFrnt2f2PassVeh_sldd_ , &
rtP__PlntBrkPadMeanRadiusFrnt2f2PassVeh_sldd_ , &
rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ , & rtP__PlntBrkRearBias2f2PassVeh_sldd_
, & rtP__PlntBrkWc2f2PassVeh_sldd_ , &
rtP__PlntDCDCVoltInit2f2BatteryDCDC_sldd_ , &
rtP__PlntDiffrntl2Eff2f2Drivetrain_sldd_ , &
rtP__PlntDiffrntl2Ratio2f2Drivetrain_sldd_ , &
rtP__PlntDiffrntlEff2f2Drivetrain_sldd_ , &
rtP__PlntDiffrntlRatio2f2Drivetrain_sldd_ ,
rtP__PlntEM1EffTbl2f2ElectricMachine1_sldd_ ,
rtP__PlntEM1Spd2f2ElectricMachine1_sldd_ ,
rtP__PlntEM1TrqEff2f2ElectricMachine1_sldd_ ,
rtP__PlntEM2EffTbl2f2ElectricMachine2_sldd_ ,
rtP__PlntEM2Spd2f2ElectricMachine2_sldd_ ,
rtP__PlntEM2TrqEff2f2ElectricMachine2_sldd_ , &
rtP__PlntVehDstCGFrntAxl2f2PassVeh_sldd_ , &
rtP__PlntVehDstCGRearAxl2f2PassVeh_sldd_ , & rtP__PlntVehMass2f2PassVeh_sldd_
, & rtP__PlntWhlLdRadius2f2PassVeh_sldd_ , rtP__Spark_MaxTrq2f2SparkEM_sldd_
, rtP__Spark_MaxTrq_Spd2f2SparkEM_sldd_ , } ; static int32_T *
rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , ( uint8_T )
SS_BOOLEAN , 0 , 0 , 0 } , { "unsigned int" , "uint32_T" , 0 , 0 , sizeof (
uint32_T ) , ( uint8_T ) SS_UINT32 , 0 , 0 , 0 } , { "unsigned char" ,
"uint8_T" , 0 , 0 , sizeof ( uint8_T ) , ( uint8_T ) SS_UINT8 , 0 , 0 , 0 } }
;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 12 , 2 , 0 } , { rtwCAPI_VECTOR , 14 , 2 , 0 } , {
rtwCAPI_VECTOR , 2 , 2 , 0 } , { rtwCAPI_VECTOR , 16 , 2 , 0 } , {
rtwCAPI_MATRIX_COL_MAJOR , 18 , 2 , 0 } , { rtwCAPI_VECTOR , 20 , 2 , 0 } , {
rtwCAPI_VECTOR , 22 , 2 , 0 } } ; static const uint_T rtDimensionArray [ ] =
{ 3 , 1 , 1 , 1 , 2 , 1 , 4 , 1 , 28 , 1 , 84 , 1 , 1 , 2 , 1370 , 1 , 1 , 11
, 14 , 11 , 1 , 14 , 1 , 29 } ; static const real_T rtcapiStoredFloats [ ] =
{ 0.0 , 1.0 , 0.1 , 0.01 , 0.5 } ; static const rtwCAPI_FixPtMap rtFixPtMap [
] = { { ( NULL ) , ( NULL ) , rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0
} , } ; static const rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const
void * ) & rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [
1 ] , ( int8_T ) 1 , ( uint8_T ) 0 } , { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , (
int8_T ) 0 , ( uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 2 ]
, ( const void * ) & rtcapiStoredFloats [ 0 ] , ( int8_T ) 3 , ( uint8_T ) 0
} , { ( NULL ) , ( NULL ) , 5 , 0 } , { ( const void * ) & rtcapiStoredFloats
[ 3 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , ( int8_T ) 2 , (
uint8_T ) 0 } , { ( const void * ) & rtcapiStoredFloats [ 4 ] , ( const void
* ) & rtcapiStoredFloats [ 0 ] , ( int8_T ) 4 , ( uint8_T ) 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 129 ,
rtRootInputs , 0 , rtRootOutputs , 0 } , { rtBlockParameters , 137 ,
rtModelParameters , 45 } , { rtBlockStates , 91 } , { rtDataTypeMap ,
rtDimensionMap , rtFixPtMap , rtElementMap , rtSampleTimeMap ,
rtDimensionArray } , "float" , { 1248598894U , 4235261646U , 2211789845U ,
1470293678U } , ( NULL ) , 0 , ( boolean_T ) 0 , rt_LoggedStateIdxList } ;
const rtwCAPI_ModelMappingStaticInfo * SparkEV_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void SparkEV_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( ( *
rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( *
rt_dataMapInfoPtr ) . childMMI ) ; rtwCAPI_SetChildMMIArrayLen ( ( *
rt_dataMapInfoPtr ) . mmi , 3 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void SparkEV_host_InitializeDataMapInfo ( SparkEV_host_DataMapInfo_T *
dataMap , const char * path ) { rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ;
rtwCAPI_SetStaticMap ( dataMap -> mmi , & mmiStatic ) ;
rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ; rtwCAPI_SetPath
( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap -> mmi , ( NULL ) )
; dataMap -> childMMI [ 0 ] = & ( dataMap -> child0 . mmi ) ;
OpenLoopBraking_host_InitializeDataMapInfo ( & ( dataMap -> child0 ) ,
"SparkEV/Controllers/Brake Control Unit (BCU)/Open Loop Braking" ) ; dataMap
-> childMMI [ 1 ] = & ( dataMap -> child1 . mmi ) ;
DriverPassThrough_host_InitializeDataMapInfo ( & ( dataMap -> child1 ) ,
"SparkEV/Controllers/Transmission Control Unit (TCU)/Driver Pass Through" ) ;
dataMap -> childMMI [ 2 ] = & ( dataMap -> child2 . mmi ) ;
EvPowertrainController2EM_host_InitializeDataMapInfo ( & ( dataMap -> child2
) , "SparkEV/Controllers/Vehicle Control Unit (VCU)/EV 2EM" ) ;
rtwCAPI_SetChildMMIArray ( dataMap -> mmi , dataMap -> childMMI ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 3 ) ; }
#ifdef __cplusplus
}
#endif
#endif
