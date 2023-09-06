#include "ne_ds.h"
#include "SparkEV_c4aff755_1_ds_sys_struct.h"
#include "SparkEV_c4aff755_1_ds_m_p.h"
#include "SparkEV_c4aff755_1_ds.h"
#include "SparkEV_c4aff755_1_ds_externals.h"
#include "SparkEV_c4aff755_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T SparkEV_c4aff755_1_ds_m_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; ( void ) LC ; out = t2 -> mM_P ; out . mNumCol = 66ULL ; out .
mNumRow = 66ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 1 ; out . mJc [ 2 ]
= 2 ; out . mJc [ 3 ] = 3 ; out . mJc [ 4 ] = 4 ; out . mJc [ 5 ] = 5 ; out .
mJc [ 6 ] = 6 ; out . mJc [ 7 ] = 7 ; out . mJc [ 8 ] = 8 ; out . mJc [ 9 ] =
9 ; out . mJc [ 10 ] = 10 ; out . mJc [ 11 ] = 11 ; out . mJc [ 12 ] = 12 ;
out . mJc [ 13 ] = 13 ; out . mJc [ 14 ] = 14 ; out . mJc [ 15 ] = 15 ; out .
mJc [ 16 ] = 16 ; out . mJc [ 17 ] = 17 ; out . mJc [ 18 ] = 18 ; out . mJc [
19 ] = 19 ; out . mJc [ 20 ] = 20 ; out . mJc [ 21 ] = 21 ; out . mJc [ 22 ]
= 22 ; out . mJc [ 23 ] = 22 ; out . mJc [ 24 ] = 22 ; out . mJc [ 25 ] = 22
; out . mJc [ 26 ] = 22 ; out . mJc [ 27 ] = 22 ; out . mJc [ 28 ] = 22 ; out
. mJc [ 29 ] = 22 ; out . mJc [ 30 ] = 22 ; out . mJc [ 31 ] = 22 ; out . mJc
[ 32 ] = 22 ; out . mJc [ 33 ] = 22 ; out . mJc [ 34 ] = 22 ; out . mJc [ 35
] = 22 ; out . mJc [ 36 ] = 22 ; out . mJc [ 37 ] = 22 ; out . mJc [ 38 ] =
22 ; out . mJc [ 39 ] = 22 ; out . mJc [ 40 ] = 22 ; out . mJc [ 41 ] = 22 ;
out . mJc [ 42 ] = 22 ; out . mJc [ 43 ] = 22 ; out . mJc [ 44 ] = 22 ; out .
mJc [ 45 ] = 22 ; out . mJc [ 46 ] = 22 ; out . mJc [ 47 ] = 22 ; out . mJc [
48 ] = 22 ; out . mJc [ 49 ] = 22 ; out . mJc [ 50 ] = 22 ; out . mJc [ 51 ]
= 22 ; out . mJc [ 52 ] = 22 ; out . mJc [ 53 ] = 22 ; out . mJc [ 54 ] = 22
; out . mJc [ 55 ] = 22 ; out . mJc [ 56 ] = 22 ; out . mJc [ 57 ] = 22 ; out
. mJc [ 58 ] = 22 ; out . mJc [ 59 ] = 22 ; out . mJc [ 60 ] = 22 ; out . mJc
[ 61 ] = 22 ; out . mJc [ 62 ] = 22 ; out . mJc [ 63 ] = 22 ; out . mJc [ 64
] = 22 ; out . mJc [ 65 ] = 22 ; out . mJc [ 66 ] = 22 ; out . mIr [ 0 ] = 1
; out . mIr [ 1 ] = 11 ; out . mIr [ 2 ] = 2 ; out . mIr [ 3 ] = 3 ; out .
mIr [ 4 ] = 12 ; out . mIr [ 5 ] = 4 ; out . mIr [ 6 ] = 0 ; out . mIr [ 7 ]
= 5 ; out . mIr [ 8 ] = 6 ; out . mIr [ 9 ] = 7 ; out . mIr [ 10 ] = 8 ; out
. mIr [ 11 ] = 9 ; out . mIr [ 12 ] = 10 ; out . mIr [ 13 ] = 13 ; out . mIr
[ 14 ] = 14 ; out . mIr [ 15 ] = 17 ; out . mIr [ 16 ] = 15 ; out . mIr [ 17
] = 16 ; out . mIr [ 18 ] = 18 ; out . mIr [ 19 ] = 19 ; out . mIr [ 20 ] =
20 ; out . mIr [ 21 ] = 21 ; ( void ) LC ; ( void ) t2 ; return 0 ; }
