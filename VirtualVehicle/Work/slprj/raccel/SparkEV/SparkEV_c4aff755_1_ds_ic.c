#include "ne_ds.h"
#include "SparkEV_c4aff755_1_ds_sys_struct.h"
#include "SparkEV_c4aff755_1_ds_ic.h"
#include "SparkEV_c4aff755_1_ds.h"
#include "SparkEV_c4aff755_1_ds_externals.h"
#include "SparkEV_c4aff755_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T SparkEV_c4aff755_1_ds_ic ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ;
real_T P_R_idx_0 ; real_T P_R_idx_1 ; real_T P_R_idx_2 ; real_T P_R_idx_3 ; (
void ) LC ; P_R_idx_0 = t1 -> mP_R . mX [ 0 ] ; P_R_idx_1 = t1 -> mP_R . mX [
1 ] ; P_R_idx_2 = t1 -> mP_R . mX [ 2 ] ; P_R_idx_3 = t1 -> mP_R . mX [ 3 ] ;
out = t2 -> mIC ; out . mX [ 0 ] = 0.0 ; out . mX [ 1 ] = 0.0 ; out . mX [ 2
] = 0.0 ; out . mX [ 3 ] = 0.0 ; out . mX [ 4 ] = 0.0 ; out . mX [ 5 ] = 0.0
; out . mX [ 6 ] = 0.0 ; out . mX [ 7 ] = 0.0 ; out . mX [ 8 ] = 0.0 ; out .
mX [ 9 ] = 0.0 ; out . mX [ 10 ] = 0.0 ; out . mX [ 11 ] = 0.0 ; out . mX [
12 ] = 0.0 ; out . mX [ 13 ] = 0.0 ; out . mX [ 14 ] = 0.0 ; out . mX [ 15 ]
= P_R_idx_1 + 273.15 ; out . mX [ 16 ] = 0.0 ; out . mX [ 17 ] = 0.0 ; out .
mX [ 18 ] = P_R_idx_0 ; out . mX [ 19 ] = P_R_idx_3 ; out . mX [ 20 ] = 0.0 ;
out . mX [ 21 ] = 0.0 ; out . mX [ 22 ] = 0.0 ; out . mX [ 23 ] = 0.0 ; out .
mX [ 24 ] = 0.0 ; out . mX [ 25 ] = 0.0 ; out . mX [ 26 ] = 0.0 ; out . mX [
27 ] = 0.0 ; out . mX [ 28 ] = 0.0 ; out . mX [ 29 ] = 0.0 ; out . mX [ 30 ]
= 0.0 ; out . mX [ 31 ] = 0.0 ; out . mX [ 32 ] = 0.0 ; out . mX [ 33 ] = 0.0
; out . mX [ 34 ] = 0.0 ; out . mX [ 35 ] = 0.0 ; out . mX [ 36 ] = 0.0 ; out
. mX [ 37 ] = 0.0 ; out . mX [ 38 ] = 0.0 ; out . mX [ 39 ] = 0.0 ; out . mX
[ 40 ] = 0.0 ; out . mX [ 41 ] = 0.0 ; out . mX [ 42 ] = 0.0 ; out . mX [ 43
] = 0.0 ; out . mX [ 44 ] = 0.0 ; out . mX [ 45 ] = 0.0 ; out . mX [ 46 ] =
0.0 ; out . mX [ 47 ] = 0.0 ; out . mX [ 48 ] = 0.0 ; out . mX [ 49 ] = 0.0 ;
out . mX [ 50 ] = 0.0 ; out . mX [ 51 ] = 0.0 ; out . mX [ 52 ] = 0.0 ; out .
mX [ 53 ] = 0.0 ; out . mX [ 54 ] = 0.0 ; out . mX [ 55 ] = 1.0 ; out . mX [
56 ] = 0.0 ; out . mX [ 57 ] = 0.0 ; out . mX [ 58 ] = P_R_idx_2 ; out . mX [
59 ] = 1.0 ; out . mX [ 60 ] = 3600.0 ; out . mX [ 61 ] = 0.0 ; out . mX [ 62
] = 0.0 ; out . mX [ 63 ] = 0.0 ; out . mX [ 64 ] = 0.0 ; out . mX [ 65 ] =
0.0 ; ( void ) LC ; ( void ) t2 ; return 0 ; }
