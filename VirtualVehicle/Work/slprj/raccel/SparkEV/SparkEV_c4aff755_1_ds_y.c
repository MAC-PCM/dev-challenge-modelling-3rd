#include "ne_ds.h"
#include "SparkEV_c4aff755_1_ds_sys_struct.h"
#include "SparkEV_c4aff755_1_ds_y.h"
#include "SparkEV_c4aff755_1_ds.h"
#include "SparkEV_c4aff755_1_ds_externals.h"
#include "SparkEV_c4aff755_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T SparkEV_c4aff755_1_ds_y ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t3 , NeDsMethodOutput * t4 ) { PmRealVector out ;
real_T X_idx_0 ; real_T X_idx_1 ; real_T X_idx_18 ; real_T X_idx_19 ; real_T
X_idx_2 ; real_T X_idx_24 ; real_T X_idx_27 ; real_T X_idx_3 ; real_T
X_idx_30 ; real_T X_idx_33 ; real_T X_idx_34 ; real_T X_idx_35 ; real_T
X_idx_37 ; real_T X_idx_4 ; real_T X_idx_45 ; real_T X_idx_46 ; real_T
X_idx_47 ; real_T X_idx_49 ; real_T X_idx_5 ; real_T X_idx_52 ; real_T
X_idx_54 ; real_T X_idx_56 ; real_T X_idx_58 ; real_T X_idx_6 ; real_T
X_idx_61 ; real_T X_idx_62 ; real_T X_idx_63 ; ( void ) LC ; X_idx_0 = t3 ->
mX . mX [ 0 ] ; X_idx_1 = t3 -> mX . mX [ 1 ] ; X_idx_2 = t3 -> mX . mX [ 2 ]
; X_idx_3 = t3 -> mX . mX [ 3 ] ; X_idx_4 = t3 -> mX . mX [ 4 ] ; X_idx_5 =
t3 -> mX . mX [ 5 ] ; X_idx_6 = t3 -> mX . mX [ 6 ] ; X_idx_18 = t3 -> mX .
mX [ 18 ] ; X_idx_19 = t3 -> mX . mX [ 19 ] ; X_idx_24 = t3 -> mX . mX [ 24 ]
; X_idx_27 = t3 -> mX . mX [ 27 ] ; X_idx_30 = t3 -> mX . mX [ 30 ] ;
X_idx_33 = t3 -> mX . mX [ 33 ] ; X_idx_34 = t3 -> mX . mX [ 34 ] ; X_idx_35
= t3 -> mX . mX [ 35 ] ; X_idx_37 = t3 -> mX . mX [ 37 ] ; X_idx_45 = t3 ->
mX . mX [ 45 ] ; X_idx_46 = t3 -> mX . mX [ 46 ] ; X_idx_47 = t3 -> mX . mX [
47 ] ; X_idx_49 = t3 -> mX . mX [ 49 ] ; X_idx_52 = t3 -> mX . mX [ 52 ] ;
X_idx_54 = t3 -> mX . mX [ 54 ] ; X_idx_56 = t3 -> mX . mX [ 56 ] ; X_idx_58
= t3 -> mX . mX [ 58 ] ; X_idx_61 = t3 -> mX . mX [ 61 ] ; X_idx_62 = t3 ->
mX . mX [ 62 ] ; X_idx_63 = t3 -> mX . mX [ 63 ] ; out = t4 -> mY ; X_idx_19
+= X_idx_61 * 1.0E-6 ; out . mX [ 0 ] = X_idx_6 ; out . mX [ 1 ] = X_idx_34 ;
out . mX [ 2 ] = X_idx_37 ; out . mX [ 3 ] = X_idx_45 ; out . mX [ 4 ] =
X_idx_35 ; out . mX [ 5 ] = X_idx_46 ; out . mX [ 6 ] = X_idx_47 ; out . mX [
7 ] = X_idx_2 ; out . mX [ 8 ] = X_idx_3 ; out . mX [ 9 ] = X_idx_5 ; out .
mX [ 10 ] = X_idx_0 ; out . mX [ 11 ] = ( X_idx_0 * - 0.002 + X_idx_1 *
0.00051679586563307489 ) - X_idx_24 ; out . mX [ 12 ] = X_idx_27 ; out . mX [
13 ] = X_idx_33 ; out . mX [ 14 ] = ( X_idx_3 * - 0.002 + X_idx_4 *
0.00051679586563307489 ) - X_idx_30 ; out . mX [ 15 ] = X_idx_1 ; out . mX [
16 ] = X_idx_4 ; out . mX [ 17 ] = X_idx_1 ; out . mX [ 18 ] = X_idx_4 ; out
. mX [ 19 ] = X_idx_58 ; out . mX [ 20 ] = - X_idx_54 ; out . mX [ 21 ] =
X_idx_56 * 1.0E-6 + X_idx_18 ; out . mX [ 22 ] = X_idx_62 ; out . mX [ 23 ] =
X_idx_19 ; out . mX [ 24 ] = - ( X_idx_1 * 0.001 - X_idx_49 ) ; out . mX [ 25
] = X_idx_63 ; out . mX [ 26 ] = X_idx_19 ; out . mX [ 27 ] = - ( X_idx_4 *
0.001 - X_idx_52 ) ; ( void ) LC ; ( void ) t4 ; return 0 ; }
