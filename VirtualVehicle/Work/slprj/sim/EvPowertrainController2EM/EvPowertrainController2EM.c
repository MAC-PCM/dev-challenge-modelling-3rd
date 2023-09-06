#include "EvPowertrainController2EM.h"
#include "rtwtypes.h"
#include "EvPowertrainController2EM_private.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include "minimum_UoZk5bAH.h"
#include <string.h>
#include "EvPowertrainController2EM_capi.h"
#include "look1_binlxpw.h"
#include "look1_binlcapw.h"
#include "plook_linxp.h"
#include "intrp2d_l_pw.h"
#include "rt_nonfinite.h"
static RegMdlInfo rtMdlInfo_EvPowertrainController2EM [ 45 ] = { {
"oaq0dqotmrc" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"EvPowertrainController2EM" } , { "d22elv45sz" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController2EM" } , { "cf2jbuujei" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController2EM" } , { "imxvkaamrn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController2EM" } , { "mqfccoe4mr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController2EM" } , { "aafhhvk4fd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController2EM" } , { "dakpmricvu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController2EM" } , { "cmkwqqszqu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController2EM" } , { "o5eh0yjn15" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController2EM" } , { "p24s0hi0ib" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController2EM" } , { "hitypd5sqf" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController2EM" } , { "pr35qox4vo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController2EM" } , { "cpxpfpdja3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController2EM" } , { "bwwdwvebxa" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController2EM" } , { "c1a2ev3yvr" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController2EM" } , { "dfeuqru533" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController2EM" } , { "g0tpyzslmq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController2EM" } , { "e3ptmay5nu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController2EM" } , { "pbpffdp5dj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController2EM" } , { "cqealxsqr5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController2EM" } , { "d443wer2uj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController2EM" } , { "g3ndjszvz2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController2EM" } , { "iihvuu1gpc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController2EM" } , { "EvPowertrainController2EM" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "lfqanzh3hu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController2EM" } , { "jcdbqlaivn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController2EM" } , { "nwcwzcnldx" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"EvPowertrainController2EM" } , { "cuint64" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0
, - 1 , ( void * ) "uint64" } , { "uint64" , MDL_INFO_ID_DATA_TYPE , 0 , - 1
, ( NULL ) } , { "cint64" , MDL_INFO_ID_CMPLX_DATA_TYPE , 0 , - 1 , ( void *
) "int64" } , { "int64" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"mr_EvPowertrainController2EM_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController2EM"
} , { "mr_EvPowertrainController2EM_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController2EM"
} , { "mr_EvPowertrainController2EM_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController2EM"
} , { "mr_EvPowertrainController2EM_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController2EM"
} , { "mr_EvPowertrainController2EM_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController2EM"
} , { "mr_EvPowertrainController2EM_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController2EM"
} , { "mr_EvPowertrainController2EM_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController2EM"
} , { "mr_EvPowertrainController2EM_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController2EM"
} , { "mr_EvPowertrainController2EM_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController2EM"
} , { "mr_EvPowertrainController2EM_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "EvPowertrainController2EM"
} , { "mr_EvPowertrainController2EM_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME ,
0 , - 1 , ( void * ) "EvPowertrainController2EM" } , {
"mr_EvPowertrainController2EM_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , -
1 , ( void * ) "EvPowertrainController2EM" } , {
"EvPowertrainController2EM.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL )
} , { "EvPowertrainController2EM.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , (
void * ) "EvPowertrainController2EM" } } ; jtbbqdj1ooz jtbbqdj1oo = { 0.01 ,
0.01 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , - 1.0 , 9.5492965855137211 , 0.0 , 1.0 ,
- 1.0 , 9.5492965855137211 , 0.0 , - 1.0 , 0.0 , 1.0 , - 1.0 , 0.0 , - 1.0 ,
0.0 , 0.0 , 1.0 , 0.0 , - 1.0 , 0.0 , - 1.0 , - 1.0 , 9.5492965855137211 ,
0.01 , - 1.0 , 1.0 , 0.0 , 1.0 , 0.0 , - 1.0 , 0.0 , 9.5492965855137211 ,
0.01 , - 1.0 , 1.0 , 0.0 , 0.0 , 0.0001 , 0.0 , 1.0 , 1.0E+7 , 0.0 , 0.001 ,
0.001 , 6.0 , 0.0 , 0.001 , 2.0 , 0.0 , 0.0 , 0.0 , 0.0 , 1.0 , 0.0 , 1.0 ,
0.0 , - 1.0 , 0.0 , 1.0 , 0.0 , - 1.0 , 0.0 , { 0.0 , 1.6281407035175879 ,
3.2562814070351758 , 4.8844221105527641 , 6.5125628140703515 ,
8.140703517587939 , 9.7688442211055282 , 11.396984924623116 ,
13.025125628140703 , 14.653266331658292 , 16.281407035175878 ,
17.909547738693469 , 19.537688442211056 , 21.165829145728644 ,
22.793969849246231 , 24.422110552763819 , 26.050251256281406 ,
27.678391959798994 , 29.306532663316585 , 30.934673366834172 ,
32.562814070351756 , 34.190954773869343 , 35.819095477386938 ,
37.447236180904525 , 39.075376884422113 , 40.7035175879397 ,
42.331658291457288 , 43.959798994974875 , 45.587939698492463 ,
47.21608040201005 , 48.844221105527637 , 50.472361809045225 ,
52.100502512562812 , 53.7286432160804 , 55.356783919597987 ,
56.984924623115575 , 58.613065326633169 , 60.241206030150757 ,
61.869346733668344 , 63.497487437185931 , 65.125628140703512 ,
66.7537688442211 , 68.381909547738687 , 70.010050251256288 ,
71.638190954773876 , 73.266331658291463 , 74.894472361809051 ,
76.522613065326638 , 78.150753768844226 , 79.778894472361813 ,
81.4070351758794 , 83.035175879396988 , 84.663316582914575 ,
86.291457286432163 , 87.91959798994975 , 89.547738693467338 ,
91.175879396984925 , 92.804020100502512 , 94.4321608040201 ,
96.060301507537687 , 97.688442211055275 , 99.316582914572862 ,
100.94472361809045 , 102.57286432160804 , 104.20100502512562 ,
105.82914572864321 , 107.4572864321608 , 109.08542713567839 ,
110.71356783919597 , 112.34170854271356 , 113.96984924623115 ,
115.59798994974874 , 117.22613065326634 , 118.85427135678393 ,
120.48241206030151 , 122.1105527638191 , 123.73869346733669 ,
125.36683417085428 , 126.99497487437186 , 128.62311557788945 ,
130.25125628140702 , 131.87939698492463 , 133.5075376884422 ,
135.1356783919598 , 136.76381909547737 , 138.39195979899498 ,
140.02010050251258 , 141.64824120603015 , 143.27638190954775 ,
144.90452261306532 , 146.53266331658293 , 148.1608040201005 ,
149.7889447236181 , 151.41708542713567 , 153.04522613065328 ,
154.67336683417085 , 156.30150753768845 , 157.92964824120602 ,
159.55778894472363 , 161.1859296482412 , 162.8140703517588 ,
164.44221105527637 , 166.07035175879398 , 167.69849246231155 ,
169.32663316582915 , 170.95477386934672 , 172.58291457286433 ,
174.2110552763819 , 175.8391959798995 , 177.46733668341707 ,
179.09547738693468 , 180.72361809045225 , 182.35175879396985 ,
183.97989949748742 , 185.60804020100502 , 187.23618090452263 ,
188.8643216080402 , 190.4924623115578 , 192.12060301507537 ,
193.74874371859298 , 195.37688442211055 , 197.00502512562815 ,
198.63316582914572 , 200.26130653266333 , 201.8894472361809 ,
203.5175879396985 , 205.14572864321607 , 206.77386934673368 ,
208.40201005025125 , 210.03015075376885 , 211.65829145728642 ,
213.28643216080403 , 214.9145728643216 , 216.5427135678392 ,
218.17085427135677 , 219.79899497487438 , 221.42713567839195 ,
223.05527638190955 , 224.68341708542712 , 226.31155778894473 ,
227.9396984924623 , 229.5678391959799 , 231.19597989949747 ,
232.82412060301507 , 234.45226130653268 , 236.08040201005025 ,
237.70854271356785 , 239.33668341708542 , 240.96482412060303 ,
242.5929648241206 , 244.2211055276382 , 245.84924623115577 ,
247.47738693467338 , 249.10552763819095 , 250.73366834170855 ,
252.36180904522612 , 253.98994974874373 , 255.6180904522613 ,
257.2462311557789 , 258.8743718592965 , 260.50251256281405 ,
262.13065326633165 , 263.75879396984925 , 265.38693467336685 ,
267.0150753768844 , 268.643216080402 , 270.2713567839196 , 271.8994974874372
, 273.52763819095475 , 275.15577889447235 , 276.78391959798995 ,
278.41206030150755 , 280.04020100502515 , 281.6683417085427 ,
283.2964824120603 , 284.9246231155779 , 286.5527638190955 ,
288.18090452261305 , 289.80904522613065 , 291.43718592964825 ,
293.06532663316585 , 294.6934673366834 , 296.321608040201 , 297.9497487437186
, 299.5778894472362 , 301.20603015075375 , 302.83417085427135 ,
304.46231155778895 , 306.09045226130655 , 307.7185929648241 ,
309.3467336683417 , 310.9748743718593 , 312.6030150753769 ,
314.23115577889445 , 315.85929648241205 , 317.48743718592965 ,
319.11557788944725 , 320.7437185929648 , 322.3718592964824 , 324.0 } , 1.0 ,
1.0 , 0.0 , 1.0 , 9.5492965855137211 , - 1.0 , 0.0 , 1.0 , - 1.0 , 0.0 , 1.0
, 1.0 , 0.0 , 0.0 , 0.0 , 0.0 , { 21U , 22U } , { 21U , 22U } } ; void
iihvuu1gpc ( nwcwzcnldx * const jcaapsdo3t , cpxpfpdja3 * localDW ) { if ( (
ssGetSimMode ( jcaapsdo3t -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( (
jcaapsdo3t -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( jcaapsdo3t ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( jcaapsdo3t
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"idx" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "idx" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
 "EvPowertrainController2EM/Energy Management/Hamiltonian computation  and minimization/MATLAB Function"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "idx" ) ; sdiAsyncQueueHandle hForEachParent = ( NULL
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 1 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; if ( slIsRapidAcceleratorSimulating (
) ) { forEachMdlRefDims . nDims = 0 ; } else { forEachMdlRefDims . nDims =
slSigLogGetForEachDimsForRefModel ( jcaapsdo3t -> _mdlRefSfcnS ,
forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , jcaapsdo3t ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> nzzsadtkzq . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , jcaapsdo3t -> DataMapInfo .
mmi . InstanceMap . fullPath , "f05baf9c-cee3-4b7a-b36b-7ea04fb8b4fa" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> nzzsadtkzq . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> nzzsadtkzq . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> nzzsadtkzq . AQHandles , "0.01" ,
0.01 , rtmGetTFinal ( jcaapsdo3t ) ) ; sdiSetSignalRefRate ( localDW ->
nzzsadtkzq . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW -> nzzsadtkzq .
AQHandles , rtmGetTaskTime ( jcaapsdo3t , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> nzzsadtkzq . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> nzzsadtkzq . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> nzzsadtkzq
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( jcaapsdo3t -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( jcaapsdo3t -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( jcaapsdo3t ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( jcaapsdo3t
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"allInf" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "allInf" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars (
 "EvPowertrainController2EM/Energy Management/Hamiltonian computation  and minimization/MATLAB Function"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "allInf" ) ; sdiAsyncQueueHandle hForEachParent = (
NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 2 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( jcaapsdo3t
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , jcaapsdo3t ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> kw0okp1gi1 . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , jcaapsdo3t -> DataMapInfo .
mmi . InstanceMap . fullPath , "16422e53-7c13-4ef3-bf48-1234e7fa9c79" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> kw0okp1gi1 . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> kw0okp1gi1 . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> kw0okp1gi1 . AQHandles , "0.01" ,
0.01 , rtmGetTFinal ( jcaapsdo3t ) ) ; sdiSetSignalRefRate ( localDW ->
kw0okp1gi1 . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW -> kw0okp1gi1 .
AQHandles , rtmGetTaskTime ( jcaapsdo3t , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> kw0okp1gi1 . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> kw0okp1gi1 . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> kw0okp1gi1
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} if ( ( ssGetSimMode ( jcaapsdo3t -> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL )
&& ( ( jcaapsdo3t -> _mdlRefSfcnS ) -> mdlInfo -> rtwgenMode !=
SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if (
slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( jcaapsdo3t ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( jcaapsdo3t
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"PwrDeltaPenalty" ) ; sdiLabelU origSigName = sdiGetLabelFromChars (
"PwrDeltaPenalty" ) ; sdiLabelU propName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU blockPath = sdiGetLabelFromChars (
 "EvPowertrainController2EM/Energy Management/Hamiltonian computation  and minimization/Pwr Rate Limit"
) ; sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiDims forEachMdlRefDims ;
int_T forEachMdlRefDimsArray [ 32 ] ; sdiLabelU sigName =
sdiGetLabelFromChars ( "PwrDeltaPenalty" ) ; sdiAsyncQueueHandle
hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 201 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( jcaapsdo3t
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , jcaapsdo3t ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; } localDW -> dat2im30zm . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , jcaapsdo3t -> DataMapInfo .
mmi . InstanceMap . fullPath , "c5058634-e05a-4ce2-8c1a-a4b6a40b2d1a" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> dat2im30zm . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> dat2im30zm . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> dat2im30zm . AQHandles , "0.01" ,
0.01 , rtmGetTFinal ( jcaapsdo3t ) ) ; sdiSetSignalRefRate ( localDW ->
dat2im30zm . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW -> dat2im30zm .
AQHandles , rtmGetTaskTime ( jcaapsdo3t , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> dat2im30zm . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> dat2im30zm . AQHandles ,
loggedName , origSigName , propName ) ; if ( forEachMdlRefDims . nDims > 0 )
{ sdiAttachForEachIterationToParent ( hForEachParent , localDW -> dat2im30zm
. AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) {
sdiFreeName ( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} } void cqealxsqr5 ( real_T * hn2t2tghq3 , real_T * edcjsjvsbf , real_T *
dcs1zebgq2 , real_T * megpmqfjrl , real_T * imfqdgtkm2 , cpxpfpdja3 * localDW
) { int32_T i ; * hn2t2tghq3 = jtbbqdj1oo . P_91 ; * edcjsjvsbf = jtbbqdj1oo
. P_101 ; * dcs1zebgq2 = jtbbqdj1oo . P_102 ; * megpmqfjrl = jtbbqdj1oo .
P_103 ; * imfqdgtkm2 = jtbbqdj1oo . P_104 ; for ( i = 0 ; i < 201 ; i ++ ) {
localDW -> gimarahrpl [ i ] = jtbbqdj1oo . P_43 ; localDW -> p5p4aaxq51 [ i ]
= jtbbqdj1oo . P_54 ; } localDW -> o5t0xnvnze = jtbbqdj1oo . P_71 ; localDW
-> f12x4t2yjl = jtbbqdj1oo . P_81 ; localDW -> ow2qkdjqul = jtbbqdj1oo . P_85
; } void pbpffdp5dj ( real_T * hn2t2tghq3 , real_T * edcjsjvsbf , real_T *
dcs1zebgq2 , real_T * megpmqfjrl , real_T * imfqdgtkm2 , cpxpfpdja3 * localDW
) { int32_T i ; * hn2t2tghq3 = jtbbqdj1oo . P_91 ; * edcjsjvsbf = jtbbqdj1oo
. P_101 ; * dcs1zebgq2 = jtbbqdj1oo . P_102 ; * megpmqfjrl = jtbbqdj1oo .
P_103 ; * imfqdgtkm2 = jtbbqdj1oo . P_104 ; for ( i = 0 ; i < 201 ; i ++ ) {
localDW -> gimarahrpl [ i ] = jtbbqdj1oo . P_43 ; localDW -> p5p4aaxq51 [ i ]
= jtbbqdj1oo . P_54 ; } localDW -> o5t0xnvnze = jtbbqdj1oo . P_71 ; localDW
-> f12x4t2yjl = jtbbqdj1oo . P_81 ; localDW -> ow2qkdjqul = jtbbqdj1oo . P_85
; } void g3ndjszvz2 ( real_T * hn2t2tghq3 , real_T * edcjsjvsbf , real_T *
dcs1zebgq2 , real_T * megpmqfjrl , real_T * imfqdgtkm2 ) { * hn2t2tghq3 =
jtbbqdj1oo . P_91 ; * edcjsjvsbf = jtbbqdj1oo . P_101 ; * dcs1zebgq2 =
jtbbqdj1oo . P_102 ; * megpmqfjrl = jtbbqdj1oo . P_103 ; * imfqdgtkm2 =
jtbbqdj1oo . P_104 ; } void EvPowertrainController2EM ( nwcwzcnldx * const
jcaapsdo3t , const real_T * dikvztxmir , const real_T l2omu2n5t0 [ 4 ] ,
const real_T * ppjd0yjs10 , const real_T owziimmlv4 [ 2 ] , const real_T *
jx3m2p4tqq , const real_T * co4rfisdxd , const real_T * moz11gxboh , const
real_T * phebrbtq0p , real_T * hn2t2tghq3 , real_T gvnpst4w0k [ 2 ] , real_T
jg1dpl1t23 [ 4 ] , real_T * edcjsjvsbf , real_T * dcs1zebgq2 , real_T *
megpmqfjrl , real_T * imfqdgtkm2 , bwwdwvebxa * localB , cpxpfpdja3 * localDW
) { __m128d tmp ; __m128d tmp_e ; __m128d tmp_i ; __m128d tmp_p ; real_T
ftb1kdq4h2 [ 201 ] ; real_T g0mwm5df5k [ 201 ] ; real_T k254h5xjh4 [ 201 ] ;
real_T muk1vqfd31 [ 201 ] ; real_T n0elh1uepu [ 201 ] ; real_T osxgfgxpvw [
201 ] ; real_T phl0fuhscl [ 201 ] ; real_T fractions [ 2 ] ; real_T
fractions_p [ 2 ] ; real_T a3uluo5bps ; real_T aw124uyuxe ; real_T d1qabht02k
; real_T dapypv1qpv ; real_T ge4oqgc4ec ; real_T go5n3dqbnd ; real_T
h1xius0tzt ; real_T innfdss25c ; real_T jumlkbod2c ; real_T k2w44pj2bl_idx_0
; real_T k2w44pj2bl_idx_1 ; real_T kbgym4ceu0_tmp ; real_T kbgym4ceu0_tmp_p ;
real_T linsk3fb5l ; real_T lscssgbnup_tmp ; real_T m2wx531wey ; real_T
pf021xpgeb ; real_T puaubbvyb3 ; int32_T i ; uint32_T bpIndices [ 2 ] ;
uint32_T bpIndices_p [ 2 ] ; boolean_T fx4o2stz3s [ 201 ] ; boolean_T
bei0lxkywy ; boolean_T exitg1 ; boolean_T gj2wmplzhf ; boolean_T hfvdvqatqv ;
* hn2t2tghq3 = jtbbqdj1oo . P_91 ; kbgym4ceu0_tmp_p = 1.0 /
rtP__PlntWhlLdRadius2f2PassVeh_sldd_ * * ppjd0yjs10 ; puaubbvyb3 = jtbbqdj1oo
. P_93 * kbgym4ceu0_tmp_p ; innfdss25c =
rtP__PlntDiffrntlRatio2f2Drivetrain_sldd_ * puaubbvyb3 ; ge4oqgc4ec =
look1_binlxpw ( innfdss25c , rtP__Spark_MaxTrq_Spd2f2SparkEM_sldd_ ,
rtP__Spark_MaxTrq2f2SparkEM_sldd_ , 28U ) ; if ( ge4oqgc4ec * innfdss25c >=
jtbbqdj1oo . P_95 ) { innfdss25c = jtbbqdj1oo . P_92 ; } else { innfdss25c =
jtbbqdj1oo . P_94 ; } d1qabht02k = rtP__PlntDiffrntl2Ratio2f2Drivetrain_sldd_
* puaubbvyb3 ; puaubbvyb3 = look1_binlxpw ( d1qabht02k ,
rtP__Spark_MaxTrq_Spd2f2SparkEM_sldd_ , rtP__Spark_MaxTrq2f2SparkEM_sldd_ ,
28U ) ; if ( puaubbvyb3 * d1qabht02k >= jtbbqdj1oo . P_98 ) { d1qabht02k =
jtbbqdj1oo . P_96 ; } else { d1qabht02k = jtbbqdj1oo . P_97 ; } if ( (
rtP__PlntDiffrntlEff2f2Drivetrain_sldd_ < 0.0 ) && ( innfdss25c >
muDoubleScalarFloor ( innfdss25c ) ) ) { dapypv1qpv = - muDoubleScalarPower (
- rtP__PlntDiffrntlEff2f2Drivetrain_sldd_ , innfdss25c ) ; } else {
dapypv1qpv = muDoubleScalarPower ( rtP__PlntDiffrntlEff2f2Drivetrain_sldd_ ,
innfdss25c ) ; } if ( ( rtP__PlntDiffrntl2Eff2f2Drivetrain_sldd_ < 0.0 ) && (
d1qabht02k > muDoubleScalarFloor ( d1qabht02k ) ) ) { innfdss25c = -
muDoubleScalarPower ( - rtP__PlntDiffrntl2Eff2f2Drivetrain_sldd_ , d1qabht02k
) ; } else { innfdss25c = muDoubleScalarPower (
rtP__PlntDiffrntl2Eff2f2Drivetrain_sldd_ , d1qabht02k ) ; } d1qabht02k = (
rtP__PlntDiffrntlRatio2f2Drivetrain_sldd_ * ge4oqgc4ec * dapypv1qpv +
rtP__PlntDiffrntl2Ratio2f2Drivetrain_sldd_ * puaubbvyb3 * innfdss25c ) * *
dikvztxmir ; ge4oqgc4ec = jtbbqdj1oo . P_99 * * moz11gxboh ; innfdss25c = *
co4rfisdxd * ge4oqgc4ec ; ge4oqgc4ec = jtbbqdj1oo . P_100 * * phebrbtq0p ;
puaubbvyb3 = * co4rfisdxd * ge4oqgc4ec ; h1xius0tzt = jtbbqdj1oo . P_28 *
owziimmlv4 [ 0 ] ; ge4oqgc4ec = look1_binlcapw ( h1xius0tzt ,
rtP__Spark_MaxTrq_Spd2f2SparkEM_sldd_ , rtP__Spark_MaxTrq2f2SparkEM_sldd_ ,
28U ) ; if ( ge4oqgc4ec * h1xius0tzt >= jtbbqdj1oo . P_29 ) { h1xius0tzt =
jtbbqdj1oo . P_26 ; } else { h1xius0tzt = jtbbqdj1oo . P_27 ; } if ( (
rtP__PlntDiffrntlEff2f2Drivetrain_sldd_ < 0.0 ) && ( h1xius0tzt >
muDoubleScalarFloor ( h1xius0tzt ) ) ) { dapypv1qpv = - muDoubleScalarPower (
- rtP__PlntDiffrntlEff2f2Drivetrain_sldd_ , h1xius0tzt ) ; } else {
dapypv1qpv = muDoubleScalarPower ( rtP__PlntDiffrntlEff2f2Drivetrain_sldd_ ,
h1xius0tzt ) ; } k2w44pj2bl_idx_0 = rtP__PlntDiffrntlRatio2f2Drivetrain_sldd_
* ge4oqgc4ec * dapypv1qpv ; ge4oqgc4ec = look1_binlcapw ( jtbbqdj1oo . P_32 *
owziimmlv4 [ 1 ] , rtP__Spark_MaxTrq_Spd2f2SparkEM_sldd_ ,
rtP__Spark_MaxTrq2f2SparkEM_sldd_ , 28U ) ; if ( ge4oqgc4ec * owziimmlv4 [ 1
] >= jtbbqdj1oo . P_33 ) { h1xius0tzt = jtbbqdj1oo . P_30 ; } else {
h1xius0tzt = jtbbqdj1oo . P_31 ; } if ( (
rtP__PlntDiffrntl2Eff2f2Drivetrain_sldd_ < 0.0 ) && ( h1xius0tzt >
muDoubleScalarFloor ( h1xius0tzt ) ) ) { dapypv1qpv = - muDoubleScalarPower (
- rtP__PlntDiffrntl2Eff2f2Drivetrain_sldd_ , h1xius0tzt ) ; } else {
dapypv1qpv = muDoubleScalarPower ( rtP__PlntDiffrntl2Eff2f2Drivetrain_sldd_ ,
h1xius0tzt ) ; } k2w44pj2bl_idx_1 =
rtP__PlntDiffrntl2Ratio2f2Drivetrain_sldd_ * ge4oqgc4ec * dapypv1qpv ;
kbgym4ceu0_tmp = rtP__PlntBrkKinFricCffFrnt2f2PassVeh_sldd_ *
3.1415926535897931 * 0.0025000000000000005 *
rtP__PlntBrkPadMeanRadiusFrnt2f2PassVeh_sldd_ *
rtP__PlntBrkNumPadsFrnt2f2PassVeh_sldd_ / 4.0 ; ge4oqgc4ec = ( (
rtP__PlntBrkFrntBias2f2PassVeh_sldd_ * l2omu2n5t0 [ 0 ] *
rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ * kbgym4ceu0_tmp +
rtP__PlntBrkFrntBias2f2PassVeh_sldd_ * l2omu2n5t0 [ 1 ] *
rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ * kbgym4ceu0_tmp ) +
rtP__PlntBrkRearBias2f2PassVeh_sldd_ * l2omu2n5t0 [ 2 ] *
rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ * kbgym4ceu0_tmp ) +
rtP__PlntBrkRearBias2f2PassVeh_sldd_ * l2omu2n5t0 [ 3 ] *
rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ * kbgym4ceu0_tmp ; h1xius0tzt =
look1_binlcapw ( * ppjd0yjs10 , rtP__CtrlVcuEvRegenBrkSpdBpt2f2EvVCU_sldd_ ,
rtP__CtrlVcuEvRegenBrkCutOff2f2EvVCU_sldd_ , 1U ) ; pf021xpgeb =
look1_binlcapw ( * jx3m2p4tqq , rtP__CtrlVcuEvSocBpt2f2EvVCU_sldd_ ,
rtP__CtrlVcuEvChrgLmtBpt2f2EvVCU_sldd_ , 10U ) ; if ( * dikvztxmir >
jtbbqdj1oo . P_35 ) { jumlkbod2c = d1qabht02k ; } else { jumlkbod2c =
muDoubleScalarMin ( ge4oqgc4ec , k2w44pj2bl_idx_0 + k2w44pj2bl_idx_1 ) * (
h1xius0tzt * pf021xpgeb ) * jtbbqdj1oo . P_34 ; } for ( i = 0 ; i < 200 ; i
++ ) { if ( jtbbqdj1oo . P_88 [ i ] * owziimmlv4 [ 1 ] >= jtbbqdj1oo . P_38 )
{ dapypv1qpv = jtbbqdj1oo . P_36 ; } else { dapypv1qpv = jtbbqdj1oo . P_37 ;
} if ( ( rtP__PlntDiffrntl2Eff2f2Drivetrain_sldd_ < 0.0 ) && ( dapypv1qpv >
muDoubleScalarFloor ( dapypv1qpv ) ) ) { dapypv1qpv = - muDoubleScalarPower (
- rtP__PlntDiffrntl2Eff2f2Drivetrain_sldd_ , dapypv1qpv ) ; } else {
dapypv1qpv = muDoubleScalarPower ( rtP__PlntDiffrntl2Eff2f2Drivetrain_sldd_ ,
dapypv1qpv ) ; } if ( * dikvztxmir > jtbbqdj1oo . P_40 ) { g0mwm5df5k [ i + 1
] = dapypv1qpv * localB -> k0mam51oco [ i ] ; } else { g0mwm5df5k [ i + 1 ] =
dapypv1qpv * localB -> k0mam51oco [ i ] * jtbbqdj1oo . P_39 ; } } g0mwm5df5k
[ 0 ] = jumlkbod2c ; if ( * co4rfisdxd >= jtbbqdj1oo . P_41 ) { d1qabht02k =
jtbbqdj1oo . P_90 ; } else { d1qabht02k = localB -> l4ap2jycxi ; }
lscssgbnup_tmp = * co4rfisdxd / 0.01 ; hfvdvqatqv = ( * co4rfisdxd >= -
jtbbqdj1oo . P_21 ) ; gj2wmplzhf = ( * co4rfisdxd <= jtbbqdj1oo . P_21 ) ; if
( hfvdvqatqv && gj2wmplzhf ) { d1qabht02k *= 0.02 / ( 3.0 -
muDoubleScalarPower ( lscssgbnup_tmp , 2.0 ) ) ; } else { d1qabht02k = *
co4rfisdxd ; } d1qabht02k = innfdss25c / d1qabht02k ; h1xius0tzt = jtbbqdj1oo
. P_46 * k2w44pj2bl_idx_1 ; pf021xpgeb = jtbbqdj1oo . P_47 * k2w44pj2bl_idx_0
; aw124uyuxe = 1.0 / rtP__PlntDiffrntlRatio2f2Drivetrain_sldd_ ; for ( i = 0
; i < 201 ; i ++ ) { go5n3dqbnd = g0mwm5df5k [ i ] ; if ( go5n3dqbnd >
k2w44pj2bl_idx_1 ) { go5n3dqbnd = k2w44pj2bl_idx_1 ; } else if ( go5n3dqbnd <
h1xius0tzt ) { go5n3dqbnd = h1xius0tzt ; } m2wx531wey = jumlkbod2c -
go5n3dqbnd ; if ( m2wx531wey > k2w44pj2bl_idx_0 ) { linsk3fb5l =
k2w44pj2bl_idx_0 ; } else if ( m2wx531wey < pf021xpgeb ) { linsk3fb5l =
pf021xpgeb ; } else { linsk3fb5l = m2wx531wey ; } if ( localDW -> gimarahrpl
[ i ] * owziimmlv4 [ 0 ] >= jtbbqdj1oo . P_45 ) { dapypv1qpv = jtbbqdj1oo .
P_42 ; } else { dapypv1qpv = jtbbqdj1oo . P_44 ; } if ( (
rtP__PlntDiffrntl2Eff2f2Drivetrain_sldd_ < 0.0 ) && ( dapypv1qpv >
muDoubleScalarFloor ( dapypv1qpv ) ) ) { dapypv1qpv = - muDoubleScalarPower (
- rtP__PlntDiffrntl2Eff2f2Drivetrain_sldd_ , dapypv1qpv ) ; } else {
dapypv1qpv = muDoubleScalarPower ( rtP__PlntDiffrntl2Eff2f2Drivetrain_sldd_ ,
dapypv1qpv ) ; } localB -> omi5vna3a2 [ i ] = 1.0 / dapypv1qpv * ( aw124uyuxe
* linsk3fb5l ) ; k254h5xjh4 [ i ] = owziimmlv4 [ 0 ] * localB -> omi5vna3a2 [
i ] ; muk1vqfd31 [ i ] = muDoubleScalarAbs ( localB -> omi5vna3a2 [ i ] ) ;
n0elh1uepu [ i ] = go5n3dqbnd ; osxgfgxpvw [ i ] = m2wx531wey ; ftb1kdq4h2 [
i ] = linsk3fb5l ; } bpIndices [ 0U ] = plook_linxp ( muDoubleScalarAbs (
jtbbqdj1oo . P_48 * owziimmlv4 [ 0 ] ) ,
rtP__Spark_Spd_BrkPts2f2SparkEM_sldd_ , 21U , & aw124uyuxe , & localDW ->
nkr00y3cul ) ; fractions [ 0U ] = aw124uyuxe ; for ( i = 0 ; i < 201 ; i ++ )
{ bpIndices [ 1U ] = plook_linxp ( muk1vqfd31 [ i ] ,
rtP__Spark_Trq_BrkPts2f2SparkEM_sldd_ , 22U , & aw124uyuxe , & localDW ->
ijcpktnusb [ i ] ) ; fractions [ 1U ] = aw124uyuxe ; muk1vqfd31 [ i ] =
intrp2d_l_pw ( bpIndices , fractions , rtP__Spark_EffMap2f2SparkEM_sldd_ ,
22U ) ; } dapypv1qpv = owziimmlv4 [ 1 ] ; aw124uyuxe = 1.0 /
rtP__PlntDiffrntl2Ratio2f2Drivetrain_sldd_ ; for ( i = 0 ; i < 201 ; i ++ ) {
linsk3fb5l = k254h5xjh4 [ i ] ; go5n3dqbnd = jtbbqdj1oo . P_49 * muk1vqfd31 [
i ] ; if ( linsk3fb5l >= jtbbqdj1oo . P_52 ) { a3uluo5bps = jtbbqdj1oo . P_50
; } else { a3uluo5bps = jtbbqdj1oo . P_51 ; } if ( ( go5n3dqbnd < 0.0 ) && (
a3uluo5bps > muDoubleScalarFloor ( a3uluo5bps ) ) ) { go5n3dqbnd = -
muDoubleScalarPower ( - go5n3dqbnd , a3uluo5bps ) ; } else { go5n3dqbnd =
muDoubleScalarPower ( go5n3dqbnd , a3uluo5bps ) ; } if ( localDW ->
p5p4aaxq51 [ i ] * dapypv1qpv >= jtbbqdj1oo . P_56 ) { a3uluo5bps =
jtbbqdj1oo . P_53 ; } else { a3uluo5bps = jtbbqdj1oo . P_55 ; } if ( (
rtP__PlntDiffrntl2Eff2f2Drivetrain_sldd_ < 0.0 ) && ( a3uluo5bps >
muDoubleScalarFloor ( a3uluo5bps ) ) ) { a3uluo5bps = - muDoubleScalarPower (
- rtP__PlntDiffrntl2Eff2f2Drivetrain_sldd_ , a3uluo5bps ) ; } else {
a3uluo5bps = muDoubleScalarPower ( rtP__PlntDiffrntl2Eff2f2Drivetrain_sldd_ ,
a3uluo5bps ) ; } localB -> me2c4a0ufe [ i ] = 1.0 / a3uluo5bps * ( aw124uyuxe
* n0elh1uepu [ i ] ) ; phl0fuhscl [ i ] = owziimmlv4 [ 1 ] * localB ->
me2c4a0ufe [ i ] ; k254h5xjh4 [ i ] = muDoubleScalarAbs ( localB ->
me2c4a0ufe [ i ] ) ; muk1vqfd31 [ i ] = linsk3fb5l * go5n3dqbnd ; }
bpIndices_p [ 0U ] = plook_linxp ( muDoubleScalarAbs ( jtbbqdj1oo . P_57 *
owziimmlv4 [ 1 ] ) , rtP__Spark_Spd_BrkPts2f2SparkEM_sldd_ , 21U , &
aw124uyuxe , & localDW -> aqeegu2sp2 ) ; fractions_p [ 0U ] = aw124uyuxe ;
for ( i = 0 ; i < 201 ; i ++ ) { bpIndices_p [ 1U ] = plook_linxp (
k254h5xjh4 [ i ] , rtP__Spark_Trq_BrkPts2f2SparkEM_sldd_ , 22U , & aw124uyuxe
, & localDW -> h12xxoxb4m [ i ] ) ; fractions_p [ 1U ] = aw124uyuxe ;
k254h5xjh4 [ i ] = intrp2d_l_pw ( bpIndices_p , fractions_p ,
rtP__Spark_EffMap2f2SparkEM_sldd_ , 22U ) ; } aw124uyuxe = * co4rfisdxd ; if
( aw124uyuxe > jtbbqdj1oo . P_62 ) { aw124uyuxe = jtbbqdj1oo . P_62 ; } else
if ( aw124uyuxe < jtbbqdj1oo . P_63 ) { aw124uyuxe = jtbbqdj1oo . P_63 ; }
for ( i = 0 ; i < 201 ; i ++ ) { a3uluo5bps = phl0fuhscl [ i ] ; linsk3fb5l =
jtbbqdj1oo . P_58 * k254h5xjh4 [ i ] ; if ( a3uluo5bps >= jtbbqdj1oo . P_61 )
{ dapypv1qpv = jtbbqdj1oo . P_59 ; } else { dapypv1qpv = jtbbqdj1oo . P_60 ;
} if ( ( linsk3fb5l < 0.0 ) && ( dapypv1qpv > muDoubleScalarFloor (
dapypv1qpv ) ) ) { linsk3fb5l = - muDoubleScalarPower ( - linsk3fb5l ,
dapypv1qpv ) ; } else { linsk3fb5l = muDoubleScalarPower ( linsk3fb5l ,
dapypv1qpv ) ; } a3uluo5bps = a3uluo5bps * linsk3fb5l + muk1vqfd31 [ i ] ;
phl0fuhscl [ i ] = a3uluo5bps ; k254h5xjh4 [ i ] = a3uluo5bps / aw124uyuxe ;
} if ( * co4rfisdxd >= jtbbqdj1oo . P_64 ) { dapypv1qpv = jtbbqdj1oo . P_89 ;
} else { dapypv1qpv = localB -> lpxvrqvcxm ; } hfvdvqatqv = ( * co4rfisdxd >=
- jtbbqdj1oo . P_20 ) ; gj2wmplzhf = ( * co4rfisdxd <= jtbbqdj1oo . P_20 ) ;
if ( hfvdvqatqv && gj2wmplzhf ) { aw124uyuxe = 0.02 / ( 3.0 -
muDoubleScalarPower ( lscssgbnup_tmp , 2.0 ) ) * dapypv1qpv ; } else {
aw124uyuxe = * co4rfisdxd ; } aw124uyuxe = 1.0 / aw124uyuxe * puaubbvyb3 ;
hfvdvqatqv = ( jumlkbod2c >= jtbbqdj1oo . P_23 ) ; gj2wmplzhf = ( jumlkbod2c
>= jtbbqdj1oo . P_25 ) ; for ( i = 0 ; i < 201 ; i ++ ) { go5n3dqbnd =
g0mwm5df5k [ i ] ; a3uluo5bps = phl0fuhscl [ i ] ; m2wx531wey = osxgfgxpvw [
i ] ; linsk3fb5l = k254h5xjh4 [ i ] ; if ( linsk3fb5l > d1qabht02k ) {
dapypv1qpv = d1qabht02k ; } else if ( linsk3fb5l < aw124uyuxe ) { dapypv1qpv
= aw124uyuxe ; } else { dapypv1qpv = linsk3fb5l ; } muk1vqfd31 [ i ] = *
co4rfisdxd * dapypv1qpv ; bei0lxkywy = ( ( k2w44pj2bl_idx_0 < m2wx531wey ) ||
( m2wx531wey < pf021xpgeb ) || ( ( m2wx531wey < jtbbqdj1oo . P_22 ) &&
hfvdvqatqv ) || ( ( k2w44pj2bl_idx_1 < go5n3dqbnd ) || ( go5n3dqbnd <
h1xius0tzt ) || ( ( go5n3dqbnd < jtbbqdj1oo . P_24 ) && gj2wmplzhf ) ) || ( (
linsk3fb5l > d1qabht02k ) || ( linsk3fb5l < aw124uyuxe ) || ( a3uluo5bps >
innfdss25c ) || ( a3uluo5bps < puaubbvyb3 ) ) ) ; fx4o2stz3s [ i ] =
bei0lxkywy ; phl0fuhscl [ i ] = bei0lxkywy ; g0mwm5df5k [ i ] = jtbbqdj1oo .
P_66 * ( real_T ) bei0lxkywy ; } innfdss25c = kbgym4ceu0_tmp_p ; if (
innfdss25c > jtbbqdj1oo . P_67 ) { innfdss25c = jtbbqdj1oo . P_67 ; } else if
( innfdss25c < jtbbqdj1oo . P_68 ) { innfdss25c = jtbbqdj1oo . P_68 ; } for (
i = 0 ; i < 201 ; i ++ ) { osxgfgxpvw [ i ] = muDoubleScalarAbs ( (
jumlkbod2c - ( ftb1kdq4h2 [ i ] + n0elh1uepu [ i ] ) ) * innfdss25c ) *
jtbbqdj1oo . P_69 * jtbbqdj1oo . P_70 ; } innfdss25c = kbgym4ceu0_tmp_p ;
puaubbvyb3 = innfdss25c * localDW -> o5t0xnvnze ; for ( i = 0 ; i <= 198 ; i
+= 2 ) { tmp_i = _mm_loadu_pd ( & ftb1kdq4h2 [ i ] ) ; tmp_i = _mm_sub_pd (
_mm_mul_pd ( tmp_i , _mm_set1_pd ( innfdss25c ) ) , _mm_set1_pd ( puaubbvyb3
) ) ; _mm_storeu_pd ( & phl0fuhscl [ i ] , _mm_mul_pd ( _mm_mul_pd (
_mm_set1_pd ( jtbbqdj1oo . P_72 ) , _mm_sqrt_pd ( _mm_mul_pd ( tmp_i , tmp_i
) ) ) , _mm_set1_pd ( jtbbqdj1oo . P_73 ) ) ) ; } for ( i = 200 ; i < 201 ; i
++ ) { a3uluo5bps = ftb1kdq4h2 [ i ] * innfdss25c - puaubbvyb3 ; a3uluo5bps
*= a3uluo5bps ; a3uluo5bps = muDoubleScalarSqrt ( a3uluo5bps ) ; phl0fuhscl [
i ] = jtbbqdj1oo . P_72 * a3uluo5bps * jtbbqdj1oo . P_73 ; } hfvdvqatqv =
true ; i = 0 ; exitg1 = false ; while ( ( ! exitg1 ) && ( i < 201 ) ) { if (
! fx4o2stz3s [ i ] ) { hfvdvqatqv = false ; exitg1 = true ; } else { i ++ ; }
} if ( hfvdvqatqv ) { for ( i = 0 ; i <= 198 ; i += 2 ) { tmp_i =
_mm_loadu_pd ( & muk1vqfd31 [ i ] ) ; tmp = _mm_loadu_pd ( & g0mwm5df5k [ i ]
) ; tmp_p = _mm_loadu_pd ( & osxgfgxpvw [ i ] ) ; tmp_e = _mm_loadu_pd ( &
phl0fuhscl [ i ] ) ; _mm_storeu_pd ( & k254h5xjh4 [ i ] , _mm_add_pd (
_mm_add_pd ( _mm_add_pd ( _mm_mul_pd ( _mm_set1_pd ( jtbbqdj1oo . P_65 ) ,
tmp_i ) , tmp ) , tmp_p ) , tmp_e ) ) ; } for ( i = 200 ; i < 201 ; i ++ ) {
k254h5xjh4 [ i ] = ( ( jtbbqdj1oo . P_65 * muk1vqfd31 [ i ] + g0mwm5df5k [ i
] ) + osxgfgxpvw [ i ] ) + phl0fuhscl [ i ] ; } minimum_UoZk5bAH ( k254h5xjh4
, & innfdss25c , & i ) ; innfdss25c = i ; puaubbvyb3 = 1.0 ; } else { for ( i
= 0 ; i <= 198 ; i += 2 ) { tmp_i = _mm_loadu_pd ( & muk1vqfd31 [ i ] ) ; tmp
= _mm_loadu_pd ( & g0mwm5df5k [ i ] ) ; tmp_p = _mm_loadu_pd ( & osxgfgxpvw [
i ] ) ; tmp_e = _mm_loadu_pd ( & phl0fuhscl [ i ] ) ; _mm_storeu_pd ( &
k254h5xjh4 [ i ] , _mm_add_pd ( _mm_add_pd ( _mm_add_pd ( _mm_mul_pd (
_mm_set1_pd ( jtbbqdj1oo . P_65 ) , tmp_i ) , tmp ) , tmp_p ) , tmp_e ) ) ; }
for ( i = 200 ; i < 201 ; i ++ ) { k254h5xjh4 [ i ] = ( ( jtbbqdj1oo . P_65 *
muk1vqfd31 [ i ] + g0mwm5df5k [ i ] ) + osxgfgxpvw [ i ] ) + phl0fuhscl [ i ]
; } minimum_UoZk5bAH ( k254h5xjh4 , & innfdss25c , & i ) ; innfdss25c = i ;
puaubbvyb3 = 0.0 ; } i = ( int32_T ) innfdss25c - 1 ; localB -> ldldocejta =
ftb1kdq4h2 [ i ] ; kbgym4ceu0_tmp_p = n0elh1uepu [ i ] ; d1qabht02k =
kbgym4ceu0_tmp_p + localB -> ldldocejta ; if ( d1qabht02k > jtbbqdj1oo . P_74
) { d1qabht02k = jtbbqdj1oo . P_74 ; } else if ( d1qabht02k < jtbbqdj1oo .
P_75 ) { d1qabht02k = jtbbqdj1oo . P_75 ; } d1qabht02k += ge4oqgc4ec ; if (
d1qabht02k > jtbbqdj1oo . P_76 ) { d1qabht02k = jtbbqdj1oo . P_76 ; } else if
( d1qabht02k < jtbbqdj1oo . P_77 ) { d1qabht02k = jtbbqdj1oo . P_77 ; }
ge4oqgc4ec = d1qabht02k / ( kbgym4ceu0_tmp * 4.0 ) * ( 1.0 /
rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ ) ; if ( ge4oqgc4ec > jtbbqdj1oo . P_78 )
{ ge4oqgc4ec = jtbbqdj1oo . P_78 ; } else if ( ge4oqgc4ec < jtbbqdj1oo . P_79
) { ge4oqgc4ec = jtbbqdj1oo . P_79 ; } jg1dpl1t23 [ 0 ] = ge4oqgc4ec ;
jg1dpl1t23 [ 1 ] = ge4oqgc4ec ; jg1dpl1t23 [ 2 ] = ge4oqgc4ec ; jg1dpl1t23 [
3 ] = ge4oqgc4ec ; if ( localDW -> f12x4t2yjl * owziimmlv4 [ 0 ] >=
jtbbqdj1oo . P_83 ) { ge4oqgc4ec = jtbbqdj1oo . P_80 ; } else { ge4oqgc4ec =
jtbbqdj1oo . P_82 ; } if ( ( rtP__PlntDiffrntlEff2f2Drivetrain_sldd_ < 0.0 )
&& ( ge4oqgc4ec > muDoubleScalarFloor ( ge4oqgc4ec ) ) ) { dapypv1qpv = -
muDoubleScalarPower ( - rtP__PlntDiffrntlEff2f2Drivetrain_sldd_ , ge4oqgc4ec
) ; } else { dapypv1qpv = muDoubleScalarPower (
rtP__PlntDiffrntlEff2f2Drivetrain_sldd_ , ge4oqgc4ec ) ; } localB ->
kmwavumx3s = 1.0 / rtP__PlntDiffrntlRatio2f2Drivetrain_sldd_ * localB ->
ldldocejta * ( 1.0 / dapypv1qpv ) ; gvnpst4w0k [ 0 ] = localB -> kmwavumx3s ;
if ( localDW -> ow2qkdjqul * owziimmlv4 [ 1 ] >= jtbbqdj1oo . P_87 ) {
ge4oqgc4ec = jtbbqdj1oo . P_84 ; } else { ge4oqgc4ec = jtbbqdj1oo . P_86 ; }
if ( ( rtP__PlntDiffrntl2Eff2f2Drivetrain_sldd_ < 0.0 ) && ( ge4oqgc4ec >
muDoubleScalarFloor ( ge4oqgc4ec ) ) ) { dapypv1qpv = - muDoubleScalarPower (
- rtP__PlntDiffrntl2Eff2f2Drivetrain_sldd_ , ge4oqgc4ec ) ; } else {
dapypv1qpv = muDoubleScalarPower ( rtP__PlntDiffrntl2Eff2f2Drivetrain_sldd_ ,
ge4oqgc4ec ) ; } localB -> clx1xit3gw = 1.0 /
rtP__PlntDiffrntl2Ratio2f2Drivetrain_sldd_ * kbgym4ceu0_tmp_p * ( 1.0 /
dapypv1qpv ) ; gvnpst4w0k [ 1 ] = localB -> clx1xit3gw ; { if ( localDW ->
nzzsadtkzq . AQHandles && ssGetLogOutput ( jcaapsdo3t -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> nzzsadtkzq . AQHandles , rtmGetTaskTime (
jcaapsdo3t , 0 ) , ( char * ) & innfdss25c + 0 ) ; } } { if ( localDW ->
kw0okp1gi1 . AQHandles && ssGetLogOutput ( jcaapsdo3t -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> kw0okp1gi1 . AQHandles , rtmGetTaskTime (
jcaapsdo3t , 0 ) , ( char * ) & puaubbvyb3 + 0 ) ; } } { if ( localDW ->
dat2im30zm . AQHandles && ssGetLogOutput ( jcaapsdo3t -> _mdlRefSfcnS ) ) {
sdiWriteSignal ( localDW -> dat2im30zm . AQHandles , rtmGetTaskTime (
jcaapsdo3t , 0 ) , ( char * ) & phl0fuhscl [ 0 ] + 0 ) ; } } * edcjsjvsbf =
jtbbqdj1oo . P_101 ; * dcs1zebgq2 = jtbbqdj1oo . P_102 ; * megpmqfjrl =
jtbbqdj1oo . P_103 ; * imfqdgtkm2 = jtbbqdj1oo . P_104 ; } void
EvPowertrainController2EMTID1 ( bwwdwvebxa * localB ) { int32_T i ; for ( i =
0 ; i <= 198 ; i += 2 ) { _mm_storeu_pd ( & localB -> k0mam51oco [ i ] ,
_mm_mul_pd ( _mm_set1_pd ( rtP__PlntDiffrntl2Ratio2f2Drivetrain_sldd_ ) ,
_mm_loadu_pd ( & jtbbqdj1oo . P_88 [ i ] ) ) ) ; } localB -> lpxvrqvcxm = -
jtbbqdj1oo . P_89 ; localB -> l4ap2jycxi = - jtbbqdj1oo . P_90 ; } void
e3ptmay5nu ( bwwdwvebxa * localB , cpxpfpdja3 * localDW ) { memcpy ( &
localDW -> gimarahrpl [ 0 ] , & localB -> omi5vna3a2 [ 0 ] , 201U * sizeof (
real_T ) ) ; memcpy ( & localDW -> p5p4aaxq51 [ 0 ] , & localB -> me2c4a0ufe
[ 0 ] , 201U * sizeof ( real_T ) ) ; localDW -> o5t0xnvnze = localB ->
ldldocejta ; localDW -> f12x4t2yjl = localB -> kmwavumx3s ; localDW ->
ow2qkdjqul = localB -> clx1xit3gw ; } void g0tpyzslmq ( nwcwzcnldx * const
jcaapsdo3t , cpxpfpdja3 * localDW ) { if ( ( ssGetSimMode ( jcaapsdo3t ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( jcaapsdo3t -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> nzzsadtkzq . AQHandles ) { sdiTerminateStreaming ( & localDW ->
nzzsadtkzq . AQHandles ) ; } } if ( ( ssGetSimMode ( jcaapsdo3t ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( jcaapsdo3t -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> kw0okp1gi1 . AQHandles ) { sdiTerminateStreaming ( & localDW ->
kw0okp1gi1 . AQHandles ) ; } } if ( ( ssGetSimMode ( jcaapsdo3t ->
_mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( jcaapsdo3t -> _mdlRefSfcnS )
-> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if (
localDW -> dat2im30zm . AQHandles ) { sdiTerminateStreaming ( & localDW ->
dat2im30zm . AQHandles ) ; } } } void dfeuqru533 ( nwcwzcnldx * const
jcaapsdo3t ) { if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( jcaapsdo3t -> _mdlRefSfcnS , "EvPowertrainController2EM"
, "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void d443wer2uj (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , nwcwzcnldx
* const jcaapsdo3t , bwwdwvebxa * localB , cpxpfpdja3 * localDW , void *
sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI , const
char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; jtbbqdj1oo . P_62 = rtInf ;
jtbbqdj1oo . P_67 = rtInf ; jtbbqdj1oo . P_75 = rtMinusInf ; jtbbqdj1oo .
P_76 = rtInf ; ( void ) memset ( ( void * ) jcaapsdo3t , 0 , sizeof (
nwcwzcnldx ) ) ; jcaapsdo3t -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0
; jcaapsdo3t -> Timing . mdlref_GlobalTID [ 1 ] = mdlref_TID1 ; jcaapsdo3t ->
_mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( jcaapsdo3t -> _mdlRefSfcnS ,
"EvPowertrainController2EM" , "START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; }
{ int32_T i ; for ( i = 0 ; i < 201 ; i ++ ) { localB -> omi5vna3a2 [ i ] =
0.0 ; } for ( i = 0 ; i < 201 ; i ++ ) { localB -> me2c4a0ufe [ i ] = 0.0 ; }
for ( i = 0 ; i < 200 ; i ++ ) { localB -> k0mam51oco [ i ] = 0.0 ; } localB
-> ldldocejta = 0.0 ; localB -> kmwavumx3s = 0.0 ; localB -> clx1xit3gw = 0.0
; localB -> lpxvrqvcxm = 0.0 ; localB -> l4ap2jycxi = 0.0 ; } ( void ) memset
( ( void * ) localDW , 0 , sizeof ( cpxpfpdja3 ) ) ; { int32_T i ; for ( i =
0 ; i < 201 ; i ++ ) { localDW -> gimarahrpl [ i ] = 0.0 ; } } { int32_T i ;
for ( i = 0 ; i < 201 ; i ++ ) { localDW -> p5p4aaxq51 [ i ] = 0.0 ; } }
localDW -> o5t0xnvnze = 0.0 ; localDW -> f12x4t2yjl = 0.0 ; localDW ->
ow2qkdjqul = 0.0 ; EvPowertrainController2EM_InitializeDataMapInfo (
jcaapsdo3t , localDW , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != (
NULL ) ) && ( rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( *
rt_ParentMMI , rt_ChildMMIIdx , & ( jcaapsdo3t -> DataMapInfo . mmi ) ) ;
rtwCAPI_SetPath ( jcaapsdo3t -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( jcaapsdo3t -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } } void mr_EvPowertrainController2EM_MdlInfoRegFcn (
SimStruct * mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal =
0 ; { boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_EvPowertrainController2EM , 45 ) ; * retVal = 1 ; } static void
mr_EvPowertrainController2EM_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_EvPowertrainController2EM_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) { mxArray *
newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_EvPowertrainController2EM_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_EvPowertrainController2EM_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_EvPowertrainController2EM_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_EvPowertrainController2EM_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_EvPowertrainController2EM_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_EvPowertrainController2EM_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_EvPowertrainController2EM_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void
mr_EvPowertrainController2EM_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_EvPowertrainController2EM_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_EvPowertrainController2EM_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_EvPowertrainController2EM_cacheBitFieldToCellArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal )
; static void mr_EvPowertrainController2EM_cacheBitFieldToCellArrayWithOffset
( mxArray * destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal
) { mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_EvPowertrainController2EM_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_EvPowertrainController2EM_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_EvPowertrainController2EM_GetDWork (
const oaq0dqotmrc * mdlrefDW ) { static const char * ssDWFieldNames [ 3 ] = {
"rtb" , "rtdw" , "NULL->rtzce" , } ; mxArray * ssDW = mxCreateStructMatrix (
1 , 1 , 3 , ssDWFieldNames ) ;
mr_EvPowertrainController2EM_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void
* ) & ( mdlrefDW -> rtb ) , sizeof ( mdlrefDW -> rtb ) ) ; { static const
char * rtdwDataFieldNames [ 11 ] = { "mdlrefDW->rtdw.gimarahrpl" ,
"mdlrefDW->rtdw.p5p4aaxq51" , "mdlrefDW->rtdw.o5t0xnvnze" ,
"mdlrefDW->rtdw.f12x4t2yjl" , "mdlrefDW->rtdw.ow2qkdjqul" ,
"mdlrefDW->rtdw.clhfo1klhy" , "mdlrefDW->rtdw.nkr00y3cul" ,
"mdlrefDW->rtdw.ijcpktnusb" , "mdlrefDW->rtdw.naoldtnz4y" ,
"mdlrefDW->rtdw.aqeegu2sp2" , "mdlrefDW->rtdw.h12xxoxb4m" , } ; mxArray *
rtdwData = mxCreateStructMatrix ( 1 , 1 , 11 , rtdwDataFieldNames ) ;
mr_EvPowertrainController2EM_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const
void * ) & ( mdlrefDW -> rtdw . gimarahrpl ) , sizeof ( mdlrefDW -> rtdw .
gimarahrpl ) ) ; mr_EvPowertrainController2EM_cacheDataAsMxArray ( rtdwData ,
0 , 1 , ( const void * ) & ( mdlrefDW -> rtdw . p5p4aaxq51 ) , sizeof (
mdlrefDW -> rtdw . p5p4aaxq51 ) ) ;
mr_EvPowertrainController2EM_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const
void * ) & ( mdlrefDW -> rtdw . o5t0xnvnze ) , sizeof ( mdlrefDW -> rtdw .
o5t0xnvnze ) ) ; mr_EvPowertrainController2EM_cacheDataAsMxArray ( rtdwData ,
0 , 3 , ( const void * ) & ( mdlrefDW -> rtdw . f12x4t2yjl ) , sizeof (
mdlrefDW -> rtdw . f12x4t2yjl ) ) ;
mr_EvPowertrainController2EM_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const
void * ) & ( mdlrefDW -> rtdw . ow2qkdjqul ) , sizeof ( mdlrefDW -> rtdw .
ow2qkdjqul ) ) ; mr_EvPowertrainController2EM_cacheDataAsMxArray ( rtdwData ,
0 , 5 , ( const void * ) & ( mdlrefDW -> rtdw . clhfo1klhy ) , sizeof (
mdlrefDW -> rtdw . clhfo1klhy ) ) ;
mr_EvPowertrainController2EM_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const
void * ) & ( mdlrefDW -> rtdw . nkr00y3cul ) , sizeof ( mdlrefDW -> rtdw .
nkr00y3cul ) ) ; mr_EvPowertrainController2EM_cacheDataAsMxArray ( rtdwData ,
0 , 7 , ( const void * ) & ( mdlrefDW -> rtdw . ijcpktnusb ) , sizeof (
mdlrefDW -> rtdw . ijcpktnusb ) ) ;
mr_EvPowertrainController2EM_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const
void * ) & ( mdlrefDW -> rtdw . naoldtnz4y ) , sizeof ( mdlrefDW -> rtdw .
naoldtnz4y ) ) ; mr_EvPowertrainController2EM_cacheDataAsMxArray ( rtdwData ,
0 , 9 , ( const void * ) & ( mdlrefDW -> rtdw . aqeegu2sp2 ) , sizeof (
mdlrefDW -> rtdw . aqeegu2sp2 ) ) ;
mr_EvPowertrainController2EM_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const
void * ) & ( mdlrefDW -> rtdw . h12xxoxb4m ) , sizeof ( mdlrefDW -> rtdw .
h12xxoxb4m ) ) ; mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } ( void )
mdlrefDW ; return ssDW ; } void mr_EvPowertrainController2EM_SetDWork (
oaq0dqotmrc * mdlrefDW , const mxArray * ssDW ) { ( void ) ssDW ; ( void )
mdlrefDW ; mr_EvPowertrainController2EM_restoreDataFromMxArray ( ( void * ) &
( mdlrefDW -> rtb ) , ssDW , 0 , 0 , sizeof ( mdlrefDW -> rtb ) ) ; { const
mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_EvPowertrainController2EM_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . gimarahrpl ) , rtdwData , 0 , 0 , sizeof ( mdlrefDW -> rtdw .
gimarahrpl ) ) ; mr_EvPowertrainController2EM_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . p5p4aaxq51 ) , rtdwData , 0 , 1 , sizeof (
mdlrefDW -> rtdw . p5p4aaxq51 ) ) ;
mr_EvPowertrainController2EM_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . o5t0xnvnze ) , rtdwData , 0 , 2 , sizeof ( mdlrefDW -> rtdw .
o5t0xnvnze ) ) ; mr_EvPowertrainController2EM_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . f12x4t2yjl ) , rtdwData , 0 , 3 , sizeof (
mdlrefDW -> rtdw . f12x4t2yjl ) ) ;
mr_EvPowertrainController2EM_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . ow2qkdjqul ) , rtdwData , 0 , 4 , sizeof ( mdlrefDW -> rtdw .
ow2qkdjqul ) ) ; mr_EvPowertrainController2EM_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . clhfo1klhy ) , rtdwData , 0 , 5 , sizeof (
mdlrefDW -> rtdw . clhfo1klhy ) ) ;
mr_EvPowertrainController2EM_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . nkr00y3cul ) , rtdwData , 0 , 6 , sizeof ( mdlrefDW -> rtdw .
nkr00y3cul ) ) ; mr_EvPowertrainController2EM_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . ijcpktnusb ) , rtdwData , 0 , 7 , sizeof (
mdlrefDW -> rtdw . ijcpktnusb ) ) ;
mr_EvPowertrainController2EM_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . naoldtnz4y ) , rtdwData , 0 , 8 , sizeof ( mdlrefDW -> rtdw .
naoldtnz4y ) ) ; mr_EvPowertrainController2EM_restoreDataFromMxArray ( ( void
* ) & ( mdlrefDW -> rtdw . aqeegu2sp2 ) , rtdwData , 0 , 9 , sizeof (
mdlrefDW -> rtdw . aqeegu2sp2 ) ) ;
mr_EvPowertrainController2EM_restoreDataFromMxArray ( ( void * ) & ( mdlrefDW
-> rtdw . h12xxoxb4m ) , rtdwData , 0 , 10 , sizeof ( mdlrefDW -> rtdw .
h12xxoxb4m ) ) ; } } void
mr_EvPowertrainController2EM_RegisterSimStateChecksum ( SimStruct * S ) {
const uint32_T chksum [ 4 ] = { 2115209821U , 1975171234U , 1504640788U ,
2863362826U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"EvPowertrainController2EM" , & chksum [ 0 ] ) ; } mxArray *
mr_EvPowertrainController2EM_GetSimStateDisallowedBlocks ( ) { return ( NULL
) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
