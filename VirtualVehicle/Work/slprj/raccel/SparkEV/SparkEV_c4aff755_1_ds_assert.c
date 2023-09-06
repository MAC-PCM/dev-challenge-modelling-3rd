#include "ne_ds.h"
#include "SparkEV_c4aff755_1_ds_sys_struct.h"
#include "SparkEV_c4aff755_1_ds_assert.h"
#include "SparkEV_c4aff755_1_ds.h"
#include "SparkEV_c4aff755_1_ds_externals.h"
#include "SparkEV_c4aff755_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T SparkEV_c4aff755_1_ds_assert ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t13 , NeDsMethodOutput * t14 ) { PmIntVector out ;
real_T nonscalar1 [ 7 ] ; real_T t1 [ 1 ] ; real_T U_idx_8 ; real_T X_idx_0 ;
real_T X_idx_18 ; real_T X_idx_19 ; real_T X_idx_2 ; real_T X_idx_3 ; real_T
X_idx_5 ; real_T X_idx_56 ; real_T X_idx_58 ; real_T X_idx_6 ; real_T
X_idx_60 ; real_T X_idx_61 ; real_T t12 ; real_T t4 ; size_t t2 ; size_t t3 ;
int32_T t0 [ 113 ] ; int32_T M_idx_4 ; int32_T M_idx_5 ; int32_T M_idx_6 ;
int32_T M_idx_7 ; int32_T M_idx_8 ; int32_T M_idx_9 ; ( void ) LC ; M_idx_4 =
t13 -> mM . mX [ 4 ] ; M_idx_5 = t13 -> mM . mX [ 5 ] ; M_idx_6 = t13 -> mM .
mX [ 6 ] ; M_idx_7 = t13 -> mM . mX [ 7 ] ; M_idx_8 = t13 -> mM . mX [ 8 ] ;
M_idx_9 = t13 -> mM . mX [ 9 ] ; U_idx_8 = t13 -> mU . mX [ 8 ] ; X_idx_0 =
t13 -> mX . mX [ 0 ] ; X_idx_2 = t13 -> mX . mX [ 2 ] ; X_idx_3 = t13 -> mX .
mX [ 3 ] ; X_idx_5 = t13 -> mX . mX [ 5 ] ; X_idx_6 = t13 -> mX . mX [ 6 ] ;
X_idx_18 = t13 -> mX . mX [ 18 ] ; X_idx_19 = t13 -> mX . mX [ 19 ] ;
X_idx_56 = t13 -> mX . mX [ 56 ] ; X_idx_58 = t13 -> mX . mX [ 58 ] ;
X_idx_60 = t13 -> mX . mX [ 60 ] ; X_idx_61 = t13 -> mX . mX [ 61 ] ; out =
t14 -> mASSERT ; nonscalar1 [ 0 ] = 188429.76 ; nonscalar1 [ 1 ] = 188429.76
; nonscalar1 [ 2 ] = 188429.76 ; nonscalar1 [ 3 ] = 188429.76 ; nonscalar1 [
4 ] = 188429.76 ; nonscalar1 [ 5 ] = 188429.76 ; nonscalar1 [ 6 ] = 188429.76
; t12 = X_idx_56 * 1.0E-6 + X_idx_18 ; t1 [ 0ULL ] = pmf_get_inf ( ) ; for (
t2 = 0ULL ; t2 < 7ULL ; t2 ++ ) { t3 = t2 / 7ULL ; t4 = t1 [ t3 > 0ULL ? 0ULL
: t3 ] ; X_idx_18 = nonscalar1 [ t2 ] * 1.0E-5 ; t1 [ t3 > 0ULL ? 0ULL : t3 ]
= t4 > X_idx_18 ? X_idx_18 : t4 ; } t4 = t1 [ 0ULL ] > X_idx_60 ? t1 [ 0ULL ]
: X_idx_60 ; X_idx_18 = X_idx_61 * 1.0E-6 + X_idx_19 ; X_idx_56 = pmf_sqrt (
X_idx_6 * X_idx_6 + 0.010000000000000002 ) ; t0 [ 0ULL ] = ( int32_T ) (
X_idx_58 >= 0.0 ) ; t0 [ 1ULL ] = ( int32_T ) ( X_idx_58 <= 1.0 ) ; t0 [ 2ULL
] = ( int32_T ) ( t12 >= 268.79999999999995 ) ; t0 [ 3ULL ] = ( int32_T ) (
t12 <= pmf_get_inf ( ) ) ; t0 [ 4ULL ] = ( int32_T ) ( M_idx_4 != 0 ) ; t0 [
5ULL ] = ( int32_T ) ( M_idx_5 != 0 ) ; t0 [ 6ULL ] = ( int32_T ) ( M_idx_6
!= 0 ) ; t0 [ 7ULL ] = ( int32_T ) ( M_idx_7 != 0 ) ; t0 [ 8ULL ] = ( int32_T
) ( U_idx_8 >= 0.0 ) ; t0 [ 9ULL ] = ( int32_T ) ( M_idx_8 != 0 ) ; t0 [
10ULL ] = ( int32_T ) ( M_idx_9 != 0 ) ; t0 [ 11ULL ] = 1 ; t0 [ 12ULL ] = 1
; t0 [ 13ULL ] = 1 ; t0 [ 14ULL ] = 1 ; t0 [ 15ULL ] = 1 ; t0 [ 16ULL ] = 1 ;
t0 [ 17ULL ] = 1 ; t0 [ 18ULL ] = 1 ; t0 [ 19ULL ] = 1 ; t0 [ 20ULL ] = 1 ;
t0 [ 21ULL ] = 1 ; t0 [ 22ULL ] = 1 ; t0 [ 23ULL ] = 1 ; t0 [ 24ULL ] = 1 ;
t0 [ 25ULL ] = 1 ; t0 [ 26ULL ] = 1 ; t0 [ 27ULL ] = 1 ; t0 [ 28ULL ] = 1 ;
t0 [ 29ULL ] = 1 ; t0 [ 30ULL ] = 1 ; t0 [ 31ULL ] = 1 ; t0 [ 32ULL ] = 1 ;
t0 [ 33ULL ] = 1 ; t0 [ 34ULL ] = 1 ; t0 [ 35ULL ] = 1 ; t0 [ 36ULL ] = 1 ;
t0 [ 37ULL ] = 1 ; t0 [ 38ULL ] = 1 ; t0 [ 39ULL ] = 1 ; t0 [ 40ULL ] = 1 ;
t0 [ 41ULL ] = 1 ; t0 [ 42ULL ] = 1 ; t0 [ 43ULL ] = 1 ; t0 [ 44ULL ] = 1 ;
t0 [ 45ULL ] = 1 ; t0 [ 46ULL ] = 1 ; t0 [ 47ULL ] = 1 ; t0 [ 48ULL ] = 1 ;
t0 [ 49ULL ] = 1 ; t0 [ 50ULL ] = 1 ; t0 [ 51ULL ] = ( int32_T ) ( ( X_idx_6
* X_idx_6 + 0.010000000000000002 == X_idx_6 * X_idx_6 + 0.010000000000000002
) && ( fabs ( X_idx_6 * X_idx_6 + 0.010000000000000002 ) != pmf_get_inf ( ) )
) ; t0 [ 52ULL ] = ( int32_T ) ( ( ! ( X_idx_6 * X_idx_6 +
0.010000000000000002 == X_idx_6 * X_idx_6 + 0.010000000000000002 ) ) || ( ! (
fabs ( X_idx_6 * X_idx_6 + 0.010000000000000002 ) != pmf_get_inf ( ) ) ) || (
X_idx_6 * X_idx_6 + 0.010000000000000002 >= 0.0 ) ) ; t0 [ 53ULL ] = 1 ; t0 [
54ULL ] = 1 ; t0 [ 55ULL ] = ( int32_T ) ( ( X_idx_6 * X_idx_6 +
0.010000000000000002 == X_idx_6 * X_idx_6 + 0.010000000000000002 ) && ( fabs
( X_idx_6 * X_idx_6 + 0.010000000000000002 ) != pmf_get_inf ( ) ) ) ; t0 [
56ULL ] = ( int32_T ) ( ( ! ( X_idx_6 * X_idx_6 + 0.010000000000000002 ==
X_idx_6 * X_idx_6 + 0.010000000000000002 ) ) || ( ! ( fabs ( X_idx_6 *
X_idx_6 + 0.010000000000000002 ) != pmf_get_inf ( ) ) ) || ( X_idx_6 *
X_idx_6 + 0.010000000000000002 >= 0.0 ) ) ; t0 [ 57ULL ] = 1 ; t0 [ 58ULL ] =
1 ; t0 [ 59ULL ] = ( int32_T ) ( ( X_idx_6 * X_idx_6 + 0.010000000000000002
== X_idx_6 * X_idx_6 + 0.010000000000000002 ) && ( fabs ( X_idx_6 * X_idx_6 +
0.010000000000000002 ) != pmf_get_inf ( ) ) ) ; t0 [ 60ULL ] = ( int32_T ) (
( ! ( X_idx_6 * X_idx_6 + 0.010000000000000002 == X_idx_6 * X_idx_6 +
0.010000000000000002 ) ) || ( ! ( fabs ( X_idx_6 * X_idx_6 +
0.010000000000000002 ) != pmf_get_inf ( ) ) ) || ( X_idx_6 * X_idx_6 +
0.010000000000000002 >= 0.0 ) ) ; t0 [ 61ULL ] = 1 ; t0 [ 62ULL ] = 1 ; t0 [
63ULL ] = ( int32_T ) ( ( X_idx_6 * X_idx_6 + 0.010000000000000002 == X_idx_6
* X_idx_6 + 0.010000000000000002 ) && ( fabs ( X_idx_6 * X_idx_6 +
0.010000000000000002 ) != pmf_get_inf ( ) ) ) ; t0 [ 64ULL ] = ( int32_T ) (
( ! ( X_idx_6 * X_idx_6 + 0.010000000000000002 == X_idx_6 * X_idx_6 +
0.010000000000000002 ) ) || ( ! ( fabs ( X_idx_6 * X_idx_6 +
0.010000000000000002 ) != pmf_get_inf ( ) ) ) || ( X_idx_6 * X_idx_6 +
0.010000000000000002 >= 0.0 ) ) ; t0 [ 65ULL ] = ( int32_T ) ( t4 != 0.0 ) ;
t0 [ 66ULL ] = 1 ; t0 [ 67ULL ] = 1 ; t0 [ 68ULL ] = ( int32_T ) ( - (
X_idx_0 / 0.14142135623730953 * ( X_idx_0 / 0.14142135623730953 ) ) <
663.67513503334737 ) ; t0 [ 69ULL ] = 1 ; t0 [ 70ULL ] = 1 ; t0 [ 71ULL ] = (
int32_T ) ( - ( X_idx_2 / 0.14142135623730953 * ( X_idx_2 /
0.14142135623730953 ) ) < 663.67513503334737 ) ; t0 [ 72ULL ] = 1 ; t0 [
73ULL ] = 1 ; t0 [ 74ULL ] = ( int32_T ) ( - ( X_idx_3 / 0.14142135623730953
* ( X_idx_3 / 0.14142135623730953 ) ) < 663.67513503334737 ) ; t0 [ 75ULL ] =
1 ; t0 [ 76ULL ] = 1 ; t0 [ 77ULL ] = ( int32_T ) ( - ( X_idx_5 /
0.14142135623730953 * ( X_idx_5 / 0.14142135623730953 ) ) <
663.67513503334737 ) ; t0 [ 78ULL ] = 1 ; t0 [ 79ULL ] = 1 ; t0 [ 80ULL ] = 1
; t0 [ 81ULL ] = 1 ; t0 [ 82ULL ] = 1 ; t0 [ 83ULL ] = 1 ; t0 [ 84ULL ] = (
int32_T ) ( X_idx_56 != 0.0 ) ; t0 [ 85ULL ] = 1 ; t0 [ 86ULL ] = 1 ; t0 [
87ULL ] = 1 ; t0 [ 88ULL ] = 1 ; t0 [ 89ULL ] = 1 ; t0 [ 90ULL ] = 1 ; t0 [
91ULL ] = ( int32_T ) ( X_idx_56 != 0.0 ) ; t0 [ 92ULL ] = 1 ; t0 [ 93ULL ] =
1 ; t0 [ 94ULL ] = 1 ; t0 [ 95ULL ] = 1 ; t0 [ 96ULL ] = 1 ; t0 [ 97ULL ] = 1
; t0 [ 98ULL ] = ( int32_T ) ( X_idx_56 != 0.0 ) ; t0 [ 99ULL ] = 1 ; t0 [
100ULL ] = 1 ; t0 [ 101ULL ] = 1 ; t0 [ 102ULL ] = 1 ; t0 [ 103ULL ] = 1 ; t0
[ 104ULL ] = 1 ; t0 [ 105ULL ] = ( int32_T ) ( X_idx_56 != 0.0 ) ; t0 [
106ULL ] = 1 ; t0 [ 107ULL ] = 1 ; t0 [ 108ULL ] = 1 ; t0 [ 109ULL ] = 1 ; t0
[ 110ULL ] = ( int32_T ) ( t4 != 0.0 ) ; t0 [ 111ULL ] = ( int32_T ) (
X_idx_18 != 0.0 ) ; t0 [ 112ULL ] = ( int32_T ) ( X_idx_18 != 0.0 ) ; for (
M_idx_4 = 0 ; M_idx_4 < 113 ; M_idx_4 ++ ) { out . mX [ M_idx_4 ] = t0 [
M_idx_4 ] ; } ( void ) LC ; ( void ) t14 ; return 0 ; }
