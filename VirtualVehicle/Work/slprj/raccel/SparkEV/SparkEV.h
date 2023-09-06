#ifndef RTW_HEADER_SparkEV_h_
#define RTW_HEADER_SparkEV_h_
#ifndef SparkEV_COMMON_INCLUDES_
#define SparkEV_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#include "nesl_rtw_rtp.h"
#include "SparkEV_c4aff755_1_gateway.h"
#include "nesl_rtw.h"
#endif
#include "SparkEV_types.h"
#include "OpenLoopBraking.h"
#include "DriverPassThrough.h"
#include "EvPowertrainController2EM.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#define MODEL_NAME SparkEV
#define NSAMPLE_TIMES (6) 
#define NINPUTS (0)       
#define NOUTPUTS (0)     
#define NBLOCKIO (121) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (81)   
#elif NCSTATES != 81
#error Invalid specification of NCSTATES defined in compiler command
#endif
#define UseMMIDataLogging
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T motv0pybyv ; } ejm5hae4gj ; typedef struct { int8_T
k44bc5mjbl ; boolean_T o5luu5smdl ; } mgxctp3zid ; typedef struct { real_T
atfdsr0huc ; real_T cgjlckur0q ; real_T ciy0n0fvf4 ; real_T m3s2vgesq4 ;
real_T npj2crdbpe ; real_T b1ipo3flxd ; real_T eabfogqpnn [ 4 ] ; real_T
n2qyp3jaox [ 4 ] ; real_T fbcbuzgnbt [ 4 ] ; real_T brfljizvcb [ 4 ] ; real_T
hk3t1uj3s1 [ 4 ] ; real_T cgvpcvur0e [ 4 ] ; real_T hlacplpmlq [ 4 ] ; real_T
fhodh2srma [ 4 ] ; real_T hzjndpcd5s [ 3 ] ; real_T cbv0fng454 [ 4 ] ; real_T
fjnu3gvsoe ; real_T jckfwcjotl [ 4 ] ; real_T m41crq5gno ; real_T bvt0cxt3h4
; real_T puhbleyldk ; real_T ir1e3eamgb ; real_T clajzw4qwk [ 4 ] ; real_T
jj4uuhdxay ; real_T guhcbwpvv2 [ 4 ] ; real_T hdpouphvxx [ 2 ] ; real_T
k042txegzi [ 4 ] ; real_T ibos4vblha [ 4 ] ; real_T bfwwnvikrt ; real_T
m1nza5khum [ 84 ] ; real_T jbgpjywn3z [ 28 ] ; real_T ogs4ehkbam ; real_T
efiylruo1t ; real_T dqh4oe22xa ; real_T jfa1nbks1u ; real_T o4djdimsdm ;
real_T jpcr1f245w ; real_T axn1d2xjab [ 2 ] ; real_T jqbzi0b53m ; real_T
dttp424sgc ; real_T liyhqocsj3 [ 2 ] ; real_T ivcelveswb ; real_T cyvi2yk4zm
[ 2 ] ; real_T pupxf42qyi [ 2 ] ; real_T c02ood1bjt ; real_T p0b3m4xtnw [ 2 ]
; real_T mytvvfcg1y ; real_T k4zukswayf ; real_T khcqvoneta ; real_T
ffjzw3xpup ; real_T pjeugxnijx ; real_T j5ydyic0d5 ; real_T kvtxbs1osx ;
real_T nk5i1tvfs4 ; real_T hkfoqcrcaa ; real_T fygmwizxbe ; real_T if3ap21cin
; real_T hcj2ikcjyk ; real_T fgkckqf33e ; real_T bbwodlczuz ; real_T
cfykfdt0uw ; real_T gk5c3nru3t ; real_T gtc1bz3bpt ; real_T ll5kvzbeqe ;
real_T dxggtyvppm ; real_T iqd4x5zmdq ; real_T fslb3e0kt4 ; real_T hvofgrdmb4
[ 4 ] ; real_T ckogufqgce ; real_T orjxb10cau ; real_T b02kbm44cq ; real_T
btpqtt4ve2 ; real_T bqypj3eyiq [ 2 ] ; real_T ay4cfinsfw ; real_T dfmae2tshm
; real_T ozcfs2wm5f ; real_T g1n4ddzbcb ; real_T e1oqshled2 [ 2 ] ; real_T
i0f0kaduop [ 4 ] ; real_T oi1l1zfk0l ; real_T az43xb15iv ; real_T iefandv1mx
; real_T jywmdz2pm0 ; real_T o2cjlwehyr ; real_T or4x0ngped ; real_T
gfa1pnn0i5 ; real_T j4h3u5o2s0 ; real_T hvrj3ku4rl ; real_T niktayqu0g ;
real_T n1qbwalijw ; real_T jlncf1nhxu ; real_T dtch5f4az1 ; real_T oqfbznbud3
; real_T b25h3lrxlo [ 2 ] ; real_T eycgm5czdn [ 2 ] ; real_T hiqbgqctfu ;
real_T bwgdzgdu1v ; real_T fhd2qe1xn4 [ 4 ] ; real_T cb3kw2uoce [ 4 ] ;
real_T c5agzst0mq [ 4 ] ; real_T b0ggdb4gbt [ 4 ] ; real_T oxtftcyamo ;
real_T cvaoaiilfy ; real_T bol3toc3da ; real_T dccuh1poqm ; real_T hd5tn4m4oh
; real_T nkjka2mvua ; real_T fyv5hziyzu ; real_T nz1eo0mhjt ; real_T
pvdiosiz3s ; real_T hpa0jnkmab ; real_T ivqnpc0uok ; boolean_T jtrhoigdxv ;
boolean_T fjkq3v532f ; boolean_T ceqisvxe55 ; boolean_T np15oib1kn ;
boolean_T puwtafzry1 ; boolean_T jiym3rqvan ; boolean_T gcn3sxipyq ;
ejm5hae4gj dwnfs4t0ur ; ejm5hae4gj fuob0ddam2h ; } iowqpk3eub ; typedef
struct { real_T mkt5abmauk [ 2 ] ; real_T cz5mx3nggl [ 2 ] ; real_T
lfrgrevnct [ 2 ] ; real_T m3vfpsg3ir [ 2 ] ; real_T cxyhghs0r4 [ 2 ] ; real_T
cxsxj110xc [ 2 ] ; real_T jdazc15ain [ 2 ] ; real_T lnpmbzyfub ; real_T
erhws3aqax ; real_T pz2p5tww5r [ 2 ] ; real_T gcbnlbndyh [ 2 ] ; real_T
acangtzbxh [ 2 ] ; real_T ovftuesk53 [ 2 ] ; real_T dfwjuauqhh ; real_T
dci24ewo3n [ 2 ] ; real_T n20oxvozfr [ 2 ] ; real_T akmdrfe3wk [ 2 ] ; real_T
o5xnow4itx ; real_T eltxhn2ccn ; volatile real_T ho5bua3cli [ 2 ] ; volatile
real_T oqnelch0g4 ; volatile real_T lgs1ws31ib [ 2 ] ; volatile real_T
hgdclbpf45 ; volatile real_T dfvfksmo3u [ 2 ] ; volatile real_T j0t5dz02te ;
volatile real_T d0jgs1xeud ; volatile real_T i5wargkafk ; volatile real_T
noizxcaj0u ; volatile real_T ahz4qvibsf ; volatile real_T gelfja001m ;
volatile real_T im2dnqr2y0 ; volatile real_T h2fppauqjk ; volatile real_T
arunw3enqo ; volatile real_T e2o3ismpif [ 2 ] ; volatile real_T m32a3ep5gt ;
volatile real_T h0gkcev35m ; volatile real_T i5jjfepadp ; real_T hqv0oirn0q ;
real_T lzovmgc1ye [ 4 ] ; real_T ggdayeevtv [ 4 ] ; real_T ipqlah0gj1 [ 4 ] ;
real_T eck5rxblzt ; real_T em1wbmdjow ; real_T jmm4c105ye ; real_T f05boyvyxi
; real_T dukvvezhh4 ; void * lnkfufvfoi ; void * ar3upchjlo ; void *
fyp5vdhzam ; void * kesvfvbvkl ; void * jpcxrlfrcv ; void * obwvm01orf ; void
* d2fpk5tr1x ; void * h5ryejvlpa ; void * lc5aujkip1 ; void * ei3gqxprgb ;
void * itezm0aayj ; struct { void * AQHandles ; } dqdopzr2jv ; struct { void
* AQHandles ; } ate5v5wkj2 ; struct { void * AQHandles ; } cj0ldup5gu ;
struct { void * AQHandles ; } jgeac3tq21 ; struct { void * AQHandles ; }
gynuv0krsy ; struct { void * AQHandles ; } cismfzyk15 ; struct { void *
AQHandles ; } irudyghn3o ; struct { void * AQHandles ; } nikehp134v ; struct
{ void * AQHandles ; } gxisg0jsgi ; struct { void * AQHandles ; } kx02fuyglo
; struct { void * AQHandles ; } ivzabugs2u ; struct { void * LoggedData [ 6 ]
; } cdaylxvgal ; struct { void * LoggedData [ 3 ] ; } ininr2hc2p ; struct {
void * AQHandles ; } fywuj43jfl ; struct { void * AQHandles ; } crmx2s5hqc ;
struct { void * AQHandles ; } ctg1unrwpm ; struct { void * AQHandles ; }
j2bb0dzih4 ; struct { void * AQHandles ; } gjt3j5kgn2 ; struct { void *
AQHandles ; } i01ezsocmb ; struct { void * AQHandles ; } kzgixjdqqa ; struct
{ void * AQHandles ; } ibizqnzh0w ; struct { void * AQHandles ; } aj1d134nmk
; struct { void * AQHandles ; } frybx0mj1e ; struct { void * LoggedData [ 2 ]
; } fbajak152x ; int32_T hndyq1p4da ; uint32_T mhe3tr5m1h ; uint32_T
metkb44aex ; int_T dq4uzmtffx [ 18 ] ; int_T mvmiplzz0c ; int_T kblv4axo3c ;
int_T m0ix3twyqi ; int_T kqqvkns214 ; int_T hg1heoe0ab ; int32_T eez5eb4v4d ;
volatile int8_T johw44ce4i ; volatile int8_T o13svxvssq ; volatile int8_T
hnc4qrwkcy ; volatile int8_T nremqoghxn ; volatile int8_T azwx5q01st ;
volatile int8_T b0kxfxynn3 ; volatile int8_T j0engehfzs ; volatile int8_T
mm5oiqqh5r ; int8_T e2wr3vcmsf ; volatile int8_T pumuolxchk ; volatile int8_T
cfbyafp2yp ; volatile int8_T nu1w3dp3or ; volatile int8_T k0uf3b30j1 ;
volatile int8_T k24rp5jloy ; volatile int8_T by3pjn5fot ; volatile int8_T
pgsfdyvzg3 ; volatile int8_T jepwxk2s4r ; volatile int8_T pijwjimaqv ;
volatile int8_T kw10r0jllu ; uint8_T ldpanoehpw ; uint8_T iyzfufaeyj ;
boolean_T ondrgrykbz ; boolean_T giq1ke1ckr ; boolean_T i4yi1hc3oq ;
boolean_T hxfbtrll0m ; j2diisom34j lofhsz2swn ; am5nrfreizz kqktv02dou ;
oaq0dqotmrc jrvwlq3fuz ; mgxctp3zid dwnfs4t0ur ; mgxctp3zid fuob0ddam2h ; }
cz5yqt3r3x ; typedef struct { real_T h3jcgsxl3g ; real_T nbhyf45pww [ 4 ] ;
real_T gs5cem5nqo ; real_T o44tjxyaqi ; real_T ewdrbcmz1i [ 66 ] ; real_T
bhmvyo1hjl ; real_T iarnkoswlx ; real_T lywux4fr45 ; real_T igaknrnpbi ;
real_T fnlgzvne04 ; real_T blfalouxud ; real_T icfrc3vdyk ; real_T e3mnx1zztt
; } chmgkez0tp ; typedef struct { real_T h3jcgsxl3g ; real_T nbhyf45pww [ 4 ]
; real_T gs5cem5nqo ; real_T o44tjxyaqi ; real_T ewdrbcmz1i [ 66 ] ; real_T
bhmvyo1hjl ; real_T iarnkoswlx ; real_T lywux4fr45 ; real_T igaknrnpbi ;
real_T fnlgzvne04 ; real_T blfalouxud ; real_T icfrc3vdyk ; real_T e3mnx1zztt
; } ihgnjubmvk ; typedef struct { boolean_T h3jcgsxl3g ; boolean_T nbhyf45pww
[ 4 ] ; boolean_T gs5cem5nqo ; boolean_T o44tjxyaqi ; boolean_T ewdrbcmz1i [
66 ] ; boolean_T bhmvyo1hjl ; boolean_T iarnkoswlx ; boolean_T lywux4fr45 ;
boolean_T igaknrnpbi ; boolean_T fnlgzvne04 ; boolean_T blfalouxud ;
boolean_T icfrc3vdyk ; boolean_T e3mnx1zztt ; } csjfowx4jp ; typedef struct {
real_T h3jcgsxl3g ; real_T nbhyf45pww [ 4 ] ; real_T gs5cem5nqo ; real_T
o44tjxyaqi ; real_T ewdrbcmz1i [ 66 ] ; real_T bhmvyo1hjl ; real_T iarnkoswlx
; real_T lywux4fr45 ; real_T igaknrnpbi ; real_T fnlgzvne04 ; real_T
blfalouxud ; real_T icfrc3vdyk ; real_T e3mnx1zztt ; } ij1e2btwbd ; typedef
struct { real_T h3jcgsxl3g ; real_T nbhyf45pww [ 4 ] ; real_T gs5cem5nqo ;
real_T o44tjxyaqi ; real_T ewdrbcmz1i [ 66 ] ; real_T bhmvyo1hjl ; real_T
iarnkoswlx ; real_T lywux4fr45 ; real_T igaknrnpbi ; real_T fnlgzvne04 ;
real_T blfalouxud ; real_T icfrc3vdyk ; real_T e3mnx1zztt ; } ct0khgqqw5 ;
typedef struct { real_T h3jcgsxl3g ; real_T nbhyf45pww [ 4 ] ; real_T
gs5cem5nqo ; real_T o44tjxyaqi ; real_T ewdrbcmz1i [ 66 ] ; real_T bhmvyo1hjl
; real_T iarnkoswlx ; real_T lywux4fr45 ; real_T igaknrnpbi ; real_T
fnlgzvne04 ; real_T blfalouxud ; real_T icfrc3vdyk ; real_T e3mnx1zztt ; }
ih4uf25wks ; typedef struct { real_T c2zwsm0e0h ; real_T epugburpr2 ; real_T
p3t0cxiueq ; real_T ozdtoz32no ; real_T ii5hu15wrz ; real_T ikia5evirm ;
real_T drbje4asyi ; real_T eb0zuycymp ; real_T gsnqsfcwcy ; real_T msl0imim0a
; real_T hbricf5qgg ; real_T ezygymw5d0 ; real_T hpjvqbnqil ; real_T
ohnxbs0war ; real_T jtw4xg4eu4 ; real_T aapsd2lfiq ; real_T h0lpjymf3f ;
real_T atqb0dm15v ; real_T f1oxvk4tah ; real_T nkt40mqyk5 ; real_T mzvvwy2jko
; real_T l4jjin13m4 ; real_T fqh42shget ; real_T it1ks1knk1 ; real_T
hkjecwkoxq ; real_T idcagc5jv4 ; real_T et32jteqej ; real_T jvhl4pwkuk ; }
bor3rs1x4c ; typedef struct { int_T ir [ 43 ] ; int_T jc [ 82 ] ; real_T pr [
43 ] ; } cdlyfvwcyn ; typedef struct { rtwCAPI_ModelMappingInfo mmi ;
rtwCAPI_ModelMappingInfo * childMMI [ 3 ] ; } DataMapInfo ; struct
kjmvupbl2i3_ { real_T SignalHold_IC ; real_T SignalHold_IC_bl0xhwyuht ;
real_T CompareToConstant_const ; real_T CompareToConstant1_const ; real_T
CompareToConstant2_const ; real_T CompareToConstant3_const ; real_T
CompareToConstant4_const ; real_T u1_UpperSat ; real_T u1_LowerSat ; real_T
u0_UpperSat ; real_T u0_LowerSat ; real_T Constant_Value ; real_T
Constant_Value_agm4xpnhd5 ; real_T Integrator1_IC ; real_T
Saturation_UpperSat ; real_T Saturation_LowerSat ; real_T EngSpd_Value ;
real_T Integrator1_IC_aqlk4zxkuo ; real_T Constant3_Value ; real_T
TransferFcn5_A ; real_T TransferFcn5_C ; real_T
Saturation_UpperSat_l3n5201rqk ; real_T Saturation_LowerSat_daadgw5azp ;
real_T FirstOrderHold_IniOut ; real_T FirstOrderHold_ErrTol ; real_T
Gain1_Gain ; real_T Switch_Threshold ; real_T uDLookupTable_tableData [ 1370
] ; real_T uDLookupTable_bp01Data [ 1370 ] ; real_T
Saturation_UpperSat_ncjkk1jucd ; real_T Saturation_LowerSat_g5xnm5rrtb ;
real_T DeadZone_Start ; real_T DeadZone_End ; real_T DeadZone2_Start ; real_T
DeadZone2_End ; real_T EngTrq_Value ; real_T Integrator_IC ; real_T
mtomile_Gain ; real_T Integrator1_IC_b5h1v25iea ; real_T m3toUSGal_Gain ;
real_T Saturation1_UpperSat ; real_T Saturation1_LowerSat ; real_T
Integrator_IC_m2ei5srufe ; real_T mtomi_Gain ; real_T
Saturation_UpperSat_petchupvyj ; real_T Saturation_LowerSat_deqaxwlb4p ;
real_T mtokm_Gain ; real_T Saturation1_UpperSat_jybwri54h2 ; real_T
Saturation1_LowerSat_indvuhds5q ; real_T Integrator1_IC_exhcff4x2k ; real_T
Integrator2_IC ; real_T Integrator3_IC ; real_T Integrator4_IC ; real_T
FuelVolFlw_Value ; real_T ClsdLpFuelMult_Value ; real_T m3pergal_Gain ;
real_T mto100Km_Gain ; real_T Saturation_UpperSat_ffmhckns0u ; real_T
Saturation_LowerSat_git52jcjbr ; real_T Constant_Value_hmxpxo4t1j ; real_T
Constant_Value_io2mkec4u1 ; real_T Constant1_Value ; real_T Constant2_Value ;
real_T Constant_Value_cjhlneuw3m ; real_T Constant_Value_eh1gybqgws ; real_T
Integrator2_IC_fjcqqry33i ; real_T UnitDelay_InitialCondition [ 2 ] ; real_T
HitCrossing_Offset ; real_T FirstOrderHold1_IniOut ; real_T
FirstOrderHold1_ErrTol ; real_T DeadZone_Start_pdp2e4smtt ; real_T
DeadZone_End_h4yw2iuj1m ; real_T Constant_Value_b34nxk3dgo ; real_T
Constant1_Value_pax3psgy31 ; real_T Constant2_Value_by3qj3o4r5 ; real_T
Constant3_Value_le3cdgojsj ; real_T Constant_Value_dwrtimrkpk ; real_T
Constant1_Value_fmqelelhtu ; real_T Constant2_Value_co5abyzjen ; real_T
Constant3_Value_naifcpvkcj ; real_T Constant_Value_dcic5o3pg3 ; real_T
Constant1_Value_dnfmb11brh ; real_T Constant2_Value_hik2ab434v ; real_T
Constant3_Value_jo3m2g12mp ; real_T Constant_Value_mddw5eobxq ; real_T
Constant1_Value_cfyr5n1bli ; real_T Constant2_Value_mfce3nzwnp ; real_T
Constant3_Value_jf3fbvya1l ; real_T Constant_Value_onlw3pqasr ; real_T
Constant1_Value_mromuqkuuw ; real_T Constant2_Value_ozpwuu3brx ; real_T
Constant3_Value_obgnptdz2h ; real_T Constant_Value_ibzc4hj1ld ; real_T
Constant1_Value_gtiaijeqmv ; real_T Constant2_Value_epzlk2keku ; real_T
Constant3_Value_kcpbrp4amn ; real_T Constant_Value_ld5ybk2byx ; real_T
Constant1_Value_iiav0d51jb ; real_T Constant2_Value_fblzzrbbio ; real_T
Constant3_Value_nfapyqt2rs ; real_T Constant_Value_os1jn220hr ; real_T
Constant1_Value_h1skcdg22w ; real_T Constant2_Value_m4pyuelgtu ; real_T
Constant3_Value_f11k3loabn ; real_T TPCO_Value ; real_T TPCO2_Value ; real_T
TPHC_Value ; real_T TPNOx_Value ; real_T Constant3_Value_hsmcqc2qzw ; real_T
DeadZone3_Start ; real_T DeadZone3_End ; real_T ax_Value ; real_T ay_Value ;
real_T az_Value ; real_T USEPAkwhUSgalequivalent_Value ; real_T sperh_Value ;
real_T wperkw_Value ; real_T r_Value ; real_T Constant1_Value_m0radogykp [ 4
] ; real_T Gain_Gain ; real_T Gain1_Gain_b2x0xrdboa ; real_T
Constant_Value_i0lrc5dd0p ; real_T Constant_Value_lmvdjicp50 ; real_T
Constant_Value_gn4owpvnhh ; real_T Constant1_Value_krev4j2l44 ; real_T
Constant2_Value_cv5k10omis ; real_T Constant8_Value ; real_T repeat_Value ;
real_T tFinal_Value ; real_T RTP_52118A8B_vc_Value ; boolean_T
Constant9_Value ; boolean_T Constant6_Value ; boolean_T Constant7_Value ;
boolean_T Constant12_Value ; boolean_T Constant11_Value ; boolean_T
Constant10_Value ; uint8_T GradeSource_CurrentSetting ; } ; extern const char
* RT_MEMORY_ALLOCATION_ERROR ; extern iowqpk3eub iowqpk3eub2 ; extern
chmgkez0tp chmgkez0tpf ; extern cz5yqt3r3x cz5yqt3r3xb ; extern cdlyfvwcyn
cdlyfvwcyng ; extern kjmvupbl2i3 kjmvupbl2i ; extern real_T
rtP__CtrlVcuEvChrgLmtBpt2f2EvVCU_sldd_ [ 11 ] ; extern real_T
rtP__CtrlVcuEvRegenBrkCutOff2f2EvVCU_sldd_ [ 2 ] ; extern real_T
rtP__CtrlVcuEvRegenBrkSpdBpt2f2EvVCU_sldd_ [ 2 ] ; extern real_T
rtP__CtrlVcuEvSocBpt2f2EvVCU_sldd_ [ 11 ] ; extern real_T
rtP__DriverAeroRes2f2Driver_sldd_ ; extern real_T
rtP__DriverDrivelineRes2f2Driver_sldd_ ; extern real_T
rtP__DriverInitialGear2f2Driver_sldd_ ; extern real_T
rtP__DriverPreviewDist2f2Driver_sldd_ ; extern real_T
rtP__DriverRollRes2f2Driver_sldd_ ; extern real_T
rtP__DriverShiftTime2f2Driver_sldd_ ; extern real_T
rtP__DriverTimeConst2f2Driver_sldd_ ; extern real_T
rtP__DriverTractiveForce2f2Driver_sldd_ ; extern real_T
rtP__EnvAirTemp2f2Environment_sldd_ ; extern real_T
rtP__EnvGrvty2f2Environment_sldd_ ; extern real_T
rtP__EnvNomFrictionScaling2f2Environment_sldd_ ; extern real_T
rtP__EnvNominalGrade2f2Environment_sldd_ ; extern real_T
rtP__EnvWindVelX2f2Environment_sldd_ ; extern real_T
rtP__EnvWindVelY2f2Environment_sldd_ ; extern real_T
rtP__EnvWindVelZ2f2Environment_sldd_ ; extern real_T
rtP__PlntBattSocInit2f2BatteryDCDC_sldd_ ; extern real_T
rtP__PlntBattTempInitDegC2f2BatteryDCDC_sldd_ ; extern real_T
rtP__PlntBrkFrntBias2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkKinFricCffFrnt2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkNumPadsFrnt2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkPadMeanRadiusFrnt2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkRearBias2f2PassVeh_sldd_ ; extern real_T
rtP__PlntBrkWc2f2PassVeh_sldd_ ; extern real_T
rtP__PlntDCDCVoltInit2f2BatteryDCDC_sldd_ ; extern real_T
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
rtP__PlntVehDstCGFrntAxl2f2PassVeh_sldd_ ; extern real_T
rtP__PlntVehDstCGRearAxl2f2PassVeh_sldd_ ; extern real_T
rtP__PlntVehMass2f2PassVeh_sldd_ ; extern real_T
rtP__PlntWhlLdRadius2f2PassVeh_sldd_ ; extern real_T
rtP__Spark_MaxTrq2f2SparkEM_sldd_ [ 29 ] ; extern real_T
rtP__Spark_MaxTrq_Spd2f2SparkEM_sldd_ [ 29 ] ; extern mxArray *
mr_SparkEV_GetDWork ( ) ; extern void mr_SparkEV_SetDWork ( const mxArray *
ssDW ) ; extern mxArray * mr_SparkEV_GetSimStateDisallowedBlocks ( ) ; extern
const rtwCAPI_ModelMappingStaticInfo * SparkEV_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern const int_T gblNumToFiles ; extern
const int_T gblNumFrFiles ; extern const int_T gblNumFrWksBlocks ; extern
rtInportTUtable * gblInportTUtables ; extern const char * gblInportFileName ;
extern const int_T gblNumRootInportBlks ; extern const int_T
gblNumModelInputs ; extern const int_T gblInportDataTypeIdx [ ] ; extern
const int_T gblInportDims [ ] ; extern const int_T gblInportComplex [ ] ;
extern const int_T gblInportInterpoFlag [ ] ; extern const int_T
gblInportContinuous [ ] ; extern const int_T gblParameterTuningTid ; extern
DataMapInfo * rt_dataMapInfoPtr ; extern rtwCAPI_ModelMappingInfo *
rt_modelMapInfoPtr ; void MdlOutputs ( int_T tid ) ; void
MdlOutputsParameterSampleTime ( int_T tid ) ; void MdlUpdate ( int_T tid ) ;
void MdlTerminate ( void ) ; void MdlInitializeSizes ( void ) ; void
MdlInitializeSampleTimes ( void ) ; SimStruct * raccel_register_model (
ssExecutionInfo * executionInfo ) ;
#endif
