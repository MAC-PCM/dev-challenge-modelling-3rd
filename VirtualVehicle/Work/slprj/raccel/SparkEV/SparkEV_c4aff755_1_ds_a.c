#include "ne_ds.h"
#include "SparkEV_c4aff755_1_ds_sys_struct.h"
#include "SparkEV_c4aff755_1_ds_a.h"
#include "SparkEV_c4aff755_1_ds.h"
#include "SparkEV_c4aff755_1_ds_externals.h"
#include "SparkEV_c4aff755_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T SparkEV_c4aff755_1_ds_a ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t150 , NeDsMethodOutput * t151 ) { PmRealVector out ;
real_T t0 [ 110 ] ; real_T t2 [ 5 ] ; real_T t5 [ 5 ] ; real_T t1 [ 4 ] ;
real_T t14 [ 4 ] ; real_T t20 [ 4 ] ; real_T t21 [ 4 ] ; real_T t4 [ 4 ] ;
real_T t138 ; real_T t144 ; size_t t57 ; int32_T b ; ( void ) t150 ; ( void )
LC ; out = t151 -> mA ; t1 [ 0ULL ] = 1.0 ; t1 [ 1ULL ] = - 0.003 ; t1 [ 2ULL
] = - 0.000516690418608869 ; t1 [ 3ULL ] = - 1.0 ; t2 [ 0ULL ] = 1.0 ; t2 [
1ULL ] = 1.0 ; t2 [ 2ULL ] = 0.00051679586563307489 ; t138 =
0.0082567958656330747 ; t2 [ 3ULL ] = t138 / 3.8707897959183675 ; t2 [ 4ULL ]
= 0.51679586563307489 ; t4 [ 0ULL ] = 1.0 ; t4 [ 1ULL ] = - 0.003 ; t4 [ 2ULL
] = - 0.000516690418608869 ; t4 [ 3ULL ] = - 1.0 ; t5 [ 0ULL ] = 1.0 ; t5 [
1ULL ] = 1.0 ; t5 [ 2ULL ] = 0.00051679586563307489 ; t5 [ 3ULL ] = t138 /
3.8707897959183675 ; t5 [ 4ULL ] = 0.51679586563307489 ; t14 [ 0ULL ] = 1.0 ;
t14 [ 1ULL ] = 0.2583452093044345 ; t14 [ 2ULL ] = 0.99979596000816173 ; t14
[ 3ULL ] = - 1.0 ; t20 [ 0ULL ] = 1.0 ; t20 [ 1ULL ] = 0.2583452093044345 ;
t20 [ 2ULL ] = 0.99979596000816173 ; t20 [ 3ULL ] = - 1.0 ; t21 [ 0ULL ] = -
0.00066137566137566134 ; t21 [ 1ULL ] = 0.10033693548387096 ; t21 [ 2ULL ] =
- 0.10033693548387096 ; t21 [ 3ULL ] = - 1.0 ; t138 = 3.87 ; t144 = - 3.87 ;
for ( t57 = 0ULL ; t57 < 4ULL ; t57 ++ ) { t0 [ t57 ] = t1 [ t57 ] ; } for (
t57 = 0ULL ; t57 < 5ULL ; t57 ++ ) { t0 [ t57 + 4ULL ] = t2 [ t57 ] ; } t0 [
9ULL ] = 1.0 ; t0 [ 10ULL ] = - 0.001 ; t0 [ 11ULL ] = - 1.0 ; for ( t57 =
0ULL ; t57 < 4ULL ; t57 ++ ) { t0 [ t57 + 12ULL ] = t4 [ t57 ] ; } for ( t57
= 0ULL ; t57 < 5ULL ; t57 ++ ) { t0 [ t57 + 16ULL ] = t5 [ t57 ] ; } t0 [
21ULL ] = 1.0 ; t0 [ 22ULL ] = - 0.001 ; t0 [ 23ULL ] = - 1.0 ; t0 [ 24ULL ]
= - 3.3602150537634409E-5 ; t0 [ 25ULL ] = - 0.0 ; t0 [ 26ULL ] = 1.0 ; t0 [
27ULL ] = - 0.0 ; t0 [ 28ULL ] = 1.0 ; t0 [ 29ULL ] = - 1.0 ; t0 [ 30ULL ] =
- 1.0 ; t0 [ 31ULL ] = - 1.0 ; t0 [ 32ULL ] = - 1.0 ; t0 [ 33ULL ] = -
0.2598801 ; t0 [ 34ULL ] = 1.0 ; t0 [ 35ULL ] = - 1.0 ; t0 [ 36ULL ] =
0.99979596000816173 ; t0 [ 37ULL ] = - 1.0 ; t0 [ 38ULL ] = - 1.0 ; t0 [
39ULL ] = - 0.2598801 ; t0 [ 40ULL ] = 1.0 ; for ( t57 = 0ULL ; t57 < 4ULL ;
t57 ++ ) { t0 [ t57 + 41ULL ] = t14 [ t57 ] ; } t0 [ 45ULL ] = - 1.0 ; t0 [
46ULL ] = - 1.0 ; t0 [ 47ULL ] = - 0.2598801 ; t0 [ 48ULL ] = 1.0 ; t0 [
49ULL ] = - 1.0 ; t0 [ 50ULL ] = 0.99979596000816173 ; t0 [ 51ULL ] = - 1.0 ;
t0 [ 52ULL ] = - 1.0 ; t0 [ 53ULL ] = - 0.2598801 ; t0 [ 54ULL ] = 1.0 ; for
( t57 = 0ULL ; t57 < 4ULL ; t57 ++ ) { t0 [ t57 + 55ULL ] = t20 [ t57 ] ; }
t0 [ 59ULL ] = 1.0 ; t0 [ 60ULL ] = 1.0 ; for ( t57 = 0ULL ; t57 < 4ULL ; t57
++ ) { t0 [ t57 + 61ULL ] = t21 [ t57 ] ; } t0 [ 65ULL ] = 0.1 ; t0 [ 66ULL ]
= - 1.0 ; t0 [ 67ULL ] = 1.0 ; t0 [ 68ULL ] = - 1.0 ; t0 [ 69ULL ] = 1.0 ; t0
[ 70ULL ] = - 1.0 ; t0 [ 71ULL ] = 1.0 ; t0 [ 72ULL ] = - 1.0 ; t0 [ 73ULL ]
= 1.0 ; t0 [ 74ULL ] = - 1.0 ; t0 [ 75ULL ] = 1.0 ; t0 [ 76ULL ] = - 1.0 ; t0
[ 77ULL ] = 1.0 ; t0 [ 78ULL ] = - 1.0 ; t0 [ 79ULL ] = 1.0 ; t0 [ 80ULL ] =
0.1 ; t0 [ 81ULL ] = 0.1 ; t0 [ 82ULL ] = 0.1 ; t0 [ 83ULL ] = - 1.0 ; t0 [
84ULL ] = t138 / 3.8707897959183675 ; t0 [ 85ULL ] = t144 /
3.8707897959183675 ; t0 [ 86ULL ] = - 0.0 ; t0 [ 87ULL ] = 0.2583452093044345
; t0 [ 88ULL ] = 1.0 ; t0 [ 89ULL ] = - 1.0 ; t0 [ 90ULL ] = t138 /
3.8707897959183675 ; t0 [ 91ULL ] = t144 / 3.8707897959183675 ; t0 [ 92ULL ]
= - 0.0 ; t0 [ 93ULL ] = 0.2583452093044345 ; t0 [ 94ULL ] = 1.0 ; t0 [ 95ULL
] = 1.0 ; t0 [ 96ULL ] = 0.0026238455079764891 ; t0 [ 97ULL ] = - 1.0 ; t0 [
98ULL ] = 1.0E-6 ; t0 [ 99ULL ] = 0.0033602150537634405 ; t0 [ 100ULL ] = 1.0
; t0 [ 101ULL ] = 1.0 ; t0 [ 102ULL ] = 1.0 ; t0 [ 103ULL ] = 1.0 ; t0 [
104ULL ] = - 1.0 ; t0 [ 105ULL ] = 1.0E-6 ; t0 [ 106ULL ] = 1.0 ; t0 [ 107ULL
] = 1.0 ; t0 [ 108ULL ] = 1.0 ; t0 [ 109ULL ] = 1.0 ; for ( b = 0 ; b < 110 ;
b ++ ) { out . mX [ b ] = t0 [ b ] ; } ( void ) LC ; ( void ) t151 ; return 0
; }
