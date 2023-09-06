#include "ext_types.h"
static DataTypeInfo rtDataTypeInfoTable [ ] = { { "real_T" , 0 , 8 } , {
"real32_T" , 1 , 4 } , { "int8_T" , 2 , 1 } , { "uint8_T" , 3 , 1 } , {
"int16_T" , 4 , 2 } , { "uint16_T" , 5 , 2 } , { "int32_T" , 6 , 4 } , {
"uint32_T" , 7 , 4 } , { "boolean_T" , 8 , 1 } , { "fcn_call_T" , 9 , 0 } , {
"int_T" , 10 , 4 } , { "pointer_T" , 11 , 8 } , { "action_T" , 12 , 8 } , {
"timer_uint32_pair_T" , 13 , 8 } , { "physical_connection" , 14 , 8 } , {
"int64_T" , 15 , 8 } , { "uint64_T" , 16 , 8 } , { "j2diisom34j" , 17 , 160 }
, { "am5nrfreizz" , 18 , 152 } , { "oaq0dqotmrc" , 19 , 11648 } , {
"struct_AFnjoI7EtZZSooCsoe6EE" , 20 , 3112 } , { "uint64_T" , 21 , 8 } , {
"int64_T" , 22 , 8 } , { "uint_T" , 23 , 32 } , { "char_T" , 24 , 8 } , {
"uchar_T" , 25 , 8 } , { "time_T" , 26 , 8 } } ; static uint_T
rtDataTypeSizes [ ] = { sizeof ( real_T ) , sizeof ( real32_T ) , sizeof (
int8_T ) , sizeof ( uint8_T ) , sizeof ( int16_T ) , sizeof ( uint16_T ) ,
sizeof ( int32_T ) , sizeof ( uint32_T ) , sizeof ( boolean_T ) , sizeof (
fcn_call_T ) , sizeof ( int_T ) , sizeof ( pointer_T ) , sizeof ( action_T )
, 2 * sizeof ( uint32_T ) , sizeof ( int32_T ) , sizeof ( int64_T ) , sizeof
( uint64_T ) , sizeof ( j2diisom34j ) , sizeof ( am5nrfreizz ) , sizeof (
oaq0dqotmrc ) , sizeof ( struct_AFnjoI7EtZZSooCsoe6EE ) , sizeof ( uint64_T )
, sizeof ( int64_T ) , sizeof ( uint_T ) , sizeof ( char_T ) , sizeof (
uchar_T ) , sizeof ( time_T ) } ; static const char_T * rtDataTypeNames [ ] =
{ "real_T" , "real32_T" , "int8_T" , "uint8_T" , "int16_T" , "uint16_T" ,
"int32_T" , "uint32_T" , "boolean_T" , "fcn_call_T" , "int_T" , "pointer_T" ,
"action_T" , "timer_uint32_pair_T" , "physical_connection" , "int64_T" ,
"uint64_T" , "j2diisom34j" , "am5nrfreizz" , "oaq0dqotmrc" ,
"struct_AFnjoI7EtZZSooCsoe6EE" , "uint64_T" , "int64_T" , "uint_T" , "char_T"
, "uchar_T" , "time_T" } ; static DataTypeTransition rtBTransitions [ ] = { {
( char_T * ) ( & iowqpk3eub2 . atfdsr0huc ) , 0 , 0 , 294 } , { ( char_T * )
( & iowqpk3eub2 . jtrhoigdxv ) , 8 , 0 , 7 } , { ( char_T * ) ( & iowqpk3eub2
. dwnfs4t0ur . motv0pybyv ) , 0 , 0 , 1 } , { ( char_T * ) ( & iowqpk3eub2 .
fuob0ddam2h . motv0pybyv ) , 0 , 0 , 1 } , { ( char_T * ) ( & cz5yqt3r3xb .
mkt5abmauk [ 0 ] ) , 0 , 0 , 73 } , { ( char_T * ) ( & cz5yqt3r3xb .
lnkfufvfoi ) , 11 , 0 , 43 } , { ( char_T * ) ( & cz5yqt3r3xb . hndyq1p4da )
, 6 , 0 , 1 } , { ( char_T * ) ( & cz5yqt3r3xb . mhe3tr5m1h ) , 7 , 0 , 2 } ,
{ ( char_T * ) ( & cz5yqt3r3xb . dq4uzmtffx [ 0 ] ) , 10 , 0 , 23 } , { (
char_T * ) ( & cz5yqt3r3xb . eez5eb4v4d ) , 6 , 0 , 1 } , { ( char_T * ) ( &
cz5yqt3r3xb . johw44ce4i ) , 2 , 0 , 19 } , { ( char_T * ) ( & cz5yqt3r3xb .
ldpanoehpw ) , 3 , 0 , 2 } , { ( char_T * ) ( & cz5yqt3r3xb . ondrgrykbz ) ,
8 , 0 , 4 } , { ( char_T * ) ( & cz5yqt3r3xb . lofhsz2swn ) , 17 , 0 , 1 } ,
{ ( char_T * ) ( & cz5yqt3r3xb . kqktv02dou ) , 18 , 0 , 1 } , { ( char_T * )
( & cz5yqt3r3xb . jrvwlq3fuz ) , 19 , 0 , 1 } , { ( char_T * ) ( &
cz5yqt3r3xb . dwnfs4t0ur . k44bc5mjbl ) , 2 , 0 , 1 } , { ( char_T * ) ( &
cz5yqt3r3xb . dwnfs4t0ur . o5luu5smdl ) , 8 , 0 , 1 } , { ( char_T * ) ( &
cz5yqt3r3xb . fuob0ddam2h . k44bc5mjbl ) , 2 , 0 , 1 } , { ( char_T * ) ( &
cz5yqt3r3xb . fuob0ddam2h . o5luu5smdl ) , 8 , 0 , 1 } } ; static
DataTypeTransitionTable rtBTransTable = { 20U , rtBTransitions } ; static
DataTypeTransition rtPTransitions [ ] = { { ( char_T * ) ( & kjmvupbl2i .
SignalHold_IC ) , 0 , 0 , 2872 } , { ( char_T * ) ( & kjmvupbl2i .
Constant9_Value ) , 8 , 0 , 6 } , { ( char_T * ) ( & kjmvupbl2i .
GradeSource_CurrentSetting ) , 3 , 0 , 1 } , { ( char_T * ) (
rtP__CtrlVcuEvChrgLmtBpt2f2EvVCU_sldd_ ) , 0 , 0 , 11 } , { ( char_T * ) (
rtP__CtrlVcuEvRegenBrkCutOff2f2EvVCU_sldd_ ) , 0 , 0 , 2 } , { ( char_T * ) (
rtP__CtrlVcuEvRegenBrkSpdBpt2f2EvVCU_sldd_ ) , 0 , 0 , 2 } , { ( char_T * ) (
rtP__CtrlVcuEvSocBpt2f2EvVCU_sldd_ ) , 0 , 0 , 11 } , { ( char_T * ) ( &
rtP__DriverAeroRes2f2Driver_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__DriverDrivelineRes2f2Driver_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__DriverInitialGear2f2Driver_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__DriverPreviewDist2f2Driver_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__DriverRollRes2f2Driver_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__DriverShiftTime2f2Driver_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__DriverTimeConst2f2Driver_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__DriverTractiveForce2f2Driver_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__EnvAirTemp2f2Environment_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__EnvGrvty2f2Environment_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__EnvNomFrictionScaling2f2Environment_sldd_ ) , 0 , 0 , 1 } , { ( char_T *
) ( & rtP__EnvNominalGrade2f2Environment_sldd_ ) , 0 , 0 , 1 } , { ( char_T *
) ( & rtP__EnvWindVelX2f2Environment_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) (
& rtP__EnvWindVelY2f2Environment_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__EnvWindVelZ2f2Environment_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__PlntBattSocInit2f2BatteryDCDC_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) ( &
rtP__PlntBattTempInitDegC2f2BatteryDCDC_sldd_ ) , 0 , 0 , 1 } , { ( char_T *
) ( & rtP__PlntBrkFrntBias2f2PassVeh_sldd_ ) , 0 , 0 , 1 } , { ( char_T * ) (
& rtP__PlntBrkKinFricCffFrnt2f2PassVeh_sldd_ ) , 0 , 0 , 1 } , { ( char_T * )
( & rtP__PlntBrkNumPadsFrnt2f2PassVeh_sldd_ ) , 0 , 0 , 1 } , { ( char_T * )
( & rtP__PlntBrkPadMeanRadiusFrnt2f2PassVeh_sldd_ ) , 0 , 0 , 1 } , { (
char_T * ) ( & rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ ) , 0 , 0 , 1 } , { (
char_T * ) ( & rtP__PlntBrkRearBias2f2PassVeh_sldd_ ) , 0 , 0 , 1 } , { (
char_T * ) ( & rtP__PlntBrkWc2f2PassVeh_sldd_ ) , 0 , 0 , 1 } , { ( char_T *
) ( & rtP__PlntDCDCVoltInit2f2BatteryDCDC_sldd_ ) , 0 , 0 , 1 } , { ( char_T
* ) ( & rtP__PlntDiffrntl2Eff2f2Drivetrain_sldd_ ) , 0 , 0 , 1 } , { ( char_T
* ) ( & rtP__PlntDiffrntl2Ratio2f2Drivetrain_sldd_ ) , 0 , 0 , 1 } , { (
char_T * ) ( & rtP__PlntDiffrntlEff2f2Drivetrain_sldd_ ) , 0 , 0 , 1 } , { (
char_T * ) ( & rtP__PlntDiffrntlRatio2f2Drivetrain_sldd_ ) , 0 , 0 , 1 } , {
( char_T * ) ( rtP__PlntEM1EffTbl2f2ElectricMachine1_sldd_ ) , 0 , 0 , 154 }
, { ( char_T * ) ( rtP__PlntEM1Spd2f2ElectricMachine1_sldd_ ) , 0 , 0 , 14 }
, { ( char_T * ) ( rtP__PlntEM1TrqEff2f2ElectricMachine1_sldd_ ) , 0 , 0 , 11
} , { ( char_T * ) ( rtP__PlntEM2EffTbl2f2ElectricMachine2_sldd_ ) , 0 , 0 ,
154 } , { ( char_T * ) ( rtP__PlntEM2Spd2f2ElectricMachine2_sldd_ ) , 0 , 0 ,
14 } , { ( char_T * ) ( rtP__PlntEM2TrqEff2f2ElectricMachine2_sldd_ ) , 0 , 0
, 11 } , { ( char_T * ) ( & rtP__PlntVehDstCGFrntAxl2f2PassVeh_sldd_ ) , 0 ,
0 , 1 } , { ( char_T * ) ( & rtP__PlntVehDstCGRearAxl2f2PassVeh_sldd_ ) , 0 ,
0 , 1 } , { ( char_T * ) ( & rtP__PlntVehMass2f2PassVeh_sldd_ ) , 0 , 0 , 1 }
, { ( char_T * ) ( & rtP__PlntWhlLdRadius2f2PassVeh_sldd_ ) , 0 , 0 , 1 } , {
( char_T * ) ( rtP__Spark_MaxTrq2f2SparkEM_sldd_ ) , 0 , 0 , 29 } , { (
char_T * ) ( rtP__Spark_MaxTrq_Spd2f2SparkEM_sldd_ ) , 0 , 0 , 29 } } ;
static DataTypeTransitionTable rtPTransTable = { 48U , rtPTransitions } ;
