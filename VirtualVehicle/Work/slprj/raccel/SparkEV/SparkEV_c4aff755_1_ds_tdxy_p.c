#include "ne_ds.h"
#include "SparkEV_c4aff755_1_ds_sys_struct.h"
#include "SparkEV_c4aff755_1_ds_tdxy_p.h"
#include "SparkEV_c4aff755_1_ds.h"
#include "SparkEV_c4aff755_1_ds_externals.h"
#include "SparkEV_c4aff755_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T SparkEV_c4aff755_1_ds_tdxy_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; ( void ) LC ; out = t2 -> mTDXY_P ; out . mNumCol = 66ULL ; out
. mNumRow = 28ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 2 ; out . mJc [ 2
] = 6 ; out . mJc [ 3 ] = 7 ; out . mJc [ 4 ] = 9 ; out . mJc [ 5 ] = 13 ;
out . mJc [ 6 ] = 14 ; out . mJc [ 7 ] = 15 ; out . mJc [ 8 ] = 15 ; out .
mJc [ 9 ] = 15 ; out . mJc [ 10 ] = 15 ; out . mJc [ 11 ] = 15 ; out . mJc [
12 ] = 15 ; out . mJc [ 13 ] = 15 ; out . mJc [ 14 ] = 15 ; out . mJc [ 15 ]
= 15 ; out . mJc [ 16 ] = 15 ; out . mJc [ 17 ] = 15 ; out . mJc [ 18 ] = 15
; out . mJc [ 19 ] = 16 ; out . mJc [ 20 ] = 18 ; out . mJc [ 21 ] = 18 ; out
. mJc [ 22 ] = 18 ; out . mJc [ 23 ] = 18 ; out . mJc [ 24 ] = 18 ; out . mJc
[ 25 ] = 19 ; out . mJc [ 26 ] = 19 ; out . mJc [ 27 ] = 19 ; out . mJc [ 28
] = 20 ; out . mJc [ 29 ] = 20 ; out . mJc [ 30 ] = 20 ; out . mJc [ 31 ] =
21 ; out . mJc [ 32 ] = 21 ; out . mJc [ 33 ] = 21 ; out . mJc [ 34 ] = 22 ;
out . mJc [ 35 ] = 23 ; out . mJc [ 36 ] = 24 ; out . mJc [ 37 ] = 24 ; out .
mJc [ 38 ] = 25 ; out . mJc [ 39 ] = 25 ; out . mJc [ 40 ] = 25 ; out . mJc [
41 ] = 25 ; out . mJc [ 42 ] = 25 ; out . mJc [ 43 ] = 25 ; out . mJc [ 44 ]
= 25 ; out . mJc [ 45 ] = 25 ; out . mJc [ 46 ] = 26 ; out . mJc [ 47 ] = 27
; out . mJc [ 48 ] = 28 ; out . mJc [ 49 ] = 28 ; out . mJc [ 50 ] = 29 ; out
. mJc [ 51 ] = 29 ; out . mJc [ 52 ] = 29 ; out . mJc [ 53 ] = 30 ; out . mJc
[ 54 ] = 30 ; out . mJc [ 55 ] = 31 ; out . mJc [ 56 ] = 31 ; out . mJc [ 57
] = 32 ; out . mJc [ 58 ] = 32 ; out . mJc [ 59 ] = 33 ; out . mJc [ 60 ] =
33 ; out . mJc [ 61 ] = 33 ; out . mJc [ 62 ] = 35 ; out . mJc [ 63 ] = 36 ;
out . mJc [ 64 ] = 37 ; out . mJc [ 65 ] = 37 ; out . mJc [ 66 ] = 37 ; out .
mIr [ 0 ] = 10 ; out . mIr [ 1 ] = 11 ; out . mIr [ 2 ] = 11 ; out . mIr [ 3
] = 15 ; out . mIr [ 4 ] = 17 ; out . mIr [ 5 ] = 24 ; out . mIr [ 6 ] = 7 ;
out . mIr [ 7 ] = 8 ; out . mIr [ 8 ] = 14 ; out . mIr [ 9 ] = 14 ; out . mIr
[ 10 ] = 16 ; out . mIr [ 11 ] = 18 ; out . mIr [ 12 ] = 27 ; out . mIr [ 13
] = 9 ; out . mIr [ 14 ] = 0 ; out . mIr [ 15 ] = 21 ; out . mIr [ 16 ] = 23
; out . mIr [ 17 ] = 26 ; out . mIr [ 18 ] = 11 ; out . mIr [ 19 ] = 12 ; out
. mIr [ 20 ] = 14 ; out . mIr [ 21 ] = 13 ; out . mIr [ 22 ] = 1 ; out . mIr
[ 23 ] = 4 ; out . mIr [ 24 ] = 2 ; out . mIr [ 25 ] = 3 ; out . mIr [ 26 ] =
5 ; out . mIr [ 27 ] = 6 ; out . mIr [ 28 ] = 24 ; out . mIr [ 29 ] = 27 ;
out . mIr [ 30 ] = 20 ; out . mIr [ 31 ] = 21 ; out . mIr [ 32 ] = 19 ; out .
mIr [ 33 ] = 23 ; out . mIr [ 34 ] = 26 ; out . mIr [ 35 ] = 22 ; out . mIr [
36 ] = 25 ; ( void ) LC ; ( void ) t2 ; return 0 ; }
