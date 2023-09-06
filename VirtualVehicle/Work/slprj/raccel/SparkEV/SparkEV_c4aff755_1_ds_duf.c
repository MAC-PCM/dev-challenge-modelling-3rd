#include "ne_ds.h"
#include "SparkEV_c4aff755_1_ds_sys_struct.h"
#include "SparkEV_c4aff755_1_ds_duf.h"
#include "SparkEV_c4aff755_1_ds.h"
#include "SparkEV_c4aff755_1_ds_externals.h"
#include "SparkEV_c4aff755_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T SparkEV_c4aff755_1_ds_duf ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t28 , NeDsMethodOutput * t29 ) { PmRealVector out ;
real_T U_idx_0 ; real_T U_idx_1 ; real_T U_idx_2 ; real_T U_idx_3 ; real_T
U_idx_4 ; real_T U_idx_5 ; real_T X_idx_0 ; real_T X_idx_18 ; real_T X_idx_2
; real_T X_idx_3 ; real_T X_idx_5 ; real_T X_idx_56 ; real_T X_idx_6 ; real_T
intermediate_der103 ; real_T intermediate_der108 ; real_T intermediate_der110
; real_T t19 ; real_T t5 ; real_T t7 ; real_T t8 ; int32_T M_idx_15 ; ( void
) LC ; M_idx_15 = t28 -> mM . mX [ 15 ] ; U_idx_0 = t28 -> mU . mX [ 0 ] ;
U_idx_1 = t28 -> mU . mX [ 1 ] ; U_idx_2 = t28 -> mU . mX [ 2 ] ; U_idx_3 =
t28 -> mU . mX [ 3 ] ; U_idx_4 = t28 -> mU . mX [ 4 ] ; U_idx_5 = t28 -> mU .
mX [ 5 ] ; X_idx_0 = t28 -> mX . mX [ 0 ] ; X_idx_2 = t28 -> mX . mX [ 2 ] ;
X_idx_3 = t28 -> mX . mX [ 3 ] ; X_idx_5 = t28 -> mX . mX [ 5 ] ; X_idx_6 =
t28 -> mX . mX [ 6 ] ; X_idx_18 = t28 -> mX . mX [ 18 ] ; X_idx_56 = t28 ->
mX . mX [ 56 ] ; out = t29 -> mDUF ; U_idx_4 *= 0.017453292519943295 ; t5 = (
real_T ) ( U_idx_0 * 1.0E-5 >= 0.0 ) * 1.0E-5 ; intermediate_der108 = (
real_T ) ( U_idx_2 * 1.0E-5 >= 0.0 ) * 1.0E-5 ; intermediate_der103 =
intermediate_der108 * 1.0995574287564276 / 4.0 * 0.00075000000000000012 ; t7
= ( intermediate_der108 * 1.4137166941154069 / 4.0 * 0.00075000000000000012 -
intermediate_der103 ) * 2.3316439815971242 ; intermediate_der108 = ( real_T )
( U_idx_3 * 1.0E-5 >= 0.0 ) * 1.0E-5 ; t19 = intermediate_der108 *
1.4137166941154069 ; intermediate_der108 = intermediate_der108 *
1.0995574287564276 / 4.0 * 0.00075000000000000012 ; t8 = ( t19 / 4.0 *
0.00075000000000000012 - intermediate_der108 ) * 2.3316439815971242 ;
intermediate_der110 = cos ( U_idx_4 ) * 0.017453292519943295 *
14832.720000000001 ; t19 = - sin ( U_idx_4 ) * 0.017453292519943295 *
14832.720000000001 ; U_idx_4 = t5 * 1.0995574287564276 / 4.0 *
0.00075000000000000012 ; U_idx_0 = ( real_T ) ( U_idx_1 * 1.0E-5 >= 0.0 ) *
1.0E-5 ; U_idx_2 = U_idx_0 * 1.4137166941154069 / 4.0 *
0.00075000000000000012 ; U_idx_0 = U_idx_0 * 1.0995574287564276 / 4.0 *
0.00075000000000000012 ; intermediate_der110 = - ( - intermediate_der110 /
1512.0 ) ; U_idx_3 = - ( X_idx_0 / 0.14142135623730953 * pmf_exp ( - (
X_idx_0 / 0.14142135623730953 * ( X_idx_0 / 0.14142135623730953 ) ) ) * ( (
t5 * 1.4137166941154069 / 4.0 * 0.00075000000000000012 - U_idx_4 ) *
2.3316439815971242 ) * 100000.0 + tanh ( X_idx_0 / 0.01 ) * U_idx_4 *
100000.0 ) ; U_idx_2 = - ( X_idx_2 / 0.14142135623730953 * pmf_exp ( - (
X_idx_2 / 0.14142135623730953 * ( X_idx_2 / 0.14142135623730953 ) ) ) * ( (
U_idx_2 - U_idx_0 ) * 2.3316439815971242 ) * 100000.0 + tanh ( X_idx_2 / 0.01
) * U_idx_0 * 100000.0 ) ; U_idx_0 = - ( X_idx_3 / 0.14142135623730953 *
pmf_exp ( - ( X_idx_3 / 0.14142135623730953 * ( X_idx_3 / 0.14142135623730953
) ) ) * t7 * 100000.0 + tanh ( X_idx_3 / 0.01 ) * intermediate_der103 *
100000.0 ) ; U_idx_4 = - ( X_idx_5 / 0.14142135623730953 * pmf_exp ( - (
X_idx_5 / 0.14142135623730953 * ( X_idx_5 / 0.14142135623730953 ) ) ) * t8 *
100000.0 + tanh ( X_idx_5 / 0.01 ) * intermediate_der108 * 100000.0 ) ; out .
mX [ 0 ] = U_idx_3 ; out . mX [ 1 ] = U_idx_2 ; out . mX [ 2 ] = U_idx_0 ;
out . mX [ 3 ] = U_idx_4 ; out . mX [ 4 ] = intermediate_der110 ; out . mX [
5 ] = - ( t19 * 1.7 / 2.79 / 2.0 ) ; out . mX [ 6 ] = - ( t19 * 1.09 / 2.79 /
2.0 ) ; out . mX [ 7 ] = - ( - ( ( X_idx_6 + U_idx_5 ) * ( ( real_T ) (
X_idx_6 + U_idx_5 >= 0.0 ) * 2.0 - 1.0 ) * 1.0212093351999998 ) / 1512.0 ) ;
out . mX [ 8 ] = ( X_idx_56 * 1.0E-6 + X_idx_18 ) * 0.00098 ; out . mX [ 9 ]
= - ( real_T ) ( M_idx_15 == 0 ) ; ( void ) LC ; ( void ) t29 ; return 0 ; }
