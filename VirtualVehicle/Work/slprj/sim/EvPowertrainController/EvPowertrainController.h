#ifndef RTW_HEADER_EvPowertrainController_h_
#define RTW_HEADER_EvPowertrainController_h_
#ifndef EvPowertrainController_COMMON_INCLUDES_
#define EvPowertrainController_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "EvPowertrainController_types.h"
#include "rtGetInf.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
#include <stddef.h>
typedef struct { real_T cugmttjksp ; } j43xi004pt ; struct kmsrr4v05yq_ {
real_T P_17 ; real_T P_18 ; real_T P_19 ; real_T P_20 ; real_T P_21 ; real_T
P_22 ; real_T P_23 ; real_T P_24 ; real_T P_25 [ 14 ] ; real_T P_26 ; real_T
P_27 [ 14 ] ; real_T P_28 ; real_T P_29 ; real_T P_30 [ 14 ] ; real_T P_31 ;
real_T P_32 ; real_T P_33 ; real_T P_34 ; real_T P_35 ; real_T P_36 ; real_T
P_37 [ 14 ] ; real_T P_38 ; real_T P_39 ; real_T P_40 ; real_T P_41 ; real_T
P_42 ; real_T P_43 ; real_T P_44 ; real_T P_45 ; real_T P_46 ; real_T P_47 ;
real_T P_48 ; uint32_T P_49 [ 2 ] ; } ; struct a50xwovlji { struct
SimStruct_tag * _mdlRefSfcnS ; struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMapLoggingInstanceInfo mmiLogInstanceInfo ; sysRanDType *
systemRan [ 2 ] ; int_T systemTid [ 2 ] ; } DataMapInfo ; struct { int_T
mdlref_GlobalTID [ 2 ] ; } Timing ; } ; typedef struct { j43xi004pt rtb ;
h5efmxf3a3 rtm ; } pwecol01r52 ; extern real_T
rtP__CtrlVcuEvBattChrgPwrMax2f2EvVCU_sldd_ ; extern real_T
rtP__CtrlVcuEvBattDischrgPwrMax2f2EvVCU_sldd_ ; extern real_T
rtP__CtrlVcuEvChrgLmtBpt2f2EvVCU_sldd_ [ 11 ] ; extern real_T
rtP__CtrlVcuEvDischrgLmtBpt2f2EvVCU_sldd_ [ 11 ] ; extern real_T
rtP__CtrlVcuEvRegenBrkCutOff2f2EvVCU_sldd_ [ 2 ] ; extern real_T
rtP__CtrlVcuEvRegenBrkSpdBpt2f2EvVCU_sldd_ [ 2 ] ; extern real_T
rtP__CtrlVcuEvSocBpt2f2EvVCU_sldd_ [ 11 ] ; extern real_T
rtP__PlntBrkFrntBias2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkKinFricCffFrnt2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkNumPadsFrnt2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkPadMeanRadiusFrnt2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkRearBias2f2PassVeh_sldd_ ; extern real_T
rtP__PlntDiffrntlRatio2f2Drivetrain_sldd_ ; extern real_T
rtP__PlntEM1EffTbl2f2ElectricMachine1_sldd_ [ 154 ] ; extern real_T
rtP__PlntEM1Trq2f2ElectricMachine1_sldd_ [ 14 ] ; extern real_T
rtP__PlntEM1TrqEff2f2ElectricMachine1_sldd_ [ 11 ] ; extern void io04qbfqhk (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , h5efmxf3a3
* const e4f4oaoqet , j43xi004pt * localB , void * sysRanPtr , int contextTid
, rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath ,
int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_EvPowertrainController_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray *
mr_EvPowertrainController_GetDWork ( const pwecol01r52 * mdlrefDW ) ; extern
void mr_EvPowertrainController_SetDWork ( pwecol01r52 * mdlrefDW , const
mxArray * ssDW ) ; extern void
mr_EvPowertrainController_RegisterSimStateChecksum ( SimStruct * S ) ; extern
mxArray * mr_EvPowertrainController_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo *
EvPowertrainController_GetCAPIStaticMap ( void ) ; extern void izmowyu5rx (
real_T * nbgwmpzym4 , real_T * e0auiykmsy , real_T * muthwkhylw , real_T *
gcogdhkkep , real_T * d5owida21i ) ; extern void hrsc30l345 ( real_T *
nbgwmpzym4 , real_T * e0auiykmsy , real_T * muthwkhylw , real_T * gcogdhkkep
, real_T * d5owida21i ) ; extern void EvPowertrainController ( const real_T *
o1urwpbuiv , const real_T ey2hp3p1in [ 4 ] , const real_T * mipgkbochp ,
const real_T * crcnsgdctu , const real_T * deypr21ydk , real_T * nbgwmpzym4 ,
real_T * bcrinikesr , real_T chm05agvrh [ 4 ] , real_T * e0auiykmsy , real_T
* muthwkhylw , real_T * gcogdhkkep , real_T * d5owida21i , j43xi004pt *
localB ) ; extern void EvPowertrainControllerTID1 ( j43xi004pt * localB ) ;
extern void lktaxgo5iz ( h5efmxf3a3 * const e4f4oaoqet ) ;
#endif
