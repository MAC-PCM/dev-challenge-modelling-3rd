#include "ne_ds.h"
#include "SparkEV_c4aff755_1_ds_sys_struct.h"
#include "SparkEV_c4aff755_1_ds_zc.h"
#include "SparkEV_c4aff755_1_ds.h"
#include "SparkEV_c4aff755_1_ds_externals.h"
#include "SparkEV_c4aff755_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T SparkEV_c4aff755_1_ds_zc ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t13 , NeDsMethodOutput * t14 ) { PmRealVector out ;
real_T nonscalar1 [ 7 ] ; real_T t3 [ 1 ] ; real_T t4 [ 1 ] ; real_T U_idx_8
; real_T X_idx_18 ; real_T X_idx_19 ; real_T X_idx_20 ; real_T X_idx_21 ;
real_T X_idx_34 ; real_T X_idx_35 ; real_T X_idx_55 ; real_T X_idx_56 ;
real_T X_idx_59 ; real_T X_idx_60 ; real_T X_idx_61 ; real_T X_idx_64 ;
real_T X_idx_65 ; real_T t1 ; real_T t11 ; real_T t12 ; size_t t7 ; size_t t8
; int32_T M_idx_16 ; int32_T M_idx_2 ; M_idx_2 = t13 -> mM . mX [ 2 ] ;
M_idx_16 = t13 -> mM . mX [ 16 ] ; U_idx_8 = t13 -> mU . mX [ 8 ] ; X_idx_18
= t13 -> mX . mX [ 18 ] ; X_idx_19 = t13 -> mX . mX [ 19 ] ; X_idx_20 = t13
-> mX . mX [ 20 ] ; X_idx_21 = t13 -> mX . mX [ 21 ] ; X_idx_34 = t13 -> mX .
mX [ 34 ] ; X_idx_35 = t13 -> mX . mX [ 35 ] ; X_idx_55 = t13 -> mX . mX [ 55
] ; X_idx_56 = t13 -> mX . mX [ 56 ] ; X_idx_59 = t13 -> mX . mX [ 59 ] ;
X_idx_60 = t13 -> mX . mX [ 60 ] ; X_idx_61 = t13 -> mX . mX [ 61 ] ;
X_idx_64 = t13 -> mX . mX [ 64 ] ; X_idx_65 = t13 -> mX . mX [ 65 ] ; out =
t14 -> mZC ; nonscalar1 [ 0 ] = 188429.76 ; nonscalar1 [ 1 ] = 188429.76 ;
nonscalar1 [ 2 ] = 188429.76 ; nonscalar1 [ 3 ] = 188429.76 ; nonscalar1 [ 4
] = 188429.76 ; nonscalar1 [ 5 ] = 188429.76 ; nonscalar1 [ 6 ] = 188429.76 ;
X_idx_19 += X_idx_61 * 1.0E-6 ; if ( M_idx_16 == 0 ) { X_idx_61 = - X_idx_64
- X_idx_20 ; } else { X_idx_61 = 0.0 ; } if ( M_idx_2 == 0 ) { t1 = -
X_idx_65 - X_idx_21 ; } else { t1 = 0.0 ; } t3 [ 0ULL ] = pmf_get_inf ( ) ;
for ( t7 = 0ULL ; t7 < 42ULL ; t7 ++ ) { t8 = t7 / 42ULL ; t11 = t3 [ t8 >
0ULL ? 0ULL : t8 ] ; t12 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t7
] * 1.0E-5 ; t3 [ t8 > 0ULL ? 0ULL : t8 ] = t11 > t12 ? t12 : t11 ; } t4 [
0ULL ] = pmf_get_inf ( ) ; for ( t7 = 0ULL ; t7 < 7ULL ; t7 ++ ) { t8 = t7 /
7ULL ; t11 = t4 [ t8 > 0ULL ? 0ULL : t8 ] ; t12 = nonscalar1 [ t7 ] * 1.0E-5
; t4 [ t8 > 0ULL ? 0ULL : t8 ] = t11 > t12 ? t12 : t11 ; } out . mX [ 0 ] =
0.0001 - X_idx_34 ; out . mX [ 1 ] = 0.0001 - X_idx_35 ; out . mX [ 2 ] = t3
[ 0ULL ] - X_idx_55 ; out . mX [ 3 ] = 1.7351225806451615E-8 - X_idx_59 ; out
. mX [ 4 ] = t4 [ 0ULL ] - X_idx_60 ; out . mX [ 5 ] = X_idx_59 ; out . mX [
6 ] = X_idx_55 ; out . mX [ 7 ] = X_idx_60 ; out . mX [ 8 ] = X_idx_56 *
1.0E-6 + X_idx_18 ; out . mX [ 9 ] = - U_idx_8 ; out . mX [ 10 ] = ( real_T )
( X_idx_19 > 0.0 ) ; out . mX [ 11 ] = X_idx_20 - X_idx_64 ; out . mX [ 12 ]
= X_idx_61 ; out . mX [ 13 ] = ( real_T ) ( X_idx_19 > 0.0 ) ; out . mX [ 14
] = X_idx_21 - X_idx_65 ; out . mX [ 15 ] = t1 ; out . mX [ 16 ] = - X_idx_34
; out . mX [ 17 ] = - X_idx_35 ; ( void ) LC ; ( void ) t14 ; return 0 ; }
