#include "ne_ds.h"
#include "SparkEV_c4aff755_1_ds_sys_struct.h"
#include "SparkEV_c4aff755_1_ds_dnf_p.h"
#include "SparkEV_c4aff755_1_ds.h"
#include "SparkEV_c4aff755_1_ds_externals.h"
#include "SparkEV_c4aff755_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T SparkEV_c4aff755_1_ds_dnf_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; ( void ) LC ; out = t2 -> mDNF_P ; out . mNumCol = 56ULL ; out
. mNumRow = 66ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2
] = 2 ; out . mJc [ 3 ] = 3 ; out . mJc [ 4 ] = 3 ; out . mJc [ 5 ] = 3 ; out
. mJc [ 6 ] = 3 ; out . mJc [ 7 ] = 3 ; out . mJc [ 8 ] = 5 ; out . mJc [ 9 ]
= 5 ; out . mJc [ 10 ] = 5 ; out . mJc [ 11 ] = 5 ; out . mJc [ 12 ] = 5 ;
out . mJc [ 13 ] = 5 ; out . mJc [ 14 ] = 5 ; out . mJc [ 15 ] = 5 ; out .
mJc [ 16 ] = 5 ; out . mJc [ 17 ] = 5 ; out . mJc [ 18 ] = 5 ; out . mJc [ 19
] = 7 ; out . mJc [ 20 ] = 7 ; out . mJc [ 21 ] = 7 ; out . mJc [ 22 ] = 7 ;
out . mJc [ 23 ] = 7 ; out . mJc [ 24 ] = 7 ; out . mJc [ 25 ] = 7 ; out .
mJc [ 26 ] = 7 ; out . mJc [ 27 ] = 7 ; out . mJc [ 28 ] = 9 ; out . mJc [ 29
] = 9 ; out . mJc [ 30 ] = 9 ; out . mJc [ 31 ] = 11 ; out . mJc [ 32 ] = 11
; out . mJc [ 33 ] = 12 ; out . mJc [ 34 ] = 12 ; out . mJc [ 35 ] = 14 ; out
. mJc [ 36 ] = 14 ; out . mJc [ 37 ] = 14 ; out . mJc [ 38 ] = 15 ; out . mJc
[ 39 ] = 17 ; out . mJc [ 40 ] = 17 ; out . mJc [ 41 ] = 17 ; out . mJc [ 42
] = 17 ; out . mJc [ 43 ] = 17 ; out . mJc [ 44 ] = 17 ; out . mJc [ 45 ] =
17 ; out . mJc [ 46 ] = 17 ; out . mJc [ 47 ] = 17 ; out . mJc [ 48 ] = 17 ;
out . mJc [ 49 ] = 17 ; out . mJc [ 50 ] = 17 ; out . mJc [ 51 ] = 17 ; out .
mJc [ 52 ] = 17 ; out . mJc [ 53 ] = 17 ; out . mJc [ 54 ] = 17 ; out . mJc [
55 ] = 17 ; out . mJc [ 56 ] = 17 ; out . mIr [ 0 ] = 30 ; out . mIr [ 1 ] =
31 ; out . mIr [ 2 ] = 59 ; out . mIr [ 3 ] = 38 ; out . mIr [ 4 ] = 39 ; out
. mIr [ 5 ] = 42 ; out . mIr [ 6 ] = 43 ; out . mIr [ 7 ] = 26 ; out . mIr [
8 ] = 27 ; out . mIr [ 9 ] = 49 ; out . mIr [ 10 ] = 50 ; out . mIr [ 11 ] =
48 ; out . mIr [ 12 ] = 45 ; out . mIr [ 13 ] = 46 ; out . mIr [ 14 ] = 44 ;
out . mIr [ 15 ] = 34 ; out . mIr [ 16 ] = 35 ; ( void ) LC ; ( void ) t2 ;
return 0 ; }
