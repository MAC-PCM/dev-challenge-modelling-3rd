#include "SparkEV.h"
#include "rtwtypes.h"
#include "SparkEV_private.h"
#include "mwmathutil.h"
#include <string.h>
#include <stddef.h>
#include "recomputeBlockDiag_gs6kEciD.h"
#include "xhseqr_H6eRN0gF.h"
#include "norm_CF3EtBNC.h"
#include "log2_DgASG5hL.h"
#include <math.h>
#include "rt_logging_mmi.h"
#include "SparkEV_capi.h"
#include "look1_pbinlcapw.h"
#include "OpenLoopBraking.h"
#include "DriverPassThrough.h"
#include "EvPowertrainController2EM.h"
#include "SparkEV_dt.h"
extern void * CreateDiagnosticAsVoidPtr_wrapper ( const char * id , int nargs
, ... ) ; RTWExtModeInfo * gblRTWExtModeInfo = NULL ; void
raccelForceExtModeShutdown ( boolean_T extModeStartPktReceived ) { if ( !
extModeStartPktReceived ) { boolean_T stopRequested = false ;
rtExtModeWaitForStartPkt ( gblRTWExtModeInfo , 5 , & stopRequested ) ; }
rtExtModeShutdown ( 5 ) ; }
#include "slsv_diagnostic_codegen_c_api.h"
#include "slsa_sim_engine.h"
const int_T gblNumToFiles = 0 ; const int_T gblNumFrFiles = 0 ; const int_T
gblNumFrWksBlocks = 0 ;
#ifdef RSIM_WITH_SOLVER_MULTITASKING
boolean_T gbl_raccel_isMultitasking = 1 ;
#else
boolean_T gbl_raccel_isMultitasking = 0 ;
#endif
boolean_T gbl_raccel_tid01eq = 0 ; int_T gbl_raccel_NumST = 6 ; const char_T
* gbl_raccel_Version = "9.8 (R2022b) 13-May-2022" ; void
raccel_setup_MMIStateLog ( SimStruct * S ) {
#ifdef UseMMIDataLogging
rt_FillStateSigInfoFromMMI ( ssGetRTWLogInfo ( S ) , & ssGetErrorStatus ( S )
) ;
#else
UNUSED_PARAMETER ( S ) ;
#endif
} static DataMapInfo rt_dataMapInfo ; DataMapInfo * rt_dataMapInfoPtr = &
rt_dataMapInfo ; rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr = & (
rt_dataMapInfo . mmi ) ; const int_T gblNumRootInportBlks = 0 ; const int_T
gblNumModelInputs = 0 ; extern const char * gblInportFileName ; extern
rtInportTUtable * gblInportTUtables ; const int_T gblInportDataTypeIdx [ ] =
{ - 1 } ; const int_T gblInportDims [ ] = { - 1 } ; const int_T
gblInportComplex [ ] = { - 1 } ; const int_T gblInportInterpoFlag [ ] = { - 1
} ; const int_T gblInportContinuous [ ] = { - 1 } ; int_T enableFcnCallFlag [
] = { 1 , 1 , 1 , 1 , 1 , 1 } ; const char *
raccelLoadInputsAndAperiodicHitTimes ( SimStruct * S , const char *
inportFileName , int * matFileFormat ) { return rt_RAccelReadInportsMatFile (
S , inportFileName , matFileFormat ) ; }
#include "simstruc.h"
#include "fixedpoint.h"
#include "slsa_sim_engine.h"
#include "simtarget/slSimTgtSLExecSimBridge.h"
#define bvcpbrrjdc (2U)
#define hsey4nk0xq ((uint8_T)0U)
#define mtch1eyo22 (1U)
#define nz1er2u5yq (3U)
iowqpk3eub iowqpk3eub2 ; chmgkez0tp chmgkez0tpf ; cz5yqt3r3x cz5yqt3r3xb ;
cdlyfvwcyn cdlyfvwcyng ; static SimStruct model_S ; SimStruct * const rtS = &
model_S ; static void oov4ikdzbn ( const real_T a [ 4 ] , real_T b , real_T c
[ 4 ] ) ; static boolean_T af5cauz3wt ( const real_T x [ 4 ] ) ; static void
fwa4u0lygc ( const real_T a [ 4 ] , real_T b , real_T c [ 4 ] ) ; static void
ao4ajfc0ke ( const real_T A [ 4 ] , real_T A2 [ 4 ] , real_T A4 [ 4 ] ,
real_T A6 [ 4 ] , int32_T * m , real_T * s ) ; static void hyrmdcu10r ( const
real_T A [ 4 ] , real_T V [ 4 ] , real_T T [ 4 ] ) ; static void f5zhbt2mc4 (
real_T A [ 4 ] , real_T F [ 4 ] ) ; void kkt5tjhslu ( real_T rtp_IC ,
ejm5hae4gj * localB ) { localB -> motv0pybyv = rtp_IC ; } void aup0omwjn5 (
mgxctp3zid * localDW ) { localDW -> o5luu5smdl = false ; } void bnlff5ayna (
SimStruct * rtS_p , mgxctp3zid * localDW ) { localDW -> o5luu5smdl = false ;
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_p ) ; } void fuob0ddam2 (
SimStruct * rtS_i , boolean_T l0blttywkq , real_T epomb1gr42 , ejm5hae4gj *
localB , mgxctp3zid * localDW ) { if ( ssIsSampleHit ( rtS_i , 1 , 0 ) &&
ssIsModeUpdateTimeStep ( rtS_i ) ) { if ( l0blttywkq ) { if ( ! localDW ->
o5luu5smdl ) { if ( ssGetTaskTime ( rtS_i , 1 ) != ssGetTStart ( rtS_i ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_i ) ; } localDW ->
o5luu5smdl = true ; } } else if ( localDW -> o5luu5smdl ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS_i ) ; aup0omwjn5 ( localDW )
; } } if ( localDW -> o5luu5smdl ) { localB -> motv0pybyv = epomb1gr42 ; if (
ssIsModeUpdateTimeStep ( rtS_i ) ) { srUpdateBC ( localDW -> k44bc5mjbl ) ; }
} } static void oov4ikdzbn ( const real_T a [ 4 ] , real_T b , real_T c [ 4 ]
) { real_T aBuffer [ 4 ] ; real_T b_a [ 4 ] ; real_T cBuffer [ 4 ] ; real_T
cBuffer_e [ 4 ] ; real_T cBuffer_p [ 4 ] ; real_T y ; int32_T b_n ; int32_T n
; int32_T nb ; int32_T nbitson ; boolean_T aBufferInUse ; boolean_T
cBufferInUse ; boolean_T first ; if ( b == b ) { b_a [ 0 ] = a [ 0 ] ; b_a [
1 ] = a [ 1 ] ; b_a [ 2 ] = a [ 2 ] ; b_a [ 3 ] = a [ 3 ] ; y =
muDoubleScalarAbs ( b ) ; n = ( int32_T ) muDoubleScalarAbs ( b ) ; b_n = (
int32_T ) y ; nbitson = 0 ; nb = - 2 ; while ( b_n > 0 ) { nb ++ ; if ( ( (
uint32_T ) b_n & 1U ) != 0U ) { nbitson ++ ; } b_n >>= 1 ; } if ( ( int32_T )
y <= 2 ) { if ( b == 2.0 ) { for ( b_n = 0 ; b_n < 2 ; b_n ++ ) { c [ b_n <<
1 ] = 0.0 ; c [ b_n << 1 ] += a [ b_n << 1 ] * a [ 0 ] ; c [ b_n << 1 ] += a
[ ( b_n << 1 ) + 1 ] * a [ 2 ] ; c [ ( b_n << 1 ) + 1 ] = 0.0 ; c [ ( b_n <<
1 ) + 1 ] += a [ b_n << 1 ] * a [ 1 ] ; c [ ( b_n << 1 ) + 1 ] += a [ ( b_n
<< 1 ) + 1 ] * a [ 3 ] ; } } else if ( b == 1.0 ) { c [ 0 ] = a [ 0 ] ; c [ 1
] = a [ 1 ] ; c [ 2 ] = a [ 2 ] ; c [ 3 ] = a [ 3 ] ; } else { first = false
; if ( muDoubleScalarIsNaN ( a [ 0 ] ) || muDoubleScalarIsNaN ( a [ 1 ] ) ) {
first = true ; } if ( first || muDoubleScalarIsNaN ( a [ 2 ] ) ) { first =
true ; } if ( first || muDoubleScalarIsNaN ( a [ 3 ] ) ) { first = true ; }
if ( first ) { c [ 0 ] = ( rtNaN ) ; c [ 1 ] = ( rtNaN ) ; c [ 2 ] = ( rtNaN
) ; c [ 3 ] = ( rtNaN ) ; } else { c [ 1 ] = 0.0 ; c [ 2 ] = 0.0 ; c [ 0 ] =
1.0 ; c [ 3 ] = 1.0 ; } } } else { first = true ; aBufferInUse = false ;
cBufferInUse = ( ( ( uint32_T ) nbitson & 1U ) == 0U ) ; for ( nbitson = 0 ;
nbitson <= nb ; nbitson ++ ) { if ( ( ( uint32_T ) n & 1U ) != 0U ) { if (
first ) { first = false ; if ( cBufferInUse ) { if ( aBufferInUse ) { cBuffer
[ 0 ] = aBuffer [ 0 ] ; cBuffer [ 1 ] = aBuffer [ 1 ] ; cBuffer [ 2 ] =
aBuffer [ 2 ] ; cBuffer [ 3 ] = aBuffer [ 3 ] ; } else { cBuffer [ 0 ] = b_a
[ 0 ] ; cBuffer [ 1 ] = b_a [ 1 ] ; cBuffer [ 2 ] = b_a [ 2 ] ; cBuffer [ 3 ]
= b_a [ 3 ] ; } } else if ( aBufferInUse ) { c [ 0 ] = aBuffer [ 0 ] ; c [ 1
] = aBuffer [ 1 ] ; c [ 2 ] = aBuffer [ 2 ] ; c [ 3 ] = aBuffer [ 3 ] ; }
else { c [ 0 ] = b_a [ 0 ] ; c [ 1 ] = b_a [ 1 ] ; c [ 2 ] = b_a [ 2 ] ; c [
3 ] = b_a [ 3 ] ; } } else { if ( aBufferInUse ) { if ( cBufferInUse ) { for
( b_n = 0 ; b_n < 2 ; b_n ++ ) { c [ b_n ] = 0.0 ; c [ b_n ] += cBuffer [ b_n
] * aBuffer [ 0 ] ; c [ b_n ] += cBuffer [ b_n + 2 ] * aBuffer [ 1 ] ; c [
b_n + 2 ] = 0.0 ; c [ b_n + 2 ] += cBuffer [ b_n ] * aBuffer [ 2 ] ; c [ b_n
+ 2 ] += cBuffer [ b_n + 2 ] * aBuffer [ 3 ] ; } } else { for ( b_n = 0 ; b_n
< 2 ; b_n ++ ) { cBuffer [ b_n ] = 0.0 ; cBuffer [ b_n ] += c [ b_n ] *
aBuffer [ 0 ] ; cBuffer [ b_n ] += c [ b_n + 2 ] * aBuffer [ 1 ] ; cBuffer [
b_n + 2 ] = 0.0 ; cBuffer [ b_n + 2 ] += c [ b_n ] * aBuffer [ 2 ] ; cBuffer
[ b_n + 2 ] += c [ b_n + 2 ] * aBuffer [ 3 ] ; } } } else if ( cBufferInUse )
{ for ( b_n = 0 ; b_n < 2 ; b_n ++ ) { c [ b_n ] = 0.0 ; c [ b_n ] += cBuffer
[ b_n ] * b_a [ 0 ] ; c [ b_n ] += cBuffer [ b_n + 2 ] * b_a [ 1 ] ; c [ b_n
+ 2 ] = 0.0 ; c [ b_n + 2 ] += cBuffer [ b_n ] * b_a [ 2 ] ; c [ b_n + 2 ] +=
cBuffer [ b_n + 2 ] * b_a [ 3 ] ; } } else { for ( b_n = 0 ; b_n < 2 ; b_n ++
) { cBuffer [ b_n ] = 0.0 ; cBuffer [ b_n ] += c [ b_n ] * b_a [ 0 ] ;
cBuffer [ b_n ] += c [ b_n + 2 ] * b_a [ 1 ] ; cBuffer [ b_n + 2 ] = 0.0 ;
cBuffer [ b_n + 2 ] += c [ b_n ] * b_a [ 2 ] ; cBuffer [ b_n + 2 ] += c [ b_n
+ 2 ] * b_a [ 3 ] ; } } cBufferInUse = ! cBufferInUse ; } } n >>= 1 ; if (
aBufferInUse ) { for ( b_n = 0 ; b_n < 2 ; b_n ++ ) { b_a [ b_n ] = 0.0 ; b_a
[ b_n ] += aBuffer [ b_n ] * aBuffer [ 0 ] ; b_a [ b_n ] += aBuffer [ b_n + 2
] * aBuffer [ 1 ] ; b_a [ b_n + 2 ] = 0.0 ; b_a [ b_n + 2 ] += aBuffer [ b_n
] * aBuffer [ 2 ] ; b_a [ b_n + 2 ] += aBuffer [ b_n + 2 ] * aBuffer [ 3 ] ;
} } else { for ( b_n = 0 ; b_n < 2 ; b_n ++ ) { aBuffer [ b_n ] = 0.0 ;
aBuffer [ b_n ] += b_a [ b_n ] * b_a [ 0 ] ; aBuffer [ b_n ] += b_a [ b_n + 2
] * b_a [ 1 ] ; aBuffer [ b_n + 2 ] = 0.0 ; aBuffer [ b_n + 2 ] += b_a [ b_n
] * b_a [ 2 ] ; aBuffer [ b_n + 2 ] += b_a [ b_n + 2 ] * b_a [ 3 ] ; } }
aBufferInUse = ! aBufferInUse ; } for ( b_n = 0 ; b_n < 2 ; b_n ++ ) {
cBuffer_p [ b_n << 1 ] = 0.0 ; cBuffer_e [ b_n << 1 ] = 0.0 ; cBuffer_p [ b_n
<< 1 ] += aBuffer [ b_n << 1 ] * cBuffer [ 0 ] ; cBuffer_e [ b_n << 1 ] +=
b_a [ b_n << 1 ] * cBuffer [ 0 ] ; cBuffer_p [ b_n << 1 ] += aBuffer [ ( b_n
<< 1 ) + 1 ] * cBuffer [ 2 ] ; cBuffer_e [ b_n << 1 ] += b_a [ ( b_n << 1 ) +
1 ] * cBuffer [ 2 ] ; cBuffer_p [ ( b_n << 1 ) + 1 ] = 0.0 ; cBuffer_e [ (
b_n << 1 ) + 1 ] = 0.0 ; cBuffer_p [ ( b_n << 1 ) + 1 ] += aBuffer [ b_n << 1
] * cBuffer [ 1 ] ; cBuffer_e [ ( b_n << 1 ) + 1 ] += b_a [ b_n << 1 ] *
cBuffer [ 1 ] ; cBuffer_p [ ( b_n << 1 ) + 1 ] += aBuffer [ ( b_n << 1 ) + 1
] * cBuffer [ 3 ] ; cBuffer_e [ ( b_n << 1 ) + 1 ] += b_a [ ( b_n << 1 ) + 1
] * cBuffer [ 3 ] ; } if ( first ) { if ( aBufferInUse ) { c [ 0 ] = aBuffer
[ 0 ] ; c [ 1 ] = aBuffer [ 1 ] ; c [ 2 ] = aBuffer [ 2 ] ; c [ 3 ] = aBuffer
[ 3 ] ; } else { c [ 0 ] = b_a [ 0 ] ; c [ 1 ] = b_a [ 1 ] ; c [ 2 ] = b_a [
2 ] ; c [ 3 ] = b_a [ 3 ] ; } } else if ( aBufferInUse ) { c [ 0 ] =
cBuffer_p [ 0 ] ; c [ 1 ] = cBuffer_p [ 1 ] ; c [ 2 ] = cBuffer_p [ 2 ] ; c [
3 ] = cBuffer_p [ 3 ] ; } else { c [ 0 ] = cBuffer_e [ 0 ] ; c [ 1 ] =
cBuffer_e [ 1 ] ; c [ 2 ] = cBuffer_e [ 2 ] ; c [ 3 ] = cBuffer_e [ 3 ] ; } }
} } static boolean_T af5cauz3wt ( const real_T x [ 4 ] ) { boolean_T b_p ;
b_p = true ; if ( muDoubleScalarIsInf ( x [ 0 ] ) || muDoubleScalarIsNaN ( x
[ 0 ] ) ) { b_p = false ; } if ( b_p && ( ( ! muDoubleScalarIsInf ( x [ 1 ] )
) && ( ! muDoubleScalarIsNaN ( x [ 1 ] ) ) ) ) { } else { b_p = false ; } if
( b_p && ( ( ! muDoubleScalarIsInf ( x [ 2 ] ) ) && ( ! muDoubleScalarIsNaN (
x [ 2 ] ) ) ) ) { } else { b_p = false ; } if ( b_p && ( ( !
muDoubleScalarIsInf ( x [ 3 ] ) ) && ( ! muDoubleScalarIsNaN ( x [ 3 ] ) ) )
) { } else { b_p = false ; } return ! b_p ; } static void fwa4u0lygc ( const
real_T a [ 4 ] , real_T b , real_T c [ 4 ] ) { real_T aBuffer [ 4 ] ; real_T
b_a [ 4 ] ; real_T cBuffer [ 4 ] ; real_T cBuffer_e [ 4 ] ; real_T cBuffer_p
[ 4 ] ; real_T e ; real_T ed2 ; int32_T b_n ; int32_T exitg1 ; int32_T n ;
int32_T nb ; int32_T nbitson ; boolean_T aBufferInUse ; boolean_T
cBufferInUse ; boolean_T firstmult ; if ( muDoubleScalarAbs ( b ) <=
2.147483647E+9 ) { b_a [ 0 ] = a [ 0 ] ; b_a [ 1 ] = a [ 1 ] ; b_a [ 2 ] = a
[ 2 ] ; b_a [ 3 ] = a [ 3 ] ; e = muDoubleScalarAbs ( b ) ; n = ( int32_T )
muDoubleScalarAbs ( b ) ; b_n = ( int32_T ) e ; nbitson = 0 ; nb = - 2 ;
while ( b_n > 0 ) { nb ++ ; if ( ( ( uint32_T ) b_n & 1U ) != 0U ) { nbitson
++ ; } b_n >>= 1 ; } if ( ( int32_T ) e <= 2 ) { if ( b == 2.0 ) { for ( b_n
= 0 ; b_n < 2 ; b_n ++ ) { c [ b_n << 1 ] = 0.0 ; c [ b_n << 1 ] += a [ b_n
<< 1 ] * a [ 0 ] ; c [ b_n << 1 ] += a [ ( b_n << 1 ) + 1 ] * a [ 2 ] ; c [ (
b_n << 1 ) + 1 ] = 0.0 ; c [ ( b_n << 1 ) + 1 ] += a [ b_n << 1 ] * a [ 1 ] ;
c [ ( b_n << 1 ) + 1 ] += a [ ( b_n << 1 ) + 1 ] * a [ 3 ] ; } } else {
firstmult = false ; if ( muDoubleScalarIsNaN ( a [ 0 ] ) ||
muDoubleScalarIsNaN ( a [ 1 ] ) ) { firstmult = true ; } if ( firstmult ||
muDoubleScalarIsNaN ( a [ 2 ] ) ) { firstmult = true ; } if ( firstmult ||
muDoubleScalarIsNaN ( a [ 3 ] ) ) { firstmult = true ; } if ( firstmult ) { c
[ 0 ] = ( rtNaN ) ; c [ 1 ] = ( rtNaN ) ; c [ 2 ] = ( rtNaN ) ; c [ 3 ] = (
rtNaN ) ; } else { c [ 1 ] = 0.0 ; c [ 2 ] = 0.0 ; c [ 0 ] = 1.0 ; c [ 3 ] =
1.0 ; } } } else { firstmult = true ; aBufferInUse = false ; cBufferInUse = (
( ( uint32_T ) nbitson & 1U ) == 0U ) ; for ( nbitson = 0 ; nbitson <= nb ;
nbitson ++ ) { if ( ( ( uint32_T ) n & 1U ) != 0U ) { if ( firstmult ) {
firstmult = false ; if ( cBufferInUse ) { if ( aBufferInUse ) { cBuffer [ 0 ]
= aBuffer [ 0 ] ; cBuffer [ 1 ] = aBuffer [ 1 ] ; cBuffer [ 2 ] = aBuffer [ 2
] ; cBuffer [ 3 ] = aBuffer [ 3 ] ; } else { cBuffer [ 0 ] = b_a [ 0 ] ;
cBuffer [ 1 ] = b_a [ 1 ] ; cBuffer [ 2 ] = b_a [ 2 ] ; cBuffer [ 3 ] = b_a [
3 ] ; } } else if ( aBufferInUse ) { c [ 0 ] = aBuffer [ 0 ] ; c [ 1 ] =
aBuffer [ 1 ] ; c [ 2 ] = aBuffer [ 2 ] ; c [ 3 ] = aBuffer [ 3 ] ; } else {
c [ 0 ] = b_a [ 0 ] ; c [ 1 ] = b_a [ 1 ] ; c [ 2 ] = b_a [ 2 ] ; c [ 3 ] =
b_a [ 3 ] ; } } else { if ( aBufferInUse ) { if ( cBufferInUse ) { for ( b_n
= 0 ; b_n < 2 ; b_n ++ ) { c [ b_n ] = 0.0 ; c [ b_n ] += cBuffer [ b_n ] *
aBuffer [ 0 ] ; c [ b_n ] += cBuffer [ b_n + 2 ] * aBuffer [ 1 ] ; c [ b_n +
2 ] = 0.0 ; c [ b_n + 2 ] += cBuffer [ b_n ] * aBuffer [ 2 ] ; c [ b_n + 2 ]
+= cBuffer [ b_n + 2 ] * aBuffer [ 3 ] ; } } else { for ( b_n = 0 ; b_n < 2 ;
b_n ++ ) { cBuffer [ b_n ] = 0.0 ; cBuffer [ b_n ] += c [ b_n ] * aBuffer [ 0
] ; cBuffer [ b_n ] += c [ b_n + 2 ] * aBuffer [ 1 ] ; cBuffer [ b_n + 2 ] =
0.0 ; cBuffer [ b_n + 2 ] += c [ b_n ] * aBuffer [ 2 ] ; cBuffer [ b_n + 2 ]
+= c [ b_n + 2 ] * aBuffer [ 3 ] ; } } } else if ( cBufferInUse ) { for ( b_n
= 0 ; b_n < 2 ; b_n ++ ) { c [ b_n ] = 0.0 ; c [ b_n ] += cBuffer [ b_n ] *
b_a [ 0 ] ; c [ b_n ] += cBuffer [ b_n + 2 ] * b_a [ 1 ] ; c [ b_n + 2 ] =
0.0 ; c [ b_n + 2 ] += cBuffer [ b_n ] * b_a [ 2 ] ; c [ b_n + 2 ] += cBuffer
[ b_n + 2 ] * b_a [ 3 ] ; } } else { for ( b_n = 0 ; b_n < 2 ; b_n ++ ) {
cBuffer [ b_n ] = 0.0 ; cBuffer [ b_n ] += c [ b_n ] * b_a [ 0 ] ; cBuffer [
b_n ] += c [ b_n + 2 ] * b_a [ 1 ] ; cBuffer [ b_n + 2 ] = 0.0 ; cBuffer [
b_n + 2 ] += c [ b_n ] * b_a [ 2 ] ; cBuffer [ b_n + 2 ] += c [ b_n + 2 ] *
b_a [ 3 ] ; } } cBufferInUse = ! cBufferInUse ; } } n >>= 1 ; if (
aBufferInUse ) { for ( b_n = 0 ; b_n < 2 ; b_n ++ ) { b_a [ b_n ] = 0.0 ; b_a
[ b_n ] += aBuffer [ b_n ] * aBuffer [ 0 ] ; b_a [ b_n ] += aBuffer [ b_n + 2
] * aBuffer [ 1 ] ; b_a [ b_n + 2 ] = 0.0 ; b_a [ b_n + 2 ] += aBuffer [ b_n
] * aBuffer [ 2 ] ; b_a [ b_n + 2 ] += aBuffer [ b_n + 2 ] * aBuffer [ 3 ] ;
} } else { for ( b_n = 0 ; b_n < 2 ; b_n ++ ) { aBuffer [ b_n ] = 0.0 ;
aBuffer [ b_n ] += b_a [ b_n ] * b_a [ 0 ] ; aBuffer [ b_n ] += b_a [ b_n + 2
] * b_a [ 1 ] ; aBuffer [ b_n + 2 ] = 0.0 ; aBuffer [ b_n + 2 ] += b_a [ b_n
] * b_a [ 2 ] ; aBuffer [ b_n + 2 ] += b_a [ b_n + 2 ] * b_a [ 3 ] ; } }
aBufferInUse = ! aBufferInUse ; } for ( b_n = 0 ; b_n < 2 ; b_n ++ ) {
cBuffer_p [ b_n << 1 ] = 0.0 ; cBuffer_e [ b_n << 1 ] = 0.0 ; cBuffer_p [ b_n
<< 1 ] += aBuffer [ b_n << 1 ] * cBuffer [ 0 ] ; cBuffer_e [ b_n << 1 ] +=
b_a [ b_n << 1 ] * cBuffer [ 0 ] ; cBuffer_p [ b_n << 1 ] += aBuffer [ ( b_n
<< 1 ) + 1 ] * cBuffer [ 2 ] ; cBuffer_e [ b_n << 1 ] += b_a [ ( b_n << 1 ) +
1 ] * cBuffer [ 2 ] ; cBuffer_p [ ( b_n << 1 ) + 1 ] = 0.0 ; cBuffer_e [ (
b_n << 1 ) + 1 ] = 0.0 ; cBuffer_p [ ( b_n << 1 ) + 1 ] += aBuffer [ b_n << 1
] * cBuffer [ 1 ] ; cBuffer_e [ ( b_n << 1 ) + 1 ] += b_a [ b_n << 1 ] *
cBuffer [ 1 ] ; cBuffer_p [ ( b_n << 1 ) + 1 ] += aBuffer [ ( b_n << 1 ) + 1
] * cBuffer [ 3 ] ; cBuffer_e [ ( b_n << 1 ) + 1 ] += b_a [ ( b_n << 1 ) + 1
] * cBuffer [ 3 ] ; } if ( firstmult ) { if ( aBufferInUse ) { c [ 0 ] =
aBuffer [ 0 ] ; c [ 1 ] = aBuffer [ 1 ] ; c [ 2 ] = aBuffer [ 2 ] ; c [ 3 ] =
aBuffer [ 3 ] ; } else { c [ 0 ] = b_a [ 0 ] ; c [ 1 ] = b_a [ 1 ] ; c [ 2 ]
= b_a [ 2 ] ; c [ 3 ] = b_a [ 3 ] ; } } else if ( aBufferInUse ) { c [ 0 ] =
cBuffer_p [ 0 ] ; c [ 1 ] = cBuffer_p [ 1 ] ; c [ 2 ] = cBuffer_p [ 2 ] ; c [
3 ] = cBuffer_p [ 3 ] ; } else { c [ 0 ] = cBuffer_e [ 0 ] ; c [ 1 ] =
cBuffer_e [ 1 ] ; c [ 2 ] = cBuffer_e [ 2 ] ; c [ 3 ] = cBuffer_e [ 3 ] ; } }
} else { b_a [ 0 ] = a [ 0 ] ; b_a [ 1 ] = a [ 1 ] ; b_a [ 2 ] = a [ 2 ] ;
b_a [ 3 ] = a [ 3 ] ; if ( ( ! muDoubleScalarIsInf ( b ) ) && ( !
muDoubleScalarIsNaN ( b ) ) ) { e = muDoubleScalarAbs ( b ) ; firstmult =
true ; do { exitg1 = 0 ; ed2 = muDoubleScalarFloor ( e / 2.0 ) ; if ( 2.0 *
ed2 != e ) { if ( firstmult ) { c [ 0 ] = b_a [ 0 ] ; c [ 1 ] = b_a [ 1 ] ; c
[ 2 ] = b_a [ 2 ] ; c [ 3 ] = b_a [ 3 ] ; firstmult = false ; } else { for (
b_n = 0 ; b_n < 2 ; b_n ++ ) { cBuffer [ b_n ] = 0.0 ; cBuffer [ b_n ] += c [
b_n ] * b_a [ 0 ] ; cBuffer [ b_n ] += c [ b_n + 2 ] * b_a [ 1 ] ; cBuffer [
b_n + 2 ] = 0.0 ; cBuffer [ b_n + 2 ] += c [ b_n ] * b_a [ 2 ] ; cBuffer [
b_n + 2 ] += c [ b_n + 2 ] * b_a [ 3 ] ; } c [ 0 ] = cBuffer [ 0 ] ; c [ 1 ]
= cBuffer [ 1 ] ; c [ 2 ] = cBuffer [ 2 ] ; c [ 3 ] = cBuffer [ 3 ] ; } } if
( ed2 == 0.0 ) { exitg1 = 1 ; } else { e = ed2 ; for ( b_n = 0 ; b_n < 2 ;
b_n ++ ) { cBuffer [ b_n ] = 0.0 ; cBuffer [ b_n ] += b_a [ b_n ] * b_a [ 0 ]
; cBuffer [ b_n ] += b_a [ b_n + 2 ] * b_a [ 1 ] ; cBuffer [ b_n + 2 ] = 0.0
; cBuffer [ b_n + 2 ] += b_a [ b_n ] * b_a [ 2 ] ; cBuffer [ b_n + 2 ] += b_a
[ b_n + 2 ] * b_a [ 3 ] ; } b_a [ 0 ] = cBuffer [ 0 ] ; b_a [ 1 ] = cBuffer [
1 ] ; b_a [ 2 ] = cBuffer [ 2 ] ; b_a [ 3 ] = cBuffer [ 3 ] ; } } while (
exitg1 == 0 ) ; } else { c [ 0 ] = ( rtNaN ) ; c [ 1 ] = ( rtNaN ) ; c [ 2 ]
= ( rtNaN ) ; c [ 3 ] = ( rtNaN ) ; } } } static void ao4ajfc0ke ( const
real_T A [ 4 ] , real_T A2 [ 4 ] , real_T A4 [ 4 ] , real_T A6 [ 4 ] ,
int32_T * m , real_T * s ) { real_T A4_p [ 4 ] ; real_T T [ 4 ] ; real_T tmp
[ 4 ] ; real_T d6 ; real_T eta1 ; int32_T b_s ; int32_T i ; boolean_T guard1
= false ; boolean_T guard2 = false ; boolean_T guard3 = false ; boolean_T
guard4 = false ; * s = 0.0 ; for ( i = 0 ; i < 2 ; i ++ ) { A2 [ i << 1 ] =
0.0 ; A2 [ i << 1 ] += A [ i << 1 ] * A [ 0 ] ; A2 [ i << 1 ] += A [ ( i << 1
) + 1 ] * A [ 2 ] ; A2 [ ( i << 1 ) + 1 ] = 0.0 ; A2 [ ( i << 1 ) + 1 ] += A
[ i << 1 ] * A [ 1 ] ; A2 [ ( i << 1 ) + 1 ] += A [ ( i << 1 ) + 1 ] * A [ 3
] ; } for ( i = 0 ; i < 2 ; i ++ ) { A4 [ i ] = 0.0 ; A4 [ i ] += A2 [ i ] *
A2 [ 0 ] ; A4 [ i ] += A2 [ i + 2 ] * A2 [ 1 ] ; A4 [ i + 2 ] = 0.0 ; A4 [ i
+ 2 ] += A2 [ i ] * A2 [ 2 ] ; A4 [ i + 2 ] += A2 [ i + 2 ] * A2 [ 3 ] ; A6 [
i ] = 0.0 ; A6 [ i ] += A4 [ i ] * A2 [ 0 ] ; A6 [ i ] += A4 [ i + 2 ] * A2 [
1 ] ; A6 [ i + 2 ] = 0.0 ; A6 [ i + 2 ] += A4 [ i ] * A2 [ 2 ] ; A6 [ i + 2 ]
+= A4 [ i + 2 ] * A2 [ 3 ] ; } d6 = muDoubleScalarPower ( norm_CF3EtBNC ( A6
) , 0.16666666666666666 ) ; eta1 = muDoubleScalarMax ( muDoubleScalarPower (
norm_CF3EtBNC ( A4 ) , 0.25 ) , d6 ) ; guard1 = false ; guard2 = false ;
guard3 = false ; guard4 = false ; if ( eta1 <= 0.01495585217958292 ) { A4_p [
0 ] = 0.19285012468241128 * muDoubleScalarAbs ( A [ 0 ] ) ; A4_p [ 1 ] =
0.19285012468241128 * muDoubleScalarAbs ( A [ 1 ] ) ; A4_p [ 2 ] =
0.19285012468241128 * muDoubleScalarAbs ( A [ 2 ] ) ; A4_p [ 3 ] =
0.19285012468241128 * muDoubleScalarAbs ( A [ 3 ] ) ; fwa4u0lygc ( A4_p , 7.0
, tmp ) ; if ( muDoubleScalarMax ( muDoubleScalarCeil ( log2_DgASG5hL (
norm_CF3EtBNC ( tmp ) / norm_CF3EtBNC ( A ) * 2.0 / 2.2204460492503131E-16 )
/ 6.0 ) , 0.0 ) == 0.0 ) { * m = 3 ; } else { guard4 = true ; } } else {
guard4 = true ; } if ( guard4 ) { if ( eta1 <= 0.253939833006323 ) { A4_p [ 0
] = 0.12321872304378752 * muDoubleScalarAbs ( A [ 0 ] ) ; A4_p [ 1 ] =
0.12321872304378752 * muDoubleScalarAbs ( A [ 1 ] ) ; A4_p [ 2 ] =
0.12321872304378752 * muDoubleScalarAbs ( A [ 2 ] ) ; A4_p [ 3 ] =
0.12321872304378752 * muDoubleScalarAbs ( A [ 3 ] ) ; fwa4u0lygc ( A4_p ,
11.0 , tmp ) ; if ( muDoubleScalarMax ( muDoubleScalarCeil ( log2_DgASG5hL (
norm_CF3EtBNC ( tmp ) / norm_CF3EtBNC ( A ) * 2.0 / 2.2204460492503131E-16 )
/ 10.0 ) , 0.0 ) == 0.0 ) { * m = 5 ; } else { guard3 = true ; } } else {
guard3 = true ; } } if ( guard3 ) { fwa4u0lygc ( A4 , 2.0 , tmp ) ; eta1 =
muDoubleScalarPower ( norm_CF3EtBNC ( tmp ) , 0.125 ) ; d6 =
muDoubleScalarMax ( d6 , eta1 ) ; if ( d6 <= 0.95041789961629319 ) { A4_p [ 0
] = 0.090475336558796943 * muDoubleScalarAbs ( A [ 0 ] ) ; A4_p [ 1 ] =
0.090475336558796943 * muDoubleScalarAbs ( A [ 1 ] ) ; A4_p [ 2 ] =
0.090475336558796943 * muDoubleScalarAbs ( A [ 2 ] ) ; A4_p [ 3 ] =
0.090475336558796943 * muDoubleScalarAbs ( A [ 3 ] ) ; fwa4u0lygc ( A4_p ,
15.0 , tmp ) ; if ( muDoubleScalarMax ( muDoubleScalarCeil ( log2_DgASG5hL (
norm_CF3EtBNC ( tmp ) / norm_CF3EtBNC ( A ) * 2.0 / 2.2204460492503131E-16 )
/ 14.0 ) , 0.0 ) == 0.0 ) { * m = 7 ; } else { guard2 = true ; } } else {
guard2 = true ; } } if ( guard2 ) { if ( d6 <= 2.097847961257068 ) { A4_p [ 0
] = 0.071467735648795785 * muDoubleScalarAbs ( A [ 0 ] ) ; A4_p [ 1 ] =
0.071467735648795785 * muDoubleScalarAbs ( A [ 1 ] ) ; A4_p [ 2 ] =
0.071467735648795785 * muDoubleScalarAbs ( A [ 2 ] ) ; A4_p [ 3 ] =
0.071467735648795785 * muDoubleScalarAbs ( A [ 3 ] ) ; fwa4u0lygc ( A4_p ,
19.0 , tmp ) ; if ( muDoubleScalarMax ( muDoubleScalarCeil ( log2_DgASG5hL (
norm_CF3EtBNC ( tmp ) / norm_CF3EtBNC ( A ) * 2.0 / 2.2204460492503131E-16 )
/ 18.0 ) , 0.0 ) == 0.0 ) { * m = 9 ; } else { guard1 = true ; } } else {
guard1 = true ; } } if ( guard1 ) { for ( i = 0 ; i < 2 ; i ++ ) { A4_p [ i
<< 1 ] = 0.0 ; A4_p [ i << 1 ] += A6 [ i << 1 ] * A4 [ 0 ] ; A4_p [ i << 1 ]
+= A6 [ ( i << 1 ) + 1 ] * A4 [ 2 ] ; A4_p [ ( i << 1 ) + 1 ] = 0.0 ; A4_p [
( i << 1 ) + 1 ] += A6 [ i << 1 ] * A4 [ 1 ] ; A4_p [ ( i << 1 ) + 1 ] += A6
[ ( i << 1 ) + 1 ] * A4 [ 3 ] ; } * s = muDoubleScalarMax (
muDoubleScalarCeil ( log2_DgASG5hL ( muDoubleScalarMin ( d6 ,
muDoubleScalarMax ( eta1 , muDoubleScalarPower ( norm_CF3EtBNC ( A4_p ) , 0.1
) ) ) / 5.3719203511481517 ) ) , 0.0 ) ; d6 = muDoubleScalarPower ( 2.0 , * s
) ; eta1 = A [ 0 ] / d6 ; A4_p [ 0 ] = 0.05031554467093536 *
muDoubleScalarAbs ( eta1 ) ; T [ 0 ] = eta1 ; eta1 = A [ 1 ] / d6 ; A4_p [ 1
] = 0.05031554467093536 * muDoubleScalarAbs ( eta1 ) ; T [ 1 ] = eta1 ; eta1
= A [ 2 ] / d6 ; A4_p [ 2 ] = 0.05031554467093536 * muDoubleScalarAbs ( eta1
) ; T [ 2 ] = eta1 ; eta1 = A [ 3 ] / d6 ; A4_p [ 3 ] = 0.05031554467093536 *
muDoubleScalarAbs ( eta1 ) ; T [ 3 ] = eta1 ; fwa4u0lygc ( A4_p , 27.0 , tmp
) ; * s += muDoubleScalarMax ( muDoubleScalarCeil ( log2_DgASG5hL (
norm_CF3EtBNC ( tmp ) / norm_CF3EtBNC ( T ) * 2.0 / 2.2204460492503131E-16 )
/ 26.0 ) , 0.0 ) ; if ( muDoubleScalarIsInf ( * s ) ) { d6 = norm_CF3EtBNC (
A ) / 5.3719203511481517 ; if ( ( ! muDoubleScalarIsInf ( d6 ) ) && ( !
muDoubleScalarIsNaN ( d6 ) ) ) { d6 = frexp ( d6 , & b_s ) ; } else { b_s = 0
; } * s = b_s ; if ( d6 == 0.5 ) { * s = ( real_T ) b_s - 1.0 ; } } * m = 13
; } } static void hyrmdcu10r ( const real_T A [ 4 ] , real_T V [ 4 ] , real_T
T [ 4 ] ) { if ( af5cauz3wt ( A ) ) { V [ 0 ] = ( rtNaN ) ; V [ 2 ] = ( rtNaN
) ; V [ 3 ] = ( rtNaN ) ; V [ 1 ] = 0.0 ; T [ 0 ] = ( rtNaN ) ; T [ 1 ] = (
rtNaN ) ; T [ 2 ] = ( rtNaN ) ; T [ 3 ] = ( rtNaN ) ; } else { T [ 0 ] = A [
0 ] ; T [ 2 ] = A [ 2 ] ; T [ 3 ] = A [ 3 ] ; T [ 1 ] = A [ 1 ] ; V [ 2 ] =
0.0 ; V [ 1 ] = 0.0 ; V [ 0 ] = 1.0 ; V [ 3 ] = 1.0 ; xhseqr_H6eRN0gF ( T , V
) ; } } static void f5zhbt2mc4 ( real_T A [ 4 ] , real_T F [ 4 ] ) { real_T
A2 [ 4 ] ; real_T A4 [ 4 ] ; real_T A6 [ 4 ] ; real_T A6_p [ 4 ] ; real_T U [
4 ] ; real_T V [ 4 ] ; real_T A6_idx_2 ; real_T A6_idx_3 ; real_T a22 ;
real_T d ; real_T exptj ; int32_T blockFormat ; int32_T exitg1 ; int32_T i ;
int32_T r1 ; int32_T r2 ; boolean_T exitg2 ; boolean_T recomputeDiags ; if (
af5cauz3wt ( A ) ) { F [ 0 ] = ( rtNaN ) ; F [ 1 ] = ( rtNaN ) ; F [ 2 ] = (
rtNaN ) ; F [ 3 ] = ( rtNaN ) ; } else { recomputeDiags = true ; blockFormat
= 0 ; exitg2 = false ; while ( ( ! exitg2 ) && ( blockFormat < 2 ) ) { r1 = 0
; do { exitg1 = 0 ; if ( r1 < 2 ) { if ( ( r1 != blockFormat ) && ( ! ( A [ (
blockFormat << 1 ) + r1 ] == 0.0 ) ) ) { recomputeDiags = false ; exitg1 = 1
; } else { r1 ++ ; } } else { blockFormat ++ ; exitg1 = 2 ; } } while (
exitg1 == 0 ) ; if ( exitg1 == 1 ) { exitg2 = true ; } } if ( recomputeDiags
) { F [ 1 ] = 0.0 ; F [ 2 ] = 0.0 ; F [ 0 ] = muDoubleScalarExp ( A [ 0 ] ) ;
F [ 3 ] = muDoubleScalarExp ( A [ 3 ] ) ; } else { recomputeDiags = true ;
blockFormat = 0 ; exitg2 = false ; while ( ( ! exitg2 ) && ( blockFormat < 2
) ) { r1 = 0 ; do { exitg1 = 0 ; if ( r1 <= blockFormat ) { if ( ! ( A [ (
blockFormat << 1 ) + r1 ] == A [ ( r1 << 1 ) + blockFormat ] ) ) {
recomputeDiags = false ; exitg1 = 1 ; } else { r1 ++ ; } } else { blockFormat
++ ; exitg1 = 2 ; } } while ( exitg1 == 0 ) ; if ( exitg1 == 1 ) { exitg2 =
true ; } } if ( recomputeDiags ) { hyrmdcu10r ( A , A4 , A2 ) ; exptj =
muDoubleScalarExp ( A2 [ 0 ] ) ; A6 [ 0 ] = A4 [ 0 ] * exptj ; A6 [ 1 ] = A4
[ 1 ] * exptj ; exptj = muDoubleScalarExp ( A2 [ 3 ] ) ; A6 [ 2 ] = A4 [ 2 ]
* exptj ; A6 [ 3 ] = A4 [ 3 ] * exptj ; for ( i = 0 ; i < 2 ; i ++ ) { F [ i
] = 0.0 ; F [ i ] += A6 [ i ] * A4 [ 0 ] ; F [ i ] += A6 [ i + 2 ] * A4 [ 2 ]
; F [ i + 2 ] = 0.0 ; F [ i + 2 ] += A6 [ i ] * A4 [ 1 ] ; F [ i + 2 ] += A6
[ i + 2 ] * A4 [ 3 ] ; } exptj = ( F [ 1 ] + F [ 2 ] ) / 2.0 ; F [ 3 ] = ( F
[ 3 ] + F [ 3 ] ) / 2.0 ; F [ 0 ] = ( F [ 0 ] + F [ 0 ] ) / 2.0 ; F [ 1 ] = (
F [ 1 ] + F [ 2 ] ) / 2.0 ; F [ 2 ] = exptj ; } else { recomputeDiags = true
; if ( ( A [ 1 ] != 0.0 ) && ( ( A [ 0 ] != A [ 3 ] ) || ( muDoubleScalarSign
( A [ 1 ] ) * muDoubleScalarSign ( A [ 2 ] ) != - 1.0 ) ) ) { recomputeDiags
= false ; } ao4ajfc0ke ( A , A2 , A4 , A6 , & r1 , & exptj ) ; if ( exptj !=
0.0 ) { d = muDoubleScalarPower ( 2.0 , exptj ) ; A [ 0 ] /= d ; A [ 1 ] /= d
; A [ 2 ] /= d ; A [ 3 ] /= d ; d = muDoubleScalarPower ( 2.0 , 2.0 * exptj )
; A2 [ 0 ] /= d ; A2 [ 1 ] /= d ; A2 [ 2 ] /= d ; A2 [ 3 ] /= d ; d =
muDoubleScalarPower ( 2.0 , 4.0 * exptj ) ; A4 [ 0 ] /= d ; A4 [ 1 ] /= d ;
A4 [ 2 ] /= d ; A4 [ 3 ] /= d ; d = muDoubleScalarPower ( 2.0 , 6.0 * exptj )
; A6 [ 0 ] /= d ; A6 [ 1 ] /= d ; A6 [ 2 ] /= d ; A6 [ 3 ] /= d ; } if (
recomputeDiags ) { if ( A [ 1 ] == 0.0 ) { blockFormat = 1 ; } else {
blockFormat = 2 ; } } if ( r1 == 3 ) { U [ 1 ] = A2 [ 1 ] ; U [ 2 ] = A2 [ 2
] ; U [ 0 ] = A2 [ 0 ] + 60.0 ; U [ 3 ] = A2 [ 3 ] + 60.0 ; for ( i = 0 ; i <
2 ; i ++ ) { A6_p [ i << 1 ] = 0.0 ; A6_p [ i << 1 ] += U [ i << 1 ] * A [ 0
] ; A6_p [ i << 1 ] += U [ ( i << 1 ) + 1 ] * A [ 2 ] ; A6_p [ ( i << 1 ) + 1
] = 0.0 ; A6_p [ ( i << 1 ) + 1 ] += U [ i << 1 ] * A [ 1 ] ; A6_p [ ( i << 1
) + 1 ] += U [ ( i << 1 ) + 1 ] * A [ 3 ] ; } U [ 0 ] = A6_p [ 0 ] ; V [ 0 ]
= 12.0 * A2 [ 0 ] ; U [ 1 ] = A6_p [ 1 ] ; V [ 1 ] = 12.0 * A2 [ 1 ] ; U [ 2
] = A6_p [ 2 ] ; V [ 2 ] = 12.0 * A2 [ 2 ] ; U [ 3 ] = A6_p [ 3 ] ; V [ 3 ] =
12.0 * A2 [ 3 ] ; d = 120.0 ; } else if ( r1 == 5 ) { U [ 0 ] = 420.0 * A2 [
0 ] + A4 [ 0 ] ; U [ 1 ] = 420.0 * A2 [ 1 ] + A4 [ 1 ] ; U [ 2 ] = 420.0 * A2
[ 2 ] + A4 [ 2 ] ; U [ 3 ] = 420.0 * A2 [ 3 ] + A4 [ 3 ] ; U [ 0 ] += 15120.0
; U [ 3 ] += 15120.0 ; for ( i = 0 ; i < 2 ; i ++ ) { A6_p [ i << 1 ] = 0.0 ;
A6_p [ i << 1 ] += U [ i << 1 ] * A [ 0 ] ; A6_p [ i << 1 ] += U [ ( i << 1 )
+ 1 ] * A [ 2 ] ; A6_p [ ( i << 1 ) + 1 ] = 0.0 ; A6_p [ ( i << 1 ) + 1 ] +=
U [ i << 1 ] * A [ 1 ] ; A6_p [ ( i << 1 ) + 1 ] += U [ ( i << 1 ) + 1 ] * A
[ 3 ] ; } U [ 0 ] = A6_p [ 0 ] ; V [ 0 ] = 30.0 * A4 [ 0 ] + 3360.0 * A2 [ 0
] ; U [ 1 ] = A6_p [ 1 ] ; V [ 1 ] = 30.0 * A4 [ 1 ] + 3360.0 * A2 [ 1 ] ; U
[ 2 ] = A6_p [ 2 ] ; V [ 2 ] = 30.0 * A4 [ 2 ] + 3360.0 * A2 [ 2 ] ; U [ 3 ]
= A6_p [ 3 ] ; V [ 3 ] = 30.0 * A4 [ 3 ] + 3360.0 * A2 [ 3 ] ; d = 30240.0 ;
} else if ( r1 == 7 ) { U [ 0 ] = ( 1512.0 * A4 [ 0 ] + A6 [ 0 ] ) + 277200.0
* A2 [ 0 ] ; U [ 1 ] = ( 1512.0 * A4 [ 1 ] + A6 [ 1 ] ) + 277200.0 * A2 [ 1 ]
; U [ 2 ] = ( 1512.0 * A4 [ 2 ] + A6 [ 2 ] ) + 277200.0 * A2 [ 2 ] ; U [ 3 ]
= ( 1512.0 * A4 [ 3 ] + A6 [ 3 ] ) + 277200.0 * A2 [ 3 ] ; U [ 0 ] +=
8.64864E+6 ; U [ 3 ] += 8.64864E+6 ; for ( i = 0 ; i < 2 ; i ++ ) { A6_p [ i
<< 1 ] = 0.0 ; A6_p [ i << 1 ] += U [ i << 1 ] * A [ 0 ] ; A6_p [ i << 1 ] +=
U [ ( i << 1 ) + 1 ] * A [ 2 ] ; A6_p [ ( i << 1 ) + 1 ] = 0.0 ; A6_p [ ( i
<< 1 ) + 1 ] += U [ i << 1 ] * A [ 1 ] ; A6_p [ ( i << 1 ) + 1 ] += U [ ( i
<< 1 ) + 1 ] * A [ 3 ] ; } U [ 0 ] = A6_p [ 0 ] ; V [ 0 ] = ( 56.0 * A6 [ 0 ]
+ 25200.0 * A4 [ 0 ] ) + 1.99584E+6 * A2 [ 0 ] ; U [ 1 ] = A6_p [ 1 ] ; V [ 1
] = ( 56.0 * A6 [ 1 ] + 25200.0 * A4 [ 1 ] ) + 1.99584E+6 * A2 [ 1 ] ; U [ 2
] = A6_p [ 2 ] ; V [ 2 ] = ( 56.0 * A6 [ 2 ] + 25200.0 * A4 [ 2 ] ) +
1.99584E+6 * A2 [ 2 ] ; U [ 3 ] = A6_p [ 3 ] ; V [ 3 ] = ( 56.0 * A6 [ 3 ] +
25200.0 * A4 [ 3 ] ) + 1.99584E+6 * A2 [ 3 ] ; d = 1.729728E+7 ; } else if (
r1 == 9 ) { for ( i = 0 ; i < 2 ; i ++ ) { V [ i << 1 ] = 0.0 ; V [ i << 1 ]
+= A2 [ i << 1 ] * A6 [ 0 ] ; V [ i << 1 ] += A2 [ ( i << 1 ) + 1 ] * A6 [ 2
] ; V [ ( i << 1 ) + 1 ] = 0.0 ; V [ ( i << 1 ) + 1 ] += A2 [ i << 1 ] * A6 [
1 ] ; V [ ( i << 1 ) + 1 ] += A2 [ ( i << 1 ) + 1 ] * A6 [ 3 ] ; } U [ 0 ] =
( ( 3960.0 * A6 [ 0 ] + V [ 0 ] ) + 2.16216E+6 * A4 [ 0 ] ) + 3.027024E+8 *
A2 [ 0 ] ; U [ 1 ] = ( ( 3960.0 * A6 [ 1 ] + V [ 1 ] ) + 2.16216E+6 * A4 [ 1
] ) + 3.027024E+8 * A2 [ 1 ] ; U [ 2 ] = ( ( 3960.0 * A6 [ 2 ] + V [ 2 ] ) +
2.16216E+6 * A4 [ 2 ] ) + 3.027024E+8 * A2 [ 2 ] ; U [ 3 ] = ( ( 3960.0 * A6
[ 3 ] + V [ 3 ] ) + 2.16216E+6 * A4 [ 3 ] ) + 3.027024E+8 * A2 [ 3 ] ; U [ 0
] += 8.8216128E+9 ; U [ 3 ] += 8.8216128E+9 ; for ( i = 0 ; i < 2 ; i ++ ) {
A6_p [ i << 1 ] = 0.0 ; A6_p [ i << 1 ] += U [ i << 1 ] * A [ 0 ] ; A6_p [ i
<< 1 ] += U [ ( i << 1 ) + 1 ] * A [ 2 ] ; A6_p [ ( i << 1 ) + 1 ] = 0.0 ;
A6_p [ ( i << 1 ) + 1 ] += U [ i << 1 ] * A [ 1 ] ; A6_p [ ( i << 1 ) + 1 ]
+= U [ ( i << 1 ) + 1 ] * A [ 3 ] ; } U [ 0 ] = A6_p [ 0 ] ; V [ 0 ] = ( (
90.0 * V [ 0 ] + 110880.0 * A6 [ 0 ] ) + 3.027024E+7 * A4 [ 0 ] ) +
2.0756736E+9 * A2 [ 0 ] ; U [ 1 ] = A6_p [ 1 ] ; V [ 1 ] = ( ( 90.0 * V [ 1 ]
+ 110880.0 * A6 [ 1 ] ) + 3.027024E+7 * A4 [ 1 ] ) + 2.0756736E+9 * A2 [ 1 ]
; U [ 2 ] = A6_p [ 2 ] ; V [ 2 ] = ( ( 90.0 * V [ 2 ] + 110880.0 * A6 [ 2 ] )
+ 3.027024E+7 * A4 [ 2 ] ) + 2.0756736E+9 * A2 [ 2 ] ; U [ 3 ] = A6_p [ 3 ] ;
V [ 3 ] = ( ( 90.0 * V [ 3 ] + 110880.0 * A6 [ 3 ] ) + 3.027024E+7 * A4 [ 3 ]
) + 2.0756736E+9 * A2 [ 3 ] ; d = 1.76432256E+10 ; } else { U [ 0 ] = (
3.352212864E+10 * A6 [ 0 ] + 1.05594705216E+13 * A4 [ 0 ] ) +
1.1873537964288E+15 * A2 [ 0 ] ; U [ 1 ] = ( 3.352212864E+10 * A6 [ 1 ] +
1.05594705216E+13 * A4 [ 1 ] ) + 1.1873537964288E+15 * A2 [ 1 ] ; U [ 2 ] = (
3.352212864E+10 * A6 [ 2 ] + 1.05594705216E+13 * A4 [ 2 ] ) +
1.1873537964288E+15 * A2 [ 2 ] ; U [ 3 ] = ( 3.352212864E+10 * A6 [ 3 ] +
1.05594705216E+13 * A4 [ 3 ] ) + 1.1873537964288E+15 * A2 [ 3 ] ; U [ 0 ] +=
3.238237626624E+16 ; U [ 3 ] += 3.238237626624E+16 ; d = ( 16380.0 * A4 [ 0 ]
+ A6 [ 0 ] ) + 4.08408E+7 * A2 [ 0 ] ; a22 = ( 16380.0 * A4 [ 1 ] + A6 [ 1 ]
) + 4.08408E+7 * A2 [ 1 ] ; A6_idx_2 = ( 16380.0 * A4 [ 2 ] + A6 [ 2 ] ) +
4.08408E+7 * A2 [ 2 ] ; A6_idx_3 = ( 16380.0 * A4 [ 3 ] + A6 [ 3 ] ) +
4.08408E+7 * A2 [ 3 ] ; for ( i = 0 ; i < 2 ; i ++ ) { A6_p [ i ] = ( A6 [ i
+ 2 ] * a22 + A6 [ i ] * d ) + U [ i ] ; A6_p [ i + 2 ] = ( A6 [ i + 2 ] *
A6_idx_3 + A6 [ i ] * A6_idx_2 ) + U [ i + 2 ] ; } d = ( 182.0 * A6 [ 0 ] +
960960.0 * A4 [ 0 ] ) + 1.32324192E+9 * A2 [ 0 ] ; a22 = ( 182.0 * A6 [ 1 ] +
960960.0 * A4 [ 1 ] ) + 1.32324192E+9 * A2 [ 1 ] ; A6_idx_2 = ( 182.0 * A6 [
2 ] + 960960.0 * A4 [ 2 ] ) + 1.32324192E+9 * A2 [ 2 ] ; A6_idx_3 = ( 182.0 *
A6 [ 3 ] + 960960.0 * A4 [ 3 ] ) + 1.32324192E+9 * A2 [ 3 ] ; for ( i = 0 ; i
< 2 ; i ++ ) { U [ i << 1 ] = 0.0 ; U [ i << 1 ] += A6_p [ i << 1 ] * A [ 0 ]
; U [ i << 1 ] += A6_p [ ( i << 1 ) + 1 ] * A [ 2 ] ; U [ ( i << 1 ) + 1 ] =
0.0 ; U [ ( i << 1 ) + 1 ] += A6_p [ i << 1 ] * A [ 1 ] ; U [ ( i << 1 ) + 1
] += A6_p [ ( i << 1 ) + 1 ] * A [ 3 ] ; V [ i ] = ( ( ( A6 [ i + 2 ] * a22 +
A6 [ i ] * d ) + 6.704425728E+11 * A6 [ i ] ) + 1.29060195264E+14 * A4 [ i ]
) + 7.7717703038976E+15 * A2 [ i ] ; V [ i + 2 ] = ( ( ( A6 [ i + 2 ] *
A6_idx_3 + A6 [ i ] * A6_idx_2 ) + A6 [ i + 2 ] * 6.704425728E+11 ) + A4 [ i
+ 2 ] * 1.29060195264E+14 ) + A2 [ i + 2 ] * 7.7717703038976E+15 ; } d =
6.476475253248E+16 ; } V [ 0 ] += d ; V [ 0 ] -= U [ 0 ] ; U [ 0 ] *= 2.0 ; V
[ 1 ] -= U [ 1 ] ; U [ 1 ] *= 2.0 ; V [ 2 ] -= U [ 2 ] ; U [ 2 ] *= 2.0 ; V [
3 ] = ( V [ 3 ] + d ) - U [ 3 ] ; U [ 3 ] *= 2.0 ; if ( muDoubleScalarAbs ( V
[ 1 ] ) > muDoubleScalarAbs ( V [ 0 ] ) ) { r1 = 1 ; r2 = 0 ; } else { r1 = 0
; r2 = 1 ; } d = V [ r2 ] / V [ r1 ] ; a22 = V [ r2 + 2 ] - V [ r1 + 2 ] * d
; F [ 1 ] = ( U [ r2 ] - U [ r1 ] * d ) / a22 ; F [ 0 ] = ( U [ r1 ] - V [ r1
+ 2 ] * F [ 1 ] ) / V [ r1 ] ; F [ 3 ] = ( U [ r2 + 2 ] - U [ r1 + 2 ] * d )
/ a22 ; F [ 2 ] = ( U [ r1 + 2 ] - V [ r1 + 2 ] * F [ 3 ] ) / V [ r1 ] ; F [
0 ] ++ ; F [ 3 ] ++ ; if ( recomputeDiags ) { recomputeBlockDiag_gs6kEciD ( A
, F , blockFormat ) ; } r1 = ( int32_T ) exptj ; for ( r2 = 0 ; r2 < r1 ; r2
++ ) { for ( i = 0 ; i < 2 ; i ++ ) { A4 [ i ] = 0.0 ; A4 [ i ] += F [ i ] *
F [ 0 ] ; A4 [ i ] += F [ i + 2 ] * F [ 1 ] ; A4 [ i + 2 ] = 0.0 ; A4 [ i + 2
] += F [ i ] * F [ 2 ] ; A4 [ i + 2 ] += F [ i + 2 ] * F [ 3 ] ; } F [ 0 ] =
A4 [ 0 ] ; F [ 1 ] = A4 [ 1 ] ; F [ 2 ] = A4 [ 2 ] ; F [ 3 ] = A4 [ 3 ] ; if
( recomputeDiags ) { A [ 0 ] *= 2.0 ; A [ 1 ] *= 2.0 ; A [ 2 ] *= 2.0 ; A [ 3
] *= 2.0 ; recomputeBlockDiag_gs6kEciD ( A , F , blockFormat ) ; } } } } } }
void MdlInitialize ( void ) { boolean_T kehdr1wwi1 [ 4 ] ; int_T is ; int_T
tmp_e ; int_T tmp_g ; int_T tmp_i ; int_T tmp_j ; int_T tmp_m ; boolean_T tmp
; boolean_T tmp_p ; SimStruct * S ; void * diag ; chmgkez0tpf . h3jcgsxl3g =
kjmvupbl2i . Integrator1_IC ; chmgkez0tpf . nbhyf45pww [ 0 ] = kjmvupbl2i .
Integrator1_IC_aqlk4zxkuo ; chmgkez0tpf . nbhyf45pww [ 1 ] = kjmvupbl2i .
Integrator1_IC_aqlk4zxkuo ; chmgkez0tpf . nbhyf45pww [ 2 ] = kjmvupbl2i .
Integrator1_IC_aqlk4zxkuo ; chmgkez0tpf . nbhyf45pww [ 3 ] = kjmvupbl2i .
Integrator1_IC_aqlk4zxkuo ; chmgkez0tpf . gs5cem5nqo = 0.0 ; cz5yqt3r3xb .
dfwjuauqhh = ( rtInf ) ; cz5yqt3r3xb . dci24ewo3n [ 0 ] = kjmvupbl2i .
FirstOrderHold_IniOut ; cz5yqt3r3xb . akmdrfe3wk [ 0 ] = ( rtInf ) ;
cz5yqt3r3xb . n20oxvozfr [ 0 ] = 0.0 ; cz5yqt3r3xb . dci24ewo3n [ 1 ] =
kjmvupbl2i . FirstOrderHold_IniOut ; cz5yqt3r3xb . akmdrfe3wk [ 1 ] = ( rtInf
) ; cz5yqt3r3xb . n20oxvozfr [ 1 ] = 0.0 ; tmp = false ; tmp_p = false ; if (
tmp_p || tmp ) { is = strcmp ( ssGetSolverName ( rtS ) , "daessc" ) ; tmp_e =
strcmp ( ssGetSolverName ( rtS ) , "ode14x" ) ; tmp_i = strcmp (
ssGetSolverName ( rtS ) , "ode15s" ) ; tmp_m = strcmp ( ssGetSolverName ( rtS
) , "ode1be" ) ; tmp_g = strcmp ( ssGetSolverName ( rtS ) , "ode23t" ) ;
tmp_j = strcmp ( ssGetSolverName ( rtS ) , "odeN" ) ; if ( ( boolean_T ) ( (
is != 0 ) & ( tmp_e != 0 ) & ( tmp_i != 0 ) & ( tmp_m != 0 ) & ( tmp_g != 0 )
& ( tmp_j != 0 ) ) ) { S = rtS ; diag = CreateDiagnosticAsVoidPtr (
 "physmod:simscape:engine:sli:SimscapeExecutionBlock:InconsistentSolversInModelRef"
, 2 , 3 , "daessc" , 3 , "{daessc, ode14x, ode15s, ode1be, ode23t, odeN}" ) ;
rt_ssSet_slErrMsg ( S , diag ) ; } } chmgkez0tpf . bhmvyo1hjl = kjmvupbl2i .
Integrator_IC ; chmgkez0tpf . iarnkoswlx = kjmvupbl2i .
Integrator1_IC_b5h1v25iea ; chmgkez0tpf . lywux4fr45 = kjmvupbl2i .
Integrator_IC_m2ei5srufe ; chmgkez0tpf . igaknrnpbi = kjmvupbl2i .
Integrator1_IC_exhcff4x2k ; chmgkez0tpf . fnlgzvne04 = kjmvupbl2i .
Integrator2_IC ; chmgkez0tpf . blfalouxud = kjmvupbl2i . Integrator3_IC ;
chmgkez0tpf . icfrc3vdyk = kjmvupbl2i . Integrator4_IC ; chmgkez0tpf .
e3mnx1zztt = kjmvupbl2i . Integrator2_IC_fjcqqry33i ; cz5yqt3r3xb .
ovftuesk53 [ 0 ] = kjmvupbl2i . UnitDelay_InitialCondition [ 0 ] ;
cz5yqt3r3xb . ovftuesk53 [ 1 ] = kjmvupbl2i . UnitDelay_InitialCondition [ 1
] ; cz5yqt3r3xb . hqv0oirn0q = ( rtInf ) ; cz5yqt3r3xb . lzovmgc1ye [ 0 ] =
kjmvupbl2i . FirstOrderHold1_IniOut ; cz5yqt3r3xb . ipqlah0gj1 [ 0 ] = (
rtInf ) ; cz5yqt3r3xb . ggdayeevtv [ 0 ] = 0.0 ; cz5yqt3r3xb . lzovmgc1ye [ 1
] = kjmvupbl2i . FirstOrderHold1_IniOut ; cz5yqt3r3xb . ipqlah0gj1 [ 1 ] = (
rtInf ) ; cz5yqt3r3xb . ggdayeevtv [ 1 ] = 0.0 ; cz5yqt3r3xb . lzovmgc1ye [ 2
] = kjmvupbl2i . FirstOrderHold1_IniOut ; cz5yqt3r3xb . ipqlah0gj1 [ 2 ] = (
rtInf ) ; cz5yqt3r3xb . ggdayeevtv [ 2 ] = 0.0 ; cz5yqt3r3xb . lzovmgc1ye [ 3
] = kjmvupbl2i . FirstOrderHold1_IniOut ; cz5yqt3r3xb . ipqlah0gj1 [ 3 ] = (
rtInf ) ; cz5yqt3r3xb . ggdayeevtv [ 3 ] = 0.0 ; kkt5tjhslu ( kjmvupbl2i .
SignalHold_IC , & iowqpk3eub2 . fuob0ddam2h ) ; kkt5tjhslu ( kjmvupbl2i .
SignalHold_IC_bl0xhwyuht , & iowqpk3eub2 . dwnfs4t0ur ) ; cz5yqt3r3xb .
hndyq1p4da = - 1 ; cz5yqt3r3xb . iyzfufaeyj = 0U ; cz5yqt3r3xb . metkb44aex =
hsey4nk0xq ; cz5yqt3r3xb . em1wbmdjow = 0.0 ; cz5yqt3r3xb . ldpanoehpw = 0U ;
cz5yqt3r3xb . eck5rxblzt = 0.0 ; iowqpk3eub2 . ivqnpc0uok = 0.0 ; cz5yqt3r3xb
. jmm4c105ye = 0.0 ; cz5yqt3r3xb . f05boyvyxi = 0.0 ; cz5yqt3r3xb .
dukvvezhh4 = 0.0 ; n5x0ejbjln ( & kehdr1wwi1 [ 0 ] , & ( cz5yqt3r3xb .
lofhsz2swn . rtb ) ) ; cqealxsqr5 ( & iowqpk3eub2 . g1n4ddzbcb , &
iowqpk3eub2 . oi1l1zfk0l , & iowqpk3eub2 . az43xb15iv , & iowqpk3eub2 .
iefandv1mx , & iowqpk3eub2 . jywmdz2pm0 , & ( cz5yqt3r3xb . jrvwlq3fuz . rtdw
) ) ; { static int_T modelMassMatrixIr [ 43 ] = { 0 , 1 , 2 , 3 , 4 , 5 , 6 ,
8 , 54 , 18 , 54 , 9 , 54 , 10 , 58 , 19 , 58 , 11 , 58 , 7 , 12 , 13 , 14 ,
15 , 16 , 17 , 20 , 21 , 24 , 22 , 23 , 25 , 26 , 27 , 28 , 73 , 74 , 75 , 76
, 77 , 78 , 79 , 80 } ; static int_T modelMassMatrixJc [ 82 ] = { 0 , 1 , 2 ,
3 , 4 , 5 , 6 , 7 , 9 , 11 , 13 , 15 , 17 , 19 , 20 , 21 , 22 , 23 , 24 , 25
, 26 , 27 , 28 , 29 , 30 , 31 , 32 , 33 , 34 , 35 , 35 , 35 , 35 , 35 , 35 ,
35 , 35 , 35 , 35 , 35 , 35 , 35 , 35 , 35 , 35 , 35 , 35 , 35 , 35 , 35 , 35
, 35 , 35 , 35 , 35 , 35 , 35 , 35 , 35 , 35 , 35 , 35 , 35 , 35 , 35 , 35 ,
35 , 35 , 35 , 35 , 35 , 35 , 35 , 35 , 36 , 37 , 38 , 39 , 40 , 41 , 42 , 43
} ; static real_T modelMassMatrixPr [ 43 ] = { 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 ,
1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 , 1.0 } ; (
void ) memcpy ( cdlyfvwcyng . ir , modelMassMatrixIr , 43 * sizeof ( int_T )
) ; ( void ) memcpy ( cdlyfvwcyng . jc , modelMassMatrixJc , 82 * sizeof (
int_T ) ) ; ( void ) memcpy ( cdlyfvwcyng . pr , modelMassMatrixPr , 43 *
sizeof ( real_T ) ) ; } } void MdlEnable ( void ) { cz5yqt3r3xb . jmm4c105ye
= ssGetTaskTime ( rtS , 1 ) ; cz5yqt3r3xb . dukvvezhh4 = cz5yqt3r3xb .
jmm4c105ye ; } void MdlStart ( void ) { NeModelParameters modelParameters ;
NeModelParameters modelParameters_p ; NeslRtpManager * manager ;
NeslRtpManager * manager_p ; NeslSimulationData * simulationData ;
NeslSimulator * tmp_p ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree * diagnosticTree_e ;
NeuDiagnosticTree * diagnosticTree_p ; char * msg ; char * msg_e ; char *
msg_p ; ct0khgqqw5 * _rtXPerturbMin ; ih4uf25wks * _rtXPerturbMax ; real_T
tmp_m [ 44 ] ; real_T time ; real_T tmp_e ; int32_T tmp_i ; int_T tmp_g [ 12
] ; boolean_T tmp ; boolean_T val ; { bool externalInputIsInDatasetFormat =
false ; void * pISigstreamManager = rt_GetISigstreamManager ( rtS ) ;
rtwISigstreamManagerGetInputIsInDatasetFormat ( pISigstreamManager , &
externalInputIsInDatasetFormat ) ; if ( externalInputIsInDatasetFormat ) { }
} _rtXPerturbMax = ( ( ih4uf25wks * ) ssGetJacobianPerturbationBoundsMaxVec (
rtS ) ) ; _rtXPerturbMin = ( ( ct0khgqqw5 * )
ssGetJacobianPerturbationBoundsMinVec ( rtS ) ) ; { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "<SteerFdbk>" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "<SteerFdbk>" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"SparkEV/Visualization/DataLogging/Bus Selector" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "<SteerFdbk>"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cz5yqt3r3xb . kzgixjdqqa . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "d935c24f-ad66-42be-8cc7-4909d0d1f2d3" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "rad" ) ;
sdiCompleteAsyncioQueueCreation ( cz5yqt3r3xb . kzgixjdqqa . AQHandles , hDT
, & srcInfo ) ; if ( cz5yqt3r3xb . kzgixjdqqa . AQHandles ) {
sdiSetSignalSampleTimeString ( cz5yqt3r3xb . kzgixjdqqa . AQHandles ,
"Parameter" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( cz5yqt3r3xb
. kzgixjdqqa . AQHandles , 0.0 ) ; sdiSetRunStartTime ( cz5yqt3r3xb .
kzgixjdqqa . AQHandles , ssGetTaskTime ( rtS , 5 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . kzgixjdqqa . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb . kzgixjdqqa .
AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName
) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel
( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "<ax>" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "<ax>" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"SparkEV/Visualization/DataLogging/Bus Selector" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "<ax>" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 5 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cz5yqt3r3xb . ibizqnzh0w . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "1aa42550-361b-4f24-901f-1a919ebd832d" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "m/s^2" ) ;
sdiCompleteAsyncioQueueCreation ( cz5yqt3r3xb . ibizqnzh0w . AQHandles , hDT
, & srcInfo ) ; if ( cz5yqt3r3xb . ibizqnzh0w . AQHandles ) {
sdiSetSignalSampleTimeString ( cz5yqt3r3xb . ibizqnzh0w . AQHandles ,
"Parameter" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( cz5yqt3r3xb
. ibizqnzh0w . AQHandles , 0.0 ) ; sdiSetRunStartTime ( cz5yqt3r3xb .
ibizqnzh0w . AQHandles , ssGetTaskTime ( rtS , 5 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . ibizqnzh0w . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb . ibizqnzh0w .
AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName
) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel
( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "<ay>" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "<ay>" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"SparkEV/Visualization/DataLogging/Bus Selector" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "<ay>" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 6 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cz5yqt3r3xb . aj1d134nmk . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "a5ad2164-c937-45d6-89b8-ddd25748f783" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "m/s^2" ) ;
sdiCompleteAsyncioQueueCreation ( cz5yqt3r3xb . aj1d134nmk . AQHandles , hDT
, & srcInfo ) ; if ( cz5yqt3r3xb . aj1d134nmk . AQHandles ) {
sdiSetSignalSampleTimeString ( cz5yqt3r3xb . aj1d134nmk . AQHandles ,
"Parameter" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( cz5yqt3r3xb
. aj1d134nmk . AQHandles , 0.0 ) ; sdiSetRunStartTime ( cz5yqt3r3xb .
aj1d134nmk . AQHandles , ssGetTaskTime ( rtS , 5 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . aj1d134nmk . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb . aj1d134nmk .
AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName
) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel
( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "<az>" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "<az>" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"SparkEV/Visualization/DataLogging/Bus Selector" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "<az>" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 7 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cz5yqt3r3xb . frybx0mj1e . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "1a31eb3f-8cd2-437f-91ca-c501bba881cb" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "m/s^2" ) ;
sdiCompleteAsyncioQueueCreation ( cz5yqt3r3xb . frybx0mj1e . AQHandles , hDT
, & srcInfo ) ; if ( cz5yqt3r3xb . frybx0mj1e . AQHandles ) {
sdiSetSignalSampleTimeString ( cz5yqt3r3xb . frybx0mj1e . AQHandles ,
"Parameter" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( cz5yqt3r3xb
. frybx0mj1e . AQHandles , 0.0 ) ; sdiSetRunStartTime ( cz5yqt3r3xb .
frybx0mj1e . AQHandles , ssGetTaskTime ( rtS , 5 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . frybx0mj1e . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb . frybx0mj1e .
AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName
) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel
( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} simTgtPushModelBlockPath ( rtS ,
"SparkEV/Controllers/Vehicle Control Unit (VCU)/EV 2EM" ) ; iihvuu1gpc ( & (
cz5yqt3r3xb . jrvwlq3fuz . rtm ) , & ( cz5yqt3r3xb . jrvwlq3fuz . rtdw ) ) ;
simTgtPopModelBlockPath ( rtS ,
"SparkEV/Controllers/Vehicle Control Unit (VCU)/EV 2EM" ) ; { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "<AccelFdbk>" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "<AccelFdbk>" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"SparkEV/Visualization/DataLogging/Bus Selector" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "<AccelFdbk>"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 1 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cz5yqt3r3xb . dqdopzr2jv . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "bb31037c-b295-41cc-a8ff-6e3afe75834d" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "1" ) ;
sdiCompleteAsyncioQueueCreation ( cz5yqt3r3xb . dqdopzr2jv . AQHandles , hDT
, & srcInfo ) ; if ( cz5yqt3r3xb . dqdopzr2jv . AQHandles ) {
sdiSetSignalSampleTimeString ( cz5yqt3r3xb . dqdopzr2jv . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cz5yqt3r3xb . dqdopzr2jv . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cz5yqt3r3xb . dqdopzr2jv . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . dqdopzr2jv . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb . dqdopzr2jv .
AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName
) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel
( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "<BattVolt>" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "<BattVolt>" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "SparkEV/Visualization/DataLogging/Bus Selector" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "<BattVolt>" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 10 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
cz5yqt3r3xb . ate5v5wkj2 . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"b68cf9bb-97aa-4eb1-9013-98d8ad9fb89c" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
cz5yqt3r3xb . ate5v5wkj2 . AQHandles , hDT , & srcInfo ) ; if ( cz5yqt3r3xb .
ate5v5wkj2 . AQHandles ) { sdiSetSignalSampleTimeString ( cz5yqt3r3xb .
ate5v5wkj2 . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( cz5yqt3r3xb . ate5v5wkj2 . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( cz5yqt3r3xb . ate5v5wkj2 . AQHandles , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . ate5v5wkj2
. AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb .
ate5v5wkj2 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "<BattCurr>" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "<BattCurr>" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"SparkEV/Visualization/DataLogging/Bus Selector" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "<BattCurr>" )
; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 11 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cz5yqt3r3xb . cj0ldup5gu . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "9f907287-6f29-4629-a502-70065157247a" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "1" ) ;
sdiCompleteAsyncioQueueCreation ( cz5yqt3r3xb . cj0ldup5gu . AQHandles , hDT
, & srcInfo ) ; if ( cz5yqt3r3xb . cj0ldup5gu . AQHandles ) {
sdiSetSignalSampleTimeString ( cz5yqt3r3xb . cj0ldup5gu . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cz5yqt3r3xb . cj0ldup5gu . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cz5yqt3r3xb . cj0ldup5gu . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . cj0ldup5gu . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb . cj0ldup5gu .
AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName
) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel
( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "<EMTrq>" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "<EMTrq>" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "SparkEV/Visualization/DataLogging/Bus Selector" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "<EMTrq>" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 2 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 12 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
cz5yqt3r3xb . jgeac3tq21 . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"5dd6026d-afe1-470d-b61d-fdad0db126f9" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "1" ) ; sdiCompleteAsyncioQueueCreation (
cz5yqt3r3xb . jgeac3tq21 . AQHandles , hDT , & srcInfo ) ; if ( cz5yqt3r3xb .
jgeac3tq21 . AQHandles ) { sdiSetSignalSampleTimeString ( cz5yqt3r3xb .
jgeac3tq21 . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( cz5yqt3r3xb . jgeac3tq21 . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( cz5yqt3r3xb . jgeac3tq21 . AQHandles , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . jgeac3tq21
. AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb .
jgeac3tq21 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "<EngTrq>" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "<EngTrq>" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"SparkEV/Visualization/DataLogging/Bus Selector" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "<EngTrq>" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 13 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cz5yqt3r3xb . gynuv0krsy . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "2a34cd96-79db-4d81-b960-d9122712cbea" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( cz5yqt3r3xb . gynuv0krsy . AQHandles , hDT
, & srcInfo ) ; if ( cz5yqt3r3xb . gynuv0krsy . AQHandles ) {
sdiSetSignalSampleTimeString ( cz5yqt3r3xb . gynuv0krsy . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cz5yqt3r3xb . gynuv0krsy . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cz5yqt3r3xb . gynuv0krsy . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . gynuv0krsy . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb . gynuv0krsy .
AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName
) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel
( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "<EngSpdOut>" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "<EngSpdOut>" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "SparkEV/Visualization/DataLogging/Bus Selector" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "<EngSpdOut>" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 14 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
cz5yqt3r3xb . cismfzyk15 . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"aec0ea47-b1c1-484a-bf01-1e02a7ab27d4" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "" ) ; sdiCompleteAsyncioQueueCreation (
cz5yqt3r3xb . cismfzyk15 . AQHandles , hDT , & srcInfo ) ; if ( cz5yqt3r3xb .
cismfzyk15 . AQHandles ) { sdiSetSignalSampleTimeString ( cz5yqt3r3xb .
cismfzyk15 . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( cz5yqt3r3xb . cismfzyk15 . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( cz5yqt3r3xb . cismfzyk15 . AQHandles , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . cismfzyk15
. AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb .
cismfzyk15 . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "<DecelFdbk>" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "<DecelFdbk>" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"SparkEV/Visualization/DataLogging/Bus Selector" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "<DecelFdbk>"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 2 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cz5yqt3r3xb . irudyghn3o . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "676a77d3-75a0-463b-b45f-a32608895085" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "1" ) ;
sdiCompleteAsyncioQueueCreation ( cz5yqt3r3xb . irudyghn3o . AQHandles , hDT
, & srcInfo ) ; if ( cz5yqt3r3xb . irudyghn3o . AQHandles ) {
sdiSetSignalSampleTimeString ( cz5yqt3r3xb . irudyghn3o . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cz5yqt3r3xb . irudyghn3o . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cz5yqt3r3xb . irudyghn3o . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . irudyghn3o . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb . irudyghn3o .
AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName
) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel
( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "<GearFdbk>" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "<GearFdbk>" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "SparkEV/Visualization/DataLogging/Bus Selector" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "<GearFdbk>" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE
; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims .
dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ; srcInfo .
fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 3 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
cz5yqt3r3xb . nikehp134v . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"26e90e54-a58f-4a89-a5ad-7024f1857313" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "1" ) ; sdiCompleteAsyncioQueueCreation (
cz5yqt3r3xb . nikehp134v . AQHandles , hDT , & srcInfo ) ; if ( cz5yqt3r3xb .
nikehp134v . AQHandles ) { sdiSetSignalSampleTimeString ( cz5yqt3r3xb .
nikehp134v . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( cz5yqt3r3xb . nikehp134v . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( cz5yqt3r3xb . nikehp134v . AQHandles , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . nikehp134v
. AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb .
nikehp134v . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "<xdot>" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "<xdot>" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"SparkEV/Visualization/DataLogging/Bus Selector" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "<xdot>" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 4 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; cz5yqt3r3xb . gxisg0jsgi
. AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo
. mmi . InstanceMap . fullPath , "4332a410-ee23-412f-a5e8-adac10e5e75a" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "m/s" ) ;
sdiCompleteAsyncioQueueCreation ( cz5yqt3r3xb . gxisg0jsgi . AQHandles , hDT
, & srcInfo ) ; if ( cz5yqt3r3xb . gxisg0jsgi . AQHandles ) {
sdiSetSignalSampleTimeString ( cz5yqt3r3xb . gxisg0jsgi . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cz5yqt3r3xb . gxisg0jsgi . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cz5yqt3r3xb . gxisg0jsgi . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . gxisg0jsgi . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb . gxisg0jsgi .
AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName
) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel
( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "<EMSpd>" ) ;
sdiLabelU origSigName = sdiGetLabelFromChars ( "<EMSpd>" ) ; sdiLabelU
propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "SparkEV/Visualization/DataLogging/Bus Selector" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "<EMSpd>" ) ; sdiAsyncRepoDataTypeHandle hDT =
sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; { sdiComplexity
sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray [ 1 ] = { 2 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 8 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
cz5yqt3r3xb . kx02fuyglo . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"c3bfd5fa-19ee-455f-90b4-92c00d0cf045" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "rad/s" ) ; sdiCompleteAsyncioQueueCreation
( cz5yqt3r3xb . kx02fuyglo . AQHandles , hDT , & srcInfo ) ; if ( cz5yqt3r3xb
. kx02fuyglo . AQHandles ) { sdiSetSignalSampleTimeString ( cz5yqt3r3xb .
kx02fuyglo . AQHandles , "Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( cz5yqt3r3xb . kx02fuyglo . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( cz5yqt3r3xb . kx02fuyglo . AQHandles , ssGetTaskTime (
rtS , 1 ) ) ; sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . kx02fuyglo
. AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb .
kx02fuyglo . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "<BattSoc>" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "<BattSoc>" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"SparkEV/Visualization/DataLogging/Bus Selector" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "<BattSoc>" )
; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 9 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cz5yqt3r3xb . ivzabugs2u . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "133cb73c-70bd-4a16-a18a-5cf2383bd90e" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( cz5yqt3r3xb . ivzabugs2u . AQHandles , hDT
, & srcInfo ) ; if ( cz5yqt3r3xb . ivzabugs2u . AQHandles ) {
sdiSetSignalSampleTimeString ( cz5yqt3r3xb . ivzabugs2u . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cz5yqt3r3xb . ivzabugs2u . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cz5yqt3r3xb . ivzabugs2u . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . ivzabugs2u . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb . ivzabugs2u .
AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName
) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel
( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "Battery Current (A)"
) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "Battery Current (A)" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath =
sdiGetLabelFromChars ( "SparkEV/Visualization/Rate Transition10" ) ;
sdiLabelU blockSID = sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath =
sdiGetLabelFromChars ( "" ) ; sdiDims sigDims ; sdiLabelU sigName =
sdiGetLabelFromChars ( "Battery Current (A)" ) ; sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_DOUBLE ) ; {
sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [ 1 ] = { 1 } ; sigDims . nDims = 1
; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ;
cz5yqt3r3xb . fywuj43jfl . AQHandles = sdiStartAsyncioQueueCreation ( hDT , &
srcInfo , rt_dataMapInfo . mmi . InstanceMap . fullPath ,
"6ab528be-0a9e-4dd3-bb34-73517dc986b8" , sigComplexity , & sigDims ,
DIMENSIONS_MODE_FIXED , stCont , "1" ) ; sdiCompleteAsyncioQueueCreation (
cz5yqt3r3xb . fywuj43jfl . AQHandles , hDT , & srcInfo ) ; if ( cz5yqt3r3xb .
fywuj43jfl . AQHandles ) { sdiSetSignalSampleTimeString ( cz5yqt3r3xb .
fywuj43jfl . AQHandles , "0.1" , 0.1 , ssGetTFinal ( rtS ) ) ;
sdiSetSignalRefRate ( cz5yqt3r3xb . fywuj43jfl . AQHandles , 0.0 ) ;
sdiSetRunStartTime ( cz5yqt3r3xb . fywuj43jfl . AQHandles , ssGetTaskTime (
rtS , 3 ) ) ; sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . fywuj43jfl
. AQHandles , 1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb .
fywuj43jfl . AQHandles , loggedName , origSigName , propName ) ; }
sdiFreeLabel ( sigName ) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel (
origSigName ) ; sdiFreeLabel ( propName ) ; sdiFreeLabel ( blockPath ) ;
sdiFreeLabel ( blockSID ) ; sdiFreeLabel ( subPath ) ; } } if ( !
isStreamoutAlreadyRegistered ) { } } } } { { { bool
isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU srcInfo ;
sdiLabelU loggedName = sdiGetLabelFromChars ( "Battery SOC" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "Battery SOC" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"SparkEV/Visualization/Rate Transition1" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "Battery SOC"
) ; sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cz5yqt3r3xb . crmx2s5hqc . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "a2f87aed-4970-479f-ba9c-b7328414d34a" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( cz5yqt3r3xb . crmx2s5hqc . AQHandles , hDT
, & srcInfo ) ; if ( cz5yqt3r3xb . crmx2s5hqc . AQHandles ) {
sdiSetSignalSampleTimeString ( cz5yqt3r3xb . crmx2s5hqc . AQHandles , "0.1" ,
0.1 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( cz5yqt3r3xb . crmx2s5hqc
. AQHandles , 0.0 ) ; sdiSetRunStartTime ( cz5yqt3r3xb . crmx2s5hqc .
AQHandles , ssGetTaskTime ( rtS , 3 ) ) ; sdiAsyncRepoSetSignalExportSettings
( cz5yqt3r3xb . crmx2s5hqc . AQHandles , 1 , 0 ) ;
sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb . crmx2s5hqc . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"SparkEV/Visualization/Rate Transition8" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [
1 ] = { 2 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cz5yqt3r3xb . ctg1unrwpm . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "5d1c3abe-766f-4984-8bed-38a4b1d16c05" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "1" ) ;
sdiCompleteAsyncioQueueCreation ( cz5yqt3r3xb . ctg1unrwpm . AQHandles , hDT
, & srcInfo ) ; if ( cz5yqt3r3xb . ctg1unrwpm . AQHandles ) {
sdiSetSignalSampleTimeString ( cz5yqt3r3xb . ctg1unrwpm . AQHandles , "0.1" ,
0.1 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate ( cz5yqt3r3xb . ctg1unrwpm
. AQHandles , 0.0 ) ; sdiSetRunStartTime ( cz5yqt3r3xb . ctg1unrwpm .
AQHandles , ssGetTaskTime ( rtS , 3 ) ) ; sdiAsyncRepoSetSignalExportSettings
( cz5yqt3r3xb . ctg1unrwpm . AQHandles , 1 , 0 ) ;
sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb . ctg1unrwpm . AQHandles ,
loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName ) ;
sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel (
propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"SparkEV/Visualization/Signal Specification3" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 1 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cz5yqt3r3xb . j2bb0dzih4 . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "2eb1c7e1-d188-4419-a610-7e0675bb8f4a" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "mph" ) ;
sdiCompleteAsyncioQueueCreation ( cz5yqt3r3xb . j2bb0dzih4 . AQHandles , hDT
, & srcInfo ) ; if ( cz5yqt3r3xb . j2bb0dzih4 . AQHandles ) {
sdiSetSignalSampleTimeString ( cz5yqt3r3xb . j2bb0dzih4 . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cz5yqt3r3xb . j2bb0dzih4 . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cz5yqt3r3xb . j2bb0dzih4 . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . j2bb0dzih4 . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb . j2bb0dzih4 .
AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName
) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel
( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"SparkEV/Visualization/Signal Specification5" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 1 ] = { 2 } ; sigDims . nDims = 1 ; sigDims . dimensions = sigDimsArray ;
srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = ( sdiFullBlkPathU
) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ; srcInfo .
subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo . signalName =
sigName ; srcInfo . sigSourceUUID = 0 ; cz5yqt3r3xb . gjt3j5kgn2 . AQHandles
= sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo . mmi .
InstanceMap . fullPath , "2900467a-0153-4f72-9d67-43acbf2d6268" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "rpm" ) ;
sdiCompleteAsyncioQueueCreation ( cz5yqt3r3xb . gjt3j5kgn2 . AQHandles , hDT
, & srcInfo ) ; if ( cz5yqt3r3xb . gjt3j5kgn2 . AQHandles ) {
sdiSetSignalSampleTimeString ( cz5yqt3r3xb . gjt3j5kgn2 . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cz5yqt3r3xb . gjt3j5kgn2 . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cz5yqt3r3xb . gjt3j5kgn2 . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . gjt3j5kgn2 . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb . gjt3j5kgn2 .
AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName
) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel
( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} { { { bool isStreamoutAlreadyRegistered = false ; { sdiSignalSourceInfoU
srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars ( "" ) ; sdiLabelU
origSigName = sdiGetLabelFromChars ( "" ) ; sdiLabelU propName =
sdiGetLabelFromChars ( "" ) ; sdiLabelU blockPath = sdiGetLabelFromChars (
"SparkEV/Visualization/Signal Specification6" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiLabelU sigName = sdiGetLabelFromChars ( "" ) ;
sdiAsyncRepoDataTypeHandle hDT = sdiAsyncRepoGetBuiltInDataTypeHandle (
DATA_TYPE_DOUBLE ) ; { sdiComplexity sigComplexity = REAL ;
sdiSampleTimeContinuity stCont = SAMPLE_TIME_CONTINUOUS ; int_T sigDimsArray
[ 2 ] = { 1 , 1 } ; sigDims . nDims = 2 ; sigDims . dimensions = sigDimsArray
; srcInfo . numBlockPathElems = 1 ; srcInfo . fullBlockPath = (
sdiFullBlkPathU ) & blockPath ; srcInfo . SID = ( sdiSignalIDU ) & blockSID ;
srcInfo . subPath = subPath ; srcInfo . portIndex = 0 + 1 ; srcInfo .
signalName = sigName ; srcInfo . sigSourceUUID = 0 ; cz5yqt3r3xb . i01ezsocmb
. AQHandles = sdiStartAsyncioQueueCreation ( hDT , & srcInfo , rt_dataMapInfo
. mmi . InstanceMap . fullPath , "acb9cbee-e567-4aff-809e-17caddafb028" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "mph" ) ;
sdiCompleteAsyncioQueueCreation ( cz5yqt3r3xb . i01ezsocmb . AQHandles , hDT
, & srcInfo ) ; if ( cz5yqt3r3xb . i01ezsocmb . AQHandles ) {
sdiSetSignalSampleTimeString ( cz5yqt3r3xb . i01ezsocmb . AQHandles ,
"Continuous" , 0.0 , ssGetTFinal ( rtS ) ) ; sdiSetSignalRefRate (
cz5yqt3r3xb . i01ezsocmb . AQHandles , 0.0 ) ; sdiSetRunStartTime (
cz5yqt3r3xb . i01ezsocmb . AQHandles , ssGetTaskTime ( rtS , 1 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( cz5yqt3r3xb . i01ezsocmb . AQHandles ,
1 , 0 ) ; sdiAsyncRepoSetSignalExportName ( cz5yqt3r3xb . i01ezsocmb .
AQHandles , loggedName , origSigName , propName ) ; } sdiFreeLabel ( sigName
) ; sdiFreeLabel ( loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel
( propName ) ; sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ;
sdiFreeLabel ( subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { } } }
} hc3tptuv0o ( & ( cz5yqt3r3xb . lofhsz2swn . rtb ) ) ; g3ndjszvz2 ( &
iowqpk3eub2 . g1n4ddzbcb , & iowqpk3eub2 . oi1l1zfk0l , & iowqpk3eub2 .
az43xb15iv , & iowqpk3eub2 . iefandv1mx , & iowqpk3eub2 . jywmdz2pm0 ) ;
bnlff5ayna ( rtS , & cz5yqt3r3xb . fuob0ddam2h ) ; manager_p =
nesl_lease_rtp_manager (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver Configuration/Solver Configuration_1"
, 0 ) ; manager = manager_p ; tmp = pointer_is_null ( manager_p ) ; if ( tmp
) { SparkEV_c4aff755_1_gateway ( ) ; manager = nesl_lease_rtp_manager (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver Configuration/Solver Configuration_1"
, 0 ) ; } cz5yqt3r3xb . lnkfufvfoi = ( void * ) manager ; cz5yqt3r3xb .
ondrgrykbz = true ; tmp_p = nesl_lease_simulator (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver Configuration/Solver Configuration_1"
, 0 , 0 ) ; cz5yqt3r3xb . ar3upchjlo = ( void * ) tmp_p ; tmp =
pointer_is_null ( cz5yqt3r3xb . ar3upchjlo ) ; if ( tmp ) {
SparkEV_c4aff755_1_gateway ( ) ; tmp_p = nesl_lease_simulator (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver Configuration/Solver Configuration_1"
, 0 , 0 ) ; cz5yqt3r3xb . ar3upchjlo = ( void * ) tmp_p ; }
slsaSaveRawMemoryForSimTargetOP ( rtS ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver Configuration/Solver Configuration_100"
, ( void * * ) ( & cz5yqt3r3xb . ar3upchjlo ) , 0U * sizeof ( real_T ) ,
nesl_save_simdata , nesl_restore_simdata ) ; simulationData =
nesl_create_simulation_data ( ) ; cz5yqt3r3xb . fyp5vdhzam = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; cz5yqt3r3xb
. kesvfvbvkl = ( void * ) diagnosticManager ; modelParameters . mSolverType =
NE_SOLVER_TYPE_DAE ; modelParameters . mSolverAbsTol = 0.001 ;
modelParameters . mSolverRelTol = 0.001 ; modelParameters .
mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO ; modelParameters . mStartTime =
0.0 ; modelParameters . mLoadInitialState = false ; modelParameters .
mUseSimState = false ; modelParameters . mLinTrimCompile = false ;
modelParameters . mLoggingMode = SSC_LOGGING_NONE ; modelParameters .
mRTWModifiedTimeStamp = 6.09699709E+8 ; modelParameters . mZcDisabled = false
; tmp_e = 0.001 ; modelParameters . mSolverTolerance = tmp_e ; tmp_e = 0.0 ;
modelParameters . mFixedStepSize = tmp_e ; tmp = true ; modelParameters .
mVariableStepSolver = tmp ; tmp = false ; modelParameters . mIsUsingODEN =
tmp ; tmp = slIsRapidAcceleratorSimulating ( ) ; val =
ssGetGlobalInitialStatesAvailable ( rtS ) ; if ( tmp ) { val = ( val &&
ssIsFirstInitCond ( rtS ) ) ; } modelParameters . mLoadInitialState = val ;
modelParameters . mZcDisabled = false ; diagnosticManager = (
NeuDiagnosticManager * ) cz5yqt3r3xb . kesvfvbvkl ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
nesl_initialize_simulator ( ( NeslSimulator * ) cz5yqt3r3xb . ar3upchjlo , &
modelParameters , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; } }
simulationData = ( NeslSimulationData * ) cz5yqt3r3xb . fyp5vdhzam ; time =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time ; simulationData -> mData -> mContStates . mN
= 66 ; simulationData -> mData -> mContStates . mX = & chmgkez0tpf .
ewdrbcmz1i [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & cz5yqt3r3xb . o5xnow4itx ;
simulationData -> mData -> mModeVector . mN = 18 ; simulationData -> mData ->
mModeVector . mX = & cz5yqt3r3xb . dq4uzmtffx [ 0 ] ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ;
simulationData -> mData -> mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep (
rtS ) ; tmp_g [ 0 ] = 0 ; tmp_m [ 0 ] = iowqpk3eub2 . brfljizvcb [ 0 ] ;
tmp_m [ 1 ] = iowqpk3eub2 . brfljizvcb [ 1 ] ; tmp_m [ 2 ] = iowqpk3eub2 .
brfljizvcb [ 2 ] ; tmp_m [ 3 ] = iowqpk3eub2 . brfljizvcb [ 3 ] ; tmp_g [ 1 ]
= 4 ; tmp_m [ 4 ] = iowqpk3eub2 . hk3t1uj3s1 [ 0 ] ; tmp_m [ 5 ] =
iowqpk3eub2 . hk3t1uj3s1 [ 1 ] ; tmp_m [ 6 ] = iowqpk3eub2 . hk3t1uj3s1 [ 2 ]
; tmp_m [ 7 ] = iowqpk3eub2 . hk3t1uj3s1 [ 3 ] ; tmp_g [ 2 ] = 8 ; tmp_m [ 8
] = iowqpk3eub2 . cgvpcvur0e [ 0 ] ; tmp_m [ 9 ] = iowqpk3eub2 . cgvpcvur0e [
1 ] ; tmp_m [ 10 ] = iowqpk3eub2 . cgvpcvur0e [ 2 ] ; tmp_m [ 11 ] =
iowqpk3eub2 . cgvpcvur0e [ 3 ] ; tmp_g [ 3 ] = 12 ; tmp_m [ 12 ] =
iowqpk3eub2 . hlacplpmlq [ 0 ] ; tmp_m [ 13 ] = iowqpk3eub2 . hlacplpmlq [ 1
] ; tmp_m [ 14 ] = iowqpk3eub2 . hlacplpmlq [ 2 ] ; tmp_m [ 15 ] =
iowqpk3eub2 . hlacplpmlq [ 3 ] ; tmp_g [ 4 ] = 16 ; tmp_m [ 16 ] =
iowqpk3eub2 . fhodh2srma [ 0 ] ; tmp_m [ 17 ] = iowqpk3eub2 . fhodh2srma [ 1
] ; tmp_m [ 18 ] = iowqpk3eub2 . fhodh2srma [ 2 ] ; tmp_m [ 19 ] =
iowqpk3eub2 . fhodh2srma [ 3 ] ; tmp_g [ 5 ] = 20 ; tmp_m [ 20 ] =
iowqpk3eub2 . cbv0fng454 [ 0 ] ; tmp_m [ 21 ] = iowqpk3eub2 . cbv0fng454 [ 1
] ; tmp_m [ 22 ] = iowqpk3eub2 . cbv0fng454 [ 2 ] ; tmp_m [ 23 ] =
iowqpk3eub2 . cbv0fng454 [ 3 ] ; tmp_g [ 6 ] = 24 ; tmp_m [ 24 ] =
iowqpk3eub2 . jckfwcjotl [ 0 ] ; tmp_m [ 25 ] = iowqpk3eub2 . jckfwcjotl [ 1
] ; tmp_m [ 26 ] = iowqpk3eub2 . jckfwcjotl [ 2 ] ; tmp_m [ 27 ] =
iowqpk3eub2 . jckfwcjotl [ 3 ] ; tmp_g [ 7 ] = 28 ; tmp_m [ 28 ] =
iowqpk3eub2 . clajzw4qwk [ 0 ] ; tmp_m [ 29 ] = iowqpk3eub2 . clajzw4qwk [ 1
] ; tmp_m [ 30 ] = iowqpk3eub2 . clajzw4qwk [ 2 ] ; tmp_m [ 31 ] =
iowqpk3eub2 . clajzw4qwk [ 3 ] ; tmp_g [ 8 ] = 32 ; tmp_m [ 32 ] =
iowqpk3eub2 . guhcbwpvv2 [ 0 ] ; tmp_m [ 33 ] = iowqpk3eub2 . guhcbwpvv2 [ 1
] ; tmp_m [ 34 ] = iowqpk3eub2 . guhcbwpvv2 [ 2 ] ; tmp_m [ 35 ] =
iowqpk3eub2 . guhcbwpvv2 [ 3 ] ; tmp_g [ 9 ] = 36 ; tmp_m [ 36 ] =
iowqpk3eub2 . k042txegzi [ 0 ] ; tmp_m [ 37 ] = iowqpk3eub2 . k042txegzi [ 1
] ; tmp_m [ 38 ] = iowqpk3eub2 . k042txegzi [ 2 ] ; tmp_m [ 39 ] =
iowqpk3eub2 . k042txegzi [ 3 ] ; tmp_g [ 10 ] = 40 ; tmp_m [ 40 ] =
iowqpk3eub2 . ibos4vblha [ 0 ] ; tmp_m [ 41 ] = iowqpk3eub2 . ibos4vblha [ 1
] ; tmp_m [ 42 ] = iowqpk3eub2 . ibos4vblha [ 2 ] ; tmp_m [ 43 ] =
iowqpk3eub2 . ibos4vblha [ 3 ] ; tmp_g [ 11 ] = 44 ; simulationData -> mData
-> mInputValues . mN = 44 ; simulationData -> mData -> mInputValues . mX = &
tmp_m [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 12 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_g [ 0 ] ;
simulationData -> mData -> mNumjacDxLo . mN = 66 ; simulationData -> mData ->
mNumjacDxLo . mX = & _rtXPerturbMin -> ewdrbcmz1i [ 0 ] ; simulationData ->
mData -> mNumjacDxHi . mN = 66 ; simulationData -> mData -> mNumjacDxHi . mX
= & _rtXPerturbMax -> ewdrbcmz1i [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) cz5yqt3r3xb . kesvfvbvkl ; diagnosticTree_p =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) cz5yqt3r3xb . ar3upchjlo ,
NESL_SIM_NUMJAC_DX_BOUNDS , simulationData , diagnosticManager ) ; if ( tmp_i
!= 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp
) { msg_p = rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus ( rtS
, msg_p ) ; } } tmp_p = nesl_lease_simulator (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver Configuration/Solver Configuration_1"
, 1 , 0 ) ; cz5yqt3r3xb . d2fpk5tr1x = ( void * ) tmp_p ; tmp =
pointer_is_null ( cz5yqt3r3xb . d2fpk5tr1x ) ; if ( tmp ) {
SparkEV_c4aff755_1_gateway ( ) ; tmp_p = nesl_lease_simulator (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver Configuration/Solver Configuration_1"
, 1 , 0 ) ; cz5yqt3r3xb . d2fpk5tr1x = ( void * ) tmp_p ; }
slsaSaveRawMemoryForSimTargetOP ( rtS ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver Configuration/Solver Configuration_110"
, ( void * * ) ( & cz5yqt3r3xb . d2fpk5tr1x ) , 0U * sizeof ( real_T ) ,
nesl_save_simdata , nesl_restore_simdata ) ; simulationData =
nesl_create_simulation_data ( ) ; cz5yqt3r3xb . h5ryejvlpa = ( void * )
simulationData ; diagnosticManager = rtw_create_diagnostics ( ) ; cz5yqt3r3xb
. lc5aujkip1 = ( void * ) diagnosticManager ; modelParameters_p . mSolverType
= NE_SOLVER_TYPE_DAE ; modelParameters_p . mSolverAbsTol = 0.001 ;
modelParameters_p . mSolverRelTol = 0.001 ; modelParameters_p .
mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO ; modelParameters_p . mStartTime =
0.0 ; modelParameters_p . mLoadInitialState = false ; modelParameters_p .
mUseSimState = false ; modelParameters_p . mLinTrimCompile = false ;
modelParameters_p . mLoggingMode = SSC_LOGGING_NONE ; modelParameters_p .
mRTWModifiedTimeStamp = 6.09699709E+8 ; modelParameters_p . mZcDisabled =
false ; tmp_e = 0.001 ; modelParameters_p . mSolverTolerance = tmp_e ; tmp_e
= 0.0 ; modelParameters_p . mFixedStepSize = tmp_e ; tmp = true ;
modelParameters_p . mVariableStepSolver = tmp ; tmp = false ;
modelParameters_p . mIsUsingODEN = tmp ; tmp = slIsRapidAcceleratorSimulating
( ) ; val = ssGetGlobalInitialStatesAvailable ( rtS ) ; if ( tmp ) { val = (
val && ssIsFirstInitCond ( rtS ) ) ; } modelParameters_p . mLoadInitialState
= val ; modelParameters_p . mZcDisabled = false ; diagnosticManager = (
NeuDiagnosticManager * ) cz5yqt3r3xb . lc5aujkip1 ; diagnosticTree_e =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
nesl_initialize_simulator ( ( NeslSimulator * ) cz5yqt3r3xb . d2fpk5tr1x , &
modelParameters_p , diagnosticManager ) ; if ( tmp_i != 0 ) { tmp =
error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg_e =
rtw_diagnostics_msg ( diagnosticTree_e ) ; ssSetErrorStatus ( rtS , msg_e ) ;
} } bnlff5ayna ( rtS , & cz5yqt3r3xb . dwnfs4t0ur ) ; cz5yqt3r3xb .
e2wr3vcmsf = 0 ; MdlInitialize ( ) ; MdlEnable ( ) ; } void MdlOutputs (
int_T tid ) { real_T hchtvncnnw ; real_T fgllbh5cfi ; real_T mabslh5ftc ;
real_T mygikvcog4 ; NeParameterBundle expl_temp ; NeslSimulationData *
simulationData ; NeuDiagnosticManager * diag ; NeuDiagnosticTree * diagTree ;
NeuDiagnosticTree * diagnosticTree ; NeuDiagnosticTree * diagnosticTree_p ;
char * msg ; char * msg_e ; char * msg_p ; real_T tmp_e [ 128 ] ; real_T tmp
[ 44 ] ; real_T b_a [ 4 ] ; real_T du5r1qer1m [ 4 ] ; real_T lhbkn3qgoo [ 4 ]
; real_T sigmaA [ 4 ] ; real_T sigmaB [ 4 ] ; real_T br1z3tn3w1 [ 2 ] ;
real_T c0cfvs25xq ; real_T fl3dumv41q ; real_T fvbnzmfth3 ; real_T hbjgnzk0ke
; real_T ocqbhm20rg ; real_T ozruusy00l ; real_T time ; real_T time_e ;
real_T time_i ; real_T time_p ; real_T * parameterBundle_mRealParameters_mX ;
int32_T trueCount ; int_T tmp_i [ 13 ] ; int_T tmp_p [ 12 ] ; int_T iy ;
boolean_T i3xrxkx0da ; static const real_T e [ 170 ] = { 1.0 , 2.0 , 6.0 ,
24.0 , 120.0 , 720.0 , 5040.0 , 40320.0 , 362880.0 , 3.6288E+6 , 3.99168E+7 ,
4.790016E+8 , 6.2270208E+9 , 8.71782912E+10 , 1.307674368E+12 ,
2.0922789888E+13 , 3.55687428096E+14 , 6.402373705728E+15 ,
1.21645100408832E+17 , 2.43290200817664E+18 , 5.109094217170944E+19 ,
1.1240007277776077E+21 , 2.5852016738884978E+22 , 6.2044840173323941E+23 ,
1.5511210043330986E+25 , 4.0329146112660565E+26 , 1.0888869450418352E+28 ,
3.0488834461171384E+29 , 8.8417619937397008E+30 , 2.6525285981219103E+32 ,
8.2228386541779224E+33 , 2.6313083693369352E+35 , 8.6833176188118859E+36 ,
2.9523279903960412E+38 , 1.0333147966386144E+40 , 3.7199332678990118E+41 ,
1.3763753091226343E+43 , 5.23022617466601E+44 , 2.0397882081197442E+46 ,
8.1591528324789768E+47 , 3.3452526613163803E+49 , 1.4050061177528798E+51 ,
6.0415263063373834E+52 , 2.6582715747884485E+54 , 1.1962222086548019E+56 ,
5.5026221598120885E+57 , 2.5862324151116818E+59 , 1.2413915592536073E+61 ,
6.0828186403426752E+62 , 3.0414093201713376E+64 , 1.5511187532873822E+66 ,
8.0658175170943877E+67 , 4.2748832840600255E+69 , 2.3084369733924138E+71 ,
1.2696403353658276E+73 , 7.1099858780486348E+74 , 4.0526919504877221E+76 ,
2.3505613312828789E+78 , 1.3868311854568986E+80 , 8.3209871127413916E+81 ,
5.0758021387722484E+83 , 3.1469973260387939E+85 , 1.98260831540444E+87 ,
1.2688693218588417E+89 , 8.2476505920824715E+90 , 5.4434493907744307E+92 ,
3.6471110918188683E+94 , 2.4800355424368305E+96 , 1.711224524281413E+98 ,
1.197857166996989E+100 , 8.5047858856786218E+101 , 6.1234458376886077E+103 ,
4.4701154615126834E+105 , 3.3078854415193856E+107 , 2.4809140811395391E+109 ,
1.8854947016660498E+111 , 1.4518309202828584E+113 , 1.1324281178206295E+115 ,
8.9461821307829729E+116 , 7.1569457046263779E+118 , 5.7971260207473655E+120 ,
4.75364333701284E+122 , 3.9455239697206569E+124 , 3.314240134565352E+126 ,
2.8171041143805494E+128 , 2.4227095383672724E+130 , 2.1077572983795269E+132 ,
1.8548264225739836E+134 , 1.6507955160908452E+136 , 1.4857159644817607E+138 ,
1.3520015276784023E+140 , 1.24384140546413E+142 , 1.1567725070816409E+144 ,
1.0873661566567424E+146 , 1.0329978488239052E+148 , 9.916779348709491E+149 ,
9.6192759682482062E+151 , 9.426890448883242E+153 , 9.33262154439441E+155 ,
9.33262154439441E+157 , 9.4259477598383536E+159 , 9.6144667150351211E+161 ,
9.9029007164861754E+163 , 1.0299016745145622E+166 , 1.0813967582402903E+168 ,
1.1462805637347078E+170 , 1.2265202031961373E+172 , 1.3246418194518284E+174 ,
1.4438595832024928E+176 , 1.5882455415227421E+178 , 1.7629525510902437E+180 ,
1.9745068572210728E+182 , 2.2311927486598123E+184 , 2.5435597334721862E+186 ,
2.9250936934930141E+188 , 3.3931086844518965E+190 , 3.969937160808719E+192 ,
4.6845258497542883E+194 , 5.5745857612076033E+196 , 6.6895029134491239E+198 ,
8.09429852527344E+200 , 9.8750442008335976E+202 , 1.2146304367025325E+205 ,
1.5061417415111404E+207 , 1.8826771768889254E+209 , 2.3721732428800459E+211 ,
3.0126600184576582E+213 , 3.8562048236258025E+215 , 4.9745042224772855E+217 ,
6.4668554892204716E+219 , 8.4715806908788174E+221 , 1.1182486511960039E+224 ,
1.4872707060906852E+226 , 1.9929427461615181E+228 , 2.6904727073180495E+230 ,
3.6590428819525472E+232 , 5.01288874827499E+234 , 6.9177864726194859E+236 ,
9.6157231969410859E+238 , 1.346201247571752E+241 , 1.89814375907617E+243 ,
2.6953641378881614E+245 , 3.8543707171800706E+247 , 5.5502938327393013E+249 ,
8.0479260574719866E+251 , 1.17499720439091E+254 , 1.7272458904546376E+256 ,
2.5563239178728637E+258 , 3.8089226376305671E+260 , 5.7133839564458505E+262 ,
8.6272097742332346E+264 , 1.3113358856834518E+267 , 2.0063439050956811E+269 ,
3.0897696138473489E+271 , 4.7891429014633912E+273 , 7.47106292628289E+275 ,
1.1729568794264138E+278 , 1.8532718694937338E+280 , 2.9467022724950369E+282 ,
4.714723635992059E+284 , 7.5907050539472148E+286 , 1.2296942187394488E+289 ,
2.0044015765453015E+291 , 3.2872185855342945E+293 , 5.423910666131586E+295 ,
9.0036917057784329E+297 , 1.5036165148649983E+300 , 2.5260757449731969E+302 ,
4.2690680090047027E+304 , 7.257415615307994E+306 } ; srClearBC ( cz5yqt3r3xb
. fuob0ddam2h . k44bc5mjbl ) ; iowqpk3eub2 . atfdsr0huc = chmgkez0tpf .
h3jcgsxl3g ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( kjmvupbl2i .
GradeSource_CurrentSetting == 1 ) { iowqpk3eub2 . cgjlckur0q =
muDoubleScalarAtan ( iowqpk3eub2 . hpa0jnkmab / (
rtP__PlntVehDstCGFrntAxl2f2PassVeh_sldd_ +
rtP__PlntVehDstCGRearAxl2f2PassVeh_sldd_ ) ) * 57.295779513082323 ; } else {
iowqpk3eub2 . cgjlckur0q = rtP__EnvNominalGrade2f2Environment_sldd_ ; }
iowqpk3eub2 . ciy0n0fvf4 = rtP__EnvGrvty2f2Environment_sldd_ *
rtP__PlntVehMass2f2PassVeh_sldd_ * rtP__PlntVehMass2f2PassVeh_sldd_ /
rtP__DriverTractiveForce2f2Driver_sldd_ * muDoubleScalarSin (
0.017453292519943295 * iowqpk3eub2 . cgjlckur0q ) ; } iowqpk3eub2 .
m3s2vgesq4 = iowqpk3eub2 . atfdsr0huc - iowqpk3eub2 . ciy0n0fvf4 ; if (
iowqpk3eub2 . np15oib1kn ) { hbjgnzk0ke = kjmvupbl2i . Constant8_Value ; }
else if ( kjmvupbl2i . Constant9_Value ) { hbjgnzk0ke = kjmvupbl2i .
Constant_Value_i0lrc5dd0p ; } else if ( iowqpk3eub2 . m3s2vgesq4 > kjmvupbl2i
. u1_UpperSat ) { hbjgnzk0ke = kjmvupbl2i . u1_UpperSat ; } else if (
iowqpk3eub2 . m3s2vgesq4 < kjmvupbl2i . u1_LowerSat ) { hbjgnzk0ke =
kjmvupbl2i . u1_LowerSat ; } else { hbjgnzk0ke = iowqpk3eub2 . m3s2vgesq4 ; }
if ( hbjgnzk0ke > kjmvupbl2i . Saturation_UpperSat ) { hchtvncnnw =
kjmvupbl2i . Saturation_UpperSat ; } else if ( hbjgnzk0ke < kjmvupbl2i .
Saturation_LowerSat ) { hchtvncnnw = kjmvupbl2i . Saturation_LowerSat ; }
else { hchtvncnnw = hbjgnzk0ke ; } fuob0ddam2 ( rtS , iowqpk3eub2 .
puwtafzry1 , hchtvncnnw , & iowqpk3eub2 . fuob0ddam2h , & cz5yqt3r3xb .
fuob0ddam2h ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { iowqpk3eub2 .
jtrhoigdxv = ( kjmvupbl2i . EngSpd_Value <= kjmvupbl2i .
CompareToConstant2_const ) ; iowqpk3eub2 . npj2crdbpe =
rtP__PlntBrkFrntBias2f2PassVeh_sldd_ ; iowqpk3eub2 . b1ipo3flxd =
rtP__PlntBrkRearBias2f2PassVeh_sldd_ ; } iowqpk3eub2 . eabfogqpnn [ 0 ] =
chmgkez0tpf . nbhyf45pww [ 0 ] ; iowqpk3eub2 . eabfogqpnn [ 1 ] = chmgkez0tpf
. nbhyf45pww [ 1 ] ; iowqpk3eub2 . eabfogqpnn [ 2 ] = chmgkez0tpf .
nbhyf45pww [ 2 ] ; iowqpk3eub2 . eabfogqpnn [ 3 ] = chmgkez0tpf . nbhyf45pww
[ 3 ] ; iowqpk3eub2 . n2qyp3jaox [ 0 ] = iowqpk3eub2 . npj2crdbpe *
iowqpk3eub2 . eabfogqpnn [ 0 ] ; iowqpk3eub2 . n2qyp3jaox [ 1 ] = iowqpk3eub2
. npj2crdbpe * iowqpk3eub2 . eabfogqpnn [ 1 ] ; iowqpk3eub2 . n2qyp3jaox [ 2
] = iowqpk3eub2 . b1ipo3flxd * iowqpk3eub2 . eabfogqpnn [ 2 ] ; iowqpk3eub2 .
n2qyp3jaox [ 3 ] = iowqpk3eub2 . b1ipo3flxd * iowqpk3eub2 . eabfogqpnn [ 3 ]
; iowqpk3eub2 . fbcbuzgnbt [ 0 ] = rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ *
iowqpk3eub2 . n2qyp3jaox [ 0 ] ; iowqpk3eub2 . fbcbuzgnbt [ 1 ] =
rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ * iowqpk3eub2 . n2qyp3jaox [ 1 ] ;
iowqpk3eub2 . fbcbuzgnbt [ 2 ] = rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ *
iowqpk3eub2 . n2qyp3jaox [ 2 ] ; iowqpk3eub2 . fbcbuzgnbt [ 3 ] =
rtP__PlntBrkPrsFctr2f2PassVeh_sldd_ * iowqpk3eub2 . n2qyp3jaox [ 3 ] ;
iowqpk3eub2 . brfljizvcb [ 0 ] = iowqpk3eub2 . fbcbuzgnbt [ 0 ] ; iowqpk3eub2
. brfljizvcb [ 1 ] = 0.0 ; iowqpk3eub2 . brfljizvcb [ 2 ] = 0.0 ; iowqpk3eub2
. brfljizvcb [ 3 ] = 0.0 ; iowqpk3eub2 . hk3t1uj3s1 [ 0 ] = iowqpk3eub2 .
fbcbuzgnbt [ 1 ] ; iowqpk3eub2 . hk3t1uj3s1 [ 1 ] = 0.0 ; iowqpk3eub2 .
hk3t1uj3s1 [ 2 ] = 0.0 ; iowqpk3eub2 . hk3t1uj3s1 [ 3 ] = 0.0 ; iowqpk3eub2 .
cgvpcvur0e [ 0 ] = iowqpk3eub2 . fbcbuzgnbt [ 2 ] ; iowqpk3eub2 . cgvpcvur0e
[ 1 ] = 0.0 ; iowqpk3eub2 . cgvpcvur0e [ 2 ] = 0.0 ; iowqpk3eub2 . cgvpcvur0e
[ 3 ] = 0.0 ; iowqpk3eub2 . hlacplpmlq [ 0 ] = iowqpk3eub2 . fbcbuzgnbt [ 3 ]
; iowqpk3eub2 . hlacplpmlq [ 1 ] = 0.0 ; iowqpk3eub2 . hlacplpmlq [ 2 ] = 0.0
; iowqpk3eub2 . hlacplpmlq [ 3 ] = 0.0 ; iowqpk3eub2 . fhodh2srma [ 0 ] =
iowqpk3eub2 . cgjlckur0q ; iowqpk3eub2 . fhodh2srma [ 1 ] = 0.0 ; iowqpk3eub2
. fhodh2srma [ 2 ] = 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) { cz5yqt3r3xb .
cxyhghs0r4 [ 0 ] = ! ( iowqpk3eub2 . fhodh2srma [ 0 ] == cz5yqt3r3xb .
cxyhghs0r4 [ 1 ] ) ; cz5yqt3r3xb . cxyhghs0r4 [ 1 ] = iowqpk3eub2 .
fhodh2srma [ 0 ] ; } iowqpk3eub2 . fhodh2srma [ 0 ] = cz5yqt3r3xb .
cxyhghs0r4 [ 1 ] ; iowqpk3eub2 . fhodh2srma [ 3 ] = cz5yqt3r3xb . cxyhghs0r4
[ 0 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { iowqpk3eub2 . hzjndpcd5s [ 0 ]
= rtP__EnvWindVelX2f2Environment_sldd_ ; iowqpk3eub2 . hzjndpcd5s [ 1 ] =
rtP__EnvWindVelY2f2Environment_sldd_ ; iowqpk3eub2 . hzjndpcd5s [ 2 ] =
rtP__EnvWindVelZ2f2Environment_sldd_ ; } iowqpk3eub2 . cbv0fng454 [ 0 ] =
iowqpk3eub2 . hzjndpcd5s [ 0 ] ; iowqpk3eub2 . cbv0fng454 [ 1 ] = 0.0 ;
iowqpk3eub2 . cbv0fng454 [ 2 ] = 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) {
cz5yqt3r3xb . cxsxj110xc [ 0 ] = ! ( iowqpk3eub2 . cbv0fng454 [ 0 ] ==
cz5yqt3r3xb . cxsxj110xc [ 1 ] ) ; cz5yqt3r3xb . cxsxj110xc [ 1 ] =
iowqpk3eub2 . cbv0fng454 [ 0 ] ; } iowqpk3eub2 . cbv0fng454 [ 0 ] =
cz5yqt3r3xb . cxsxj110xc [ 1 ] ; iowqpk3eub2 . cbv0fng454 [ 3 ] = cz5yqt3r3xb
. cxsxj110xc [ 0 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { iowqpk3eub2 .
fjnu3gvsoe = rtP__EnvAirTemp2f2Environment_sldd_ ; } iowqpk3eub2 . jckfwcjotl
[ 0 ] = iowqpk3eub2 . fjnu3gvsoe ; iowqpk3eub2 . jckfwcjotl [ 1 ] = 0.0 ;
iowqpk3eub2 . jckfwcjotl [ 2 ] = 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) {
cz5yqt3r3xb . jdazc15ain [ 0 ] = ! ( iowqpk3eub2 . jckfwcjotl [ 0 ] ==
cz5yqt3r3xb . jdazc15ain [ 1 ] ) ; cz5yqt3r3xb . jdazc15ain [ 1 ] =
iowqpk3eub2 . jckfwcjotl [ 0 ] ; } iowqpk3eub2 . jckfwcjotl [ 0 ] =
cz5yqt3r3xb . jdazc15ain [ 1 ] ; iowqpk3eub2 . jckfwcjotl [ 3 ] = cz5yqt3r3xb
. jdazc15ain [ 0 ] ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { iowqpk3eub2 .
m41crq5gno = kjmvupbl2i . Constant3_Value ; } iowqpk3eub2 . bvt0cxt3h4 = 0.0
; iowqpk3eub2 . bvt0cxt3h4 += kjmvupbl2i . TransferFcn5_C * chmgkez0tpf .
gs5cem5nqo ; if ( iowqpk3eub2 . bvt0cxt3h4 > kjmvupbl2i .
Saturation_UpperSat_l3n5201rqk ) { iowqpk3eub2 . puhbleyldk = kjmvupbl2i .
Saturation_UpperSat_l3n5201rqk ; } else if ( iowqpk3eub2 . bvt0cxt3h4 <
kjmvupbl2i . Saturation_LowerSat_daadgw5azp ) { iowqpk3eub2 . puhbleyldk =
kjmvupbl2i . Saturation_LowerSat_daadgw5azp ; } else { iowqpk3eub2 .
puhbleyldk = iowqpk3eub2 . bvt0cxt3h4 ; } iowqpk3eub2 . ir1e3eamgb =
iowqpk3eub2 . m41crq5gno / iowqpk3eub2 . puhbleyldk ; if ( cz5yqt3r3xb .
erhws3aqax == 0.0 ) { cz5yqt3r3xb . erhws3aqax = 1.0 ; chmgkez0tpf .
o44tjxyaqi = iowqpk3eub2 . ir1e3eamgb ; } iowqpk3eub2 . clajzw4qwk [ 0 ] =
chmgkez0tpf . o44tjxyaqi ; iowqpk3eub2 . clajzw4qwk [ 1 ] = ( iowqpk3eub2 .
ir1e3eamgb - chmgkez0tpf . o44tjxyaqi ) * 1000.0 ; iowqpk3eub2 . clajzw4qwk [
2 ] = 0.0 ; iowqpk3eub2 . clajzw4qwk [ 3 ] = 0.0 ; if ( ssIsSampleHit ( rtS ,
1 , 0 ) ) { iowqpk3eub2 . jj4uuhdxay =
rtP__PlntDCDCVoltInit2f2BatteryDCDC_sldd_ ; } iowqpk3eub2 . guhcbwpvv2 [ 0 ]
= iowqpk3eub2 . jj4uuhdxay ; iowqpk3eub2 . guhcbwpvv2 [ 1 ] = 0.0 ;
iowqpk3eub2 . guhcbwpvv2 [ 2 ] = 0.0 ; if ( ssIsMajorTimeStep ( rtS ) ) {
cz5yqt3r3xb . pz2p5tww5r [ 0 ] = ! ( iowqpk3eub2 . guhcbwpvv2 [ 0 ] ==
cz5yqt3r3xb . pz2p5tww5r [ 1 ] ) ; cz5yqt3r3xb . pz2p5tww5r [ 1 ] =
iowqpk3eub2 . guhcbwpvv2 [ 0 ] ; } iowqpk3eub2 . guhcbwpvv2 [ 0 ] =
cz5yqt3r3xb . pz2p5tww5r [ 1 ] ; iowqpk3eub2 . guhcbwpvv2 [ 3 ] = cz5yqt3r3xb
. pz2p5tww5r [ 0 ] ; iowqpk3eub2 . hdpouphvxx [ 0 ] = cz5yqt3r3xb .
dci24ewo3n [ 0 ] ; iowqpk3eub2 . hdpouphvxx [ 1 ] = cz5yqt3r3xb . dci24ewo3n
[ 1 ] ; if ( cz5yqt3r3xb . dfwjuauqhh != ( rtInf ) ) { hbjgnzk0ke = ssGetT (
rtS ) - cz5yqt3r3xb . dfwjuauqhh ; iowqpk3eub2 . hdpouphvxx [ 0 ] +=
cz5yqt3r3xb . n20oxvozfr [ 0 ] * hbjgnzk0ke ; iowqpk3eub2 . hdpouphvxx [ 1 ]
+= cz5yqt3r3xb . n20oxvozfr [ 1 ] * hbjgnzk0ke ; } iowqpk3eub2 . k042txegzi [
0 ] = iowqpk3eub2 . hdpouphvxx [ 0 ] ; iowqpk3eub2 . k042txegzi [ 1 ] = 0.0 ;
iowqpk3eub2 . k042txegzi [ 2 ] = 0.0 ; iowqpk3eub2 . k042txegzi [ 3 ] = 0.0 ;
iowqpk3eub2 . ibos4vblha [ 0 ] = iowqpk3eub2 . hdpouphvxx [ 1 ] ; iowqpk3eub2
. ibos4vblha [ 1 ] = 0.0 ; iowqpk3eub2 . ibos4vblha [ 2 ] = 0.0 ; iowqpk3eub2
. ibos4vblha [ 3 ] = 0.0 ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if (
cz5yqt3r3xb . ondrgrykbz ) { sigmaB [ 0 ] = kjmvupbl2i .
RTP_52118A8B_vc_Value ; sigmaB [ 1 ] =
rtP__PlntBattTempInitDegC2f2BatteryDCDC_sldd_ ; sigmaB [ 2 ] =
rtP__PlntBattSocInit2f2BatteryDCDC_sldd_ ; sigmaB [ 3 ] =
rtP__PlntDCDCVoltInit2f2BatteryDCDC_sldd_ ;
parameterBundle_mRealParameters_mX = & sigmaB [ 0 ] ; diag =
rtw_create_diagnostics ( ) ; diagTree =
neu_diagnostic_manager_get_initial_tree ( diag ) ; expl_temp .
mRealParameters . mN = 4 ; expl_temp . mRealParameters . mX =
parameterBundle_mRealParameters_mX ; expl_temp . mLogicalParameters . mN = 0
; expl_temp . mLogicalParameters . mX = NULL ; expl_temp . mIntegerParameters
. mN = 0 ; expl_temp . mIntegerParameters . mX = NULL ; expl_temp .
mIndexParameters . mN = 0 ; expl_temp . mIndexParameters . mX = NULL ;
i3xrxkx0da = nesl_rtp_manager_set_rtps ( ( NeslRtpManager * ) cz5yqt3r3xb .
lnkfufvfoi , ssGetT ( rtS ) , expl_temp , diag ) ; if ( ! i3xrxkx0da ) {
i3xrxkx0da = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
i3xrxkx0da ) { msg = rtw_diagnostics_msg ( diagTree ) ; ssSetErrorStatus (
rtS , msg ) ; } } } cz5yqt3r3xb . ondrgrykbz = false ; } simulationData = (
NeslSimulationData * ) cz5yqt3r3xb . fyp5vdhzam ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 66 ;
simulationData -> mData -> mContStates . mX = & chmgkez0tpf . ewdrbcmz1i [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & cz5yqt3r3xb . o5xnow4itx ; simulationData -> mData ->
mModeVector . mN = 18 ; simulationData -> mData -> mModeVector . mX = &
cz5yqt3r3xb . dq4uzmtffx [ 0 ] ; i3xrxkx0da = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = i3xrxkx0da ; simulationData -> mData -> mIsMajorTimeStep
= ssIsMajorTimeStep ( rtS ) ; i3xrxkx0da = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = i3xrxkx0da ; i3xrxkx0da = ssIsSolverCheckingCIC ( rtS
) ; simulationData -> mData -> mIsSolverCheckingCIC = i3xrxkx0da ; i3xrxkx0da
= ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = i3xrxkx0da ; simulationData -> mData ->
mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; i3xrxkx0da
= ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = i3xrxkx0da ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_p [ 0 ] = 0 ;
tmp [ 0 ] = iowqpk3eub2 . brfljizvcb [ 0 ] ; tmp [ 1 ] = iowqpk3eub2 .
brfljizvcb [ 1 ] ; tmp [ 2 ] = iowqpk3eub2 . brfljizvcb [ 2 ] ; tmp [ 3 ] =
iowqpk3eub2 . brfljizvcb [ 3 ] ; tmp_p [ 1 ] = 4 ; tmp [ 4 ] = iowqpk3eub2 .
hk3t1uj3s1 [ 0 ] ; tmp [ 5 ] = iowqpk3eub2 . hk3t1uj3s1 [ 1 ] ; tmp [ 6 ] =
iowqpk3eub2 . hk3t1uj3s1 [ 2 ] ; tmp [ 7 ] = iowqpk3eub2 . hk3t1uj3s1 [ 3 ] ;
tmp_p [ 2 ] = 8 ; tmp [ 8 ] = iowqpk3eub2 . cgvpcvur0e [ 0 ] ; tmp [ 9 ] =
iowqpk3eub2 . cgvpcvur0e [ 1 ] ; tmp [ 10 ] = iowqpk3eub2 . cgvpcvur0e [ 2 ]
; tmp [ 11 ] = iowqpk3eub2 . cgvpcvur0e [ 3 ] ; tmp_p [ 3 ] = 12 ; tmp [ 12 ]
= iowqpk3eub2 . hlacplpmlq [ 0 ] ; tmp [ 13 ] = iowqpk3eub2 . hlacplpmlq [ 1
] ; tmp [ 14 ] = iowqpk3eub2 . hlacplpmlq [ 2 ] ; tmp [ 15 ] = iowqpk3eub2 .
hlacplpmlq [ 3 ] ; tmp_p [ 4 ] = 16 ; tmp [ 16 ] = iowqpk3eub2 . fhodh2srma [
0 ] ; tmp [ 17 ] = iowqpk3eub2 . fhodh2srma [ 1 ] ; tmp [ 18 ] = iowqpk3eub2
. fhodh2srma [ 2 ] ; tmp [ 19 ] = iowqpk3eub2 . fhodh2srma [ 3 ] ; tmp_p [ 5
] = 20 ; tmp [ 20 ] = iowqpk3eub2 . cbv0fng454 [ 0 ] ; tmp [ 21 ] =
iowqpk3eub2 . cbv0fng454 [ 1 ] ; tmp [ 22 ] = iowqpk3eub2 . cbv0fng454 [ 2 ]
; tmp [ 23 ] = iowqpk3eub2 . cbv0fng454 [ 3 ] ; tmp_p [ 6 ] = 24 ; tmp [ 24 ]
= iowqpk3eub2 . jckfwcjotl [ 0 ] ; tmp [ 25 ] = iowqpk3eub2 . jckfwcjotl [ 1
] ; tmp [ 26 ] = iowqpk3eub2 . jckfwcjotl [ 2 ] ; tmp [ 27 ] = iowqpk3eub2 .
jckfwcjotl [ 3 ] ; tmp_p [ 7 ] = 28 ; tmp [ 28 ] = iowqpk3eub2 . clajzw4qwk [
0 ] ; tmp [ 29 ] = iowqpk3eub2 . clajzw4qwk [ 1 ] ; tmp [ 30 ] = iowqpk3eub2
. clajzw4qwk [ 2 ] ; tmp [ 31 ] = iowqpk3eub2 . clajzw4qwk [ 3 ] ; tmp_p [ 8
] = 32 ; tmp [ 32 ] = iowqpk3eub2 . guhcbwpvv2 [ 0 ] ; tmp [ 33 ] =
iowqpk3eub2 . guhcbwpvv2 [ 1 ] ; tmp [ 34 ] = iowqpk3eub2 . guhcbwpvv2 [ 2 ]
; tmp [ 35 ] = iowqpk3eub2 . guhcbwpvv2 [ 3 ] ; tmp_p [ 9 ] = 36 ; tmp [ 36 ]
= iowqpk3eub2 . k042txegzi [ 0 ] ; tmp [ 37 ] = iowqpk3eub2 . k042txegzi [ 1
] ; tmp [ 38 ] = iowqpk3eub2 . k042txegzi [ 2 ] ; tmp [ 39 ] = iowqpk3eub2 .
k042txegzi [ 3 ] ; tmp_p [ 10 ] = 40 ; tmp [ 40 ] = iowqpk3eub2 . ibos4vblha
[ 0 ] ; tmp [ 41 ] = iowqpk3eub2 . ibos4vblha [ 1 ] ; tmp [ 42 ] =
iowqpk3eub2 . ibos4vblha [ 2 ] ; tmp [ 43 ] = iowqpk3eub2 . ibos4vblha [ 3 ]
; tmp_p [ 11 ] = 44 ; simulationData -> mData -> mInputValues . mN = 44 ;
simulationData -> mData -> mInputValues . mX = & tmp [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 12 ; simulationData -> mData ->
mInputOffsets . mX = & tmp_p [ 0 ] ; simulationData -> mData -> mOutputs . mN
= 84 ; simulationData -> mData -> mOutputs . mX = & iowqpk3eub2 . m1nza5khum
[ 0 ] ; simulationData -> mData -> mTolerances . mN = 0 ; simulationData ->
mData -> mTolerances . mX = NULL ; simulationData -> mData ->
mCstateHasChanged = false ; time_p = ssGetTaskTime ( rtS , 0 ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time_p ; simulationData -> mData -> mSampleHits . mN = 0 ;
simulationData -> mData -> mSampleHits . mX = NULL ; simulationData -> mData
-> mIsFundamentalSampleHit = false ; diag = ( NeuDiagnosticManager * )
cz5yqt3r3xb . kesvfvbvkl ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diag ) ; iy = ne_simulator_method (
( NeslSimulator * ) cz5yqt3r3xb . ar3upchjlo , NESL_SIM_OUTPUTS ,
simulationData , diag ) ; if ( iy != 0 ) { i3xrxkx0da = error_buffer_is_empty
( ssGetErrorStatus ( rtS ) ) ; if ( i3xrxkx0da ) { msg_p =
rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg_p ) ; }
} if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
simulationData = ( NeslSimulationData * ) cz5yqt3r3xb . h5ryejvlpa ; time_e =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time_e ; simulationData -> mData -> mContStates .
mN = 0 ; simulationData -> mData -> mContStates . mX = NULL ; simulationData
-> mData -> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates .
mX = & cz5yqt3r3xb . eltxhn2ccn ; simulationData -> mData -> mModeVector . mN
= 0 ; simulationData -> mData -> mModeVector . mX = & cz5yqt3r3xb .
mvmiplzz0c ; i3xrxkx0da = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo (
rtS ) -> foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents =
i3xrxkx0da ; simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep
( rtS ) ; i3xrxkx0da = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
i3xrxkx0da ; i3xrxkx0da = ssIsSolverCheckingCIC ( rtS ) ; simulationData ->
mData -> mIsSolverCheckingCIC = i3xrxkx0da ; simulationData -> mData ->
mIsComputingJacobian = false ; simulationData -> mData -> mIsEvaluatingF0 =
false ; i3xrxkx0da = ssIsSolverRequestingReset ( rtS ) ; simulationData ->
mData -> mIsSolverRequestingReset = i3xrxkx0da ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_i [ 0 ] = 0 ;
tmp_e [ 0 ] = iowqpk3eub2 . brfljizvcb [ 0 ] ; tmp_e [ 1 ] = iowqpk3eub2 .
brfljizvcb [ 1 ] ; tmp_e [ 2 ] = iowqpk3eub2 . brfljizvcb [ 2 ] ; tmp_e [ 3 ]
= iowqpk3eub2 . brfljizvcb [ 3 ] ; tmp_i [ 1 ] = 4 ; tmp_e [ 4 ] =
iowqpk3eub2 . hk3t1uj3s1 [ 0 ] ; tmp_e [ 5 ] = iowqpk3eub2 . hk3t1uj3s1 [ 1 ]
; tmp_e [ 6 ] = iowqpk3eub2 . hk3t1uj3s1 [ 2 ] ; tmp_e [ 7 ] = iowqpk3eub2 .
hk3t1uj3s1 [ 3 ] ; tmp_i [ 2 ] = 8 ; tmp_e [ 8 ] = iowqpk3eub2 . cgvpcvur0e [
0 ] ; tmp_e [ 9 ] = iowqpk3eub2 . cgvpcvur0e [ 1 ] ; tmp_e [ 10 ] =
iowqpk3eub2 . cgvpcvur0e [ 2 ] ; tmp_e [ 11 ] = iowqpk3eub2 . cgvpcvur0e [ 3
] ; tmp_i [ 3 ] = 12 ; tmp_e [ 12 ] = iowqpk3eub2 . hlacplpmlq [ 0 ] ; tmp_e
[ 13 ] = iowqpk3eub2 . hlacplpmlq [ 1 ] ; tmp_e [ 14 ] = iowqpk3eub2 .
hlacplpmlq [ 2 ] ; tmp_e [ 15 ] = iowqpk3eub2 . hlacplpmlq [ 3 ] ; tmp_i [ 4
] = 16 ; tmp_e [ 16 ] = iowqpk3eub2 . fhodh2srma [ 0 ] ; tmp_e [ 17 ] =
iowqpk3eub2 . fhodh2srma [ 1 ] ; tmp_e [ 18 ] = iowqpk3eub2 . fhodh2srma [ 2
] ; tmp_e [ 19 ] = iowqpk3eub2 . fhodh2srma [ 3 ] ; tmp_i [ 5 ] = 20 ; tmp_e
[ 20 ] = iowqpk3eub2 . cbv0fng454 [ 0 ] ; tmp_e [ 21 ] = iowqpk3eub2 .
cbv0fng454 [ 1 ] ; tmp_e [ 22 ] = iowqpk3eub2 . cbv0fng454 [ 2 ] ; tmp_e [ 23
] = iowqpk3eub2 . cbv0fng454 [ 3 ] ; tmp_i [ 6 ] = 24 ; tmp_e [ 24 ] =
iowqpk3eub2 . jckfwcjotl [ 0 ] ; tmp_e [ 25 ] = iowqpk3eub2 . jckfwcjotl [ 1
] ; tmp_e [ 26 ] = iowqpk3eub2 . jckfwcjotl [ 2 ] ; tmp_e [ 27 ] =
iowqpk3eub2 . jckfwcjotl [ 3 ] ; tmp_i [ 7 ] = 28 ; tmp_e [ 28 ] =
iowqpk3eub2 . clajzw4qwk [ 0 ] ; tmp_e [ 29 ] = iowqpk3eub2 . clajzw4qwk [ 1
] ; tmp_e [ 30 ] = iowqpk3eub2 . clajzw4qwk [ 2 ] ; tmp_e [ 31 ] =
iowqpk3eub2 . clajzw4qwk [ 3 ] ; tmp_i [ 8 ] = 32 ; tmp_e [ 32 ] =
iowqpk3eub2 . guhcbwpvv2 [ 0 ] ; tmp_e [ 33 ] = iowqpk3eub2 . guhcbwpvv2 [ 1
] ; tmp_e [ 34 ] = iowqpk3eub2 . guhcbwpvv2 [ 2 ] ; tmp_e [ 35 ] =
iowqpk3eub2 . guhcbwpvv2 [ 3 ] ; tmp_i [ 9 ] = 36 ; tmp_e [ 36 ] =
iowqpk3eub2 . k042txegzi [ 0 ] ; tmp_e [ 37 ] = iowqpk3eub2 . k042txegzi [ 1
] ; tmp_e [ 38 ] = iowqpk3eub2 . k042txegzi [ 2 ] ; tmp_e [ 39 ] =
iowqpk3eub2 . k042txegzi [ 3 ] ; tmp_i [ 10 ] = 40 ; tmp_e [ 40 ] =
iowqpk3eub2 . ibos4vblha [ 0 ] ; tmp_e [ 41 ] = iowqpk3eub2 . ibos4vblha [ 1
] ; tmp_e [ 42 ] = iowqpk3eub2 . ibos4vblha [ 2 ] ; tmp_e [ 43 ] =
iowqpk3eub2 . ibos4vblha [ 3 ] ; tmp_i [ 11 ] = 44 ; memcpy ( & tmp_e [ 44 ]
, & iowqpk3eub2 . m1nza5khum [ 0 ] , 84U * sizeof ( real_T ) ) ; tmp_i [ 12 ]
= 128 ; simulationData -> mData -> mInputValues . mN = 128 ; simulationData
-> mData -> mInputValues . mX = & tmp_e [ 0 ] ; simulationData -> mData ->
mInputOffsets . mN = 13 ; simulationData -> mData -> mInputOffsets . mX = &
tmp_i [ 0 ] ; simulationData -> mData -> mOutputs . mN = 28 ; simulationData
-> mData -> mOutputs . mX = & iowqpk3eub2 . jbgpjywn3z [ 0 ] ; simulationData
-> mData -> mTolerances . mN = 0 ; simulationData -> mData -> mTolerances .
mX = NULL ; simulationData -> mData -> mCstateHasChanged = false ; time_i =
ssGetTaskTime ( rtS , 0 ) ; simulationData -> mData -> mTime . mN = 1 ;
simulationData -> mData -> mTime . mX = & time_i ; simulationData -> mData ->
mSampleHits . mN = 0 ; simulationData -> mData -> mSampleHits . mX = NULL ;
simulationData -> mData -> mIsFundamentalSampleHit = false ; diag = (
NeuDiagnosticManager * ) cz5yqt3r3xb . lc5aujkip1 ; diagnosticTree_p =
neu_diagnostic_manager_get_initial_tree ( diag ) ; iy = ne_simulator_method (
( NeslSimulator * ) cz5yqt3r3xb . d2fpk5tr1x , NESL_SIM_OUTPUTS ,
simulationData , diag ) ; if ( iy != 0 ) { i3xrxkx0da = error_buffer_is_empty
( ssGetErrorStatus ( rtS ) ) ; if ( i3xrxkx0da ) { msg_e =
rtw_diagnostics_msg ( diagnosticTree_p ) ; ssSetErrorStatus ( rtS , msg_e ) ;
} } if ( ssIsMajorTimeStep ( rtS ) && simulationData -> mData ->
mCstateHasChanged ) { ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ; }
iowqpk3eub2 . ogs4ehkbam = iowqpk3eub2 . jbgpjywn3z [ 0 ] ; iowqpk3eub2 .
efiylruo1t = kjmvupbl2i . Gain1_Gain * iowqpk3eub2 . jbgpjywn3z [ 19 ] ;
hbjgnzk0ke = ssGetT ( rtS ) ; if ( kjmvupbl2i . repeat_Value > kjmvupbl2i .
Switch_Threshold ) { iowqpk3eub2 . dqh4oe22xa = muDoubleScalarMod (
hbjgnzk0ke , kjmvupbl2i . tFinal_Value ) ; } else { iowqpk3eub2 . dqh4oe22xa
= hbjgnzk0ke ; } fl3dumv41q = look1_pbinlcapw ( iowqpk3eub2 . dqh4oe22xa ,
kjmvupbl2i . uDLookupTable_bp01Data , kjmvupbl2i . uDLookupTable_tableData ,
& cz5yqt3r3xb . mhe3tr5m1h , 1369U ) ; iowqpk3eub2 . jfa1nbks1u =
2.236936292054402 * fl3dumv41q ; iowqpk3eub2 . o4djdimsdm =
0.44704000000000005 * iowqpk3eub2 . jfa1nbks1u ; if ( ssIsSampleHit ( rtS , 1
, 0 ) ) { iowqpk3eub2 . fjkq3v532f = ( muDoubleScalarAbs ( iowqpk3eub2 .
cgjlckur0q ) >= kjmvupbl2i . CompareToConstant1_const ) ; } i3xrxkx0da = ( (
iowqpk3eub2 . jtrhoigdxv && ( iowqpk3eub2 . ogs4ehkbam <= kjmvupbl2i .
CompareToConstant3_const ) && ( iowqpk3eub2 . efiylruo1t <= kjmvupbl2i .
CompareToConstant4_const ) ) || ( ( muDoubleScalarAbs ( iowqpk3eub2 .
o4djdimsdm ) <= kjmvupbl2i . CompareToConstant_const ) && iowqpk3eub2 .
fjkq3v532f ) ) ; if ( ( kjmvupbl2i . Constant10_Value || i3xrxkx0da ) &&
iowqpk3eub2 . jiym3rqvan ) { if ( kjmvupbl2i . Constant10_Value ) {
fl3dumv41q = kjmvupbl2i . Constant2_Value_cv5k10omis ; } else { fl3dumv41q =
i3xrxkx0da ; } } else if ( kjmvupbl2i . Constant12_Value ) { fl3dumv41q =
kjmvupbl2i . Constant_Value_lmvdjicp50 ; } else if ( iowqpk3eub2 . m3s2vgesq4
> kjmvupbl2i . u0_UpperSat ) { fl3dumv41q = - kjmvupbl2i . u0_UpperSat ; }
else if ( iowqpk3eub2 . m3s2vgesq4 < kjmvupbl2i . u0_LowerSat ) { fl3dumv41q
= - kjmvupbl2i . u0_LowerSat ; } else { fl3dumv41q = - iowqpk3eub2 .
m3s2vgesq4 ; } if ( fl3dumv41q > kjmvupbl2i . Saturation_UpperSat_ncjkk1jucd
) { fgllbh5cfi = kjmvupbl2i . Saturation_UpperSat_ncjkk1jucd ; } else if (
fl3dumv41q < kjmvupbl2i . Saturation_LowerSat_g5xnm5rrtb ) { fgllbh5cfi =
kjmvupbl2i . Saturation_LowerSat_g5xnm5rrtb ; } else { fgllbh5cfi =
fl3dumv41q ; } fuob0ddam2 ( rtS , iowqpk3eub2 . gcn3sxipyq , fgllbh5cfi , &
iowqpk3eub2 . dwnfs4t0ur , & cz5yqt3r3xb . dwnfs4t0ur ) ; if ( iowqpk3eub2 .
ogs4ehkbam > kjmvupbl2i . DeadZone_End ) { iowqpk3eub2 . jpcr1f245w =
iowqpk3eub2 . ogs4ehkbam - kjmvupbl2i . DeadZone_End ; } else if (
iowqpk3eub2 . ogs4ehkbam >= kjmvupbl2i . DeadZone_Start ) { iowqpk3eub2 .
jpcr1f245w = 0.0 ; } else { iowqpk3eub2 . jpcr1f245w = iowqpk3eub2 .
ogs4ehkbam - kjmvupbl2i . DeadZone_Start ; } if ( ssIsSampleHit ( rtS , 1 , 0
) ) { cz5yqt3r3xb . jmm4c105ye = ssGetTaskTime ( rtS , 1 ) ; cz5yqt3r3xb .
f05boyvyxi = cz5yqt3r3xb . jmm4c105ye - cz5yqt3r3xb . dukvvezhh4 ;
cz5yqt3r3xb . dukvvezhh4 = cz5yqt3r3xb . jmm4c105ye ; cz5yqt3r3xb .
em1wbmdjow += cz5yqt3r3xb . f05boyvyxi ; cz5yqt3r3xb . hndyq1p4da = - 1 ; if
( cz5yqt3r3xb . ldpanoehpw == 0U ) { cz5yqt3r3xb . ldpanoehpw = 1U ;
cz5yqt3r3xb . iyzfufaeyj = 1U ; iowqpk3eub2 . ivqnpc0uok =
rtP__DriverInitialGear2f2Driver_sldd_ ; cz5yqt3r3xb . eck5rxblzt =
rtP__DriverInitialGear2f2Driver_sldd_ ; if (
rtP__DriverInitialGear2f2Driver_sldd_ < 0.0 ) { cz5yqt3r3xb . metkb44aex =
nz1er2u5yq ; cz5yqt3r3xb . em1wbmdjow = 0.0 ; iowqpk3eub2 . ivqnpc0uok = -
1.0 ; } else if ( rtP__DriverInitialGear2f2Driver_sldd_ == 0.0 ) {
cz5yqt3r3xb . metkb44aex = mtch1eyo22 ; cz5yqt3r3xb . em1wbmdjow = 0.0 ;
iowqpk3eub2 . ivqnpc0uok = 0.0 ; } else { cz5yqt3r3xb . metkb44aex =
bvcpbrrjdc ; cz5yqt3r3xb . em1wbmdjow = 0.0 ; } } else { switch ( cz5yqt3r3xb
. metkb44aex ) { case mtch1eyo22 : if ( ( ( ssGetTaskTime ( rtS , 1 ) -
cz5yqt3r3xb . dukvvezhh4 ) + cz5yqt3r3xb . em1wbmdjow >=
rtP__DriverShiftTime2f2Driver_sldd_ ) && ( ( iowqpk3eub2 . o4djdimsdm > 0.0 )
&& ( iowqpk3eub2 . fuob0ddam2h . motv0pybyv > 0.0 ) ) ) { cz5yqt3r3xb .
eck5rxblzt ++ ; cz5yqt3r3xb . metkb44aex = bvcpbrrjdc ; cz5yqt3r3xb .
em1wbmdjow = 0.0 ; iowqpk3eub2 . ivqnpc0uok = cz5yqt3r3xb . eck5rxblzt ; }
else if ( ( ( ssGetTaskTime ( rtS , 1 ) - cz5yqt3r3xb . dukvvezhh4 ) +
cz5yqt3r3xb . em1wbmdjow >= rtP__DriverShiftTime2f2Driver_sldd_ ) && (
iowqpk3eub2 . o4djdimsdm < 0.0 ) ) { cz5yqt3r3xb . eck5rxblzt -- ;
cz5yqt3r3xb . metkb44aex = nz1er2u5yq ; cz5yqt3r3xb . em1wbmdjow = 0.0 ;
iowqpk3eub2 . ivqnpc0uok = - 1.0 ; } break ; case bvcpbrrjdc : if ( ( (
ssGetTaskTime ( rtS , 1 ) - cz5yqt3r3xb . dukvvezhh4 ) + cz5yqt3r3xb .
em1wbmdjow >= rtP__DriverShiftTime2f2Driver_sldd_ ) && ( ( ( iowqpk3eub2 .
dwnfs4t0ur . motv0pybyv >= 0.0 ) && ( iowqpk3eub2 . jpcr1f245w <= 0.0 ) && (
iowqpk3eub2 . fuob0ddam2h . motv0pybyv <= 0.0 ) ) || ( iowqpk3eub2 .
o4djdimsdm <= 0.0 ) ) ) { cz5yqt3r3xb . eck5rxblzt -- ; cz5yqt3r3xb .
metkb44aex = mtch1eyo22 ; cz5yqt3r3xb . em1wbmdjow = 0.0 ; iowqpk3eub2 .
ivqnpc0uok = 0.0 ; } break ; default : if ( ( ( ssGetTaskTime ( rtS , 1 ) -
cz5yqt3r3xb . dukvvezhh4 ) + cz5yqt3r3xb . em1wbmdjow >=
rtP__DriverShiftTime2f2Driver_sldd_ ) && ( iowqpk3eub2 . o4djdimsdm >= 0.0 )
) { cz5yqt3r3xb . eck5rxblzt ++ ; cz5yqt3r3xb . metkb44aex = mtch1eyo22 ;
cz5yqt3r3xb . em1wbmdjow = 0.0 ; iowqpk3eub2 . ivqnpc0uok = 0.0 ; } break ; }
} if ( ssIsModeUpdateTimeStep ( rtS ) ) { cz5yqt3r3xb . hxfbtrll0m = (
iowqpk3eub2 . o4djdimsdm != kjmvupbl2i . Constant_Value ) ; } iowqpk3eub2 .
ceqisvxe55 = ( cz5yqt3r3xb . hxfbtrll0m && ( iowqpk3eub2 . ivqnpc0uok >
kjmvupbl2i . Constant_Value_agm4xpnhd5 ) ) ; } if ( iowqpk3eub2 . ceqisvxe55
) { if ( iowqpk3eub2 . ivqnpc0uok != 0.0 ) { iowqpk3eub2 . axn1d2xjab [ 0 ] =
iowqpk3eub2 . fuob0ddam2h . motv0pybyv ; } else { iowqpk3eub2 . axn1d2xjab [
0 ] = kjmvupbl2i . Constant1_Value_krev4j2l44 ; } iowqpk3eub2 . axn1d2xjab [
1 ] = iowqpk3eub2 . dwnfs4t0ur . motv0pybyv ; } else if ( iowqpk3eub2 .
ivqnpc0uok != 0.0 ) { iowqpk3eub2 . axn1d2xjab [ 0 ] = iowqpk3eub2 .
dwnfs4t0ur . motv0pybyv ; iowqpk3eub2 . axn1d2xjab [ 1 ] = iowqpk3eub2 .
fuob0ddam2h . motv0pybyv ; } else { iowqpk3eub2 . axn1d2xjab [ 0 ] =
kjmvupbl2i . Constant_Value_gn4owpvnhh ; iowqpk3eub2 . axn1d2xjab [ 1 ] =
muDoubleScalarMax ( iowqpk3eub2 . dwnfs4t0ur . motv0pybyv , iowqpk3eub2 .
fuob0ddam2h . motv0pybyv ) ; } if ( iowqpk3eub2 . axn1d2xjab [ 0 ] >
kjmvupbl2i . DeadZone2_End ) { iowqpk3eub2 . jqbzi0b53m = iowqpk3eub2 .
axn1d2xjab [ 0 ] - kjmvupbl2i . DeadZone2_End ; } else if ( iowqpk3eub2 .
axn1d2xjab [ 0 ] >= kjmvupbl2i . DeadZone2_Start ) { iowqpk3eub2 . jqbzi0b53m
= 0.0 ; } else { iowqpk3eub2 . jqbzi0b53m = iowqpk3eub2 . axn1d2xjab [ 0 ] -
kjmvupbl2i . DeadZone2_Start ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if
( cz5yqt3r3xb . dqdopzr2jv . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( cz5yqt3r3xb . dqdopzr2jv . AQHandles , ssGetTaskTime ( rtS ,
1 ) , ( char * ) & iowqpk3eub2 . jqbzi0b53m + 0 ) ; } } { if ( cz5yqt3r3xb .
ate5v5wkj2 . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
cz5yqt3r3xb . ate5v5wkj2 . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * )
& iowqpk3eub2 . bvt0cxt3h4 + 0 ) ; } } { if ( cz5yqt3r3xb . cj0ldup5gu .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( cz5yqt3r3xb .
cj0ldup5gu . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & iowqpk3eub2
. jbgpjywn3z [ 20 ] + 0 ) ; } } br1z3tn3w1 [ 0 ] = iowqpk3eub2 . jbgpjywn3z [
24 ] ; br1z3tn3w1 [ 1 ] = iowqpk3eub2 . jbgpjywn3z [ 27 ] ; { if (
cz5yqt3r3xb . jgeac3tq21 . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( cz5yqt3r3xb . jgeac3tq21 . AQHandles , ssGetTaskTime ( rtS ,
1 ) , ( char * ) & br1z3tn3w1 [ 0 ] + 0 ) ; } } c0cfvs25xq = kjmvupbl2i .
EngTrq_Value ; { if ( cz5yqt3r3xb . gynuv0krsy . AQHandles && ssGetLogOutput
( rtS ) ) { sdiWriteSignal ( cz5yqt3r3xb . gynuv0krsy . AQHandles ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & c0cfvs25xq + 0 ) ; } } { if (
cz5yqt3r3xb . cismfzyk15 . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( cz5yqt3r3xb . cismfzyk15 . AQHandles , ssGetTaskTime ( rtS ,
1 ) , ( char * ) & kjmvupbl2i . EngSpd_Value + 0 ) ; } } { if ( cz5yqt3r3xb .
irudyghn3o . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
cz5yqt3r3xb . irudyghn3o . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * )
& iowqpk3eub2 . axn1d2xjab [ 1 ] + 0 ) ; } } { if ( cz5yqt3r3xb . nikehp134v
. AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( cz5yqt3r3xb .
nikehp134v . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & iowqpk3eub2
. ivqnpc0uok + 0 ) ; } } { if ( cz5yqt3r3xb . gxisg0jsgi . AQHandles &&
ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( cz5yqt3r3xb . gxisg0jsgi .
AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & iowqpk3eub2 . ogs4ehkbam
+ 0 ) ; } } { if ( cz5yqt3r3xb . kx02fuyglo . AQHandles && ssGetLogOutput (
rtS ) ) { sdiWriteSignal ( cz5yqt3r3xb . kx02fuyglo . AQHandles ,
ssGetTaskTime ( rtS , 1 ) , ( char * ) & iowqpk3eub2 . jbgpjywn3z [ 17 ] + 0
) ; } } { if ( cz5yqt3r3xb . ivzabugs2u . AQHandles && ssGetLogOutput ( rtS )
) { sdiWriteSignal ( cz5yqt3r3xb . ivzabugs2u . AQHandles , ssGetTaskTime (
rtS , 1 ) , ( char * ) & iowqpk3eub2 . efiylruo1t + 0 ) ; } } } iowqpk3eub2 .
dttp424sgc = 2.236936292054402 * iowqpk3eub2 . ogs4ehkbam ; if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( cz5yqt3r3xb . johw44ce4i == 0 ) {
cz5yqt3r3xb . ho5bua3cli [ 0 ] = iowqpk3eub2 . jfa1nbks1u ; cz5yqt3r3xb .
ho5bua3cli [ 1 ] = iowqpk3eub2 . dttp424sgc ; } if ( cz5yqt3r3xb . o13svxvssq
== 0 ) { cz5yqt3r3xb . oqnelch0g4 = iowqpk3eub2 . pvdiosiz3s ; } } if (
ssIsSampleHit ( rtS , 3 , 0 ) ) { cz5yqt3r3xb . johw44ce4i = 1 ; iowqpk3eub2
. liyhqocsj3 [ 0 ] = cz5yqt3r3xb . ho5bua3cli [ 0 ] ; iowqpk3eub2 .
liyhqocsj3 [ 1 ] = cz5yqt3r3xb . ho5bua3cli [ 1 ] ; cz5yqt3r3xb . johw44ce4i
= 0 ; cz5yqt3r3xb . o13svxvssq = 1 ; iowqpk3eub2 . ivcelveswb = cz5yqt3r3xb .
oqnelch0g4 ; cz5yqt3r3xb . o13svxvssq = 0 ; } iowqpk3eub2 . cyvi2yk4zm [ 0 ]
= 9.5492965855137211 * iowqpk3eub2 . jbgpjywn3z [ 17 ] ; iowqpk3eub2 .
cyvi2yk4zm [ 1 ] = 9.5492965855137211 * iowqpk3eub2 . jbgpjywn3z [ 18 ] ; if
( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( cz5yqt3r3xb . hnc4qrwkcy == 0 ) {
cz5yqt3r3xb . lgs1ws31ib [ 0 ] = iowqpk3eub2 . cyvi2yk4zm [ 0 ] ; cz5yqt3r3xb
. lgs1ws31ib [ 1 ] = iowqpk3eub2 . cyvi2yk4zm [ 1 ] ; } if ( cz5yqt3r3xb .
nremqoghxn == 0 ) { cz5yqt3r3xb . hgdclbpf45 = c0cfvs25xq ; } } if (
ssIsSampleHit ( rtS , 3 , 0 ) ) { cz5yqt3r3xb . hnc4qrwkcy = 1 ; iowqpk3eub2
. pupxf42qyi [ 0 ] = cz5yqt3r3xb . lgs1ws31ib [ 0 ] ; iowqpk3eub2 .
pupxf42qyi [ 1 ] = cz5yqt3r3xb . lgs1ws31ib [ 1 ] ; cz5yqt3r3xb . hnc4qrwkcy
= 0 ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) && ( cz5yqt3r3xb . azwx5q01st == 0
) ) { cz5yqt3r3xb . dfvfksmo3u [ 0 ] = br1z3tn3w1 [ 0 ] ; cz5yqt3r3xb .
dfvfksmo3u [ 1 ] = br1z3tn3w1 [ 1 ] ; } if ( ssIsSampleHit ( rtS , 3 , 0 ) )
{ cz5yqt3r3xb . nremqoghxn = 1 ; iowqpk3eub2 . c02ood1bjt = cz5yqt3r3xb .
hgdclbpf45 ; cz5yqt3r3xb . nremqoghxn = 0 ; cz5yqt3r3xb . azwx5q01st = 1 ;
iowqpk3eub2 . p0b3m4xtnw [ 0 ] = cz5yqt3r3xb . dfvfksmo3u [ 0 ] ; iowqpk3eub2
. p0b3m4xtnw [ 1 ] = cz5yqt3r3xb . dfvfksmo3u [ 1 ] ; cz5yqt3r3xb .
azwx5q01st = 0 ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( cz5yqt3r3xb .
b0kxfxynn3 == 0 ) { cz5yqt3r3xb . j0t5dz02te = iowqpk3eub2 . jbgpjywn3z [ 20
] ; } if ( cz5yqt3r3xb . j0engehfzs == 0 ) { cz5yqt3r3xb . d0jgs1xeud =
iowqpk3eub2 . efiylruo1t ; } } if ( ssIsSampleHit ( rtS , 3 , 0 ) ) {
cz5yqt3r3xb . b0kxfxynn3 = 1 ; iowqpk3eub2 . mytvvfcg1y = cz5yqt3r3xb .
j0t5dz02te ; cz5yqt3r3xb . b0kxfxynn3 = 0 ; cz5yqt3r3xb . j0engehfzs = 1 ;
iowqpk3eub2 . k4zukswayf = cz5yqt3r3xb . d0jgs1xeud ; cz5yqt3r3xb .
j0engehfzs = 0 ; } iowqpk3eub2 . khcqvoneta = chmgkez0tpf . bhmvyo1hjl ;
iowqpk3eub2 . ffjzw3xpup = chmgkez0tpf . iarnkoswlx ; iowqpk3eub2 .
pjeugxnijx = kjmvupbl2i . m3toUSGal_Gain * iowqpk3eub2 . ffjzw3xpup ; if (
ssIsModeUpdateTimeStep ( rtS ) ) { cz5yqt3r3xb . kblv4axo3c = iowqpk3eub2 .
pjeugxnijx >= kjmvupbl2i . Saturation1_UpperSat ? 1 : iowqpk3eub2 .
pjeugxnijx > kjmvupbl2i . Saturation1_LowerSat ? 0 : - 1 ; } iowqpk3eub2 .
j5ydyic0d5 = kjmvupbl2i . mtomile_Gain * iowqpk3eub2 . khcqvoneta / (
cz5yqt3r3xb . kblv4axo3c == 1 ? kjmvupbl2i . Saturation1_UpperSat :
cz5yqt3r3xb . kblv4axo3c == - 1 ? kjmvupbl2i . Saturation1_LowerSat :
iowqpk3eub2 . pjeugxnijx ) ; if ( ssIsSampleHit ( rtS , 1 , 0 ) && (
cz5yqt3r3xb . mm5oiqqh5r == 0 ) ) { cz5yqt3r3xb . i5wargkafk = iowqpk3eub2 .
j5ydyic0d5 ; } if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { cz5yqt3r3xb .
mm5oiqqh5r = 1 ; iowqpk3eub2 . kvtxbs1osx = cz5yqt3r3xb . i5wargkafk ;
cz5yqt3r3xb . mm5oiqqh5r = 0 ; } if ( ssIsSampleHit ( rtS , 3 , 0 ) ) { { if
( cz5yqt3r3xb . fywuj43jfl . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( cz5yqt3r3xb . fywuj43jfl . AQHandles , ssGetTaskTime ( rtS ,
3 ) , ( char * ) & iowqpk3eub2 . mytvvfcg1y + 0 ) ; } } { if ( cz5yqt3r3xb .
crmx2s5hqc . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
cz5yqt3r3xb . crmx2s5hqc . AQHandles , ssGetTaskTime ( rtS , 3 ) , ( char * )
& iowqpk3eub2 . k4zukswayf + 0 ) ; } } { if ( cz5yqt3r3xb . ctg1unrwpm .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( cz5yqt3r3xb .
ctg1unrwpm . AQHandles , ssGetTaskTime ( rtS , 3 ) , ( char * ) & iowqpk3eub2
. p0b3m4xtnw [ 0 ] + 0 ) ; } } } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { { if
( cz5yqt3r3xb . j2bb0dzih4 . AQHandles && ssGetLogOutput ( rtS ) ) {
sdiWriteSignal ( cz5yqt3r3xb . j2bb0dzih4 . AQHandles , ssGetTaskTime ( rtS ,
1 ) , ( char * ) & iowqpk3eub2 . jfa1nbks1u + 0 ) ; } } { if ( cz5yqt3r3xb .
gjt3j5kgn2 . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
cz5yqt3r3xb . gjt3j5kgn2 . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * )
& iowqpk3eub2 . cyvi2yk4zm [ 0 ] + 0 ) ; } } { if ( cz5yqt3r3xb . i01ezsocmb
. AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( cz5yqt3r3xb .
i01ezsocmb . AQHandles , ssGetTaskTime ( rtS , 1 ) , ( char * ) & iowqpk3eub2
. dttp424sgc + 0 ) ; } } } iowqpk3eub2 . nk5i1tvfs4 = chmgkez0tpf .
lywux4fr45 ; iowqpk3eub2 . hkfoqcrcaa = kjmvupbl2i . mtomi_Gain * iowqpk3eub2
. nk5i1tvfs4 ; iowqpk3eub2 . fygmwizxbe = kjmvupbl2i . mtokm_Gain *
iowqpk3eub2 . nk5i1tvfs4 ; if ( ssIsModeUpdateTimeStep ( rtS ) ) {
cz5yqt3r3xb . m0ix3twyqi = iowqpk3eub2 . hkfoqcrcaa >= kjmvupbl2i .
Saturation_UpperSat_petchupvyj ? 1 : iowqpk3eub2 . hkfoqcrcaa > kjmvupbl2i .
Saturation_LowerSat_deqaxwlb4p ? 0 : - 1 ; cz5yqt3r3xb . kqqvkns214 =
iowqpk3eub2 . fygmwizxbe >= kjmvupbl2i . Saturation1_UpperSat_jybwri54h2 ? 1
: iowqpk3eub2 . fygmwizxbe > kjmvupbl2i . Saturation1_LowerSat_indvuhds5q ? 0
: - 1 ; } iowqpk3eub2 . if3ap21cin = 0.44704000000000005 * iowqpk3eub2 .
jfa1nbks1u ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { iowqpk3eub2 . hcj2ikcjyk
= kjmvupbl2i . FuelVolFlw_Value * kjmvupbl2i . ClsdLpFuelMult_Value ; }
iowqpk3eub2 . fgkckqf33e = iowqpk3eub2 . bvt0cxt3h4 * iowqpk3eub2 .
jbgpjywn3z [ 20 ] ; iowqpk3eub2 . bbwodlczuz = iowqpk3eub2 . fgkckqf33e /
kjmvupbl2i . wperkw_Value ; iowqpk3eub2 . cfykfdt0uw = iowqpk3eub2 .
bbwodlczuz / kjmvupbl2i . USEPAkwhUSgalequivalent_Value ; iowqpk3eub2 .
gk5c3nru3t = iowqpk3eub2 . cfykfdt0uw / kjmvupbl2i . sperh_Value ;
iowqpk3eub2 . gtc1bz3bpt = kjmvupbl2i . m3pergal_Gain * iowqpk3eub2 .
gk5c3nru3t ; iowqpk3eub2 . ll5kvzbeqe = iowqpk3eub2 . hcj2ikcjyk +
iowqpk3eub2 . gtc1bz3bpt ; c0cfvs25xq = 0.44704000000000005 * iowqpk3eub2 .
dttp424sgc ; iowqpk3eub2 . dxggtyvppm = c0cfvs25xq * c0cfvs25xq ; iowqpk3eub2
. iqd4x5zmdq = kjmvupbl2i . mto100Km_Gain * iowqpk3eub2 . khcqvoneta ; if (
ssIsModeUpdateTimeStep ( rtS ) ) { cz5yqt3r3xb . hg1heoe0ab = iowqpk3eub2 .
iqd4x5zmdq >= kjmvupbl2i . Saturation_UpperSat_ffmhckns0u ? 1 : iowqpk3eub2 .
iqd4x5zmdq > kjmvupbl2i . Saturation_LowerSat_git52jcjbr ? 0 : - 1 ; } if (
ssIsMajorTimeStep ( rtS ) ) { if ( cz5yqt3r3xb . e2wr3vcmsf != 0 ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; cz5yqt3r3xb .
e2wr3vcmsf = 0 ; } iowqpk3eub2 . fslb3e0kt4 = muDoubleScalarSqrt (
iowqpk3eub2 . dxggtyvppm ) ; } else { if ( iowqpk3eub2 . dxggtyvppm < 0.0 ) {
iowqpk3eub2 . fslb3e0kt4 = - muDoubleScalarSqrt ( muDoubleScalarAbs (
iowqpk3eub2 . dxggtyvppm ) ) ; } else { iowqpk3eub2 . fslb3e0kt4 =
muDoubleScalarSqrt ( iowqpk3eub2 . dxggtyvppm ) ; } if ( iowqpk3eub2 .
dxggtyvppm < 0.0 ) { cz5yqt3r3xb . e2wr3vcmsf = 1 ; } } if ( ssIsSampleHit (
rtS , 1 , 0 ) ) { if ( cz5yqt3r3xb . pumuolxchk == 0 ) { cz5yqt3r3xb .
noizxcaj0u = iowqpk3eub2 . axn1d2xjab [ 1 ] ; } fvbnzmfth3 = kjmvupbl2i .
Constant_Value_io2mkec4u1 ; ozruusy00l = kjmvupbl2i . Constant1_Value ;
ocqbhm20rg = kjmvupbl2i . Constant2_Value ; } if ( ssIsSampleHit ( rtS , 2 ,
0 ) ) { cz5yqt3r3xb . pumuolxchk = 1 ; mabslh5ftc = cz5yqt3r3xb . noizxcaj0u
; cz5yqt3r3xb . pumuolxchk = 0 ; OpenLoopBraking ( & mabslh5ftc , &
iowqpk3eub2 . hvofgrdmb4 [ 0 ] ) ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) && (
cz5yqt3r3xb . cfbyafp2yp == 0 ) ) { cz5yqt3r3xb . ahz4qvibsf = iowqpk3eub2 .
ivqnpc0uok ; } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { cz5yqt3r3xb .
cfbyafp2yp = 1 ; c0cfvs25xq = cz5yqt3r3xb . ahz4qvibsf ; cz5yqt3r3xb .
cfbyafp2yp = 0 ; DriverPassThrough ( & c0cfvs25xq , & mygikvcog4 ) ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( cz5yqt3r3xb . nu1w3dp3or == 0 ) {
cz5yqt3r3xb . gelfja001m = iowqpk3eub2 . jqbzi0b53m ; } if ( cz5yqt3r3xb .
k0uf3b30j1 == 0 ) { cz5yqt3r3xb . im2dnqr2y0 = iowqpk3eub2 . ogs4ehkbam ; } }
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { cz5yqt3r3xb . nu1w3dp3or = 1 ;
iowqpk3eub2 . ckogufqgce = cz5yqt3r3xb . gelfja001m ; cz5yqt3r3xb .
nu1w3dp3or = 0 ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) ) { c0cfvs25xq =
kjmvupbl2i . Constant_Value_cjhlneuw3m ; if ( cz5yqt3r3xb . k24rp5jloy == 0 )
{ cz5yqt3r3xb . h2fppauqjk = c0cfvs25xq ; } } if ( ssIsSampleHit ( rtS , 2 ,
0 ) ) { cz5yqt3r3xb . k0uf3b30j1 = 1 ; iowqpk3eub2 . orjxb10cau = cz5yqt3r3xb
. im2dnqr2y0 ; cz5yqt3r3xb . k0uf3b30j1 = 0 ; } if ( ssIsSampleHit ( rtS , 1
, 0 ) ) { c0cfvs25xq = kjmvupbl2i . Constant_Value_eh1gybqgws ; if (
cz5yqt3r3xb . by3pjn5fot == 0 ) { cz5yqt3r3xb . arunw3enqo = c0cfvs25xq ; } }
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { cz5yqt3r3xb . k24rp5jloy = 1 ;
iowqpk3eub2 . b02kbm44cq = cz5yqt3r3xb . h2fppauqjk ; cz5yqt3r3xb .
k24rp5jloy = 0 ; cz5yqt3r3xb . by3pjn5fot = 1 ; iowqpk3eub2 . btpqtt4ve2 =
cz5yqt3r3xb . arunw3enqo ; cz5yqt3r3xb . by3pjn5fot = 0 ; } if (
ssIsSampleHit ( rtS , 1 , 0 ) ) { if ( cz5yqt3r3xb . pgsfdyvzg3 == 0 ) {
cz5yqt3r3xb . e2o3ismpif [ 0 ] = iowqpk3eub2 . jbgpjywn3z [ 17 ] ;
cz5yqt3r3xb . e2o3ismpif [ 1 ] = iowqpk3eub2 . jbgpjywn3z [ 18 ] ; } if (
cz5yqt3r3xb . jepwxk2s4r == 0 ) { cz5yqt3r3xb . m32a3ep5gt = fvbnzmfth3 ; } }
if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { cz5yqt3r3xb . pgsfdyvzg3 = 1 ;
iowqpk3eub2 . bqypj3eyiq [ 0 ] = cz5yqt3r3xb . e2o3ismpif [ 0 ] ; iowqpk3eub2
. bqypj3eyiq [ 1 ] = cz5yqt3r3xb . e2o3ismpif [ 1 ] ; cz5yqt3r3xb .
pgsfdyvzg3 = 0 ; } if ( ssIsSampleHit ( rtS , 1 , 0 ) && ( cz5yqt3r3xb .
pijwjimaqv == 0 ) ) { cz5yqt3r3xb . h0gkcev35m = ozruusy00l ; } if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { cz5yqt3r3xb . jepwxk2s4r = 1 ; iowqpk3eub2
. ay4cfinsfw = cz5yqt3r3xb . m32a3ep5gt ; cz5yqt3r3xb . jepwxk2s4r = 0 ; } if
( ssIsSampleHit ( rtS , 1 , 0 ) && ( cz5yqt3r3xb . kw10r0jllu == 0 ) ) {
cz5yqt3r3xb . i5jjfepadp = ocqbhm20rg ; } if ( ssIsSampleHit ( rtS , 2 , 0 )
) { cz5yqt3r3xb . pijwjimaqv = 1 ; iowqpk3eub2 . dfmae2tshm = cz5yqt3r3xb .
h0gkcev35m ; cz5yqt3r3xb . pijwjimaqv = 0 ; cz5yqt3r3xb . kw10r0jllu = 1 ;
iowqpk3eub2 . ozcfs2wm5f = cz5yqt3r3xb . i5jjfepadp ; cz5yqt3r3xb .
kw10r0jllu = 0 ; EvPowertrainController2EM ( & ( cz5yqt3r3xb . jrvwlq3fuz .
rtm ) , & iowqpk3eub2 . ckogufqgce , & iowqpk3eub2 . hvofgrdmb4 [ 0 ] , &
iowqpk3eub2 . orjxb10cau , & iowqpk3eub2 . bqypj3eyiq [ 0 ] , & iowqpk3eub2 .
ay4cfinsfw , & iowqpk3eub2 . btpqtt4ve2 , & iowqpk3eub2 . dfmae2tshm , &
iowqpk3eub2 . ozcfs2wm5f , & iowqpk3eub2 . g1n4ddzbcb , & iowqpk3eub2 .
e1oqshled2 [ 0 ] , & iowqpk3eub2 . i0f0kaduop [ 0 ] , & iowqpk3eub2 .
oi1l1zfk0l , & iowqpk3eub2 . az43xb15iv , & iowqpk3eub2 . iefandv1mx , &
iowqpk3eub2 . jywmdz2pm0 , & ( cz5yqt3r3xb . jrvwlq3fuz . rtb ) , & (
cz5yqt3r3xb . jrvwlq3fuz . rtdw ) ) ; } fvbnzmfth3 = muDoubleScalarAbs (
iowqpk3eub2 . jpcr1f245w ) ; i3xrxkx0da = ( fvbnzmfth3 < 0.001 ) ; trueCount
= 0 ; if ( i3xrxkx0da ) { trueCount = 1 ; } if ( trueCount - 1 >= 0 ) {
ozruusy00l = fvbnzmfth3 / 0.001 ; time_e = 0.002 / ( 3.0 - ozruusy00l *
ozruusy00l ) ; } time = fvbnzmfth3 ; if ( i3xrxkx0da ) { time = time_e ; }
i3xrxkx0da = ( iowqpk3eub2 . jpcr1f245w < 0.0 ) ; trueCount = - 1 ; if (
i3xrxkx0da ) { trueCount = 0 ; } for ( iy = 0 ; iy <= trueCount ; iy ++ ) {
time_e = - time ; } time_p = time ; if ( i3xrxkx0da ) { time_p = time_e ; }
if ( time > 5.0 ) { fvbnzmfth3 = muDoubleScalarMax ( muDoubleScalarMin (
rtP__DriverTimeConst2f2Driver_sldd_ , rtP__DriverPreviewDist2f2Driver_sldd_ /
time ) , 0.001 ) ; } else { fvbnzmfth3 = rtP__DriverTimeConst2f2Driver_sldd_
; } lhbkn3qgoo [ 0 ] = 0.0 ; lhbkn3qgoo [ 2 ] = 1.0 ; lhbkn3qgoo [ 1 ] = - (
( rtP__DriverRollRes2f2Driver_sldd_ / time_p +
rtP__DriverAeroRes2f2Driver_sldd_ * iowqpk3eub2 . jpcr1f245w ) *
muDoubleScalarTanh ( iowqpk3eub2 . jpcr1f245w ) +
rtP__DriverDrivelineRes2f2Driver_sldd_ ) / rtP__PlntVehMass2f2PassVeh_sldd_ ;
lhbkn3qgoo [ 3 ] = 0.0 ; br1z3tn3w1 [ 1 ] =
rtP__DriverTractiveForce2f2Driver_sldd_ / rtP__PlntVehMass2f2PassVeh_sldd_ ;
sigmaA [ 0 ] = 0.0 ; sigmaA [ 1 ] = 0.0 ; sigmaA [ 2 ] = 0.0 ; sigmaA [ 3 ] =
0.0 ; sigmaB [ 0 ] = 0.0 ; sigmaB [ 1 ] = 0.0 ; sigmaB [ 2 ] = 0.0 ; sigmaB [
3 ] = 0.0 ; for ( iy = 0 ; iy < 15 ; iy ++ ) { ozruusy00l =
muDoubleScalarPower ( fvbnzmfth3 , ( real_T ) iy + 1.0 ) ; oov4ikdzbn (
lhbkn3qgoo , ( real_T ) iy + 1.0 , du5r1qer1m ) ; fl3dumv41q = e [ iy + 1 ] ;
sigmaA [ 0 ] += du5r1qer1m [ 0 ] * ozruusy00l / fl3dumv41q ; sigmaA [ 1 ] +=
du5r1qer1m [ 1 ] * ozruusy00l / fl3dumv41q ; sigmaA [ 2 ] += du5r1qer1m [ 2 ]
* ozruusy00l / fl3dumv41q ; sigmaA [ 3 ] += du5r1qer1m [ 3 ] * ozruusy00l /
fl3dumv41q ; ozruusy00l = muDoubleScalarPower ( fvbnzmfth3 , ( real_T ) iy +
1.0 ) ; oov4ikdzbn ( lhbkn3qgoo , ( real_T ) iy + 1.0 , du5r1qer1m ) ;
fl3dumv41q = e [ iy ] ; sigmaB [ 0 ] += du5r1qer1m [ 0 ] * ozruusy00l /
fl3dumv41q ; sigmaB [ 1 ] += du5r1qer1m [ 1 ] * ozruusy00l / fl3dumv41q ;
sigmaB [ 2 ] += du5r1qer1m [ 2 ] * ozruusy00l / fl3dumv41q ; sigmaB [ 3 ] +=
du5r1qer1m [ 3 ] * ozruusy00l / fl3dumv41q ; } fvbnzmfth3 = ( ( sigmaA [ 0 ]
+ 1.0 ) * fvbnzmfth3 + fvbnzmfth3 * sigmaA [ 1 ] ) * 0.0 + ( ( sigmaA [ 3 ] +
1.0 ) * fvbnzmfth3 + fvbnzmfth3 * sigmaA [ 2 ] ) * br1z3tn3w1 [ 1 ] ;
du5r1qer1m [ 0 ] = 0.0 ; du5r1qer1m [ 1 ] = lhbkn3qgoo [ 1 ] * 0.001 ;
du5r1qer1m [ 2 ] = 0.001 ; du5r1qer1m [ 3 ] = 0.0 ; f5zhbt2mc4 ( du5r1qer1m ,
sigmaA ) ; du5r1qer1m [ 0 ] = 0.0 ; du5r1qer1m [ 1 ] = lhbkn3qgoo [ 1 ] * 0.0
; du5r1qer1m [ 2 ] = 0.0 ; du5r1qer1m [ 3 ] = 0.0 ; f5zhbt2mc4 ( du5r1qer1m ,
b_a ) ; du5r1qer1m [ 0 ] = 0.0 ; du5r1qer1m [ 1 ] = lhbkn3qgoo [ 1 ] * 0.001
; du5r1qer1m [ 2 ] = 0.001 ; du5r1qer1m [ 3 ] = 0.0 ; f5zhbt2mc4 ( du5r1qer1m
, lhbkn3qgoo ) ; ozruusy00l = sigmaB [ 0 ] + 1.0 ; fl3dumv41q = sigmaB [ 1 ]
; c0cfvs25xq = sigmaB [ 2 ] ; ocqbhm20rg = sigmaB [ 3 ] + 1.0 ; iowqpk3eub2 .
o2cjlwehyr = ( ( ( b_a [ 0 ] * 0.0 + br1z3tn3w1 [ 1 ] * b_a [ 2 ] ) + (
lhbkn3qgoo [ 0 ] * 0.0 + br1z3tn3w1 [ 1 ] * lhbkn3qgoo [ 2 ] ) ) / 2.0 *
0.001 * iowqpk3eub2 . m3s2vgesq4 + ( sigmaA [ 0 ] * iowqpk3eub2 . jpcr1f245w
+ sigmaA [ 2 ] * 0.0 ) ) * ( ozruusy00l + fl3dumv41q ) + ( ( ( b_a [ 1 ] *
0.0 + br1z3tn3w1 [ 1 ] * b_a [ 3 ] ) + ( lhbkn3qgoo [ 1 ] * 0.0 + br1z3tn3w1
[ 1 ] * lhbkn3qgoo [ 3 ] ) ) / 2.0 * 0.001 * iowqpk3eub2 . m3s2vgesq4 + (
sigmaA [ 1 ] * iowqpk3eub2 . jpcr1f245w + sigmaA [ 3 ] * 0.0 ) ) * (
c0cfvs25xq + ocqbhm20rg ) ; iowqpk3eub2 . or4x0ngped = iowqpk3eub2 .
m3s2vgesq4 * fvbnzmfth3 ; iowqpk3eub2 . gfa1pnn0i5 = iowqpk3eub2 . o2cjlwehyr
+ iowqpk3eub2 . or4x0ngped ; iowqpk3eub2 . j4h3u5o2s0 = iowqpk3eub2 .
o4djdimsdm - iowqpk3eub2 . gfa1pnn0i5 ; iowqpk3eub2 . hvrj3ku4rl =
iowqpk3eub2 . j4h3u5o2s0 / fvbnzmfth3 ; iowqpk3eub2 . niktayqu0g =
iowqpk3eub2 . hvrj3ku4rl + iowqpk3eub2 . atfdsr0huc ; iowqpk3eub2 .
n1qbwalijw = iowqpk3eub2 . niktayqu0g - iowqpk3eub2 . atfdsr0huc ;
iowqpk3eub2 . jlncf1nhxu = 1.0 / rtP__DriverTimeConst2f2Driver_sldd_ *
3.1415926535897931 * 2.0 * iowqpk3eub2 . n1qbwalijw ; iowqpk3eub2 .
dtch5f4az1 = iowqpk3eub2 . o4djdimsdm - iowqpk3eub2 . jpcr1f245w ; br1z3tn3w1
[ 0 ] = iowqpk3eub2 . dtch5f4az1 ; br1z3tn3w1 [ 1 ] = iowqpk3eub2 .
dtch5f4az1 ; iowqpk3eub2 . oqfbznbud3 = iowqpk3eub2 . dtch5f4az1 *
iowqpk3eub2 . dtch5f4az1 ; if ( ssIsSampleHit ( rtS , 2 , 0 ) ) { iowqpk3eub2
. b25h3lrxlo [ 0 ] = cz5yqt3r3xb . ovftuesk53 [ 0 ] ; iowqpk3eub2 .
b25h3lrxlo [ 1 ] = cz5yqt3r3xb . ovftuesk53 [ 1 ] ; } if ( iowqpk3eub2 .
dtch5f4az1 > iowqpk3eub2 . b25h3lrxlo [ 0 ] ) { iowqpk3eub2 . eycgm5czdn [ 0
] = br1z3tn3w1 [ 0 ] ; } else { iowqpk3eub2 . eycgm5czdn [ 0 ] = iowqpk3eub2
. b25h3lrxlo [ 0 ] ; } if ( iowqpk3eub2 . dtch5f4az1 < iowqpk3eub2 .
b25h3lrxlo [ 1 ] ) { iowqpk3eub2 . eycgm5czdn [ 1 ] = br1z3tn3w1 [ 1 ] ; }
else { iowqpk3eub2 . eycgm5czdn [ 1 ] = iowqpk3eub2 . b25h3lrxlo [ 1 ] ; } if
( ssIsSampleHit ( rtS , 4 , 0 ) ) { iowqpk3eub2 . hiqbgqctfu = ssGetTaskTime
( rtS , 4 ) ; } iowqpk3eub2 . bwgdzgdu1v = hbjgnzk0ke - iowqpk3eub2 .
hiqbgqctfu ; iowqpk3eub2 . fhd2qe1xn4 [ 0 ] = cz5yqt3r3xb . lzovmgc1ye [ 0 ]
; iowqpk3eub2 . fhd2qe1xn4 [ 1 ] = cz5yqt3r3xb . lzovmgc1ye [ 1 ] ;
iowqpk3eub2 . fhd2qe1xn4 [ 2 ] = cz5yqt3r3xb . lzovmgc1ye [ 2 ] ; iowqpk3eub2
. fhd2qe1xn4 [ 3 ] = cz5yqt3r3xb . lzovmgc1ye [ 3 ] ; if ( cz5yqt3r3xb .
hqv0oirn0q != ( rtInf ) ) { hbjgnzk0ke = ssGetT ( rtS ) - cz5yqt3r3xb .
hqv0oirn0q ; iowqpk3eub2 . fhd2qe1xn4 [ 0 ] += cz5yqt3r3xb . ggdayeevtv [ 0 ]
* hbjgnzk0ke ; iowqpk3eub2 . fhd2qe1xn4 [ 1 ] += cz5yqt3r3xb . ggdayeevtv [ 1
] * hbjgnzk0ke ; iowqpk3eub2 . fhd2qe1xn4 [ 2 ] += cz5yqt3r3xb . ggdayeevtv [
2 ] * hbjgnzk0ke ; iowqpk3eub2 . fhd2qe1xn4 [ 3 ] += cz5yqt3r3xb . ggdayeevtv
[ 3 ] * hbjgnzk0ke ; } if ( iowqpk3eub2 . fhd2qe1xn4 [ 0 ] > kjmvupbl2i .
DeadZone_End_h4yw2iuj1m ) { iowqpk3eub2 . cb3kw2uoce [ 0 ] = iowqpk3eub2 .
fhd2qe1xn4 [ 0 ] - kjmvupbl2i . DeadZone_End_h4yw2iuj1m ; } else if (
iowqpk3eub2 . fhd2qe1xn4 [ 0 ] >= kjmvupbl2i . DeadZone_Start_pdp2e4smtt ) {
iowqpk3eub2 . cb3kw2uoce [ 0 ] = 0.0 ; } else { iowqpk3eub2 . cb3kw2uoce [ 0
] = iowqpk3eub2 . fhd2qe1xn4 [ 0 ] - kjmvupbl2i . DeadZone_Start_pdp2e4smtt ;
} iowqpk3eub2 . c5agzst0mq [ 0 ] = iowqpk3eub2 . cb3kw2uoce [ 0 ] -
iowqpk3eub2 . eabfogqpnn [ 0 ] ; iowqpk3eub2 . b0ggdb4gbt [ 0 ] = iowqpk3eub2
. c5agzst0mq [ 0 ] * rtP__PlntBrkWc2f2PassVeh_sldd_ ; if ( iowqpk3eub2 .
fhd2qe1xn4 [ 1 ] > kjmvupbl2i . DeadZone_End_h4yw2iuj1m ) { iowqpk3eub2 .
cb3kw2uoce [ 1 ] = iowqpk3eub2 . fhd2qe1xn4 [ 1 ] - kjmvupbl2i .
DeadZone_End_h4yw2iuj1m ; } else if ( iowqpk3eub2 . fhd2qe1xn4 [ 1 ] >=
kjmvupbl2i . DeadZone_Start_pdp2e4smtt ) { iowqpk3eub2 . cb3kw2uoce [ 1 ] =
0.0 ; } else { iowqpk3eub2 . cb3kw2uoce [ 1 ] = iowqpk3eub2 . fhd2qe1xn4 [ 1
] - kjmvupbl2i . DeadZone_Start_pdp2e4smtt ; } iowqpk3eub2 . c5agzst0mq [ 1 ]
= iowqpk3eub2 . cb3kw2uoce [ 1 ] - iowqpk3eub2 . eabfogqpnn [ 1 ] ;
iowqpk3eub2 . b0ggdb4gbt [ 1 ] = iowqpk3eub2 . c5agzst0mq [ 1 ] *
rtP__PlntBrkWc2f2PassVeh_sldd_ ; if ( iowqpk3eub2 . fhd2qe1xn4 [ 2 ] >
kjmvupbl2i . DeadZone_End_h4yw2iuj1m ) { iowqpk3eub2 . cb3kw2uoce [ 2 ] =
iowqpk3eub2 . fhd2qe1xn4 [ 2 ] - kjmvupbl2i . DeadZone_End_h4yw2iuj1m ; }
else if ( iowqpk3eub2 . fhd2qe1xn4 [ 2 ] >= kjmvupbl2i .
DeadZone_Start_pdp2e4smtt ) { iowqpk3eub2 . cb3kw2uoce [ 2 ] = 0.0 ; } else {
iowqpk3eub2 . cb3kw2uoce [ 2 ] = iowqpk3eub2 . fhd2qe1xn4 [ 2 ] - kjmvupbl2i
. DeadZone_Start_pdp2e4smtt ; } iowqpk3eub2 . c5agzst0mq [ 2 ] = iowqpk3eub2
. cb3kw2uoce [ 2 ] - iowqpk3eub2 . eabfogqpnn [ 2 ] ; iowqpk3eub2 .
b0ggdb4gbt [ 2 ] = iowqpk3eub2 . c5agzst0mq [ 2 ] *
rtP__PlntBrkWc2f2PassVeh_sldd_ ; if ( iowqpk3eub2 . fhd2qe1xn4 [ 3 ] >
kjmvupbl2i . DeadZone_End_h4yw2iuj1m ) { iowqpk3eub2 . cb3kw2uoce [ 3 ] =
iowqpk3eub2 . fhd2qe1xn4 [ 3 ] - kjmvupbl2i . DeadZone_End_h4yw2iuj1m ; }
else if ( iowqpk3eub2 . fhd2qe1xn4 [ 3 ] >= kjmvupbl2i .
DeadZone_Start_pdp2e4smtt ) { iowqpk3eub2 . cb3kw2uoce [ 3 ] = 0.0 ; } else {
iowqpk3eub2 . cb3kw2uoce [ 3 ] = iowqpk3eub2 . fhd2qe1xn4 [ 3 ] - kjmvupbl2i
. DeadZone_Start_pdp2e4smtt ; } iowqpk3eub2 . c5agzst0mq [ 3 ] = iowqpk3eub2
. cb3kw2uoce [ 3 ] - iowqpk3eub2 . eabfogqpnn [ 3 ] ; iowqpk3eub2 .
b0ggdb4gbt [ 3 ] = iowqpk3eub2 . c5agzst0mq [ 3 ] *
rtP__PlntBrkWc2f2PassVeh_sldd_ ; if ( ssIsSampleHit ( rtS , 1 , 0 ) ) {
iowqpk3eub2 . oxtftcyamo = kjmvupbl2i . TPCO_Value ; iowqpk3eub2 . cvaoaiilfy
= kjmvupbl2i . TPCO2_Value ; iowqpk3eub2 . bol3toc3da = kjmvupbl2i .
TPHC_Value ; iowqpk3eub2 . dccuh1poqm = kjmvupbl2i . TPNOx_Value ; }
UNUSED_PARAMETER ( tid ) ; } void MdlOutputsTID5 ( int_T tid ) { boolean_T
kehdr1wwi1 [ 4 ] ; boolean_T dvuanyemxf ; if ( kjmvupbl2i .
Constant3_Value_hsmcqc2qzw > kjmvupbl2i . DeadZone3_End ) { iowqpk3eub2 .
hd5tn4m4oh = kjmvupbl2i . Constant3_Value_hsmcqc2qzw - kjmvupbl2i .
DeadZone3_End ; } else if ( kjmvupbl2i . Constant3_Value_hsmcqc2qzw >=
kjmvupbl2i . DeadZone3_Start ) { iowqpk3eub2 . hd5tn4m4oh = 0.0 ; } else {
iowqpk3eub2 . hd5tn4m4oh = kjmvupbl2i . Constant3_Value_hsmcqc2qzw -
kjmvupbl2i . DeadZone3_Start ; } { if ( cz5yqt3r3xb . kzgixjdqqa . AQHandles
&& ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( cz5yqt3r3xb . kzgixjdqqa .
AQHandles , ssGetTaskTime ( rtS , 5 ) , ( char * ) & iowqpk3eub2 . hd5tn4m4oh
+ 0 ) ; } } { if ( cz5yqt3r3xb . ibizqnzh0w . AQHandles && ssGetLogOutput (
rtS ) ) { sdiWriteSignal ( cz5yqt3r3xb . ibizqnzh0w . AQHandles ,
ssGetTaskTime ( rtS , 5 ) , ( char * ) & kjmvupbl2i . ax_Value + 0 ) ; } }
iowqpk3eub2 . nkjka2mvua = kjmvupbl2i . ay_Value ; { if ( cz5yqt3r3xb .
aj1d134nmk . AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal (
cz5yqt3r3xb . aj1d134nmk . AQHandles , ssGetTaskTime ( rtS , 5 ) , ( char * )
& iowqpk3eub2 . nkjka2mvua + 0 ) ; } } { if ( cz5yqt3r3xb . frybx0mj1e .
AQHandles && ssGetLogOutput ( rtS ) ) { sdiWriteSignal ( cz5yqt3r3xb .
frybx0mj1e . AQHandles , ssGetTaskTime ( rtS , 5 ) , ( char * ) & kjmvupbl2i
. az_Value + 0 ) ; } } iowqpk3eub2 . fyv5hziyzu = 57.295779513082323 *
kjmvupbl2i . r_Value ; iowqpk3eub2 . nz1eo0mhjt = 57.295779513082323 *
iowqpk3eub2 . hd5tn4m4oh ; iowqpk3eub2 . pvdiosiz3s = 0.0 ;
OpenLoopBrakingTID1 ( & kehdr1wwi1 [ 0 ] , & ( cz5yqt3r3xb . lofhsz2swn . rtb
) ) ; EvPowertrainController2EMTID1 ( & ( cz5yqt3r3xb . jrvwlq3fuz . rtb ) )
; iowqpk3eub2 . hpa0jnkmab = ( kjmvupbl2i . Constant1_Value_m0radogykp [ 0 ]
+ kjmvupbl2i . Constant1_Value_m0radogykp [ 1 ] ) * kjmvupbl2i . Gain_Gain -
( kjmvupbl2i . Constant1_Value_m0radogykp [ 2 ] + kjmvupbl2i .
Constant1_Value_m0radogykp [ 3 ] ) * kjmvupbl2i . Gain1_Gain_b2x0xrdboa ;
dvuanyemxf = ! kjmvupbl2i . Constant9_Value ; iowqpk3eub2 . np15oib1kn = (
kjmvupbl2i . Constant6_Value && dvuanyemxf ) ; iowqpk3eub2 . puwtafzry1 = ( (
! kjmvupbl2i . Constant7_Value ) || ( ! dvuanyemxf ) ) ; iowqpk3eub2 .
jiym3rqvan = ! kjmvupbl2i . Constant12_Value ; iowqpk3eub2 . gcn3sxipyq = ( (
! kjmvupbl2i . Constant11_Value ) || ( ! iowqpk3eub2 . jiym3rqvan ) ) ;
UNUSED_PARAMETER ( tid ) ; } void MdlUpdate ( int_T tid ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T
tmp [ 44 ] ; real_T err ; real_T time ; real_T tol ; int_T tmp_p [ 12 ] ;
int_T idx ; boolean_T guard1 = false ; boolean_T resetCoeff ; if (
ssIsSampleHit ( rtS , 2 , 0 ) ) { guard1 = false ; if ( ! ( cz5yqt3r3xb .
dfwjuauqhh == ( rtInf ) ) ) { if ( ( iowqpk3eub2 . e1oqshled2 [ 0 ] >= - 1.0
) && ( iowqpk3eub2 . e1oqshled2 [ 0 ] <= 1.0 ) ) { tol = kjmvupbl2i .
FirstOrderHold_ErrTol ; } else if ( iowqpk3eub2 . e1oqshled2 [ 0 ] > 1.0 ) {
tol = iowqpk3eub2 . e1oqshled2 [ 0 ] * kjmvupbl2i . FirstOrderHold_ErrTol ; }
else { tol = - ( iowqpk3eub2 . e1oqshled2 [ 0 ] * kjmvupbl2i .
FirstOrderHold_ErrTol ) ; } err = iowqpk3eub2 . hdpouphvxx [ 0 ] -
iowqpk3eub2 . e1oqshled2 [ 0 ] ; if ( ( err > tol ) || ( err < - tol ) ) {
guard1 = true ; } else { cz5yqt3r3xb . n20oxvozfr [ 0 ] = ( iowqpk3eub2 .
e1oqshled2 [ 0 ] - cz5yqt3r3xb . akmdrfe3wk [ 0 ] ) / ( ssGetT ( rtS ) -
cz5yqt3r3xb . dfwjuauqhh ) ; cz5yqt3r3xb . dci24ewo3n [ 0 ] = iowqpk3eub2 .
hdpouphvxx [ 0 ] ; } } else { guard1 = true ; } if ( guard1 ) { if (
iowqpk3eub2 . e1oqshled2 [ 0 ] != iowqpk3eub2 . hdpouphvxx [ 0 ] ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } cz5yqt3r3xb .
dci24ewo3n [ 0 ] = iowqpk3eub2 . e1oqshled2 [ 0 ] ; cz5yqt3r3xb . n20oxvozfr
[ 0 ] = 0.0 ; } cz5yqt3r3xb . akmdrfe3wk [ 0 ] = iowqpk3eub2 . e1oqshled2 [ 0
] ; guard1 = false ; if ( ! ( cz5yqt3r3xb . dfwjuauqhh == ( rtInf ) ) ) { if
( ( iowqpk3eub2 . e1oqshled2 [ 1 ] >= - 1.0 ) && ( iowqpk3eub2 . e1oqshled2 [
1 ] <= 1.0 ) ) { tol = kjmvupbl2i . FirstOrderHold_ErrTol ; } else if (
iowqpk3eub2 . e1oqshled2 [ 1 ] > 1.0 ) { tol = iowqpk3eub2 . e1oqshled2 [ 1 ]
* kjmvupbl2i . FirstOrderHold_ErrTol ; } else { tol = - ( iowqpk3eub2 .
e1oqshled2 [ 1 ] * kjmvupbl2i . FirstOrderHold_ErrTol ) ; } err = iowqpk3eub2
. hdpouphvxx [ 1 ] - iowqpk3eub2 . e1oqshled2 [ 1 ] ; if ( ( err > tol ) || (
err < - tol ) ) { guard1 = true ; } else { cz5yqt3r3xb . n20oxvozfr [ 1 ] = (
iowqpk3eub2 . e1oqshled2 [ 1 ] - cz5yqt3r3xb . akmdrfe3wk [ 1 ] ) / ( ssGetT
( rtS ) - cz5yqt3r3xb . dfwjuauqhh ) ; cz5yqt3r3xb . dci24ewo3n [ 1 ] =
iowqpk3eub2 . hdpouphvxx [ 1 ] ; } } else { guard1 = true ; } if ( guard1 ) {
if ( iowqpk3eub2 . e1oqshled2 [ 1 ] != iowqpk3eub2 . hdpouphvxx [ 1 ] ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } cz5yqt3r3xb .
dci24ewo3n [ 1 ] = iowqpk3eub2 . e1oqshled2 [ 1 ] ; cz5yqt3r3xb . n20oxvozfr
[ 1 ] = 0.0 ; } cz5yqt3r3xb . akmdrfe3wk [ 1 ] = iowqpk3eub2 . e1oqshled2 [ 1
] ; cz5yqt3r3xb . dfwjuauqhh = ssGetT ( rtS ) ; } simulationData = (
NeslSimulationData * ) cz5yqt3r3xb . fyp5vdhzam ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 66 ;
simulationData -> mData -> mContStates . mX = & chmgkez0tpf . ewdrbcmz1i [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & cz5yqt3r3xb . o5xnow4itx ; simulationData -> mData ->
mModeVector . mN = 18 ; simulationData -> mData -> mModeVector . mX = &
cz5yqt3r3xb . dq4uzmtffx [ 0 ] ; resetCoeff = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = resetCoeff ; simulationData -> mData -> mIsMajorTimeStep
= ssIsMajorTimeStep ( rtS ) ; resetCoeff = ( ssGetMdlInfoPtr ( rtS ) ->
mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = resetCoeff ; resetCoeff = ssIsSolverCheckingCIC ( rtS
) ; simulationData -> mData -> mIsSolverCheckingCIC = resetCoeff ; resetCoeff
= ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = resetCoeff ; simulationData -> mData ->
mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; resetCoeff
= ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = resetCoeff ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_p [ 0 ] = 0 ;
tmp [ 0 ] = iowqpk3eub2 . brfljizvcb [ 0 ] ; tmp [ 1 ] = iowqpk3eub2 .
brfljizvcb [ 1 ] ; tmp [ 2 ] = iowqpk3eub2 . brfljizvcb [ 2 ] ; tmp [ 3 ] =
iowqpk3eub2 . brfljizvcb [ 3 ] ; tmp_p [ 1 ] = 4 ; tmp [ 4 ] = iowqpk3eub2 .
hk3t1uj3s1 [ 0 ] ; tmp [ 5 ] = iowqpk3eub2 . hk3t1uj3s1 [ 1 ] ; tmp [ 6 ] =
iowqpk3eub2 . hk3t1uj3s1 [ 2 ] ; tmp [ 7 ] = iowqpk3eub2 . hk3t1uj3s1 [ 3 ] ;
tmp_p [ 2 ] = 8 ; tmp [ 8 ] = iowqpk3eub2 . cgvpcvur0e [ 0 ] ; tmp [ 9 ] =
iowqpk3eub2 . cgvpcvur0e [ 1 ] ; tmp [ 10 ] = iowqpk3eub2 . cgvpcvur0e [ 2 ]
; tmp [ 11 ] = iowqpk3eub2 . cgvpcvur0e [ 3 ] ; tmp_p [ 3 ] = 12 ; tmp [ 12 ]
= iowqpk3eub2 . hlacplpmlq [ 0 ] ; tmp [ 13 ] = iowqpk3eub2 . hlacplpmlq [ 1
] ; tmp [ 14 ] = iowqpk3eub2 . hlacplpmlq [ 2 ] ; tmp [ 15 ] = iowqpk3eub2 .
hlacplpmlq [ 3 ] ; tmp_p [ 4 ] = 16 ; tmp [ 16 ] = iowqpk3eub2 . fhodh2srma [
0 ] ; tmp [ 17 ] = iowqpk3eub2 . fhodh2srma [ 1 ] ; tmp [ 18 ] = iowqpk3eub2
. fhodh2srma [ 2 ] ; tmp [ 19 ] = iowqpk3eub2 . fhodh2srma [ 3 ] ; tmp_p [ 5
] = 20 ; tmp [ 20 ] = iowqpk3eub2 . cbv0fng454 [ 0 ] ; tmp [ 21 ] =
iowqpk3eub2 . cbv0fng454 [ 1 ] ; tmp [ 22 ] = iowqpk3eub2 . cbv0fng454 [ 2 ]
; tmp [ 23 ] = iowqpk3eub2 . cbv0fng454 [ 3 ] ; tmp_p [ 6 ] = 24 ; tmp [ 24 ]
= iowqpk3eub2 . jckfwcjotl [ 0 ] ; tmp [ 25 ] = iowqpk3eub2 . jckfwcjotl [ 1
] ; tmp [ 26 ] = iowqpk3eub2 . jckfwcjotl [ 2 ] ; tmp [ 27 ] = iowqpk3eub2 .
jckfwcjotl [ 3 ] ; tmp_p [ 7 ] = 28 ; tmp [ 28 ] = iowqpk3eub2 . clajzw4qwk [
0 ] ; tmp [ 29 ] = iowqpk3eub2 . clajzw4qwk [ 1 ] ; tmp [ 30 ] = iowqpk3eub2
. clajzw4qwk [ 2 ] ; tmp [ 31 ] = iowqpk3eub2 . clajzw4qwk [ 3 ] ; tmp_p [ 8
] = 32 ; tmp [ 32 ] = iowqpk3eub2 . guhcbwpvv2 [ 0 ] ; tmp [ 33 ] =
iowqpk3eub2 . guhcbwpvv2 [ 1 ] ; tmp [ 34 ] = iowqpk3eub2 . guhcbwpvv2 [ 2 ]
; tmp [ 35 ] = iowqpk3eub2 . guhcbwpvv2 [ 3 ] ; tmp_p [ 9 ] = 36 ; tmp [ 36 ]
= iowqpk3eub2 . k042txegzi [ 0 ] ; tmp [ 37 ] = iowqpk3eub2 . k042txegzi [ 1
] ; tmp [ 38 ] = iowqpk3eub2 . k042txegzi [ 2 ] ; tmp [ 39 ] = iowqpk3eub2 .
k042txegzi [ 3 ] ; tmp_p [ 10 ] = 40 ; tmp [ 40 ] = iowqpk3eub2 . ibos4vblha
[ 0 ] ; tmp [ 41 ] = iowqpk3eub2 . ibos4vblha [ 1 ] ; tmp [ 42 ] =
iowqpk3eub2 . ibos4vblha [ 2 ] ; tmp [ 43 ] = iowqpk3eub2 . ibos4vblha [ 3 ]
; tmp_p [ 11 ] = 44 ; simulationData -> mData -> mInputValues . mN = 44 ;
simulationData -> mData -> mInputValues . mX = & tmp [ 0 ] ; simulationData
-> mData -> mInputOffsets . mN = 12 ; simulationData -> mData ->
mInputOffsets . mX = & tmp_p [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) cz5yqt3r3xb . kesvfvbvkl ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; idx =
ne_simulator_method ( ( NeslSimulator * ) cz5yqt3r3xb . ar3upchjlo ,
NESL_SIM_UPDATE , simulationData , diagnosticManager ) ; if ( idx != 0 ) {
resetCoeff = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if (
resetCoeff ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ;
ssSetErrorStatus ( rtS , msg ) ; } } if ( ssIsSampleHit ( rtS , 2 , 0 ) ) {
e3ptmay5nu ( & ( cz5yqt3r3xb . jrvwlq3fuz . rtb ) , & ( cz5yqt3r3xb .
jrvwlq3fuz . rtdw ) ) ; cz5yqt3r3xb . ovftuesk53 [ 0 ] = iowqpk3eub2 .
eycgm5czdn [ 0 ] ; cz5yqt3r3xb . ovftuesk53 [ 1 ] = iowqpk3eub2 . eycgm5czdn
[ 1 ] ; guard1 = false ; if ( ! ( cz5yqt3r3xb . hqv0oirn0q == ( rtInf ) ) ) {
if ( ( iowqpk3eub2 . i0f0kaduop [ 0 ] >= - 1.0 ) && ( iowqpk3eub2 .
i0f0kaduop [ 0 ] <= 1.0 ) ) { tol = kjmvupbl2i . FirstOrderHold1_ErrTol ; }
else if ( iowqpk3eub2 . i0f0kaduop [ 0 ] > 1.0 ) { tol = iowqpk3eub2 .
i0f0kaduop [ 0 ] * kjmvupbl2i . FirstOrderHold1_ErrTol ; } else { tol = - (
iowqpk3eub2 . i0f0kaduop [ 0 ] * kjmvupbl2i . FirstOrderHold1_ErrTol ) ; }
err = iowqpk3eub2 . fhd2qe1xn4 [ 0 ] - iowqpk3eub2 . i0f0kaduop [ 0 ] ; if (
( err > tol ) || ( err < - tol ) ) { guard1 = true ; } else { cz5yqt3r3xb .
ggdayeevtv [ 0 ] = ( iowqpk3eub2 . i0f0kaduop [ 0 ] - cz5yqt3r3xb .
ipqlah0gj1 [ 0 ] ) / ( ssGetT ( rtS ) - cz5yqt3r3xb . hqv0oirn0q ) ;
cz5yqt3r3xb . lzovmgc1ye [ 0 ] = iowqpk3eub2 . fhd2qe1xn4 [ 0 ] ; } } else {
guard1 = true ; } if ( guard1 ) { if ( iowqpk3eub2 . i0f0kaduop [ 0 ] !=
iowqpk3eub2 . fhd2qe1xn4 [ 0 ] ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; }
cz5yqt3r3xb . lzovmgc1ye [ 0 ] = iowqpk3eub2 . i0f0kaduop [ 0 ] ; cz5yqt3r3xb
. ggdayeevtv [ 0 ] = 0.0 ; } cz5yqt3r3xb . ipqlah0gj1 [ 0 ] = iowqpk3eub2 .
i0f0kaduop [ 0 ] ; guard1 = false ; if ( ! ( cz5yqt3r3xb . hqv0oirn0q == (
rtInf ) ) ) { if ( ( iowqpk3eub2 . i0f0kaduop [ 1 ] >= - 1.0 ) && (
iowqpk3eub2 . i0f0kaduop [ 1 ] <= 1.0 ) ) { tol = kjmvupbl2i .
FirstOrderHold1_ErrTol ; } else if ( iowqpk3eub2 . i0f0kaduop [ 1 ] > 1.0 ) {
tol = iowqpk3eub2 . i0f0kaduop [ 1 ] * kjmvupbl2i . FirstOrderHold1_ErrTol ;
} else { tol = - ( iowqpk3eub2 . i0f0kaduop [ 1 ] * kjmvupbl2i .
FirstOrderHold1_ErrTol ) ; } err = iowqpk3eub2 . fhd2qe1xn4 [ 1 ] -
iowqpk3eub2 . i0f0kaduop [ 1 ] ; if ( ( err > tol ) || ( err < - tol ) ) {
guard1 = true ; } else { cz5yqt3r3xb . ggdayeevtv [ 1 ] = ( iowqpk3eub2 .
i0f0kaduop [ 1 ] - cz5yqt3r3xb . ipqlah0gj1 [ 1 ] ) / ( ssGetT ( rtS ) -
cz5yqt3r3xb . hqv0oirn0q ) ; cz5yqt3r3xb . lzovmgc1ye [ 1 ] = iowqpk3eub2 .
fhd2qe1xn4 [ 1 ] ; } } else { guard1 = true ; } if ( guard1 ) { if (
iowqpk3eub2 . i0f0kaduop [ 1 ] != iowqpk3eub2 . fhd2qe1xn4 [ 1 ] ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } cz5yqt3r3xb .
lzovmgc1ye [ 1 ] = iowqpk3eub2 . i0f0kaduop [ 1 ] ; cz5yqt3r3xb . ggdayeevtv
[ 1 ] = 0.0 ; } cz5yqt3r3xb . ipqlah0gj1 [ 1 ] = iowqpk3eub2 . i0f0kaduop [ 1
] ; guard1 = false ; if ( ! ( cz5yqt3r3xb . hqv0oirn0q == ( rtInf ) ) ) { if
( ( iowqpk3eub2 . i0f0kaduop [ 2 ] >= - 1.0 ) && ( iowqpk3eub2 . i0f0kaduop [
2 ] <= 1.0 ) ) { tol = kjmvupbl2i . FirstOrderHold1_ErrTol ; } else if (
iowqpk3eub2 . i0f0kaduop [ 2 ] > 1.0 ) { tol = iowqpk3eub2 . i0f0kaduop [ 2 ]
* kjmvupbl2i . FirstOrderHold1_ErrTol ; } else { tol = - ( iowqpk3eub2 .
i0f0kaduop [ 2 ] * kjmvupbl2i . FirstOrderHold1_ErrTol ) ; } err =
iowqpk3eub2 . fhd2qe1xn4 [ 2 ] - iowqpk3eub2 . i0f0kaduop [ 2 ] ; if ( ( err
> tol ) || ( err < - tol ) ) { guard1 = true ; } else { cz5yqt3r3xb .
ggdayeevtv [ 2 ] = ( iowqpk3eub2 . i0f0kaduop [ 2 ] - cz5yqt3r3xb .
ipqlah0gj1 [ 2 ] ) / ( ssGetT ( rtS ) - cz5yqt3r3xb . hqv0oirn0q ) ;
cz5yqt3r3xb . lzovmgc1ye [ 2 ] = iowqpk3eub2 . fhd2qe1xn4 [ 2 ] ; } } else {
guard1 = true ; } if ( guard1 ) { if ( iowqpk3eub2 . i0f0kaduop [ 2 ] !=
iowqpk3eub2 . fhd2qe1xn4 [ 2 ] ) { ssSetBlockStateForSolverChangedAtMajorStep
( rtS ) ; ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; }
cz5yqt3r3xb . lzovmgc1ye [ 2 ] = iowqpk3eub2 . i0f0kaduop [ 2 ] ; cz5yqt3r3xb
. ggdayeevtv [ 2 ] = 0.0 ; } cz5yqt3r3xb . ipqlah0gj1 [ 2 ] = iowqpk3eub2 .
i0f0kaduop [ 2 ] ; guard1 = false ; if ( ! ( cz5yqt3r3xb . hqv0oirn0q == (
rtInf ) ) ) { if ( ( iowqpk3eub2 . i0f0kaduop [ 3 ] >= - 1.0 ) && (
iowqpk3eub2 . i0f0kaduop [ 3 ] <= 1.0 ) ) { tol = kjmvupbl2i .
FirstOrderHold1_ErrTol ; } else if ( iowqpk3eub2 . i0f0kaduop [ 3 ] > 1.0 ) {
tol = iowqpk3eub2 . i0f0kaduop [ 3 ] * kjmvupbl2i . FirstOrderHold1_ErrTol ;
} else { tol = - ( iowqpk3eub2 . i0f0kaduop [ 3 ] * kjmvupbl2i .
FirstOrderHold1_ErrTol ) ; } err = iowqpk3eub2 . fhd2qe1xn4 [ 3 ] -
iowqpk3eub2 . i0f0kaduop [ 3 ] ; if ( ( err > tol ) || ( err < - tol ) ) {
guard1 = true ; } else { cz5yqt3r3xb . ggdayeevtv [ 3 ] = ( iowqpk3eub2 .
i0f0kaduop [ 3 ] - cz5yqt3r3xb . ipqlah0gj1 [ 3 ] ) / ( ssGetT ( rtS ) -
cz5yqt3r3xb . hqv0oirn0q ) ; cz5yqt3r3xb . lzovmgc1ye [ 3 ] = iowqpk3eub2 .
fhd2qe1xn4 [ 3 ] ; } } else { guard1 = true ; } if ( guard1 ) { if (
iowqpk3eub2 . i0f0kaduop [ 3 ] != iowqpk3eub2 . fhd2qe1xn4 [ 3 ] ) {
ssSetBlockStateForSolverChangedAtMajorStep ( rtS ) ;
ssSetContTimeOutputInconsistentWithStateAtMajorStep ( rtS ) ; } cz5yqt3r3xb .
lzovmgc1ye [ 3 ] = iowqpk3eub2 . i0f0kaduop [ 3 ] ; cz5yqt3r3xb . ggdayeevtv
[ 3 ] = 0.0 ; } cz5yqt3r3xb . ipqlah0gj1 [ 3 ] = iowqpk3eub2 . i0f0kaduop [ 3
] ; cz5yqt3r3xb . hqv0oirn0q = ssGetT ( rtS ) ; } UNUSED_PARAMETER ( tid ) ;
} void MdlUpdateTID5 ( int_T tid ) { UNUSED_PARAMETER ( tid ) ; } void
MdlDerivatives ( void ) { NeslSimulationData * simulationData ;
NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree * diagnosticTree
; char * msg ; ihgnjubmvk * _rtXdot ; real_T tmp_p [ 44 ] ; real_T time ;
int_T tmp_e [ 12 ] ; int_T is ; boolean_T tmp ; _rtXdot = ( ( ihgnjubmvk * )
ssGetdX ( rtS ) ) ; _rtXdot -> h3jcgsxl3g = iowqpk3eub2 . jlncf1nhxu ;
_rtXdot -> nbhyf45pww [ 0 ] = iowqpk3eub2 . b0ggdb4gbt [ 0 ] ; _rtXdot ->
nbhyf45pww [ 1 ] = iowqpk3eub2 . b0ggdb4gbt [ 1 ] ; _rtXdot -> nbhyf45pww [ 2
] = iowqpk3eub2 . b0ggdb4gbt [ 2 ] ; _rtXdot -> nbhyf45pww [ 3 ] =
iowqpk3eub2 . b0ggdb4gbt [ 3 ] ; _rtXdot -> gs5cem5nqo = 0.0 ; _rtXdot ->
gs5cem5nqo += kjmvupbl2i . TransferFcn5_A * chmgkez0tpf . gs5cem5nqo ;
_rtXdot -> gs5cem5nqo += iowqpk3eub2 . jbgpjywn3z [ 21 ] ; _rtXdot ->
o44tjxyaqi = ( iowqpk3eub2 . ir1e3eamgb - chmgkez0tpf . o44tjxyaqi ) * 1000.0
; simulationData = ( NeslSimulationData * ) cz5yqt3r3xb . fyp5vdhzam ; time =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time ; simulationData -> mData -> mContStates . mN
= 66 ; simulationData -> mData -> mContStates . mX = & chmgkez0tpf .
ewdrbcmz1i [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & cz5yqt3r3xb . o5xnow4itx ;
simulationData -> mData -> mModeVector . mN = 18 ; simulationData -> mData ->
mModeVector . mX = & cz5yqt3r3xb . dq4uzmtffx [ 0 ] ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ;
simulationData -> mData -> mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep (
rtS ) ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = iowqpk3eub2 . brfljizvcb [ 0 ] ;
tmp_p [ 1 ] = iowqpk3eub2 . brfljizvcb [ 1 ] ; tmp_p [ 2 ] = iowqpk3eub2 .
brfljizvcb [ 2 ] ; tmp_p [ 3 ] = iowqpk3eub2 . brfljizvcb [ 3 ] ; tmp_e [ 1 ]
= 4 ; tmp_p [ 4 ] = iowqpk3eub2 . hk3t1uj3s1 [ 0 ] ; tmp_p [ 5 ] =
iowqpk3eub2 . hk3t1uj3s1 [ 1 ] ; tmp_p [ 6 ] = iowqpk3eub2 . hk3t1uj3s1 [ 2 ]
; tmp_p [ 7 ] = iowqpk3eub2 . hk3t1uj3s1 [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8
] = iowqpk3eub2 . cgvpcvur0e [ 0 ] ; tmp_p [ 9 ] = iowqpk3eub2 . cgvpcvur0e [
1 ] ; tmp_p [ 10 ] = iowqpk3eub2 . cgvpcvur0e [ 2 ] ; tmp_p [ 11 ] =
iowqpk3eub2 . cgvpcvur0e [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
iowqpk3eub2 . hlacplpmlq [ 0 ] ; tmp_p [ 13 ] = iowqpk3eub2 . hlacplpmlq [ 1
] ; tmp_p [ 14 ] = iowqpk3eub2 . hlacplpmlq [ 2 ] ; tmp_p [ 15 ] =
iowqpk3eub2 . hlacplpmlq [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
iowqpk3eub2 . fhodh2srma [ 0 ] ; tmp_p [ 17 ] = iowqpk3eub2 . fhodh2srma [ 1
] ; tmp_p [ 18 ] = iowqpk3eub2 . fhodh2srma [ 2 ] ; tmp_p [ 19 ] =
iowqpk3eub2 . fhodh2srma [ 3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] =
iowqpk3eub2 . cbv0fng454 [ 0 ] ; tmp_p [ 21 ] = iowqpk3eub2 . cbv0fng454 [ 1
] ; tmp_p [ 22 ] = iowqpk3eub2 . cbv0fng454 [ 2 ] ; tmp_p [ 23 ] =
iowqpk3eub2 . cbv0fng454 [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] =
iowqpk3eub2 . jckfwcjotl [ 0 ] ; tmp_p [ 25 ] = iowqpk3eub2 . jckfwcjotl [ 1
] ; tmp_p [ 26 ] = iowqpk3eub2 . jckfwcjotl [ 2 ] ; tmp_p [ 27 ] =
iowqpk3eub2 . jckfwcjotl [ 3 ] ; tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] =
iowqpk3eub2 . clajzw4qwk [ 0 ] ; tmp_p [ 29 ] = iowqpk3eub2 . clajzw4qwk [ 1
] ; tmp_p [ 30 ] = iowqpk3eub2 . clajzw4qwk [ 2 ] ; tmp_p [ 31 ] =
iowqpk3eub2 . clajzw4qwk [ 3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] =
iowqpk3eub2 . guhcbwpvv2 [ 0 ] ; tmp_p [ 33 ] = iowqpk3eub2 . guhcbwpvv2 [ 1
] ; tmp_p [ 34 ] = iowqpk3eub2 . guhcbwpvv2 [ 2 ] ; tmp_p [ 35 ] =
iowqpk3eub2 . guhcbwpvv2 [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] =
iowqpk3eub2 . k042txegzi [ 0 ] ; tmp_p [ 37 ] = iowqpk3eub2 . k042txegzi [ 1
] ; tmp_p [ 38 ] = iowqpk3eub2 . k042txegzi [ 2 ] ; tmp_p [ 39 ] =
iowqpk3eub2 . k042txegzi [ 3 ] ; tmp_e [ 10 ] = 40 ; tmp_p [ 40 ] =
iowqpk3eub2 . ibos4vblha [ 0 ] ; tmp_p [ 41 ] = iowqpk3eub2 . ibos4vblha [ 1
] ; tmp_p [ 42 ] = iowqpk3eub2 . ibos4vblha [ 2 ] ; tmp_p [ 43 ] =
iowqpk3eub2 . ibos4vblha [ 3 ] ; tmp_e [ 11 ] = 44 ; simulationData -> mData
-> mInputValues . mN = 44 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 12 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 66 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> ewdrbcmz1i [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) cz5yqt3r3xb . kesvfvbvkl ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; is =
ne_simulator_method ( ( NeslSimulator * ) cz5yqt3r3xb . ar3upchjlo ,
NESL_SIM_DERIVATIVES , simulationData , diagnosticManager ) ; if ( is != 0 )
{ tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) { msg
= rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg ) ; }
} _rtXdot -> bhmvyo1hjl = iowqpk3eub2 . fslb3e0kt4 ; _rtXdot -> iarnkoswlx =
iowqpk3eub2 . ll5kvzbeqe ; _rtXdot -> lywux4fr45 = iowqpk3eub2 . if3ap21cin ;
_rtXdot -> igaknrnpbi = iowqpk3eub2 . bol3toc3da ; _rtXdot -> fnlgzvne04 =
iowqpk3eub2 . oxtftcyamo ; _rtXdot -> blfalouxud = iowqpk3eub2 . dccuh1poqm ;
_rtXdot -> icfrc3vdyk = iowqpk3eub2 . cvaoaiilfy ; _rtXdot -> e3mnx1zztt =
iowqpk3eub2 . oqfbznbud3 ; } void MdlProjection ( void ) { NeslSimulationData
* simulationData ; NeuDiagnosticManager * diagnosticManager ;
NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T tmp_p [ 44 ] ;
real_T time ; int32_T tmp_i ; int_T tmp_e [ 12 ] ; boolean_T tmp ;
simulationData = ( NeslSimulationData * ) cz5yqt3r3xb . fyp5vdhzam ; time =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time ; simulationData -> mData -> mContStates . mN
= 66 ; simulationData -> mData -> mContStates . mX = & chmgkez0tpf .
ewdrbcmz1i [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & cz5yqt3r3xb . o5xnow4itx ;
simulationData -> mData -> mModeVector . mN = 18 ; simulationData -> mData ->
mModeVector . mX = & cz5yqt3r3xb . dq4uzmtffx [ 0 ] ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ;
simulationData -> mData -> mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep (
rtS ) ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = iowqpk3eub2 . brfljizvcb [ 0 ] ;
tmp_p [ 1 ] = iowqpk3eub2 . brfljizvcb [ 1 ] ; tmp_p [ 2 ] = iowqpk3eub2 .
brfljizvcb [ 2 ] ; tmp_p [ 3 ] = iowqpk3eub2 . brfljizvcb [ 3 ] ; tmp_e [ 1 ]
= 4 ; tmp_p [ 4 ] = iowqpk3eub2 . hk3t1uj3s1 [ 0 ] ; tmp_p [ 5 ] =
iowqpk3eub2 . hk3t1uj3s1 [ 1 ] ; tmp_p [ 6 ] = iowqpk3eub2 . hk3t1uj3s1 [ 2 ]
; tmp_p [ 7 ] = iowqpk3eub2 . hk3t1uj3s1 [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8
] = iowqpk3eub2 . cgvpcvur0e [ 0 ] ; tmp_p [ 9 ] = iowqpk3eub2 . cgvpcvur0e [
1 ] ; tmp_p [ 10 ] = iowqpk3eub2 . cgvpcvur0e [ 2 ] ; tmp_p [ 11 ] =
iowqpk3eub2 . cgvpcvur0e [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
iowqpk3eub2 . hlacplpmlq [ 0 ] ; tmp_p [ 13 ] = iowqpk3eub2 . hlacplpmlq [ 1
] ; tmp_p [ 14 ] = iowqpk3eub2 . hlacplpmlq [ 2 ] ; tmp_p [ 15 ] =
iowqpk3eub2 . hlacplpmlq [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
iowqpk3eub2 . fhodh2srma [ 0 ] ; tmp_p [ 17 ] = iowqpk3eub2 . fhodh2srma [ 1
] ; tmp_p [ 18 ] = iowqpk3eub2 . fhodh2srma [ 2 ] ; tmp_p [ 19 ] =
iowqpk3eub2 . fhodh2srma [ 3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] =
iowqpk3eub2 . cbv0fng454 [ 0 ] ; tmp_p [ 21 ] = iowqpk3eub2 . cbv0fng454 [ 1
] ; tmp_p [ 22 ] = iowqpk3eub2 . cbv0fng454 [ 2 ] ; tmp_p [ 23 ] =
iowqpk3eub2 . cbv0fng454 [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] =
iowqpk3eub2 . jckfwcjotl [ 0 ] ; tmp_p [ 25 ] = iowqpk3eub2 . jckfwcjotl [ 1
] ; tmp_p [ 26 ] = iowqpk3eub2 . jckfwcjotl [ 2 ] ; tmp_p [ 27 ] =
iowqpk3eub2 . jckfwcjotl [ 3 ] ; tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] =
iowqpk3eub2 . clajzw4qwk [ 0 ] ; tmp_p [ 29 ] = iowqpk3eub2 . clajzw4qwk [ 1
] ; tmp_p [ 30 ] = iowqpk3eub2 . clajzw4qwk [ 2 ] ; tmp_p [ 31 ] =
iowqpk3eub2 . clajzw4qwk [ 3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] =
iowqpk3eub2 . guhcbwpvv2 [ 0 ] ; tmp_p [ 33 ] = iowqpk3eub2 . guhcbwpvv2 [ 1
] ; tmp_p [ 34 ] = iowqpk3eub2 . guhcbwpvv2 [ 2 ] ; tmp_p [ 35 ] =
iowqpk3eub2 . guhcbwpvv2 [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] =
iowqpk3eub2 . k042txegzi [ 0 ] ; tmp_p [ 37 ] = iowqpk3eub2 . k042txegzi [ 1
] ; tmp_p [ 38 ] = iowqpk3eub2 . k042txegzi [ 2 ] ; tmp_p [ 39 ] =
iowqpk3eub2 . k042txegzi [ 3 ] ; tmp_e [ 10 ] = 40 ; tmp_p [ 40 ] =
iowqpk3eub2 . ibos4vblha [ 0 ] ; tmp_p [ 41 ] = iowqpk3eub2 . ibos4vblha [ 1
] ; tmp_p [ 42 ] = iowqpk3eub2 . ibos4vblha [ 2 ] ; tmp_p [ 43 ] =
iowqpk3eub2 . ibos4vblha [ 3 ] ; tmp_e [ 11 ] = 44 ; simulationData -> mData
-> mInputValues . mN = 44 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 12 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
diagnosticManager = ( NeuDiagnosticManager * ) cz5yqt3r3xb . kesvfvbvkl ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_i = ne_simulator_method ( ( NeslSimulator * ) cz5yqt3r3xb .
ar3upchjlo , NESL_SIM_PROJECTION , simulationData , diagnosticManager ) ; if
( tmp_i != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ;
if ( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus
( rtS , msg ) ; } } } void MdlForcingFunction ( void ) { NeslSimulationData *
simulationData ; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree
* diagnosticTree ; char * msg ; ihgnjubmvk * _rtXdot ; real_T tmp_p [ 44 ] ;
real_T time ; int_T tmp_e [ 12 ] ; int_T is ; boolean_T tmp ; _rtXdot = ( (
ihgnjubmvk * ) ssGetdX ( rtS ) ) ; _rtXdot -> h3jcgsxl3g = iowqpk3eub2 .
jlncf1nhxu ; _rtXdot -> nbhyf45pww [ 0 ] = iowqpk3eub2 . b0ggdb4gbt [ 0 ] ;
_rtXdot -> nbhyf45pww [ 1 ] = iowqpk3eub2 . b0ggdb4gbt [ 1 ] ; _rtXdot ->
nbhyf45pww [ 2 ] = iowqpk3eub2 . b0ggdb4gbt [ 2 ] ; _rtXdot -> nbhyf45pww [ 3
] = iowqpk3eub2 . b0ggdb4gbt [ 3 ] ; _rtXdot -> gs5cem5nqo = 0.0 ; _rtXdot ->
gs5cem5nqo += kjmvupbl2i . TransferFcn5_A * chmgkez0tpf . gs5cem5nqo ;
_rtXdot -> gs5cem5nqo += iowqpk3eub2 . jbgpjywn3z [ 21 ] ; _rtXdot ->
o44tjxyaqi = ( iowqpk3eub2 . ir1e3eamgb - chmgkez0tpf . o44tjxyaqi ) * 1000.0
; simulationData = ( NeslSimulationData * ) cz5yqt3r3xb . fyp5vdhzam ; time =
ssGetT ( rtS ) ; simulationData -> mData -> mTime . mN = 1 ; simulationData
-> mData -> mTime . mX = & time ; simulationData -> mData -> mContStates . mN
= 66 ; simulationData -> mData -> mContStates . mX = & chmgkez0tpf .
ewdrbcmz1i [ 0 ] ; simulationData -> mData -> mDiscStates . mN = 0 ;
simulationData -> mData -> mDiscStates . mX = & cz5yqt3r3xb . o5xnow4itx ;
simulationData -> mData -> mModeVector . mN = 18 ; simulationData -> mData ->
mModeVector . mX = & cz5yqt3r3xb . dq4uzmtffx [ 0 ] ; tmp = (
ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents
) ; simulationData -> mData -> mFoundZcEvents = tmp ; simulationData -> mData
-> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr (
rtS ) -> mdlFlags . solverAssertCheck == 1U ) ; simulationData -> mData ->
mIsSolverAssertCheck = tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ;
simulationData -> mData -> mIsSolverCheckingCIC = tmp ; tmp =
ssIsSolverComputingJacobian ( rtS ) ; simulationData -> mData ->
mIsComputingJacobian = tmp ; simulationData -> mData -> mIsEvaluatingF0 = (
ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ; tmp = ssIsSolverRequestingReset
( rtS ) ; simulationData -> mData -> mIsSolverRequestingReset = tmp ;
simulationData -> mData -> mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep (
rtS ) ; tmp_e [ 0 ] = 0 ; tmp_p [ 0 ] = iowqpk3eub2 . brfljizvcb [ 0 ] ;
tmp_p [ 1 ] = iowqpk3eub2 . brfljizvcb [ 1 ] ; tmp_p [ 2 ] = iowqpk3eub2 .
brfljizvcb [ 2 ] ; tmp_p [ 3 ] = iowqpk3eub2 . brfljizvcb [ 3 ] ; tmp_e [ 1 ]
= 4 ; tmp_p [ 4 ] = iowqpk3eub2 . hk3t1uj3s1 [ 0 ] ; tmp_p [ 5 ] =
iowqpk3eub2 . hk3t1uj3s1 [ 1 ] ; tmp_p [ 6 ] = iowqpk3eub2 . hk3t1uj3s1 [ 2 ]
; tmp_p [ 7 ] = iowqpk3eub2 . hk3t1uj3s1 [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8
] = iowqpk3eub2 . cgvpcvur0e [ 0 ] ; tmp_p [ 9 ] = iowqpk3eub2 . cgvpcvur0e [
1 ] ; tmp_p [ 10 ] = iowqpk3eub2 . cgvpcvur0e [ 2 ] ; tmp_p [ 11 ] =
iowqpk3eub2 . cgvpcvur0e [ 3 ] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] =
iowqpk3eub2 . hlacplpmlq [ 0 ] ; tmp_p [ 13 ] = iowqpk3eub2 . hlacplpmlq [ 1
] ; tmp_p [ 14 ] = iowqpk3eub2 . hlacplpmlq [ 2 ] ; tmp_p [ 15 ] =
iowqpk3eub2 . hlacplpmlq [ 3 ] ; tmp_e [ 4 ] = 16 ; tmp_p [ 16 ] =
iowqpk3eub2 . fhodh2srma [ 0 ] ; tmp_p [ 17 ] = iowqpk3eub2 . fhodh2srma [ 1
] ; tmp_p [ 18 ] = iowqpk3eub2 . fhodh2srma [ 2 ] ; tmp_p [ 19 ] =
iowqpk3eub2 . fhodh2srma [ 3 ] ; tmp_e [ 5 ] = 20 ; tmp_p [ 20 ] =
iowqpk3eub2 . cbv0fng454 [ 0 ] ; tmp_p [ 21 ] = iowqpk3eub2 . cbv0fng454 [ 1
] ; tmp_p [ 22 ] = iowqpk3eub2 . cbv0fng454 [ 2 ] ; tmp_p [ 23 ] =
iowqpk3eub2 . cbv0fng454 [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] =
iowqpk3eub2 . jckfwcjotl [ 0 ] ; tmp_p [ 25 ] = iowqpk3eub2 . jckfwcjotl [ 1
] ; tmp_p [ 26 ] = iowqpk3eub2 . jckfwcjotl [ 2 ] ; tmp_p [ 27 ] =
iowqpk3eub2 . jckfwcjotl [ 3 ] ; tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] =
iowqpk3eub2 . clajzw4qwk [ 0 ] ; tmp_p [ 29 ] = iowqpk3eub2 . clajzw4qwk [ 1
] ; tmp_p [ 30 ] = iowqpk3eub2 . clajzw4qwk [ 2 ] ; tmp_p [ 31 ] =
iowqpk3eub2 . clajzw4qwk [ 3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] =
iowqpk3eub2 . guhcbwpvv2 [ 0 ] ; tmp_p [ 33 ] = iowqpk3eub2 . guhcbwpvv2 [ 1
] ; tmp_p [ 34 ] = iowqpk3eub2 . guhcbwpvv2 [ 2 ] ; tmp_p [ 35 ] =
iowqpk3eub2 . guhcbwpvv2 [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] =
iowqpk3eub2 . k042txegzi [ 0 ] ; tmp_p [ 37 ] = iowqpk3eub2 . k042txegzi [ 1
] ; tmp_p [ 38 ] = iowqpk3eub2 . k042txegzi [ 2 ] ; tmp_p [ 39 ] =
iowqpk3eub2 . k042txegzi [ 3 ] ; tmp_e [ 10 ] = 40 ; tmp_p [ 40 ] =
iowqpk3eub2 . ibos4vblha [ 0 ] ; tmp_p [ 41 ] = iowqpk3eub2 . ibos4vblha [ 1
] ; tmp_p [ 42 ] = iowqpk3eub2 . ibos4vblha [ 2 ] ; tmp_p [ 43 ] =
iowqpk3eub2 . ibos4vblha [ 3 ] ; tmp_e [ 11 ] = 44 ; simulationData -> mData
-> mInputValues . mN = 44 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 12 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mDx . mN = 66 ; simulationData -> mData -> mDx .
mX = & _rtXdot -> ewdrbcmz1i [ 0 ] ; diagnosticManager = (
NeuDiagnosticManager * ) cz5yqt3r3xb . kesvfvbvkl ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; is =
ne_simulator_method ( ( NeslSimulator * ) cz5yqt3r3xb . ar3upchjlo ,
NESL_SIM_FORCINGFUNCTION , simulationData , diagnosticManager ) ; if ( is !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtXdot -> bhmvyo1hjl = iowqpk3eub2 . fslb3e0kt4 ; _rtXdot ->
iarnkoswlx = iowqpk3eub2 . ll5kvzbeqe ; _rtXdot -> lywux4fr45 = iowqpk3eub2 .
if3ap21cin ; _rtXdot -> igaknrnpbi = iowqpk3eub2 . bol3toc3da ; _rtXdot ->
fnlgzvne04 = iowqpk3eub2 . oxtftcyamo ; _rtXdot -> blfalouxud = iowqpk3eub2 .
dccuh1poqm ; _rtXdot -> icfrc3vdyk = iowqpk3eub2 . cvaoaiilfy ; _rtXdot ->
e3mnx1zztt = iowqpk3eub2 . oqfbznbud3 ; } void MdlMassMatrix ( void ) {
NeslSimulationData * simulationData ; NeuDiagnosticManager *
diagnosticManager ; NeuDiagnosticTree * diagnosticTree ; char * msg ; real_T
tmp_p [ 44 ] ; real_T time ; real_T * tmp_i ; real_T * tmp_m ; int32_T tmp_g
; int_T tmp_e [ 12 ] ; boolean_T tmp ; simulationData = ( NeslSimulationData
* ) cz5yqt3r3xb . fyp5vdhzam ; time = ssGetT ( rtS ) ; simulationData ->
mData -> mTime . mN = 1 ; simulationData -> mData -> mTime . mX = & time ;
simulationData -> mData -> mContStates . mN = 66 ; simulationData -> mData ->
mContStates . mX = & chmgkez0tpf . ewdrbcmz1i [ 0 ] ; simulationData -> mData
-> mDiscStates . mN = 0 ; simulationData -> mData -> mDiscStates . mX = &
cz5yqt3r3xb . o5xnow4itx ; simulationData -> mData -> mModeVector . mN = 18 ;
simulationData -> mData -> mModeVector . mX = & cz5yqt3r3xb . dq4uzmtffx [ 0
] ; tmp = ( ssIsMajorTimeStep ( rtS ) && ssGetRTWSolverInfo ( rtS ) ->
foundContZcEvents ) ; simulationData -> mData -> mFoundZcEvents = tmp ;
simulationData -> mData -> mIsMajorTimeStep = ssIsMajorTimeStep ( rtS ) ; tmp
= ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags . solverAssertCheck == 1U ) ;
simulationData -> mData -> mIsSolverAssertCheck = tmp ; tmp =
ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = iowqpk3eub2 . brfljizvcb [ 0 ] ; tmp_p [ 1 ] = iowqpk3eub2 .
brfljizvcb [ 1 ] ; tmp_p [ 2 ] = iowqpk3eub2 . brfljizvcb [ 2 ] ; tmp_p [ 3 ]
= iowqpk3eub2 . brfljizvcb [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] =
iowqpk3eub2 . hk3t1uj3s1 [ 0 ] ; tmp_p [ 5 ] = iowqpk3eub2 . hk3t1uj3s1 [ 1 ]
; tmp_p [ 6 ] = iowqpk3eub2 . hk3t1uj3s1 [ 2 ] ; tmp_p [ 7 ] = iowqpk3eub2 .
hk3t1uj3s1 [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = iowqpk3eub2 . cgvpcvur0e [
0 ] ; tmp_p [ 9 ] = iowqpk3eub2 . cgvpcvur0e [ 1 ] ; tmp_p [ 10 ] =
iowqpk3eub2 . cgvpcvur0e [ 2 ] ; tmp_p [ 11 ] = iowqpk3eub2 . cgvpcvur0e [ 3
] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = iowqpk3eub2 . hlacplpmlq [ 0 ] ; tmp_p
[ 13 ] = iowqpk3eub2 . hlacplpmlq [ 1 ] ; tmp_p [ 14 ] = iowqpk3eub2 .
hlacplpmlq [ 2 ] ; tmp_p [ 15 ] = iowqpk3eub2 . hlacplpmlq [ 3 ] ; tmp_e [ 4
] = 16 ; tmp_p [ 16 ] = iowqpk3eub2 . fhodh2srma [ 0 ] ; tmp_p [ 17 ] =
iowqpk3eub2 . fhodh2srma [ 1 ] ; tmp_p [ 18 ] = iowqpk3eub2 . fhodh2srma [ 2
] ; tmp_p [ 19 ] = iowqpk3eub2 . fhodh2srma [ 3 ] ; tmp_e [ 5 ] = 20 ; tmp_p
[ 20 ] = iowqpk3eub2 . cbv0fng454 [ 0 ] ; tmp_p [ 21 ] = iowqpk3eub2 .
cbv0fng454 [ 1 ] ; tmp_p [ 22 ] = iowqpk3eub2 . cbv0fng454 [ 2 ] ; tmp_p [ 23
] = iowqpk3eub2 . cbv0fng454 [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] =
iowqpk3eub2 . jckfwcjotl [ 0 ] ; tmp_p [ 25 ] = iowqpk3eub2 . jckfwcjotl [ 1
] ; tmp_p [ 26 ] = iowqpk3eub2 . jckfwcjotl [ 2 ] ; tmp_p [ 27 ] =
iowqpk3eub2 . jckfwcjotl [ 3 ] ; tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] =
iowqpk3eub2 . clajzw4qwk [ 0 ] ; tmp_p [ 29 ] = iowqpk3eub2 . clajzw4qwk [ 1
] ; tmp_p [ 30 ] = iowqpk3eub2 . clajzw4qwk [ 2 ] ; tmp_p [ 31 ] =
iowqpk3eub2 . clajzw4qwk [ 3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] =
iowqpk3eub2 . guhcbwpvv2 [ 0 ] ; tmp_p [ 33 ] = iowqpk3eub2 . guhcbwpvv2 [ 1
] ; tmp_p [ 34 ] = iowqpk3eub2 . guhcbwpvv2 [ 2 ] ; tmp_p [ 35 ] =
iowqpk3eub2 . guhcbwpvv2 [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] =
iowqpk3eub2 . k042txegzi [ 0 ] ; tmp_p [ 37 ] = iowqpk3eub2 . k042txegzi [ 1
] ; tmp_p [ 38 ] = iowqpk3eub2 . k042txegzi [ 2 ] ; tmp_p [ 39 ] =
iowqpk3eub2 . k042txegzi [ 3 ] ; tmp_e [ 10 ] = 40 ; tmp_p [ 40 ] =
iowqpk3eub2 . ibos4vblha [ 0 ] ; tmp_p [ 41 ] = iowqpk3eub2 . ibos4vblha [ 1
] ; tmp_p [ 42 ] = iowqpk3eub2 . ibos4vblha [ 2 ] ; tmp_p [ 43 ] =
iowqpk3eub2 . ibos4vblha [ 3 ] ; tmp_e [ 11 ] = 44 ; simulationData -> mData
-> mInputValues . mN = 44 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 12 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ; tmp_i =
ssGetMassMatrixPr ( rtS ) ; tmp_m = double_pointer_shift ( tmp_i ,
cz5yqt3r3xb . eez5eb4v4d ) ; simulationData -> mData -> mMassMatrixPr . mN =
28 ; simulationData -> mData -> mMassMatrixPr . mX = tmp_m ;
diagnosticManager = ( NeuDiagnosticManager * ) cz5yqt3r3xb . kesvfvbvkl ;
diagnosticTree = neu_diagnostic_manager_get_initial_tree ( diagnosticManager
) ; tmp_g = ne_simulator_method ( ( NeslSimulator * ) cz5yqt3r3xb .
ar3upchjlo , NESL_SIM_MASSMATRIX , simulationData , diagnosticManager ) ; if
( tmp_g != 0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ;
if ( tmp ) { msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus
( rtS , msg ) ; } } } void MdlZeroCrossings ( void ) { NeslSimulationData *
simulationData ; NeuDiagnosticManager * diagnosticManager ; NeuDiagnosticTree
* diagnosticTree ; bor3rs1x4c * _rtZCSV ; char * msg ; real_T tmp_p [ 44 ] ;
real_T time ; int32_T tmp_i ; int_T tmp_e [ 12 ] ; boolean_T tmp ; _rtZCSV =
( ( bor3rs1x4c * ) ssGetSolverZcSignalVector ( rtS ) ) ; simulationData = (
NeslSimulationData * ) cz5yqt3r3xb . fyp5vdhzam ; time = ssGetT ( rtS ) ;
simulationData -> mData -> mTime . mN = 1 ; simulationData -> mData -> mTime
. mX = & time ; simulationData -> mData -> mContStates . mN = 66 ;
simulationData -> mData -> mContStates . mX = & chmgkez0tpf . ewdrbcmz1i [ 0
] ; simulationData -> mData -> mDiscStates . mN = 0 ; simulationData -> mData
-> mDiscStates . mX = & cz5yqt3r3xb . o5xnow4itx ; simulationData -> mData ->
mModeVector . mN = 18 ; simulationData -> mData -> mModeVector . mX = &
cz5yqt3r3xb . dq4uzmtffx [ 0 ] ; tmp = ( ssIsMajorTimeStep ( rtS ) &&
ssGetRTWSolverInfo ( rtS ) -> foundContZcEvents ) ; simulationData -> mData
-> mFoundZcEvents = tmp ; simulationData -> mData -> mIsMajorTimeStep =
ssIsMajorTimeStep ( rtS ) ; tmp = ( ssGetMdlInfoPtr ( rtS ) -> mdlFlags .
solverAssertCheck == 1U ) ; simulationData -> mData -> mIsSolverAssertCheck =
tmp ; tmp = ssIsSolverCheckingCIC ( rtS ) ; simulationData -> mData ->
mIsSolverCheckingCIC = tmp ; tmp = ssIsSolverComputingJacobian ( rtS ) ;
simulationData -> mData -> mIsComputingJacobian = tmp ; simulationData ->
mData -> mIsEvaluatingF0 = ( ssGetEvaluatingF0ForJacobian ( rtS ) != 0 ) ;
tmp = ssIsSolverRequestingReset ( rtS ) ; simulationData -> mData ->
mIsSolverRequestingReset = tmp ; simulationData -> mData ->
mIsModeUpdateTimeStep = ssIsModeUpdateTimeStep ( rtS ) ; tmp_e [ 0 ] = 0 ;
tmp_p [ 0 ] = iowqpk3eub2 . brfljizvcb [ 0 ] ; tmp_p [ 1 ] = iowqpk3eub2 .
brfljizvcb [ 1 ] ; tmp_p [ 2 ] = iowqpk3eub2 . brfljizvcb [ 2 ] ; tmp_p [ 3 ]
= iowqpk3eub2 . brfljizvcb [ 3 ] ; tmp_e [ 1 ] = 4 ; tmp_p [ 4 ] =
iowqpk3eub2 . hk3t1uj3s1 [ 0 ] ; tmp_p [ 5 ] = iowqpk3eub2 . hk3t1uj3s1 [ 1 ]
; tmp_p [ 6 ] = iowqpk3eub2 . hk3t1uj3s1 [ 2 ] ; tmp_p [ 7 ] = iowqpk3eub2 .
hk3t1uj3s1 [ 3 ] ; tmp_e [ 2 ] = 8 ; tmp_p [ 8 ] = iowqpk3eub2 . cgvpcvur0e [
0 ] ; tmp_p [ 9 ] = iowqpk3eub2 . cgvpcvur0e [ 1 ] ; tmp_p [ 10 ] =
iowqpk3eub2 . cgvpcvur0e [ 2 ] ; tmp_p [ 11 ] = iowqpk3eub2 . cgvpcvur0e [ 3
] ; tmp_e [ 3 ] = 12 ; tmp_p [ 12 ] = iowqpk3eub2 . hlacplpmlq [ 0 ] ; tmp_p
[ 13 ] = iowqpk3eub2 . hlacplpmlq [ 1 ] ; tmp_p [ 14 ] = iowqpk3eub2 .
hlacplpmlq [ 2 ] ; tmp_p [ 15 ] = iowqpk3eub2 . hlacplpmlq [ 3 ] ; tmp_e [ 4
] = 16 ; tmp_p [ 16 ] = iowqpk3eub2 . fhodh2srma [ 0 ] ; tmp_p [ 17 ] =
iowqpk3eub2 . fhodh2srma [ 1 ] ; tmp_p [ 18 ] = iowqpk3eub2 . fhodh2srma [ 2
] ; tmp_p [ 19 ] = iowqpk3eub2 . fhodh2srma [ 3 ] ; tmp_e [ 5 ] = 20 ; tmp_p
[ 20 ] = iowqpk3eub2 . cbv0fng454 [ 0 ] ; tmp_p [ 21 ] = iowqpk3eub2 .
cbv0fng454 [ 1 ] ; tmp_p [ 22 ] = iowqpk3eub2 . cbv0fng454 [ 2 ] ; tmp_p [ 23
] = iowqpk3eub2 . cbv0fng454 [ 3 ] ; tmp_e [ 6 ] = 24 ; tmp_p [ 24 ] =
iowqpk3eub2 . jckfwcjotl [ 0 ] ; tmp_p [ 25 ] = iowqpk3eub2 . jckfwcjotl [ 1
] ; tmp_p [ 26 ] = iowqpk3eub2 . jckfwcjotl [ 2 ] ; tmp_p [ 27 ] =
iowqpk3eub2 . jckfwcjotl [ 3 ] ; tmp_e [ 7 ] = 28 ; tmp_p [ 28 ] =
iowqpk3eub2 . clajzw4qwk [ 0 ] ; tmp_p [ 29 ] = iowqpk3eub2 . clajzw4qwk [ 1
] ; tmp_p [ 30 ] = iowqpk3eub2 . clajzw4qwk [ 2 ] ; tmp_p [ 31 ] =
iowqpk3eub2 . clajzw4qwk [ 3 ] ; tmp_e [ 8 ] = 32 ; tmp_p [ 32 ] =
iowqpk3eub2 . guhcbwpvv2 [ 0 ] ; tmp_p [ 33 ] = iowqpk3eub2 . guhcbwpvv2 [ 1
] ; tmp_p [ 34 ] = iowqpk3eub2 . guhcbwpvv2 [ 2 ] ; tmp_p [ 35 ] =
iowqpk3eub2 . guhcbwpvv2 [ 3 ] ; tmp_e [ 9 ] = 36 ; tmp_p [ 36 ] =
iowqpk3eub2 . k042txegzi [ 0 ] ; tmp_p [ 37 ] = iowqpk3eub2 . k042txegzi [ 1
] ; tmp_p [ 38 ] = iowqpk3eub2 . k042txegzi [ 2 ] ; tmp_p [ 39 ] =
iowqpk3eub2 . k042txegzi [ 3 ] ; tmp_e [ 10 ] = 40 ; tmp_p [ 40 ] =
iowqpk3eub2 . ibos4vblha [ 0 ] ; tmp_p [ 41 ] = iowqpk3eub2 . ibos4vblha [ 1
] ; tmp_p [ 42 ] = iowqpk3eub2 . ibos4vblha [ 2 ] ; tmp_p [ 43 ] =
iowqpk3eub2 . ibos4vblha [ 3 ] ; tmp_e [ 11 ] = 44 ; simulationData -> mData
-> mInputValues . mN = 44 ; simulationData -> mData -> mInputValues . mX = &
tmp_p [ 0 ] ; simulationData -> mData -> mInputOffsets . mN = 12 ;
simulationData -> mData -> mInputOffsets . mX = & tmp_e [ 0 ] ;
simulationData -> mData -> mNonSampledZCs . mN = 18 ; simulationData -> mData
-> mNonSampledZCs . mX = & _rtZCSV -> c2zwsm0e0h ; diagnosticManager = (
NeuDiagnosticManager * ) cz5yqt3r3xb . kesvfvbvkl ; diagnosticTree =
neu_diagnostic_manager_get_initial_tree ( diagnosticManager ) ; tmp_i =
ne_simulator_method ( ( NeslSimulator * ) cz5yqt3r3xb . ar3upchjlo ,
NESL_SIM_ZEROCROSSINGS , simulationData , diagnosticManager ) ; if ( tmp_i !=
0 ) { tmp = error_buffer_is_empty ( ssGetErrorStatus ( rtS ) ) ; if ( tmp ) {
msg = rtw_diagnostics_msg ( diagnosticTree ) ; ssSetErrorStatus ( rtS , msg )
; } } _rtZCSV -> f1oxvk4tah = iowqpk3eub2 . o4djdimsdm - kjmvupbl2i .
Constant_Value ; _rtZCSV -> nkt40mqyk5 = iowqpk3eub2 . pjeugxnijx -
kjmvupbl2i . Saturation1_UpperSat ; _rtZCSV -> mzvvwy2jko = iowqpk3eub2 .
pjeugxnijx - kjmvupbl2i . Saturation1_LowerSat ; _rtZCSV -> l4jjin13m4 =
iowqpk3eub2 . hkfoqcrcaa - kjmvupbl2i . Saturation_UpperSat_petchupvyj ;
_rtZCSV -> fqh42shget = iowqpk3eub2 . hkfoqcrcaa - kjmvupbl2i .
Saturation_LowerSat_deqaxwlb4p ; _rtZCSV -> it1ks1knk1 = iowqpk3eub2 .
fygmwizxbe - kjmvupbl2i . Saturation1_UpperSat_jybwri54h2 ; _rtZCSV ->
hkjecwkoxq = iowqpk3eub2 . fygmwizxbe - kjmvupbl2i .
Saturation1_LowerSat_indvuhds5q ; _rtZCSV -> idcagc5jv4 = iowqpk3eub2 .
iqd4x5zmdq - kjmvupbl2i . Saturation_UpperSat_ffmhckns0u ; _rtZCSV ->
et32jteqej = iowqpk3eub2 . iqd4x5zmdq - kjmvupbl2i .
Saturation_LowerSat_git52jcjbr ; _rtZCSV -> jvhl4pwkuk = iowqpk3eub2 .
bwgdzgdu1v - kjmvupbl2i . HitCrossing_Offset ; } void MdlTerminate ( void ) {
ese1g5rr1h ( & ( cz5yqt3r3xb . lofhsz2swn . rtm ) ) ; dfeuqru533 ( & (
cz5yqt3r3xb . jrvwlq3fuz . rtm ) ) ; neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) cz5yqt3r3xb . kesvfvbvkl ) ;
nesl_destroy_simulation_data ( ( NeslSimulationData * ) cz5yqt3r3xb .
fyp5vdhzam ) ; nesl_erase_simulator (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver Configuration/Solver Configuration_1"
) ; nesl_destroy_registry ( ) ; neu_destroy_diagnostic_manager ( (
NeuDiagnosticManager * ) cz5yqt3r3xb . lc5aujkip1 ) ;
nesl_destroy_simulation_data ( ( NeslSimulationData * ) cz5yqt3r3xb .
h5ryejvlpa ) ; nesl_erase_simulator (
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver Configuration/Solver Configuration_1"
) ; nesl_destroy_registry ( ) ; labuig2vc2 ( & ( cz5yqt3r3xb . kqktv02dou .
rtm ) ) ; { if ( cz5yqt3r3xb . kzgixjdqqa . AQHandles ) {
sdiTerminateStreaming ( & cz5yqt3r3xb . kzgixjdqqa . AQHandles ) ; } } { if (
cz5yqt3r3xb . ibizqnzh0w . AQHandles ) { sdiTerminateStreaming ( &
cz5yqt3r3xb . ibizqnzh0w . AQHandles ) ; } } { if ( cz5yqt3r3xb . aj1d134nmk
. AQHandles ) { sdiTerminateStreaming ( & cz5yqt3r3xb . aj1d134nmk .
AQHandles ) ; } } { if ( cz5yqt3r3xb . frybx0mj1e . AQHandles ) {
sdiTerminateStreaming ( & cz5yqt3r3xb . frybx0mj1e . AQHandles ) ; } }
g0tpyzslmq ( & ( cz5yqt3r3xb . jrvwlq3fuz . rtm ) , & ( cz5yqt3r3xb .
jrvwlq3fuz . rtdw ) ) ; { if ( cz5yqt3r3xb . dqdopzr2jv . AQHandles ) {
sdiTerminateStreaming ( & cz5yqt3r3xb . dqdopzr2jv . AQHandles ) ; } } { if (
cz5yqt3r3xb . ate5v5wkj2 . AQHandles ) { sdiTerminateStreaming ( &
cz5yqt3r3xb . ate5v5wkj2 . AQHandles ) ; } } { if ( cz5yqt3r3xb . cj0ldup5gu
. AQHandles ) { sdiTerminateStreaming ( & cz5yqt3r3xb . cj0ldup5gu .
AQHandles ) ; } } { if ( cz5yqt3r3xb . jgeac3tq21 . AQHandles ) {
sdiTerminateStreaming ( & cz5yqt3r3xb . jgeac3tq21 . AQHandles ) ; } } { if (
cz5yqt3r3xb . gynuv0krsy . AQHandles ) { sdiTerminateStreaming ( &
cz5yqt3r3xb . gynuv0krsy . AQHandles ) ; } } { if ( cz5yqt3r3xb . cismfzyk15
. AQHandles ) { sdiTerminateStreaming ( & cz5yqt3r3xb . cismfzyk15 .
AQHandles ) ; } } { if ( cz5yqt3r3xb . irudyghn3o . AQHandles ) {
sdiTerminateStreaming ( & cz5yqt3r3xb . irudyghn3o . AQHandles ) ; } } { if (
cz5yqt3r3xb . nikehp134v . AQHandles ) { sdiTerminateStreaming ( &
cz5yqt3r3xb . nikehp134v . AQHandles ) ; } } { if ( cz5yqt3r3xb . gxisg0jsgi
. AQHandles ) { sdiTerminateStreaming ( & cz5yqt3r3xb . gxisg0jsgi .
AQHandles ) ; } } { if ( cz5yqt3r3xb . kx02fuyglo . AQHandles ) {
sdiTerminateStreaming ( & cz5yqt3r3xb . kx02fuyglo . AQHandles ) ; } } { if (
cz5yqt3r3xb . ivzabugs2u . AQHandles ) { sdiTerminateStreaming ( &
cz5yqt3r3xb . ivzabugs2u . AQHandles ) ; } } { if ( cz5yqt3r3xb . fywuj43jfl
. AQHandles ) { sdiTerminateStreaming ( & cz5yqt3r3xb . fywuj43jfl .
AQHandles ) ; } } { if ( cz5yqt3r3xb . crmx2s5hqc . AQHandles ) {
sdiTerminateStreaming ( & cz5yqt3r3xb . crmx2s5hqc . AQHandles ) ; } } { if (
cz5yqt3r3xb . ctg1unrwpm . AQHandles ) { sdiTerminateStreaming ( &
cz5yqt3r3xb . ctg1unrwpm . AQHandles ) ; } } { if ( cz5yqt3r3xb . j2bb0dzih4
. AQHandles ) { sdiTerminateStreaming ( & cz5yqt3r3xb . j2bb0dzih4 .
AQHandles ) ; } } { if ( cz5yqt3r3xb . gjt3j5kgn2 . AQHandles ) {
sdiTerminateStreaming ( & cz5yqt3r3xb . gjt3j5kgn2 . AQHandles ) ; } } { if (
cz5yqt3r3xb . i01ezsocmb . AQHandles ) { sdiTerminateStreaming ( &
cz5yqt3r3xb . i01ezsocmb . AQHandles ) ; } } } static void
mr_SparkEV_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) ; static void
mr_SparkEV_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j ,
const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_SparkEV_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_SparkEV_restoreDataFromMxArray ( void * destData , const mxArray *
srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * )
destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i
, j ) ) , numBytes ) ; } static void mr_SparkEV_cacheBitFieldToMxArray (
mxArray * destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_SparkEV_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j ,
uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_SparkEV_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i
, int j , uint_T numBits ) ; static uint_T
mr_SparkEV_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i
, int j , uint_T numBits ) { const uint_T varVal = ( uint_T ) mxGetScalar (
mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( ( 1u << numBits
) - 1u ) ; } static void mr_SparkEV_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) ; static void mr_SparkEV_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_SparkEV_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ;
static void mr_SparkEV_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_SparkEV_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_SparkEV_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex
i , int j , mwIndex offset , uint_T fieldVal ) { mxSetCell (
mxGetFieldByNumber ( destArray , i , j ) , offset , mxCreateDoubleScalar ( (
double ) fieldVal ) ) ; } static uint_T
mr_SparkEV_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray
, mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static uint_T
mr_SparkEV_extractBitFieldFromCellArrayWithOffset ( const mxArray * srcArray
, mwIndex i , int j , mwIndex offset , uint_T numBits ) { const uint_T
fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber ( srcArray
, i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u ) ; }
mxArray * mr_SparkEV_GetDWork ( ) { static const char * ssDWFieldNames [ 3 ]
= { "iowqpk3eub2" , "cz5yqt3r3xb" , "NULL_PrevZCX" , } ; mxArray * ssDW =
mxCreateStructMatrix ( 1 , 1 , 3 , ssDWFieldNames ) ;
mr_SparkEV_cacheDataAsMxArray ( ssDW , 0 , 0 , ( const void * ) & (
iowqpk3eub2 ) , sizeof ( iowqpk3eub2 ) ) ; { static const char *
rtdwDataFieldNames [ 87 ] = { "cz5yqt3r3xb.lofhsz2swn" ,
"cz5yqt3r3xb.kqktv02dou" , "cz5yqt3r3xb.jrvwlq3fuz" ,
"cz5yqt3r3xb.mkt5abmauk" , "cz5yqt3r3xb.cz5mx3nggl" ,
"cz5yqt3r3xb.lfrgrevnct" , "cz5yqt3r3xb.m3vfpsg3ir" ,
"cz5yqt3r3xb.cxyhghs0r4" , "cz5yqt3r3xb.cxsxj110xc" ,
"cz5yqt3r3xb.jdazc15ain" , "cz5yqt3r3xb.lnpmbzyfub" ,
"cz5yqt3r3xb.erhws3aqax" , "cz5yqt3r3xb.pz2p5tww5r" ,
"cz5yqt3r3xb.gcbnlbndyh" , "cz5yqt3r3xb.acangtzbxh" ,
"cz5yqt3r3xb.ovftuesk53" , "cz5yqt3r3xb.dfwjuauqhh" ,
"cz5yqt3r3xb.dci24ewo3n" , "cz5yqt3r3xb.n20oxvozfr" ,
"cz5yqt3r3xb.akmdrfe3wk" , "cz5yqt3r3xb.o5xnow4itx" ,
"cz5yqt3r3xb.eltxhn2ccn" , "cz5yqt3r3xb.ho5bua3cli" ,
"cz5yqt3r3xb.oqnelch0g4" , "cz5yqt3r3xb.lgs1ws31ib" ,
"cz5yqt3r3xb.hgdclbpf45" , "cz5yqt3r3xb.dfvfksmo3u" ,
"cz5yqt3r3xb.j0t5dz02te" , "cz5yqt3r3xb.d0jgs1xeud" ,
"cz5yqt3r3xb.i5wargkafk" , "cz5yqt3r3xb.noizxcaj0u" ,
"cz5yqt3r3xb.ahz4qvibsf" , "cz5yqt3r3xb.gelfja001m" ,
"cz5yqt3r3xb.im2dnqr2y0" , "cz5yqt3r3xb.h2fppauqjk" ,
"cz5yqt3r3xb.arunw3enqo" , "cz5yqt3r3xb.e2o3ismpif" ,
"cz5yqt3r3xb.m32a3ep5gt" , "cz5yqt3r3xb.h0gkcev35m" ,
"cz5yqt3r3xb.i5jjfepadp" , "cz5yqt3r3xb.hqv0oirn0q" ,
"cz5yqt3r3xb.lzovmgc1ye" , "cz5yqt3r3xb.ggdayeevtv" ,
"cz5yqt3r3xb.ipqlah0gj1" , "cz5yqt3r3xb.eck5rxblzt" ,
"cz5yqt3r3xb.em1wbmdjow" , "cz5yqt3r3xb.jmm4c105ye" ,
"cz5yqt3r3xb.f05boyvyxi" , "cz5yqt3r3xb.dukvvezhh4" ,
"cz5yqt3r3xb.hndyq1p4da" , "cz5yqt3r3xb.mhe3tr5m1h" ,
"cz5yqt3r3xb.metkb44aex" , "cz5yqt3r3xb.dq4uzmtffx" ,
"cz5yqt3r3xb.mvmiplzz0c" , "cz5yqt3r3xb.kblv4axo3c" ,
"cz5yqt3r3xb.m0ix3twyqi" , "cz5yqt3r3xb.kqqvkns214" ,
"cz5yqt3r3xb.hg1heoe0ab" , "cz5yqt3r3xb.eez5eb4v4d" ,
"cz5yqt3r3xb.johw44ce4i" , "cz5yqt3r3xb.o13svxvssq" ,
"cz5yqt3r3xb.hnc4qrwkcy" , "cz5yqt3r3xb.nremqoghxn" ,
"cz5yqt3r3xb.azwx5q01st" , "cz5yqt3r3xb.b0kxfxynn3" ,
"cz5yqt3r3xb.j0engehfzs" , "cz5yqt3r3xb.mm5oiqqh5r" ,
"cz5yqt3r3xb.e2wr3vcmsf" , "cz5yqt3r3xb.pumuolxchk" ,
"cz5yqt3r3xb.cfbyafp2yp" , "cz5yqt3r3xb.nu1w3dp3or" ,
"cz5yqt3r3xb.k0uf3b30j1" , "cz5yqt3r3xb.k24rp5jloy" ,
"cz5yqt3r3xb.by3pjn5fot" , "cz5yqt3r3xb.pgsfdyvzg3" ,
"cz5yqt3r3xb.jepwxk2s4r" , "cz5yqt3r3xb.pijwjimaqv" ,
"cz5yqt3r3xb.kw10r0jllu" , "cz5yqt3r3xb.ldpanoehpw" ,
"cz5yqt3r3xb.iyzfufaeyj" , "cz5yqt3r3xb.giq1ke1ckr" ,
"cz5yqt3r3xb.i4yi1hc3oq" , "cz5yqt3r3xb.hxfbtrll0m" ,
"cz5yqt3r3xb.dwnfs4t0ur.k44bc5mjbl" , "cz5yqt3r3xb.dwnfs4t0ur.o5luu5smdl" ,
"cz5yqt3r3xb.fuob0ddam2h.k44bc5mjbl" , "cz5yqt3r3xb.fuob0ddam2h.o5luu5smdl" ,
} ; mxArray * rtdwData = mxCreateStructMatrix ( 1 , 1 , 87 ,
rtdwDataFieldNames ) ; { mxArray * varData = mr_OpenLoopBraking_GetDWork ( &
( cz5yqt3r3xb . lofhsz2swn ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 0 ,
varData ) ; } { mxArray * varData = mr_DriverPassThrough_GetDWork ( & (
cz5yqt3r3xb . kqktv02dou ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 1 ,
varData ) ; } { mxArray * varData = mr_EvPowertrainController2EM_GetDWork ( &
( cz5yqt3r3xb . jrvwlq3fuz ) ) ; mxSetFieldByNumber ( rtdwData , 0 , 2 ,
varData ) ; } mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void
* ) & ( cz5yqt3r3xb . mkt5abmauk ) , sizeof ( cz5yqt3r3xb . mkt5abmauk ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void * ) & (
cz5yqt3r3xb . cz5mx3nggl ) , sizeof ( cz5yqt3r3xb . cz5mx3nggl ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void * ) & (
cz5yqt3r3xb . lfrgrevnct ) , sizeof ( cz5yqt3r3xb . lfrgrevnct ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void * ) & (
cz5yqt3r3xb . m3vfpsg3ir ) , sizeof ( cz5yqt3r3xb . m3vfpsg3ir ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void * ) & (
cz5yqt3r3xb . cxyhghs0r4 ) , sizeof ( cz5yqt3r3xb . cxyhghs0r4 ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void * ) & (
cz5yqt3r3xb . cxsxj110xc ) , sizeof ( cz5yqt3r3xb . cxsxj110xc ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void * ) & (
cz5yqt3r3xb . jdazc15ain ) , sizeof ( cz5yqt3r3xb . jdazc15ain ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void * ) & (
cz5yqt3r3xb . lnpmbzyfub ) , sizeof ( cz5yqt3r3xb . lnpmbzyfub ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void * ) & (
cz5yqt3r3xb . erhws3aqax ) , sizeof ( cz5yqt3r3xb . erhws3aqax ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void * ) & (
cz5yqt3r3xb . pz2p5tww5r ) , sizeof ( cz5yqt3r3xb . pz2p5tww5r ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void * ) & (
cz5yqt3r3xb . gcbnlbndyh ) , sizeof ( cz5yqt3r3xb . gcbnlbndyh ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void * ) & (
cz5yqt3r3xb . acangtzbxh ) , sizeof ( cz5yqt3r3xb . acangtzbxh ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void * ) & (
cz5yqt3r3xb . ovftuesk53 ) , sizeof ( cz5yqt3r3xb . ovftuesk53 ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void * ) & (
cz5yqt3r3xb . dfwjuauqhh ) , sizeof ( cz5yqt3r3xb . dfwjuauqhh ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void * ) & (
cz5yqt3r3xb . dci24ewo3n ) , sizeof ( cz5yqt3r3xb . dci24ewo3n ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void * ) & (
cz5yqt3r3xb . n20oxvozfr ) , sizeof ( cz5yqt3r3xb . n20oxvozfr ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void * ) & (
cz5yqt3r3xb . akmdrfe3wk ) , sizeof ( cz5yqt3r3xb . akmdrfe3wk ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void * ) & (
cz5yqt3r3xb . o5xnow4itx ) , sizeof ( cz5yqt3r3xb . o5xnow4itx ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void * ) & (
cz5yqt3r3xb . eltxhn2ccn ) , sizeof ( cz5yqt3r3xb . eltxhn2ccn ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void * ) & (
cz5yqt3r3xb . ho5bua3cli ) , sizeof ( cz5yqt3r3xb . ho5bua3cli ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void * ) & (
cz5yqt3r3xb . oqnelch0g4 ) , sizeof ( cz5yqt3r3xb . oqnelch0g4 ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 24 , ( const void * ) & (
cz5yqt3r3xb . lgs1ws31ib ) , sizeof ( cz5yqt3r3xb . lgs1ws31ib ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void * ) & (
cz5yqt3r3xb . hgdclbpf45 ) , sizeof ( cz5yqt3r3xb . hgdclbpf45 ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 26 , ( const void * ) & (
cz5yqt3r3xb . dfvfksmo3u ) , sizeof ( cz5yqt3r3xb . dfvfksmo3u ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const void * ) & (
cz5yqt3r3xb . j0t5dz02te ) , sizeof ( cz5yqt3r3xb . j0t5dz02te ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 28 , ( const void * ) & (
cz5yqt3r3xb . d0jgs1xeud ) , sizeof ( cz5yqt3r3xb . d0jgs1xeud ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const void * ) & (
cz5yqt3r3xb . i5wargkafk ) , sizeof ( cz5yqt3r3xb . i5wargkafk ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 30 , ( const void * ) & (
cz5yqt3r3xb . noizxcaj0u ) , sizeof ( cz5yqt3r3xb . noizxcaj0u ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const void * ) & (
cz5yqt3r3xb . ahz4qvibsf ) , sizeof ( cz5yqt3r3xb . ahz4qvibsf ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 32 , ( const void * ) & (
cz5yqt3r3xb . gelfja001m ) , sizeof ( cz5yqt3r3xb . gelfja001m ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 33 , ( const void * ) & (
cz5yqt3r3xb . im2dnqr2y0 ) , sizeof ( cz5yqt3r3xb . im2dnqr2y0 ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 34 , ( const void * ) & (
cz5yqt3r3xb . h2fppauqjk ) , sizeof ( cz5yqt3r3xb . h2fppauqjk ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 35 , ( const void * ) & (
cz5yqt3r3xb . arunw3enqo ) , sizeof ( cz5yqt3r3xb . arunw3enqo ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 36 , ( const void * ) & (
cz5yqt3r3xb . e2o3ismpif ) , sizeof ( cz5yqt3r3xb . e2o3ismpif ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 37 , ( const void * ) & (
cz5yqt3r3xb . m32a3ep5gt ) , sizeof ( cz5yqt3r3xb . m32a3ep5gt ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 38 , ( const void * ) & (
cz5yqt3r3xb . h0gkcev35m ) , sizeof ( cz5yqt3r3xb . h0gkcev35m ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 39 , ( const void * ) & (
cz5yqt3r3xb . i5jjfepadp ) , sizeof ( cz5yqt3r3xb . i5jjfepadp ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 40 , ( const void * ) & (
cz5yqt3r3xb . hqv0oirn0q ) , sizeof ( cz5yqt3r3xb . hqv0oirn0q ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 41 , ( const void * ) & (
cz5yqt3r3xb . lzovmgc1ye ) , sizeof ( cz5yqt3r3xb . lzovmgc1ye ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 42 , ( const void * ) & (
cz5yqt3r3xb . ggdayeevtv ) , sizeof ( cz5yqt3r3xb . ggdayeevtv ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 43 , ( const void * ) & (
cz5yqt3r3xb . ipqlah0gj1 ) , sizeof ( cz5yqt3r3xb . ipqlah0gj1 ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 44 , ( const void * ) & (
cz5yqt3r3xb . eck5rxblzt ) , sizeof ( cz5yqt3r3xb . eck5rxblzt ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 45 , ( const void * ) & (
cz5yqt3r3xb . em1wbmdjow ) , sizeof ( cz5yqt3r3xb . em1wbmdjow ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 46 , ( const void * ) & (
cz5yqt3r3xb . jmm4c105ye ) , sizeof ( cz5yqt3r3xb . jmm4c105ye ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 47 , ( const void * ) & (
cz5yqt3r3xb . f05boyvyxi ) , sizeof ( cz5yqt3r3xb . f05boyvyxi ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 48 , ( const void * ) & (
cz5yqt3r3xb . dukvvezhh4 ) , sizeof ( cz5yqt3r3xb . dukvvezhh4 ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 49 , ( const void * ) & (
cz5yqt3r3xb . hndyq1p4da ) , sizeof ( cz5yqt3r3xb . hndyq1p4da ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 50 , ( const void * ) & (
cz5yqt3r3xb . mhe3tr5m1h ) , sizeof ( cz5yqt3r3xb . mhe3tr5m1h ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 51 , ( const void * ) & (
cz5yqt3r3xb . metkb44aex ) , sizeof ( cz5yqt3r3xb . metkb44aex ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 52 , ( const void * ) & (
cz5yqt3r3xb . dq4uzmtffx ) , sizeof ( cz5yqt3r3xb . dq4uzmtffx ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 53 , ( const void * ) & (
cz5yqt3r3xb . mvmiplzz0c ) , sizeof ( cz5yqt3r3xb . mvmiplzz0c ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 54 , ( const void * ) & (
cz5yqt3r3xb . kblv4axo3c ) , sizeof ( cz5yqt3r3xb . kblv4axo3c ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 55 , ( const void * ) & (
cz5yqt3r3xb . m0ix3twyqi ) , sizeof ( cz5yqt3r3xb . m0ix3twyqi ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 56 , ( const void * ) & (
cz5yqt3r3xb . kqqvkns214 ) , sizeof ( cz5yqt3r3xb . kqqvkns214 ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 57 , ( const void * ) & (
cz5yqt3r3xb . hg1heoe0ab ) , sizeof ( cz5yqt3r3xb . hg1heoe0ab ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 58 , ( const void * ) & (
cz5yqt3r3xb . eez5eb4v4d ) , sizeof ( cz5yqt3r3xb . eez5eb4v4d ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 59 , ( const void * ) & (
cz5yqt3r3xb . johw44ce4i ) , sizeof ( cz5yqt3r3xb . johw44ce4i ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 60 , ( const void * ) & (
cz5yqt3r3xb . o13svxvssq ) , sizeof ( cz5yqt3r3xb . o13svxvssq ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 61 , ( const void * ) & (
cz5yqt3r3xb . hnc4qrwkcy ) , sizeof ( cz5yqt3r3xb . hnc4qrwkcy ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 62 , ( const void * ) & (
cz5yqt3r3xb . nremqoghxn ) , sizeof ( cz5yqt3r3xb . nremqoghxn ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 63 , ( const void * ) & (
cz5yqt3r3xb . azwx5q01st ) , sizeof ( cz5yqt3r3xb . azwx5q01st ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 64 , ( const void * ) & (
cz5yqt3r3xb . b0kxfxynn3 ) , sizeof ( cz5yqt3r3xb . b0kxfxynn3 ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 65 , ( const void * ) & (
cz5yqt3r3xb . j0engehfzs ) , sizeof ( cz5yqt3r3xb . j0engehfzs ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 66 , ( const void * ) & (
cz5yqt3r3xb . mm5oiqqh5r ) , sizeof ( cz5yqt3r3xb . mm5oiqqh5r ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 67 , ( const void * ) & (
cz5yqt3r3xb . e2wr3vcmsf ) , sizeof ( cz5yqt3r3xb . e2wr3vcmsf ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 68 , ( const void * ) & (
cz5yqt3r3xb . pumuolxchk ) , sizeof ( cz5yqt3r3xb . pumuolxchk ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 69 , ( const void * ) & (
cz5yqt3r3xb . cfbyafp2yp ) , sizeof ( cz5yqt3r3xb . cfbyafp2yp ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 70 , ( const void * ) & (
cz5yqt3r3xb . nu1w3dp3or ) , sizeof ( cz5yqt3r3xb . nu1w3dp3or ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 71 , ( const void * ) & (
cz5yqt3r3xb . k0uf3b30j1 ) , sizeof ( cz5yqt3r3xb . k0uf3b30j1 ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 72 , ( const void * ) & (
cz5yqt3r3xb . k24rp5jloy ) , sizeof ( cz5yqt3r3xb . k24rp5jloy ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 73 , ( const void * ) & (
cz5yqt3r3xb . by3pjn5fot ) , sizeof ( cz5yqt3r3xb . by3pjn5fot ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 74 , ( const void * ) & (
cz5yqt3r3xb . pgsfdyvzg3 ) , sizeof ( cz5yqt3r3xb . pgsfdyvzg3 ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 75 , ( const void * ) & (
cz5yqt3r3xb . jepwxk2s4r ) , sizeof ( cz5yqt3r3xb . jepwxk2s4r ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 76 , ( const void * ) & (
cz5yqt3r3xb . pijwjimaqv ) , sizeof ( cz5yqt3r3xb . pijwjimaqv ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 77 , ( const void * ) & (
cz5yqt3r3xb . kw10r0jllu ) , sizeof ( cz5yqt3r3xb . kw10r0jllu ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 78 , ( const void * ) & (
cz5yqt3r3xb . ldpanoehpw ) , sizeof ( cz5yqt3r3xb . ldpanoehpw ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 79 , ( const void * ) & (
cz5yqt3r3xb . iyzfufaeyj ) , sizeof ( cz5yqt3r3xb . iyzfufaeyj ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 80 , ( const void * ) & (
cz5yqt3r3xb . giq1ke1ckr ) , sizeof ( cz5yqt3r3xb . giq1ke1ckr ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 81 , ( const void * ) & (
cz5yqt3r3xb . i4yi1hc3oq ) , sizeof ( cz5yqt3r3xb . i4yi1hc3oq ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 82 , ( const void * ) & (
cz5yqt3r3xb . hxfbtrll0m ) , sizeof ( cz5yqt3r3xb . hxfbtrll0m ) ) ;
mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 83 , ( const void * ) & (
cz5yqt3r3xb . dwnfs4t0ur . k44bc5mjbl ) , sizeof ( cz5yqt3r3xb . dwnfs4t0ur .
k44bc5mjbl ) ) ; mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 , 84 , ( const
void * ) & ( cz5yqt3r3xb . dwnfs4t0ur . o5luu5smdl ) , sizeof ( cz5yqt3r3xb .
dwnfs4t0ur . o5luu5smdl ) ) ; mr_SparkEV_cacheDataAsMxArray ( rtdwData , 0 ,
85 , ( const void * ) & ( cz5yqt3r3xb . fuob0ddam2h . k44bc5mjbl ) , sizeof (
cz5yqt3r3xb . fuob0ddam2h . k44bc5mjbl ) ) ; mr_SparkEV_cacheDataAsMxArray (
rtdwData , 0 , 86 , ( const void * ) & ( cz5yqt3r3xb . fuob0ddam2h .
o5luu5smdl ) , sizeof ( cz5yqt3r3xb . fuob0ddam2h . o5luu5smdl ) ) ;
mxSetFieldByNumber ( ssDW , 0 , 1 , rtdwData ) ; } return ssDW ; } void
mr_SparkEV_SetDWork ( const mxArray * ssDW ) { ( void ) ssDW ;
mr_SparkEV_restoreDataFromMxArray ( ( void * ) & ( iowqpk3eub2 ) , ssDW , 0 ,
0 , sizeof ( iowqpk3eub2 ) ) ; { const mxArray * rtdwData =
mxGetFieldByNumber ( ssDW , 0 , 1 ) ; mr_OpenLoopBraking_SetDWork ( & (
cz5yqt3r3xb . lofhsz2swn ) , mxGetFieldByNumber ( rtdwData , 0 , 0 ) ) ;
mr_DriverPassThrough_SetDWork ( & ( cz5yqt3r3xb . kqktv02dou ) ,
mxGetFieldByNumber ( rtdwData , 0 , 1 ) ) ;
mr_EvPowertrainController2EM_SetDWork ( & ( cz5yqt3r3xb . jrvwlq3fuz ) ,
mxGetFieldByNumber ( rtdwData , 0 , 2 ) ) ; mr_SparkEV_restoreDataFromMxArray
( ( void * ) & ( cz5yqt3r3xb . mkt5abmauk ) , rtdwData , 0 , 3 , sizeof (
cz5yqt3r3xb . mkt5abmauk ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * )
& ( cz5yqt3r3xb . cz5mx3nggl ) , rtdwData , 0 , 4 , sizeof ( cz5yqt3r3xb .
cz5mx3nggl ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . lfrgrevnct ) , rtdwData , 0 , 5 , sizeof ( cz5yqt3r3xb .
lfrgrevnct ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . m3vfpsg3ir ) , rtdwData , 0 , 6 , sizeof ( cz5yqt3r3xb .
m3vfpsg3ir ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . cxyhghs0r4 ) , rtdwData , 0 , 7 , sizeof ( cz5yqt3r3xb .
cxyhghs0r4 ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . cxsxj110xc ) , rtdwData , 0 , 8 , sizeof ( cz5yqt3r3xb .
cxsxj110xc ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . jdazc15ain ) , rtdwData , 0 , 9 , sizeof ( cz5yqt3r3xb .
jdazc15ain ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . lnpmbzyfub ) , rtdwData , 0 , 10 , sizeof ( cz5yqt3r3xb .
lnpmbzyfub ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . erhws3aqax ) , rtdwData , 0 , 11 , sizeof ( cz5yqt3r3xb .
erhws3aqax ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . pz2p5tww5r ) , rtdwData , 0 , 12 , sizeof ( cz5yqt3r3xb .
pz2p5tww5r ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . gcbnlbndyh ) , rtdwData , 0 , 13 , sizeof ( cz5yqt3r3xb .
gcbnlbndyh ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . acangtzbxh ) , rtdwData , 0 , 14 , sizeof ( cz5yqt3r3xb .
acangtzbxh ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . ovftuesk53 ) , rtdwData , 0 , 15 , sizeof ( cz5yqt3r3xb .
ovftuesk53 ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . dfwjuauqhh ) , rtdwData , 0 , 16 , sizeof ( cz5yqt3r3xb .
dfwjuauqhh ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . dci24ewo3n ) , rtdwData , 0 , 17 , sizeof ( cz5yqt3r3xb .
dci24ewo3n ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . n20oxvozfr ) , rtdwData , 0 , 18 , sizeof ( cz5yqt3r3xb .
n20oxvozfr ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . akmdrfe3wk ) , rtdwData , 0 , 19 , sizeof ( cz5yqt3r3xb .
akmdrfe3wk ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . o5xnow4itx ) , rtdwData , 0 , 20 , sizeof ( cz5yqt3r3xb .
o5xnow4itx ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . eltxhn2ccn ) , rtdwData , 0 , 21 , sizeof ( cz5yqt3r3xb .
eltxhn2ccn ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . ho5bua3cli ) , rtdwData , 0 , 22 , sizeof ( cz5yqt3r3xb .
ho5bua3cli ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . oqnelch0g4 ) , rtdwData , 0 , 23 , sizeof ( cz5yqt3r3xb .
oqnelch0g4 ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . lgs1ws31ib ) , rtdwData , 0 , 24 , sizeof ( cz5yqt3r3xb .
lgs1ws31ib ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . hgdclbpf45 ) , rtdwData , 0 , 25 , sizeof ( cz5yqt3r3xb .
hgdclbpf45 ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . dfvfksmo3u ) , rtdwData , 0 , 26 , sizeof ( cz5yqt3r3xb .
dfvfksmo3u ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . j0t5dz02te ) , rtdwData , 0 , 27 , sizeof ( cz5yqt3r3xb .
j0t5dz02te ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . d0jgs1xeud ) , rtdwData , 0 , 28 , sizeof ( cz5yqt3r3xb .
d0jgs1xeud ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . i5wargkafk ) , rtdwData , 0 , 29 , sizeof ( cz5yqt3r3xb .
i5wargkafk ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . noizxcaj0u ) , rtdwData , 0 , 30 , sizeof ( cz5yqt3r3xb .
noizxcaj0u ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . ahz4qvibsf ) , rtdwData , 0 , 31 , sizeof ( cz5yqt3r3xb .
ahz4qvibsf ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . gelfja001m ) , rtdwData , 0 , 32 , sizeof ( cz5yqt3r3xb .
gelfja001m ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . im2dnqr2y0 ) , rtdwData , 0 , 33 , sizeof ( cz5yqt3r3xb .
im2dnqr2y0 ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . h2fppauqjk ) , rtdwData , 0 , 34 , sizeof ( cz5yqt3r3xb .
h2fppauqjk ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . arunw3enqo ) , rtdwData , 0 , 35 , sizeof ( cz5yqt3r3xb .
arunw3enqo ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . e2o3ismpif ) , rtdwData , 0 , 36 , sizeof ( cz5yqt3r3xb .
e2o3ismpif ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . m32a3ep5gt ) , rtdwData , 0 , 37 , sizeof ( cz5yqt3r3xb .
m32a3ep5gt ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . h0gkcev35m ) , rtdwData , 0 , 38 , sizeof ( cz5yqt3r3xb .
h0gkcev35m ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . i5jjfepadp ) , rtdwData , 0 , 39 , sizeof ( cz5yqt3r3xb .
i5jjfepadp ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . hqv0oirn0q ) , rtdwData , 0 , 40 , sizeof ( cz5yqt3r3xb .
hqv0oirn0q ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . lzovmgc1ye ) , rtdwData , 0 , 41 , sizeof ( cz5yqt3r3xb .
lzovmgc1ye ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . ggdayeevtv ) , rtdwData , 0 , 42 , sizeof ( cz5yqt3r3xb .
ggdayeevtv ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . ipqlah0gj1 ) , rtdwData , 0 , 43 , sizeof ( cz5yqt3r3xb .
ipqlah0gj1 ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . eck5rxblzt ) , rtdwData , 0 , 44 , sizeof ( cz5yqt3r3xb .
eck5rxblzt ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . em1wbmdjow ) , rtdwData , 0 , 45 , sizeof ( cz5yqt3r3xb .
em1wbmdjow ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . jmm4c105ye ) , rtdwData , 0 , 46 , sizeof ( cz5yqt3r3xb .
jmm4c105ye ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . f05boyvyxi ) , rtdwData , 0 , 47 , sizeof ( cz5yqt3r3xb .
f05boyvyxi ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . dukvvezhh4 ) , rtdwData , 0 , 48 , sizeof ( cz5yqt3r3xb .
dukvvezhh4 ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . hndyq1p4da ) , rtdwData , 0 , 49 , sizeof ( cz5yqt3r3xb .
hndyq1p4da ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . mhe3tr5m1h ) , rtdwData , 0 , 50 , sizeof ( cz5yqt3r3xb .
mhe3tr5m1h ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . metkb44aex ) , rtdwData , 0 , 51 , sizeof ( cz5yqt3r3xb .
metkb44aex ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . dq4uzmtffx ) , rtdwData , 0 , 52 , sizeof ( cz5yqt3r3xb .
dq4uzmtffx ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . mvmiplzz0c ) , rtdwData , 0 , 53 , sizeof ( cz5yqt3r3xb .
mvmiplzz0c ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . kblv4axo3c ) , rtdwData , 0 , 54 , sizeof ( cz5yqt3r3xb .
kblv4axo3c ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . m0ix3twyqi ) , rtdwData , 0 , 55 , sizeof ( cz5yqt3r3xb .
m0ix3twyqi ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . kqqvkns214 ) , rtdwData , 0 , 56 , sizeof ( cz5yqt3r3xb .
kqqvkns214 ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . hg1heoe0ab ) , rtdwData , 0 , 57 , sizeof ( cz5yqt3r3xb .
hg1heoe0ab ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . eez5eb4v4d ) , rtdwData , 0 , 58 , sizeof ( cz5yqt3r3xb .
eez5eb4v4d ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . johw44ce4i ) , rtdwData , 0 , 59 , sizeof ( cz5yqt3r3xb .
johw44ce4i ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . o13svxvssq ) , rtdwData , 0 , 60 , sizeof ( cz5yqt3r3xb .
o13svxvssq ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . hnc4qrwkcy ) , rtdwData , 0 , 61 , sizeof ( cz5yqt3r3xb .
hnc4qrwkcy ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . nremqoghxn ) , rtdwData , 0 , 62 , sizeof ( cz5yqt3r3xb .
nremqoghxn ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . azwx5q01st ) , rtdwData , 0 , 63 , sizeof ( cz5yqt3r3xb .
azwx5q01st ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . b0kxfxynn3 ) , rtdwData , 0 , 64 , sizeof ( cz5yqt3r3xb .
b0kxfxynn3 ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . j0engehfzs ) , rtdwData , 0 , 65 , sizeof ( cz5yqt3r3xb .
j0engehfzs ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . mm5oiqqh5r ) , rtdwData , 0 , 66 , sizeof ( cz5yqt3r3xb .
mm5oiqqh5r ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . e2wr3vcmsf ) , rtdwData , 0 , 67 , sizeof ( cz5yqt3r3xb .
e2wr3vcmsf ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . pumuolxchk ) , rtdwData , 0 , 68 , sizeof ( cz5yqt3r3xb .
pumuolxchk ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . cfbyafp2yp ) , rtdwData , 0 , 69 , sizeof ( cz5yqt3r3xb .
cfbyafp2yp ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . nu1w3dp3or ) , rtdwData , 0 , 70 , sizeof ( cz5yqt3r3xb .
nu1w3dp3or ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . k0uf3b30j1 ) , rtdwData , 0 , 71 , sizeof ( cz5yqt3r3xb .
k0uf3b30j1 ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . k24rp5jloy ) , rtdwData , 0 , 72 , sizeof ( cz5yqt3r3xb .
k24rp5jloy ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . by3pjn5fot ) , rtdwData , 0 , 73 , sizeof ( cz5yqt3r3xb .
by3pjn5fot ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . pgsfdyvzg3 ) , rtdwData , 0 , 74 , sizeof ( cz5yqt3r3xb .
pgsfdyvzg3 ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . jepwxk2s4r ) , rtdwData , 0 , 75 , sizeof ( cz5yqt3r3xb .
jepwxk2s4r ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . pijwjimaqv ) , rtdwData , 0 , 76 , sizeof ( cz5yqt3r3xb .
pijwjimaqv ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . kw10r0jllu ) , rtdwData , 0 , 77 , sizeof ( cz5yqt3r3xb .
kw10r0jllu ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . ldpanoehpw ) , rtdwData , 0 , 78 , sizeof ( cz5yqt3r3xb .
ldpanoehpw ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . iyzfufaeyj ) , rtdwData , 0 , 79 , sizeof ( cz5yqt3r3xb .
iyzfufaeyj ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . giq1ke1ckr ) , rtdwData , 0 , 80 , sizeof ( cz5yqt3r3xb .
giq1ke1ckr ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . i4yi1hc3oq ) , rtdwData , 0 , 81 , sizeof ( cz5yqt3r3xb .
i4yi1hc3oq ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . hxfbtrll0m ) , rtdwData , 0 , 82 , sizeof ( cz5yqt3r3xb .
hxfbtrll0m ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . dwnfs4t0ur . k44bc5mjbl ) , rtdwData , 0 , 83 , sizeof (
cz5yqt3r3xb . dwnfs4t0ur . k44bc5mjbl ) ) ; mr_SparkEV_restoreDataFromMxArray
( ( void * ) & ( cz5yqt3r3xb . dwnfs4t0ur . o5luu5smdl ) , rtdwData , 0 , 84
, sizeof ( cz5yqt3r3xb . dwnfs4t0ur . o5luu5smdl ) ) ;
mr_SparkEV_restoreDataFromMxArray ( ( void * ) & ( cz5yqt3r3xb . fuob0ddam2h
. k44bc5mjbl ) , rtdwData , 0 , 85 , sizeof ( cz5yqt3r3xb . fuob0ddam2h .
k44bc5mjbl ) ) ; mr_SparkEV_restoreDataFromMxArray ( ( void * ) & (
cz5yqt3r3xb . fuob0ddam2h . o5luu5smdl ) , rtdwData , 0 , 86 , sizeof (
cz5yqt3r3xb . fuob0ddam2h . o5luu5smdl ) ) ; } } mxArray *
mr_SparkEV_GetSimStateDisallowedBlocks ( ) { mxArray * data = NULL ; mwIndex
subs [ 2 ] , offset ; size_t numChildrenWithDisallowedBlocks = 0 ; size_t
numBlocks = 0 ; mxArray * disallowedBlocksInChild [ 3 ] ;
disallowedBlocksInChild [ 0 ] =
mr_DriverPassThrough_GetSimStateDisallowedBlocks ( ) ;
disallowedBlocksInChild [ 1 ] =
mr_EvPowertrainController2EM_GetSimStateDisallowedBlocks ( ) ;
disallowedBlocksInChild [ 2 ] =
mr_OpenLoopBraking_GetSimStateDisallowedBlocks ( ) ; { size_t i ; for ( i = 0
; i < 3 ; ++ i ) { mxArray * data_i = disallowedBlocksInChild [ i ] ; if ( (
NULL ) != data_i ) { if ( 0 == numChildrenWithDisallowedBlocks ++ ) { data =
data_i ; } numBlocks += mxGetM ( data_i ) ; } } } data = mxCreateCellMatrix (
numBlocks + 6 , 3 ) ; { static const char * blockType [ 6 ] = { "SimscapeRtp"
, "SimscapeExecutionBlock" , "SimscapeExecutionBlock" , "Scope" , "Scope" ,
"Scope" , } ; static const char * blockPath [ 6 ] = {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver Configuration/Solver Configuration/RTP_1"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver Configuration/Solver Configuration/EVAL_KEY/STATE_1"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Solver Configuration/Solver Configuration/EVAL_KEY/OUTPUT_1_0"
, "SparkEV/Visualization/Performance and FE Scope" ,
"SparkEV/Visualization/Steer, Velocity, Lat Accel" ,
"SparkEV/Visualization/Scope Type/None/Yaw Rate and Steer" , } ; static const
int reason [ 6 ] = { 0 , 0 , 0 , 0 , 0 , 0 , } ; for ( subs [ 0 ] = 0 ; subs
[ 0 ] < 6 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockType [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateString ( blockPath [ subs [ 0 ] ] ) ) ; subs [ 1 ] = 2 ; offset =
mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data , offset ,
mxCreateDoubleScalar ( ( double ) reason [ subs [ 0 ] ] ) ) ; } } { size_t i
; for ( i = 0 ; i < 3 ; ++ i ) { mxArray * data_i = disallowedBlocksInChild [
i ] ; if ( ( NULL ) != data_i ) { mwIndex subs_i [ 2 ] , offset_i ; const
mwIndex numRows_i = ( mwIndex ) mxGetM ( data_i ) ; for ( subs_i [ 0 ] = 0 ;
subs_i [ 0 ] < numRows_i ; ++ ( subs_i [ 0 ] ) ) { mwIndex j ; for ( j = 0 ;
j < 3 ; ++ j ) { mxArray * data_ij ; subs_i [ 1 ] = j ; offset_i =
mxCalcSingleSubscript ( data_i , 2 , subs_i ) ; data_ij = mxGetCell ( data_i
, offset_i ) ; data_ij = mxDuplicateArray ( data_ij ) ; subs [ 1 ] = j ;
offset = mxCalcSingleSubscript ( data , 2 , subs ) ; mxSetCell ( data ,
offset , data_ij ) ; } ++ ( subs [ 0 ] ) ; } mxDestroyArray ( data_i ) ; } }
} return data ; } void MdlInitializeSizes ( void ) { ssSetNumContStates ( rtS
, 81 ) ; ssSetNumPeriodicContStates ( rtS , 0 ) ; ssSetNumY ( rtS , 0 ) ;
ssSetNumU ( rtS , 0 ) ; ssSetDirectFeedThrough ( rtS , 0 ) ;
ssSetNumSampleTimes ( rtS , 5 ) ; ssSetNumBlocks ( rtS , 635 ) ;
ssSetNumBlockIO ( rtS , 121 ) ; ssSetNumBlockParams ( rtS , 2879 ) ; } void
MdlInitializeSampleTimes ( void ) { ssSetSampleTime ( rtS , 0 , 0.0 ) ;
ssSetSampleTime ( rtS , 1 , 0.0 ) ; ssSetSampleTime ( rtS , 2 , 0.01 ) ;
ssSetSampleTime ( rtS , 3 , 0.1 ) ; ssSetSampleTime ( rtS , 4 , 0.5 ) ;
ssSetOffsetTime ( rtS , 0 , 0.0 ) ; ssSetOffsetTime ( rtS , 1 , 1.0 ) ;
ssSetOffsetTime ( rtS , 2 , 0.0 ) ; ssSetOffsetTime ( rtS , 3 , 0.0 ) ;
ssSetOffsetTime ( rtS , 4 , 0.0 ) ; } void raccel_set_checksum ( ) {
ssSetChecksumVal ( rtS , 0 , 1248598894U ) ; ssSetChecksumVal ( rtS , 1 ,
4235261646U ) ; ssSetChecksumVal ( rtS , 2 , 2211789845U ) ; ssSetChecksumVal
( rtS , 3 , 1470293678U ) ; }
#if defined(_MSC_VER)
#pragma optimize( "", off )
#endif
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) {
static struct _ssMdlInfo mdlInfo ; static struct _ssBlkInfo2 blkInfo2 ;
static struct _ssBlkInfoSLSize blkInfoSLSize ; ( void ) memset ( ( char * )
rtS , 0 , sizeof ( SimStruct ) ) ; ( void ) memset ( ( char * ) & mdlInfo , 0
, sizeof ( struct _ssMdlInfo ) ) ; ( void ) memset ( ( char * ) & blkInfo2 ,
0 , sizeof ( struct _ssBlkInfo2 ) ) ; ( void ) memset ( ( char * ) &
blkInfoSLSize , 0 , sizeof ( struct _ssBlkInfoSLSize ) ) ; ssSetBlkInfo2Ptr (
rtS , & blkInfo2 ) ; ssSetBlkInfoSLSizePtr ( rtS , & blkInfoSLSize ) ;
ssSetMdlInfoPtr ( rtS , & mdlInfo ) ; ssSetExecutionInfo ( rtS ,
executionInfo ) ; slsaAllocOPModelData ( rtS ) ; { static time_T mdlPeriod [
NSAMPLE_TIMES ] ; static time_T mdlOffset [ NSAMPLE_TIMES ] ; static time_T
mdlTaskTimes [ NSAMPLE_TIMES ] ; static int_T mdlTsMap [ NSAMPLE_TIMES ] ;
static int_T mdlSampleHits [ NSAMPLE_TIMES ] ; static boolean_T
mdlTNextWasAdjustedPtr [ NSAMPLE_TIMES ] ; static int_T mdlPerTaskSampleHits
[ NSAMPLE_TIMES * NSAMPLE_TIMES ] ; static time_T mdlTimeOfNextSampleHit [
NSAMPLE_TIMES ] ; { int_T i ; for ( i = 0 ; i < NSAMPLE_TIMES ; i ++ ) {
mdlPeriod [ i ] = 0.0 ; mdlOffset [ i ] = 0.0 ; mdlTaskTimes [ i ] = 0.0 ;
mdlTsMap [ i ] = i ; mdlSampleHits [ i ] = 1 ; } } ssSetSampleTimePtr ( rtS ,
& mdlPeriod [ 0 ] ) ; ssSetOffsetTimePtr ( rtS , & mdlOffset [ 0 ] ) ;
ssSetSampleTimeTaskIDPtr ( rtS , & mdlTsMap [ 0 ] ) ; ssSetTPtr ( rtS , &
mdlTaskTimes [ 0 ] ) ; ssSetSampleHitPtr ( rtS , & mdlSampleHits [ 0 ] ) ;
ssSetTNextWasAdjustedPtr ( rtS , & mdlTNextWasAdjustedPtr [ 0 ] ) ;
ssSetPerTaskSampleHitsPtr ( rtS , & mdlPerTaskSampleHits [ 0 ] ) ;
ssSetTimeOfNextSampleHitPtr ( rtS , & mdlTimeOfNextSampleHit [ 0 ] ) ; }
ssSetSolverMode ( rtS , SOLVER_MODE_SINGLETASKING ) ; { ssSetBlockIO ( rtS ,
( ( void * ) & iowqpk3eub2 ) ) ; ( void ) memset ( ( ( void * ) & iowqpk3eub2
) , 0 , sizeof ( iowqpk3eub ) ) ; } { real_T * x = ( real_T * ) & chmgkez0tpf
; ssSetContStates ( rtS , x ) ; ( void ) memset ( ( void * ) x , 0 , sizeof (
chmgkez0tp ) ) ; } { void * dwork = ( void * ) & cz5yqt3r3xb ; ssSetRootDWork
( rtS , dwork ) ; ( void ) memset ( dwork , 0 , sizeof ( cz5yqt3r3x ) ) ; } {
cz5yqt3r3xb . eez5eb4v4d = 7 ; } { static DataTypeTransInfo dtInfo ; ( void )
memset ( ( char_T * ) & dtInfo , 0 , sizeof ( dtInfo ) ) ;
ssSetModelMappingInfo ( rtS , & dtInfo ) ; dtInfo . numDataTypes = 27 ;
dtInfo . dataTypeSizes = & rtDataTypeSizes [ 0 ] ; dtInfo . dataTypeNames = &
rtDataTypeNames [ 0 ] ; dtInfo . BTransTable = & rtBTransTable ; dtInfo .
PTransTable = & rtPTransTable ; dtInfo . dataTypeInfoTable =
rtDataTypeInfoTable ; } SparkEV_InitializeDataMapInfo ( ) ;
ssSetIsRapidAcceleratorActive ( rtS , true ) ; ssSetRootSS ( rtS , rtS ) ;
ssSetVersion ( rtS , SIMSTRUCT_VERSION_LEVEL2 ) ; ssSetModelName ( rtS ,
"SparkEV" ) ; ssSetPath ( rtS , "SparkEV" ) ; ssSetTStart ( rtS , 0.0 ) ;
ssSetTFinal ( rtS , 2474.0 ) ; dl2qsu4ppj ( rtS , 2 , 0 , & ( cz5yqt3r3xb .
lofhsz2swn . rtm ) , & ( cz5yqt3r3xb . lofhsz2swn . rtb ) , NULL , 0 , & (
rt_dataMapInfoPtr -> mmi ) ,
"SparkEV/Controllers/Brake Control Unit (BCU)/Open Loop Braking" , 0 , - 1 )
; slsaCacheDWorkDataForSimTargetOP ( rtS , & ( cz5yqt3r3xb . lofhsz2swn . rtm
) , sizeof ( cz5yqt3r3xb . lofhsz2swn . rtm ) ) ; { char_T * tempStr =
rtwCAPI_EncodePath (
"SparkEV/Controllers/Brake Control Unit (BCU)/Open Loop Braking" ) ;
rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr ->
mmi ) , 0 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } lkghv3zku5 ( rtS , 2 ,
& ( cz5yqt3r3xb . kqktv02dou . rtm ) , NULL , 0 , & ( rt_dataMapInfoPtr ->
mmi ) ,
"SparkEV/Controllers/Transmission Control Unit (TCU)/Driver Pass Through" , 1
, - 1 ) ; slsaCacheDWorkDataForSimTargetOP ( rtS , & ( cz5yqt3r3xb .
kqktv02dou . rtm ) , sizeof ( cz5yqt3r3xb . kqktv02dou . rtm ) ) ; { char_T *
tempStr = rtwCAPI_EncodePath (
"SparkEV/Controllers/Transmission Control Unit (TCU)/Driver Pass Through" ) ;
rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr ->
mmi ) , 1 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } d443wer2uj ( rtS , 2 ,
0 , & ( cz5yqt3r3xb . jrvwlq3fuz . rtm ) , & ( cz5yqt3r3xb . jrvwlq3fuz . rtb
) , & ( cz5yqt3r3xb . jrvwlq3fuz . rtdw ) , NULL , 0 , & ( rt_dataMapInfoPtr
-> mmi ) , "SparkEV/Controllers/Vehicle Control Unit (VCU)/EV 2EM" , 2 , - 1
) ; slsaCacheDWorkDataForSimTargetOP ( rtS , & ( cz5yqt3r3xb . jrvwlq3fuz .
rtm ) , sizeof ( cz5yqt3r3xb . jrvwlq3fuz . rtm ) ) ; { char_T * tempStr =
rtwCAPI_EncodePath ( "SparkEV/Controllers/Vehicle Control Unit (VCU)/EV 2EM"
) ; rtwCAPI_UpdateFullPaths ( ( rtwCAPI_GetChildMMI ( & ( rt_dataMapInfoPtr
-> mmi ) , 2 ) ) , tempStr , 1 ) ; utFree ( tempStr ) ; } { static RTWLogInfo
rt_DataLoggingInfo ; rt_DataLoggingInfo . loggingInterval = ( NULL ) ;
ssSetRTWLogInfo ( rtS , & rt_DataLoggingInfo ) ; } { rtliSetLogT (
ssGetRTWLogInfo ( rtS ) , "tout" ) ; rtliSetLogX ( ssGetRTWLogInfo ( rtS ) ,
"" ) ; rtliSetLogXFinal ( ssGetRTWLogInfo ( rtS ) , "xFinal" ) ;
rtliSetLogVarNameModifier ( ssGetRTWLogInfo ( rtS ) , "none" ) ;
rtliSetLogFormat ( ssGetRTWLogInfo ( rtS ) , 4 ) ; rtliSetLogMaxRows (
ssGetRTWLogInfo ( rtS ) , 0 ) ; rtliSetLogDecimation ( ssGetRTWLogInfo ( rtS
) , 1 ) ; rtliSetMMI ( ssGetRTWLogInfo ( rtS ) , & ( rt_dataMapInfoPtr -> mmi
) ) ; rtliSetLogY ( ssGetRTWLogInfo ( rtS ) , "" ) ; rtliSetLogYSignalInfo (
ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; rtliSetLogYSignalPtrs (
ssGetRTWLogInfo ( rtS ) , ( NULL ) ) ; } { static struct _ssStatesInfo2
statesInfo2 ; ssSetStatesInfo2 ( rtS , & statesInfo2 ) ; } { static
ssPeriodicStatesInfo periodicStatesInfo ; ssSetPeriodicStatesInfo ( rtS , &
periodicStatesInfo ) ; } { static ssJacobianPerturbationBounds
jacobianPerturbationBounds ; ssSetJacobianPerturbationBounds ( rtS , &
jacobianPerturbationBounds ) ; } { static ssSolverInfo slvrInfo ; static
struct _ssSFcnModelMethods3 mdlMethods3 ; static struct _ssSFcnModelMethods2
mdlMethods2 ; static boolean_T contStatesDisabled [ 81 ] ; static real_T
absTol [ 81 ] = { 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 ,
0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001
, 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 , 0.001 } ; static uint8_T
absTolControl [ 81 ] = { 2U , 2U , 2U , 2U , 2U , 2U , 2U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U ,
1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U , 1U
, 2U , 2U , 2U , 2U , 2U , 2U , 2U , 2U } ; static real_T
contStateJacPerturbBoundMinVec [ 81 ] ; static real_T
contStateJacPerturbBoundMaxVec [ 81 ] ; static uint8_T zcAttributes [ 28 ] =
{ ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , (
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N
| ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N |
ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N
| ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z
| ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P
) , ( ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , (
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z
| ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z |
ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N
| ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N |
ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P
| ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P |
ZC_EVENT_N2P ) , ( ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P
) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL )
, ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL ) ,
( ZC_EVENT_ALL ) , ( ZC_EVENT_ALL_DN ) } ; static uint8_T zcEvents [ 28 ] = {
( 0x40 | ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40
| ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_Z2N | ZC_EVENT_P2N | ZC_EVENT_N2Z | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_P2Z | ZC_EVENT_P2N | ZC_EVENT_Z2P | ZC_EVENT_N2P ) , ( 0x40 |
ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 |
ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 |
ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 | ZC_EVENT_ALL ) , ( 0x40 |
ZC_EVENT_ALL_DN ) } ; static ssNonContDerivSigInfo nonContDerivSigInfo [ 5 ]
= { { 1 * sizeof ( real_T ) , ( char * ) ( & iowqpk3eub2 . hcj2ikcjyk ) , (
NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( & iowqpk3eub2 . bfwwnvikrt
) , ( NULL ) } , { 3 * sizeof ( real_T ) , ( char * ) ( & iowqpk3eub2 .
hzjndpcd5s [ 0 ] ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char * ) ( &
iowqpk3eub2 . ciy0n0fvf4 ) , ( NULL ) } , { 1 * sizeof ( real_T ) , ( char *
) ( & iowqpk3eub2 . cgjlckur0q ) , ( NULL ) } } ; { int i ; for ( i = 0 ; i <
81 ; ++ i ) { contStateJacPerturbBoundMinVec [ i ] = 0 ;
contStateJacPerturbBoundMaxVec [ i ] = rtGetInf ( ) ; } } ssSetSolverRelTol (
rtS , 0.001 ) ; ssSetStepSize ( rtS , 0.0 ) ; ssSetMinStepSize ( rtS , 0.0 )
; ssSetMaxNumMinSteps ( rtS , - 1 ) ; ssSetMinStepViolatedError ( rtS , 0 ) ;
ssSetMaxStepSize ( rtS , 0.01 ) ; ssSetSolverMaxOrder ( rtS , - 1 ) ;
ssSetSolverRefineFactor ( rtS , 1 ) ; ssSetOutputTimes ( rtS , ( NULL ) ) ;
ssSetNumOutputTimes ( rtS , 0 ) ; ssSetOutputTimesOnly ( rtS , 0 ) ;
ssSetOutputTimesIndex ( rtS , 0 ) ; ssSetZCCacheNeedsReset ( rtS , 1 ) ;
ssSetDerivCacheNeedsReset ( rtS , 0 ) ; ssSetNumNonContDerivSigInfos ( rtS ,
5 ) ; ssSetNonContDerivSigInfos ( rtS , nonContDerivSigInfo ) ;
ssSetSolverInfo ( rtS , & slvrInfo ) ; ssSetSolverName ( rtS , "daessc" ) ;
ssSetVariableStepSolver ( rtS , 1 ) ; ssSetSolverConsistencyChecking ( rtS ,
0 ) ; ssSetSolverAdaptiveZcDetection ( rtS , 1 ) ;
ssSetSolverRobustResetMethod ( rtS , 0 ) ; _ssSetSolverUpdateJacobianAtReset
( rtS , true ) ; ssSetAbsTolVector ( rtS , absTol ) ;
ssSetAbsTolControlVector ( rtS , absTolControl ) ; ssSetSolverAbsTol_Obsolete
( rtS , absTol ) ; ssSetSolverAbsTolControl_Obsolete ( rtS , absTolControl )
; ssSetJacobianPerturbationBoundsMinVec ( rtS ,
contStateJacPerturbBoundMinVec ) ; ssSetJacobianPerturbationBoundsMaxVec (
rtS , contStateJacPerturbBoundMaxVec ) ; ssSetSolverStateProjection ( rtS , 1
) ; ( void ) memset ( ( void * ) & mdlMethods2 , 0 , sizeof ( mdlMethods2 ) )
; ssSetModelMethods2 ( rtS , & mdlMethods2 ) ; ( void ) memset ( ( void * ) &
mdlMethods3 , 0 , sizeof ( mdlMethods3 ) ) ; ssSetModelMethods3 ( rtS , &
mdlMethods3 ) ; ssSetModelProjection ( rtS , MdlProjection ) ;
ssSetMassMatrixType ( rtS , ( ssMatrixType ) 1 ) ; ssSetMassMatrixNzMax ( rtS
, 43 ) ; ssSetModelMassMatrix ( rtS , MdlMassMatrix ) ;
ssSetModelForcingFunction ( rtS , MdlForcingFunction ) ;
ssSetSolverMassMatrixType ( rtS , ( ssMatrixType ) 1 ) ;
ssSetSolverMassMatrixNzMax ( rtS , 43 ) ; ssSetModelOutputs ( rtS ,
MdlOutputs ) ; ssSetModelUpdate ( rtS , MdlUpdate ) ; ssSetModelDerivatives (
rtS , MdlDerivatives ) ; ssSetSolverZcSignalAttrib ( rtS , zcAttributes ) ;
ssSetSolverNumZcSignals ( rtS , 28 ) ; ssSetModelZeroCrossings ( rtS ,
MdlZeroCrossings ) ; ssSetSolverZcEventsVector ( rtS , zcEvents ) ;
ssSetSolverConsecutiveZCsStepRelTol ( rtS , 2.8421709430404007E-13 ) ;
ssSetSolverMaxConsecutiveZCs ( rtS , 1000 ) ; ssSetSolverConsecutiveZCsError
( rtS , 2 ) ; ssSetSolverMaskedZcDiagnostic ( rtS , 0 ) ;
ssSetSolverIgnoredZcDiagnostic ( rtS , 0 ) ; ssSetSolverZcThreshold ( rtS ,
0.001 ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 5 ) ;
ssSetSolverShapePreserveControl ( rtS , 2 ) ; ssSetTNextTid ( rtS , INT_MIN )
; ssSetTNext ( rtS , rtMinusInf ) ; ssSetSolverNeedsReset ( rtS ) ;
ssSetNumNonsampledZCs ( rtS , 28 ) ; ssSetContStateDisabled ( rtS ,
contStatesDisabled ) ; ssSetSolverMaxConsecutiveMinStep ( rtS , 5 ) ; { int_T
* ir = cdlyfvwcyng . ir ; int_T * jc = cdlyfvwcyng . jc ; real_T * pr =
cdlyfvwcyng . pr ; ssSetMassMatrixIr ( rtS , ir ) ; ssSetMassMatrixJc ( rtS ,
jc ) ; ssSetMassMatrixPr ( rtS , pr ) ; ( void ) memset ( ( void * ) ir , 0 ,
43 * sizeof ( int_T ) ) ; ( void ) memset ( ( void * ) jc , 0 , ( 81 + 1 ) *
sizeof ( int_T ) ) ; ( void ) memset ( ( void * ) pr , 0 , 43 * sizeof (
real_T ) ) ; } } ssSetChecksumVal ( rtS , 0 , 1248598894U ) ;
ssSetChecksumVal ( rtS , 1 , 4235261646U ) ; ssSetChecksumVal ( rtS , 2 ,
2211789845U ) ; ssSetChecksumVal ( rtS , 3 , 1470293678U ) ; { static const
sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE ; static RTWExtModeInfo
rt_ExtModeInfo ; static const sysRanDType * systemRan [ 17 ] ;
gblRTWExtModeInfo = & rt_ExtModeInfo ; ssSetRTWExtModeInfo ( rtS , &
rt_ExtModeInfo ) ; rteiSetSubSystemActiveVectorAddresses ( & rt_ExtModeInfo ,
systemRan ) ; systemRan [ 0 ] = & rtAlwaysEnabled ; systemRan [ 1 ] = &
rtAlwaysEnabled ; systemRan [ 2 ] = ( sysRanDType * ) & cz5yqt3r3xb .
fuob0ddam2h . k44bc5mjbl ; systemRan [ 3 ] = & rtAlwaysEnabled ; systemRan [
4 ] = & rtAlwaysEnabled ; systemRan [ 5 ] = ( sysRanDType * ) & cz5yqt3r3xb .
dwnfs4t0ur . k44bc5mjbl ; systemRan [ 6 ] = & rtAlwaysEnabled ; systemRan [ 7
] = & rtAlwaysEnabled ; systemRan [ 8 ] = & rtAlwaysEnabled ; systemRan [ 9 ]
= & rtAlwaysEnabled ; systemRan [ 10 ] = & rtAlwaysEnabled ; systemRan [ 11 ]
= & rtAlwaysEnabled ; systemRan [ 12 ] = & rtAlwaysEnabled ; systemRan [ 13 ]
= & rtAlwaysEnabled ; systemRan [ 14 ] = & rtAlwaysEnabled ; systemRan [ 15 ]
= & rtAlwaysEnabled ; systemRan [ 16 ] = & rtAlwaysEnabled ;
rteiSetModelMappingInfoPtr ( ssGetRTWExtModeInfo ( rtS ) , &
ssGetModelMappingInfo ( rtS ) ) ; rteiSetChecksumsPtr ( ssGetRTWExtModeInfo (
rtS ) , ssGetChecksums ( rtS ) ) ; rteiSetTPtr ( ssGetRTWExtModeInfo ( rtS )
, ssGetTPtr ( rtS ) ) ; } slsaDisallowedBlocksForSimTargetOP ( rtS ,
mr_SparkEV_GetSimStateDisallowedBlocks ) ; slsaGetWorkFcnForSimTargetOP ( rtS
, mr_SparkEV_GetDWork ) ; slsaSetWorkFcnForSimTargetOP ( rtS ,
mr_SparkEV_SetDWork ) ; kjmvupbl2i . Saturation_UpperSat_l3n5201rqk = rtInf ;
kjmvupbl2i . FirstOrderHold_ErrTol = rtInf ; kjmvupbl2i .
Saturation1_UpperSat = rtInf ; kjmvupbl2i . Saturation_UpperSat_petchupvyj =
rtInf ; kjmvupbl2i . Saturation1_UpperSat_jybwri54h2 = rtInf ; kjmvupbl2i .
Saturation_UpperSat_ffmhckns0u = rtInf ; kjmvupbl2i . FirstOrderHold1_ErrTol
= rtInf ; kjmvupbl2i . DeadZone_Start_pdp2e4smtt = rtMinusInf ;
rt_RapidReadMatFileAndUpdateParams ( rtS ) ; if ( ssGetErrorStatus ( rtS ) )
{ return rtS ; } return rtS ; }
#if defined(_MSC_VER)
#pragma optimize( "", on )
#endif
const int_T gblParameterTuningTid = 5 ; void MdlOutputsParameterSampleTime (
int_T tid ) { MdlOutputsTID5 ( tid ) ; }
