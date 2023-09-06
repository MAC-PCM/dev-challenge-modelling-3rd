#include "ne_ds.h"
#include "SparkEV_c4aff755_1_ds_sys_struct.h"
#include "SparkEV_c4aff755_1_ds_vmf.h"
#include "SparkEV_c4aff755_1_ds.h"
#include "SparkEV_c4aff755_1_ds_externals.h"
#include "SparkEV_c4aff755_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T SparkEV_c4aff755_1_ds_vmf ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmBoolVector out ; (
void ) t1 ; ( void ) LC ; out = t2 -> mVMF ; out . mX [ 0 ] = true ; out . mX
[ 1 ] = false ; out . mX [ 2 ] = false ; out . mX [ 3 ] = false ; out . mX [
4 ] = false ; out . mX [ 5 ] = false ; out . mX [ 6 ] = false ; out . mX [ 7
] = false ; out . mX [ 8 ] = false ; out . mX [ 9 ] = false ; out . mX [ 10 ]
= false ; out . mX [ 11 ] = false ; out . mX [ 12 ] = false ; out . mX [ 13 ]
= false ; out . mX [ 14 ] = false ; out . mX [ 15 ] = true ; out . mX [ 16 ]
= true ; out . mX [ 17 ] = false ; out . mX [ 18 ] = false ; out . mX [ 19 ]
= false ; out . mX [ 20 ] = false ; out . mX [ 21 ] = false ; out . mX [ 22 ]
= true ; out . mX [ 23 ] = true ; out . mX [ 24 ] = true ; out . mX [ 25 ] =
true ; out . mX [ 26 ] = true ; out . mX [ 27 ] = true ; out . mX [ 28 ] =
true ; out . mX [ 29 ] = true ; out . mX [ 30 ] = true ; out . mX [ 31 ] =
true ; out . mX [ 32 ] = true ; out . mX [ 33 ] = true ; out . mX [ 34 ] =
true ; out . mX [ 35 ] = true ; out . mX [ 36 ] = true ; out . mX [ 37 ] =
true ; out . mX [ 38 ] = true ; out . mX [ 39 ] = true ; out . mX [ 40 ] =
true ; out . mX [ 41 ] = true ; out . mX [ 42 ] = true ; out . mX [ 43 ] =
true ; out . mX [ 44 ] = true ; out . mX [ 45 ] = true ; out . mX [ 46 ] =
true ; out . mX [ 47 ] = false ; out . mX [ 48 ] = true ; out . mX [ 49 ] =
true ; out . mX [ 50 ] = true ; out . mX [ 51 ] = false ; out . mX [ 52 ] =
true ; out . mX [ 53 ] = true ; out . mX [ 54 ] = true ; out . mX [ 55 ] =
true ; out . mX [ 56 ] = true ; out . mX [ 57 ] = true ; out . mX [ 58 ] =
true ; out . mX [ 59 ] = true ; out . mX [ 60 ] = true ; out . mX [ 61 ] =
true ; out . mX [ 62 ] = true ; out . mX [ 63 ] = true ; out . mX [ 64 ] =
true ; out . mX [ 65 ] = true ; ( void ) LC ; ( void ) t2 ; return 0 ; }
