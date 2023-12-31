#ifndef RTW_HEADER_EvPowertrainController2EM_h_
#define RTW_HEADER_EvPowertrainController2EM_h_
#ifndef EvPowertrainController2EM_COMMON_INCLUDES_
#define EvPowertrainController2EM_COMMON_INCLUDES_
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "sf_runtime/sfc_sdi.h"
#endif
#include "EvPowertrainController2EM_types.h"
#include <stddef.h>
#include "rtGetInf.h"
#include "rtw_modelmap_simtarget.h"
#include <string.h>
#include "rt_nonfinite.h"
typedef struct { real_T auuyjdxvwd [ 201 ] ; real_T p4zr51exni [ 201 ] ;
real_T okhxqdn21l ; real_T lvza2bh52u ; real_T g0egmb0m0o ; real_T k13a3u1wrt
[ 200 ] ; real_T kh1m54fkuv ; real_T klhunfdiet ; real_T lwbian40cm ; }
bwwdwvebxa ; typedef struct { real_T gimarahrpl [ 201 ] ; real_T p5p4aaxq51 [
201 ] ; real_T o5t0xnvnze ; real_T f12x4t2yjl ; real_T ow2qkdjqul ; struct {
void * AQHandles ; } fkeeaz2nqt ; struct { void * AQHandles ; } kw0okp1gi1 ;
uint32_T clhfo1klhy [ 202 ] ; uint32_T nkr00y3cul ; uint32_T ijcpktnusb [ 201
] ; uint32_T fbivvkkxil [ 202 ] ; uint32_T gqk1jf1ek0 ; uint32_T nqv3ows0gj [
201 ] ; } cpxpfpdja3 ; struct jtbbqdj1ooz_ { real_T P_23 ; real_T P_24 ;
real_T P_25 ; real_T P_26 ; real_T P_27 ; real_T P_28 ; real_T P_29 ; real_T
P_30 ; real_T P_31 ; real_T P_32 ; real_T P_33 ; real_T P_34 ; real_T P_35 ;
real_T P_36 ; real_T P_37 ; real_T P_38 ; real_T P_39 ; real_T P_40 ; real_T
P_41 ; real_T P_42 ; real_T P_43 ; real_T P_44 ; real_T P_45 ; real_T P_46 ;
real_T P_47 ; real_T P_48 ; real_T P_49 ; real_T P_50 ; real_T P_51 ; real_T
P_52 ; real_T P_53 ; real_T P_54 ; real_T P_55 ; real_T P_56 ; real_T P_57 ;
real_T P_58 ; real_T P_59 ; real_T P_60 ; real_T P_61 ; real_T P_62 ; real_T
P_63 ; real_T P_64 ; real_T P_65 ; real_T P_66 ; real_T P_67 ; real_T P_68 ;
real_T P_69 ; real_T P_70 ; real_T P_71 ; real_T P_72 ; real_T P_73 ; real_T
P_74 ; real_T P_75 ; real_T P_76 ; real_T P_77 ; real_T P_78 ; real_T P_79 ;
real_T P_80 ; real_T P_81 ; real_T P_82 ; real_T P_83 ; real_T P_84 ; real_T
P_85 ; real_T P_86 ; real_T P_87 [ 200 ] ; real_T P_88 ; real_T P_89 ; real_T
P_90 ; real_T P_91 ; real_T P_92 ; real_T P_93 ; real_T P_94 ; real_T P_95 ;
real_T P_96 ; real_T P_97 ; real_T P_98 ; real_T P_99 ; real_T P_100 ; real_T
P_101 ; real_T P_102 ; real_T P_103 ; uint32_T P_104 [ 2 ] ; uint32_T P_105 [
2 ] ; } ; struct jcdbqlaivn { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 5 ] ; int32_T * vardimsAddress [ 5
] ; RTWLoggingFcnPtr loggingPtrs [ 5 ] ; sysRanDType * systemRan [ 4 ] ;
int_T systemTid [ 4 ] ; } DataMapInfo ; struct { int_T mdlref_GlobalTID [ 2 ]
; } Timing ; } ; typedef struct { bwwdwvebxa rtb ; cpxpfpdja3 rtdw ;
nwcwzcnldx rtm ; } oaq0dqotmrc ; extern real_T
rtP__CtrlVcuEvChrgLmtBpt2f2EvVCU_sldd_ [ 11 ] ; extern real_T
rtP__CtrlVcuEvRegenBrkCutOff2f2EvVCU_sldd_ [ 2 ] ; extern real_T
rtP__CtrlVcuEvRegenBrkSpdBpt2f2EvVCU_sldd_ [ 2 ] ; extern real_T
rtP__CtrlVcuEvSocBpt2f2EvVCU_sldd_ [ 11 ] ; extern real_T
rtP__PlntBrkFrntBias2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkKinFricCffFrnt2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkNumPadsFrnt2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkPadMeanRadiusFrnt2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkRearBias2f2PassVeh_sldd_ ; extern real_T
rtP__PlntDiffrntl2Eff2f2Drivetrain_sldd_ ; extern real_T
rtP__PlntDiffrntl2Ratio2f2Drivetrain_sldd_ ; extern real_T
rtP__PlntDiffrntlEff2f2Drivetrain_sldd_ ; extern real_T
rtP__PlntDiffrntlRatio2f2Drivetrain_sldd_ ; extern real_T
rtP__PlntEM1EffTbl2f2ElectricMachine1_sldd_ [ 154 ] ; extern real_T
rtP__PlntEM1Spd2f2ElectricMachine1_sldd_ [ 14 ] ; extern real_T
rtP__PlntEM1TrqEff2f2ElectricMachine1_sldd_ [ 11 ] ; extern real_T
rtP__PlntEM2EffTbl2f2ElectricMachine2_sldd_ [ 154 ] ; extern real_T
rtP__PlntEM2Spd2f2ElectricMachine2_sldd_ [ 14 ] ; extern real_T
rtP__PlntEM2TrqEff2f2ElectricMachine2_sldd_ [ 11 ] ; extern real_T
rtP__PlntWhlLdRadius2f2PassVeh_sldd_ ; extern real_T
rtP__Spark_MaxTrq2f2SparkEM_sldd_ [ 29 ] ; extern real_T
rtP__Spark_MaxTrq_Spd2f2SparkEM_sldd_ [ 29 ] ; extern void d443wer2uj (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , nwcwzcnldx
* const jcaapsdo3t , bwwdwvebxa * localB , cpxpfpdja3 * localDW , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern
void mr_EvPowertrainController2EM_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS ,
char_T * modelName , int_T * retVal ) ; extern mxArray *
mr_EvPowertrainController2EM_GetDWork ( const oaq0dqotmrc * mdlrefDW ) ;
extern void mr_EvPowertrainController2EM_SetDWork ( oaq0dqotmrc * mdlrefDW ,
const mxArray * ssDW ) ; extern void
mr_EvPowertrainController2EM_RegisterSimStateChecksum ( SimStruct * S ) ;
extern mxArray * mr_EvPowertrainController2EM_GetSimStateDisallowedBlocks ( )
; extern const rtwCAPI_ModelMappingStaticInfo *
EvPowertrainController2EM_GetCAPIStaticMap ( void ) ; extern void iihvuu1gpc
( nwcwzcnldx * const jcaapsdo3t , cpxpfpdja3 * localDW ) ; extern void
cqealxsqr5 ( real_T * hn2t2tghq3 , real_T * edcjsjvsbf , real_T * dcs1zebgq2
, real_T * megpmqfjrl , real_T * imfqdgtkm2 , cpxpfpdja3 * localDW ) ; extern
void pbpffdp5dj ( real_T * hn2t2tghq3 , real_T * edcjsjvsbf , real_T *
dcs1zebgq2 , real_T * megpmqfjrl , real_T * imfqdgtkm2 , cpxpfpdja3 * localDW
) ; extern void g0tpyzslmq ( nwcwzcnldx * const jcaapsdo3t , cpxpfpdja3 *
localDW ) ; extern void g3ndjszvz2 ( real_T * hn2t2tghq3 , real_T *
edcjsjvsbf , real_T * dcs1zebgq2 , real_T * megpmqfjrl , real_T * imfqdgtkm2
) ; extern void e3ptmay5nu ( bwwdwvebxa * localB , cpxpfpdja3 * localDW ) ;
extern void EvPowertrainController2EM ( nwcwzcnldx * const jcaapsdo3t , const
real_T * dikvztxmir , const real_T l2omu2n5t0 [ 4 ] , const real_T *
ppjd0yjs10 , const real_T owziimmlv4 [ 2 ] , const real_T * jx3m2p4tqq ,
const real_T * co4rfisdxd , const real_T * moz11gxboh , const real_T *
phebrbtq0p , real_T * hn2t2tghq3 , real_T gvnpst4w0k [ 2 ] , real_T
jg1dpl1t23 [ 4 ] , real_T * edcjsjvsbf , real_T * dcs1zebgq2 , real_T *
megpmqfjrl , real_T * imfqdgtkm2 , bwwdwvebxa * localB , cpxpfpdja3 * localDW
) ; extern void EvPowertrainController2EMTID1 ( bwwdwvebxa * localB ) ;
extern void dfeuqru533 ( nwcwzcnldx * const jcaapsdo3t ) ;
#endif
