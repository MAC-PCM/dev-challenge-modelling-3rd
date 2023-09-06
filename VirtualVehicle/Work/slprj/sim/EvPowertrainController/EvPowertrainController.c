#include "EvPowertrainController.h"
#include "rtwtypes.h"
#include "EvPowertrainController_private.h"
#include "mwmathutil.h"
#include "EvPowertrainController_capi.h"
#include "look1_binlcapw.h"
#include "look2_binlcapw.h"
#include "rt_nonfinite.h"
static RegMdlInfo rtMdlInfo_EvPowertrainController [ 43 ] = { { "pwecol01r52"
, MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "EvPowertrainController"
} , { "m0wpkuzrqm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "hopnyppy5w" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "kx3qh113vl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "ilxsnq2q0g" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "cqreqezql0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "bcgjlw03xh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "otb4tbgm5c" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "dsayz4k2i0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "oeyven44uw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "keofue2nr5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "nllmd53eto" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "eu5lctztg1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "j43xi004pt" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "a3jh4ad2kz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "lktaxgo5iz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "ei5yvhlm0j" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "izmowyu5rx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "io04qbfqhk" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "hrsc30l345" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "cdzncnh0i4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "EvPowertrainController" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "ls5wieseak" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "a50xwovlji" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "h5efmxf3a3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController" } , { "cuint64" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 ,
- 1 , ( void * ) "uint64" } , { "uint64" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 ,
( NULL ) } , { "cint64" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void * )
"int64" } , { "int64" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_EvPowertrainController_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController" }
, { "mr_EvPowertrainController_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "EvPowertrainController" } , {
"mr_EvPowertrainController_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 ,
( void * ) "EvPowertrainController" } , { "EvPowertrainController.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , { "EvPowertrainController.c"
, MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * ) "EvPowertrainController" } }
; kmsrr4v05yq kmsrr4v05y = { 0.0 , 2.0 , 1.0 , 2.0 , 0.0 , 0.0 , 0.0 ,
9.5492965855137211 , { 0.0 , 1333.3333333333333 , 2666.6666666666665 ,
3999.9999999999995 , 4477.5590656519889 , 5333.333333333333 ,
6666.6666666666661 , 7999.9999999999991 , 9333.3333333333339 ,
10666.666666666666 , 12000.0 , 13333.333333333332 , 14666.666666666666 ,
15999.999999999998 } , 9.5492965855137211 , { 0.0 , 1333.3333333333333 ,
2666.6666666666665 , 3999.9999999999995 , 4477.5590656519889 ,
5333.333333333333 , 6666.6666666666661 , 7999.9999999999991 ,
9333.3333333333339 , 10666.666666666666 , 12000.0 , 13333.333333333332 ,
14666.666666666666 , 15999.999999999998 } , - 1.0 , 9.5492965855137211 , {
0.0 , 1333.3333333333333 , 2666.6666666666665 , 3999.9999999999995 ,
4477.5590656519889 , 5333.333333333333 , 6666.6666666666661 ,
7999.9999999999991 , 9333.3333333333339 , 10666.666666666666 , 12000.0 ,
13333.333333333332 , 14666.666666666666 , 15999.999999999998 } , 0.01 , - 1.0
, 1.0 , 0.0 , 0.0 , 9.5492965855137211 , { 0.0 , 1333.3333333333333 ,
2666.6666666666665 , 3999.9999999999995 , 4477.5590656519889 ,
5333.333333333333 , 6666.6666666666661 , 7999.9999999999991 ,
9333.3333333333339 , 10666.666666666666 , 12000.0 , 13333.333333333332 ,
14666.666666666666 , 15999.999999999998 } , - 1.0 , 0.0 , 0.0 , 1.0 , 0.0 ,
0.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , { 13U , 10U } } ; void izmowyu5rx (
real_T * nbgwmpzym4 , real_T * e0auiykmsy , real_T * muthwkhylw , real_T *
gcogdhkkep , real_T * d5owida21i ) { * nbgwmpzym4 = kmsrr4v05y . P_23 ; *
e0auiykmsy = kmsrr4v05y . P_43 ; * muthwkhylw = kmsrr4v05y . P_44 ; *
gcogdhkkep = kmsrr4v05y . P_45 ; * d5owida21i = kmsrr4v05y . P_46 ; } void
hrsc30l345 ( real_T * nbgwmpzym4 , real_T * e0auiykmsy , real_T * muthwkhylw
, real_T * gcogdhkkep , real_T * d5owida21i ) { * nbgwmpzym4 = kmsrr4v05y .
P_23 ; * e0auiykmsy = kmsrr4v05y . P_43 ; * muthwkhylw = kmsrr4v05y . P_44 ;
* gcogdhkkep = kmsrr4v05y . P_45 ; * d5owida21i = kmsrr4v05y . P_46 ; } void
EvPowertrainController ( const real_T * o1urwpbuiv , const real_T ey2hp3p1in
[ 4 ] , const real_T * mipgkbochp , const real_T * crcnsgdctu , const real_T
* deypr21ydk , real_T * nbgwmpzym4 , real_T * bcrinikesr , real_T chm05agvrh
[ 4 ] , real_T * e0auiykmsy , real_T * muthwkhylw , real_T * gcogdhkkep ,
real_T * d5owida21i , j43xi004pt * localB ) { real_T dt5gknwwwv ; real_T
gawnrcnlkq ; real_T higl2pyeh3 ; real_T hz1pfosf1x ; real_T je0twc1sez ;
real_T lzuz4cz4rz ; real_T nrj0deoa2z ; real_T oa4mpp0sf3 ; real_T oje21gmldb
; real_T pp25zddsqw ; boolean_T iae001yuts ; boolean_T j0iwrg2h50 ; *
nbgwmpzym4 = kmsrr4v05y . P_23 ; nrj0deoa2z = kmsrr4v05y . P_24 * *
deypr21ydk ; dt5gknwwwv = * o1urwpbuiv * look1_binlcapw ( nrj0deoa2z ,
kmsrr4v05y . P_25 , rtP__PlntEM1Trq2f2ElectricMachine1_sldd_ , 13U ) ;
gawnrcnlkq = look1_binlcapw ( * crcnsgdctu ,
rtP__CtrlVcuEvSocBpt2f2EvVCU_sldd_ , rtP__CtrlVcuEvChrgLmtBpt2f2EvVCU_sldd_ ,
10U ) ; nrj0deoa2z = look1_binlcapw ( * crcnsgdctu ,
rtP__CtrlVcuEvSocBpt2f2EvVCU_sldd_ ,
rtP__CtrlVcuEvDischrgLmtBpt2f2EvVCU_sldd_ , 10U ) ; oje21gmldb = nrj0deoa2z *
rtP__CtrlVcuEvBattDischrgPwrMax2f2EvVCU_sldd_ ; higl2pyeh3 = gawnrcnlkq *
rtP__CtrlVcuEvBattChrgPwrMax2f2EvVCU_sldd_ ; iae001yuts = ( * o1urwpbuiv >
kmsrr4v05y . P_17 ) ; nrj0deoa2z = rtP__PlntBrkKinFricCffFrnt2f2PassVeh_sldd_
* 3.1415926535897931 * 0.0025000000000000005 *
rtP__PlntBrkPadMeanRadiusFrnt2f2PassVeh_sldd_ *
rtP__PlntBrkNumPadsFrnt2f2PassVeh_sldd_ / 4.0 ; nrj0deoa2z =
rtP__PlntBrkFrntBias2f2PassVeh_sldd_ * ey2hp3p1in [ 0 ] *
rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ * nrj0deoa2z +
rtP__PlntBrkFrntBias2f2PassVeh_sldd_ * ey2hp3p1in [ 1 ] *
rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ * nrj0deoa2z ; je0twc1sez = kmsrr4v05y .
P_26 * * deypr21ydk ; lzuz4cz4rz = look1_binlcapw ( * mipgkbochp ,
rtP__CtrlVcuEvRegenBrkSpdBpt2f2EvVCU_sldd_ ,
rtP__CtrlVcuEvRegenBrkCutOff2f2EvVCU_sldd_ , 1U ) ; gawnrcnlkq =
muDoubleScalarMin ( nrj0deoa2z , rtP__PlntDiffrntlRatio2f2Drivetrain_sldd_ *
look1_binlcapw ( je0twc1sez , kmsrr4v05y . P_27 ,
rtP__PlntEM1Trq2f2ElectricMachine1_sldd_ , 13U ) ) * ( lzuz4cz4rz *
gawnrcnlkq ) ; if ( ! iae001yuts ) { dt5gknwwwv = 1.0 /
rtP__PlntDiffrntlRatio2f2Drivetrain_sldd_ * gawnrcnlkq * kmsrr4v05y . P_28 ;
} je0twc1sez = muDoubleScalarAbs ( * deypr21ydk ) ; lzuz4cz4rz = * deypr21ydk
* dt5gknwwwv ; hz1pfosf1x = kmsrr4v05y . P_29 * * deypr21ydk ; hz1pfosf1x =
kmsrr4v05y . P_31 * look2_binlcapw ( muDoubleScalarAbs ( hz1pfosf1x ) ,
muDoubleScalarAbs ( dt5gknwwwv ) , kmsrr4v05y . P_30 ,
rtP__PlntEM1TrqEff2f2ElectricMachine1_sldd_ ,
rtP__PlntEM1EffTbl2f2ElectricMachine1_sldd_ , kmsrr4v05y . P_49 , 14U ) ; if
( lzuz4cz4rz >= kmsrr4v05y . P_34 ) { oa4mpp0sf3 = kmsrr4v05y . P_32 ; } else
{ oa4mpp0sf3 = kmsrr4v05y . P_33 ; } if ( ( hz1pfosf1x < 0.0 ) && (
oa4mpp0sf3 > muDoubleScalarFloor ( oa4mpp0sf3 ) ) ) { hz1pfosf1x = -
muDoubleScalarPower ( - hz1pfosf1x , oa4mpp0sf3 ) ; } else { hz1pfosf1x =
muDoubleScalarPower ( hz1pfosf1x , oa4mpp0sf3 ) ; } lzuz4cz4rz *= hz1pfosf1x
; if ( * deypr21ydk >= kmsrr4v05y . P_35 ) { pp25zddsqw = kmsrr4v05y . P_48 ;
} else { pp25zddsqw = localB -> cugmttjksp ; } oa4mpp0sf3 = * deypr21ydk /
2.0 ; iae001yuts = ( * deypr21ydk >= - kmsrr4v05y . P_20 ) ; j0iwrg2h50 = ( *
deypr21ydk <= kmsrr4v05y . P_20 ) ; if ( iae001yuts && j0iwrg2h50 ) {
oa4mpp0sf3 = 4.0 / ( 3.0 - muDoubleScalarPower ( oa4mpp0sf3 , 2.0 ) ) *
pp25zddsqw ; } else { oa4mpp0sf3 = * deypr21ydk ; } if ( je0twc1sez <
kmsrr4v05y . P_18 ) { oje21gmldb = dt5gknwwwv ; } else if ( ( oje21gmldb -
lzuz4cz4rz >= kmsrr4v05y . P_21 ) && ( higl2pyeh3 - lzuz4cz4rz <= kmsrr4v05y
. P_22 ) ) { oje21gmldb = dt5gknwwwv ; } else { if ( lzuz4cz4rz > oje21gmldb
) { lzuz4cz4rz = oje21gmldb ; } else if ( lzuz4cz4rz < higl2pyeh3 ) {
lzuz4cz4rz = higl2pyeh3 ; } oje21gmldb = lzuz4cz4rz / hz1pfosf1x / oa4mpp0sf3
; } iae001yuts = ( * crcnsgdctu > kmsrr4v05y . P_19 ) ; higl2pyeh3 =
kmsrr4v05y . P_36 * * deypr21ydk ; dt5gknwwwv = look1_binlcapw ( higl2pyeh3 ,
kmsrr4v05y . P_37 , rtP__PlntEM1Trq2f2ElectricMachine1_sldd_ , 13U ) ;
higl2pyeh3 = kmsrr4v05y . P_38 * dt5gknwwwv ; if ( ! iae001yuts ) {
dt5gknwwwv = kmsrr4v05y . P_47 ; } if ( oje21gmldb > dt5gknwwwv ) { *
bcrinikesr = dt5gknwwwv ; } else if ( oje21gmldb < higl2pyeh3 ) { *
bcrinikesr = higl2pyeh3 ; } else { * bcrinikesr = oje21gmldb ; } gawnrcnlkq =
nrj0deoa2z - gawnrcnlkq ; if ( gawnrcnlkq > kmsrr4v05y . P_39 ) { gawnrcnlkq
= kmsrr4v05y . P_39 ; } else if ( gawnrcnlkq < kmsrr4v05y . P_40 ) {
gawnrcnlkq = kmsrr4v05y . P_40 ; } nrj0deoa2z = gawnrcnlkq / (
rtP__PlntBrkKinFricCffFrnt2f2PassVeh_sldd_ * 3.1415926535897931 *
0.0025000000000000005 * rtP__PlntBrkPadMeanRadiusFrnt2f2PassVeh_sldd_ *
rtP__PlntBrkNumPadsFrnt2f2PassVeh_sldd_ / 4.0 * 2.0 ) * ( 1.0 /
rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ ) ; if ( nrj0deoa2z > kmsrr4v05y . P_41 )
{ nrj0deoa2z = kmsrr4v05y . P_41 ; } else if ( nrj0deoa2z < kmsrr4v05y . P_42
) { nrj0deoa2z = kmsrr4v05y . P_42 ; } chm05agvrh [ 0 ] = nrj0deoa2z ;
chm05agvrh [ 1 ] = nrj0deoa2z ; oa4mpp0sf3 = 1.0 /
rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ ; chm05agvrh [ 2 ] =
rtP__PlntBrkRearBias2f2PassVeh_sldd_ * ey2hp3p1in [ 2 ] *
rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ * oa4mpp0sf3 ; chm05agvrh [ 3 ] =
rtP__PlntBrkRearBias2f2PassVeh_sldd_ * ey2hp3p1in [ 3 ] *
rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ * oa4mpp0sf3 ; * e0auiykmsy = kmsrr4v05y
. P_43 ; * muthwkhylw = kmsrr4v05y . P_44 ; * gcogdhkkep = kmsrr4v05y . P_45
; * d5owida21i = kmsrr4v05y . P_46 ; } void EvPowertrainControllerTID1 (
j43xi004pt * localB ) { localB -> cugmttjksp = - kmsrr4v05y . P_48 ; } void
lktaxgo5iz ( h5efmxf3a3 * const e4f4oaoqet ) { if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( e4f4oaoqet ->
_mdlRefSfcnS , "EvPowertrainController" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void io04qbfqhk (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , h5efmxf3a3
* const e4f4oaoqet , j43xi004pt * localB , void * sysRanPtr , int contextTid
, rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath ,
int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof (
real_T ) ) ; kmsrr4v05y . P_39 = rtInf ; ( void ) memset ( ( void * )
e4f4oaoqet , 0 , sizeof ( h5efmxf3a3 ) ) ; e4f4oaoqet -> Timing .
mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; e4f4oaoqet -> Timing .
mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; e4f4oaoqet -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( e4f4oaoqet -> _mdlRefSfcnS , "EvPowertrainController" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } { localB -> cugmttjksp = 0.0
; } EvPowertrainController_InitializeDataMapInfo ( e4f4oaoqet , sysRanPtr ,
contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL
) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & (
e4f4oaoqet -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( e4f4oaoqet ->
DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex (
e4f4oaoqet -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void
mr_EvPowertrainController_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo
= false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ;
if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo (
mdlRefSfcnS , modelName , rtMdlInfo_EvPowertrainController , 43 ) ; * retVal
= 1 ; } static void mr_EvPowertrainController_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_EvPowertrainController_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) {
mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_EvPowertrainController_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_EvPowertrainController_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_EvPowertrainController_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_EvPowertrainController_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_EvPowertrainController_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_EvPowertrainController_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_EvPowertrainController_cacheDataToMxArrayWithOffset ( mxArray * destArray
, mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes
) ; static void mr_EvPowertrainController_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_EvPowertrainController_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_EvPowertrainController_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_EvPowertrainController_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_EvPowertrainController_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_EvPowertrainController_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_EvPowertrainController_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_EvPowertrainController_GetDWork (
const pwecol01r52 * mdlrefDW ) { static const char * ssDWFieldNames [ 3 ] = {
"rtb" , "NULL->rtdw" , "NULL->rtzce" , } ; mxArray * ssDW =
mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_EvPowertrainController_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void *
) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; ( void ) mdlrefDW ;
return ssDW ; } void mr_EvPowertrainController_SetDWork ( pwecol01r52 *
mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ;
mr_EvPowertrainController_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW ->
rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; } void
mr_EvPowertrainController_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 137674436U , 1211591259U , 3406703712U ,
2645099287U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"EvPowertrainController" , & chksum [ 0 ] ) ; } mxArray *
mr_EvPowertrainController_GetSimStateDisallowedBlocks ( ) { return ( NULL ) ;
}
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
