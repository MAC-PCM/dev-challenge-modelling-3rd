#include "ne_ds.h"
#include "SparkEV_c4aff755_1_ds_sys_struct.h"
#include "SparkEV_c4aff755_1_ds_mode.h"
#include "SparkEV_c4aff755_1_ds.h"
#include "SparkEV_c4aff755_1_ds_externals.h"
#include "SparkEV_c4aff755_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T SparkEV_c4aff755_1_ds_mode ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t11 , NeDsMethodOutput * t12 ) { PmIntVector out ;
real_T nonscalar1 [ 7 ] ; real_T t1 [ 1 ] ; real_T t2 [ 1 ] ; real_T U_idx_8
; real_T X_idx_18 ; real_T X_idx_19 ; real_T X_idx_20 ; real_T X_idx_21 ;
real_T X_idx_34 ; real_T X_idx_35 ; real_T X_idx_55 ; real_T X_idx_56 ;
real_T X_idx_59 ; real_T X_idx_60 ; real_T X_idx_61 ; real_T X_idx_64 ;
real_T X_idx_65 ; real_T t10 ; size_t t5 ; size_t t6 ; U_idx_8 = t11 -> mU .
mX [ 8 ] ; X_idx_18 = t11 -> mX . mX [ 18 ] ; X_idx_19 = t11 -> mX . mX [ 19
] ; X_idx_20 = t11 -> mX . mX [ 20 ] ; X_idx_21 = t11 -> mX . mX [ 21 ] ;
X_idx_34 = t11 -> mX . mX [ 34 ] ; X_idx_35 = t11 -> mX . mX [ 35 ] ;
X_idx_55 = t11 -> mX . mX [ 55 ] ; X_idx_56 = t11 -> mX . mX [ 56 ] ;
X_idx_59 = t11 -> mX . mX [ 59 ] ; X_idx_60 = t11 -> mX . mX [ 60 ] ;
X_idx_61 = t11 -> mX . mX [ 61 ] ; X_idx_64 = t11 -> mX . mX [ 64 ] ;
X_idx_65 = t11 -> mX . mX [ 65 ] ; out = t12 -> mMODE ; nonscalar1 [ 0 ] =
188429.76 ; nonscalar1 [ 1 ] = 188429.76 ; nonscalar1 [ 2 ] = 188429.76 ;
nonscalar1 [ 3 ] = 188429.76 ; nonscalar1 [ 4 ] = 188429.76 ; nonscalar1 [ 5
] = 188429.76 ; nonscalar1 [ 6 ] = 188429.76 ; X_idx_19 += X_idx_61 * 1.0E-6
; t1 [ 0ULL ] = pmf_get_inf ( ) ; for ( t5 = 0ULL ; t5 < 42ULL ; t5 ++ ) { t6
= t5 / 42ULL ; X_idx_61 = t1 [ t6 > 0ULL ? 0ULL : t6 ] ; t10 = ( (
_NeDynamicSystem * ) ( LC ) ) -> mField0 [ t5 ] * 1.0E-5 ; t1 [ t6 > 0ULL ?
0ULL : t6 ] = X_idx_61 > t10 ? t10 : X_idx_61 ; } t2 [ 0ULL ] = pmf_get_inf (
) ; for ( t5 = 0ULL ; t5 < 7ULL ; t5 ++ ) { t6 = t5 / 7ULL ; X_idx_61 = t2 [
t6 > 0ULL ? 0ULL : t6 ] ; t10 = nonscalar1 [ t5 ] * 1.0E-5 ; t2 [ t6 > 0ULL ?
0ULL : t6 ] = X_idx_61 > t10 ? t10 : X_idx_61 ; } out . mX [ 0 ] = ( int32_T
) ( t1 [ 0ULL ] >= X_idx_55 ) ; out . mX [ 1 ] = ( int32_T ) ( t2 [ 0ULL ] >=
X_idx_60 ) ; out . mX [ 2 ] = ( int32_T ) ( X_idx_21 > X_idx_65 ) ; out . mX
[ 3 ] = ( int32_T ) ( X_idx_21 < - X_idx_65 ) ; out . mX [ 4 ] = ( int32_T )
( X_idx_59 > 0.0 ) ; out . mX [ 5 ] = ( int32_T ) ( X_idx_55 >= 0.0 ) ; out .
mX [ 6 ] = ( int32_T ) ( X_idx_60 > 0.0 ) ; out . mX [ 7 ] = ( int32_T ) (
X_idx_56 * 1.0E-6 + X_idx_18 >= 0.0 ) ; out . mX [ 8 ] = ( int32_T ) (
X_idx_19 > 0.0 ) ; out . mX [ 9 ] = ( int32_T ) ( X_idx_19 > 0.0 ) ; out . mX
[ 10 ] = ( int32_T ) ( X_idx_34 < 0.0001 ) ; out . mX [ 11 ] = ( int32_T ) (
X_idx_34 < 0.0 ) ; out . mX [ 12 ] = ( int32_T ) ( X_idx_35 < 0.0001 ) ; out
. mX [ 13 ] = ( int32_T ) ( X_idx_35 < 0.0 ) ; out . mX [ 14 ] = ( int32_T )
( X_idx_59 <= 1.7351225806451615E-8 ) ; out . mX [ 15 ] = ( int32_T ) (
U_idx_8 <= 0.0 ) ; out . mX [ 16 ] = ( int32_T ) ( X_idx_20 > X_idx_64 ) ;
out . mX [ 17 ] = ( int32_T ) ( X_idx_20 < - X_idx_64 ) ; ( void ) LC ; (
void ) t12 ; return 0 ; }
