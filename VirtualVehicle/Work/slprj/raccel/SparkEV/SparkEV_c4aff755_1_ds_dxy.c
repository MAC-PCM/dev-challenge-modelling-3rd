#include "ne_ds.h"
#include "SparkEV_c4aff755_1_ds_sys_struct.h"
#include "SparkEV_c4aff755_1_ds_dxy.h"
#include "SparkEV_c4aff755_1_ds.h"
#include "SparkEV_c4aff755_1_ds_externals.h"
#include "SparkEV_c4aff755_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T SparkEV_c4aff755_1_ds_dxy ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t23 , NeDsMethodOutput * t24 ) { PmRealVector out ;
real_T t0 [ 37 ] ; real_T t2 [ 4 ] ; real_T t4 [ 4 ] ; size_t t10 ; ( void )
t23 ; ( void ) LC ; out = t24 -> mDXY ; t2 [ 0ULL ] = 0.00051679586563307489
; t2 [ 1ULL ] = 1.0 ; t2 [ 2ULL ] = 1.0 ; t2 [ 3ULL ] = - 0.001 ; t4 [ 0ULL ]
= 0.00051679586563307489 ; t4 [ 1ULL ] = 1.0 ; t4 [ 2ULL ] = 1.0 ; t4 [ 3ULL
] = - 0.001 ; t0 [ 0ULL ] = 1.0 ; t0 [ 1ULL ] = - 0.002 ; for ( t10 = 0ULL ;
t10 < 4ULL ; t10 ++ ) { t0 [ t10 + 2ULL ] = t2 [ t10 ] ; } t0 [ 6ULL ] = 1.0
; t0 [ 7ULL ] = 1.0 ; t0 [ 8ULL ] = - 0.002 ; for ( t10 = 0ULL ; t10 < 4ULL ;
t10 ++ ) { t0 [ t10 + 9ULL ] = t4 [ t10 ] ; } out . mX [ 0 ] = t0 [ 0 ] ; out
. mX [ 1 ] = t0 [ 1 ] ; out . mX [ 2 ] = t0 [ 2 ] ; out . mX [ 3 ] = t0 [ 3 ]
; out . mX [ 4 ] = t0 [ 4 ] ; out . mX [ 5 ] = t0 [ 5 ] ; out . mX [ 6 ] = t0
[ 6 ] ; out . mX [ 7 ] = t0 [ 7 ] ; out . mX [ 8 ] = t0 [ 8 ] ; out . mX [ 9
] = t0 [ 9 ] ; out . mX [ 10 ] = t0 [ 10 ] ; out . mX [ 11 ] = t0 [ 11 ] ;
out . mX [ 12 ] = t0 [ 12 ] ; out . mX [ 13 ] = 1.0 ; out . mX [ 14 ] = 1.0 ;
out . mX [ 15 ] = 1.0 ; out . mX [ 16 ] = 1.0 ; out . mX [ 17 ] = 1.0 ; out .
mX [ 18 ] = - 1.0 ; out . mX [ 19 ] = 1.0 ; out . mX [ 20 ] = - 1.0 ; out .
mX [ 21 ] = 1.0 ; out . mX [ 22 ] = 1.0 ; out . mX [ 23 ] = 1.0 ; out . mX [
24 ] = 1.0 ; out . mX [ 25 ] = 1.0 ; out . mX [ 26 ] = 1.0 ; out . mX [ 27 ]
= 1.0 ; out . mX [ 28 ] = 1.0 ; out . mX [ 29 ] = 1.0 ; out . mX [ 30 ] = -
1.0 ; out . mX [ 31 ] = 1.0E-6 ; out . mX [ 32 ] = 1.0 ; out . mX [ 33 ] =
1.0E-6 ; out . mX [ 34 ] = 1.0E-6 ; out . mX [ 35 ] = 1.0 ; out . mX [ 36 ] =
1.0 ; ( void ) LC ; ( void ) t24 ; return 0 ; }
