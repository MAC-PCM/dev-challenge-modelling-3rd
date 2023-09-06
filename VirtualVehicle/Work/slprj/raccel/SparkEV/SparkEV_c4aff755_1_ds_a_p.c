#include "ne_ds.h"
#include "SparkEV_c4aff755_1_ds_sys_struct.h"
#include "SparkEV_c4aff755_1_ds_a_p.h"
#include "SparkEV_c4aff755_1_ds.h"
#include "SparkEV_c4aff755_1_ds_externals.h"
#include "SparkEV_c4aff755_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T SparkEV_c4aff755_1_ds_a_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { static int32_T
_cg_const_2 [ 110 ] = { 8 , 22 , 44 , 47 , 9 , 13 , 22 , 44 , 47 , 5 , 23 ,
47 , 6 , 24 , 48 , 51 , 10 , 14 , 24 , 48 , 51 , 7 , 25 , 51 , 17 , 18 , 54 ,
19 , 59 , 20 , 21 , 1 , 22 , 22 , 30 , 22 , 45 , 2 , 23 , 23 , 34 , 23 , 44 ,
45 , 46 , 3 , 24 , 24 , 38 , 24 , 49 , 4 , 25 , 25 , 42 , 25 , 48 , 49 , 50 ,
26 , 27 , 0 , 26 , 27 , 28 , 29 , 28 , 31 , 28 , 32 , 28 , 35 , 28 , 36 , 28
, 39 , 28 , 40 , 28 , 43 , 33 , 37 , 41 , 11 , 44 , 44 , 60 , 44 , 46 , 12 ,
48 , 48 , 63 , 48 , 50 , 15 , 52 , 18 , 54 , 17 , 55 , 56 , 57 , 53 , 19 , 59
, 61 , 64 , 62 , 65 } ; PmSparsityPattern out ; int32_T b ; ( void ) t1 ; (
void ) LC ; out = t2 -> mA_P ; out . mNumCol = 66ULL ; out . mNumRow = 66ULL
; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 4 ; out . mJc [ 2 ] = 9 ; out . mJc
[ 3 ] = 12 ; out . mJc [ 4 ] = 16 ; out . mJc [ 5 ] = 21 ; out . mJc [ 6 ] =
24 ; out . mJc [ 7 ] = 24 ; out . mJc [ 8 ] = 24 ; out . mJc [ 9 ] = 24 ; out
. mJc [ 10 ] = 24 ; out . mJc [ 11 ] = 24 ; out . mJc [ 12 ] = 24 ; out . mJc
[ 13 ] = 24 ; out . mJc [ 14 ] = 24 ; out . mJc [ 15 ] = 24 ; out . mJc [ 16
] = 25 ; out . mJc [ 17 ] = 25 ; out . mJc [ 18 ] = 25 ; out . mJc [ 19 ] =
27 ; out . mJc [ 20 ] = 29 ; out . mJc [ 21 ] = 30 ; out . mJc [ 22 ] = 31 ;
out . mJc [ 23 ] = 33 ; out . mJc [ 24 ] = 35 ; out . mJc [ 25 ] = 37 ; out .
mJc [ 26 ] = 39 ; out . mJc [ 27 ] = 41 ; out . mJc [ 28 ] = 45 ; out . mJc [
29 ] = 47 ; out . mJc [ 30 ] = 49 ; out . mJc [ 31 ] = 51 ; out . mJc [ 32 ]
= 53 ; out . mJc [ 33 ] = 55 ; out . mJc [ 34 ] = 59 ; out . mJc [ 35 ] = 60
; out . mJc [ 36 ] = 61 ; out . mJc [ 37 ] = 65 ; out . mJc [ 38 ] = 66 ; out
. mJc [ 39 ] = 68 ; out . mJc [ 40 ] = 70 ; out . mJc [ 41 ] = 72 ; out . mJc
[ 42 ] = 74 ; out . mJc [ 43 ] = 76 ; out . mJc [ 44 ] = 78 ; out . mJc [ 45
] = 80 ; out . mJc [ 46 ] = 81 ; out . mJc [ 47 ] = 82 ; out . mJc [ 48 ] =
83 ; out . mJc [ 49 ] = 85 ; out . mJc [ 50 ] = 87 ; out . mJc [ 51 ] = 89 ;
out . mJc [ 52 ] = 91 ; out . mJc [ 53 ] = 93 ; out . mJc [ 54 ] = 95 ; out .
mJc [ 55 ] = 96 ; out . mJc [ 56 ] = 97 ; out . mJc [ 57 ] = 99 ; out . mJc [
58 ] = 101 ; out . mJc [ 59 ] = 102 ; out . mJc [ 60 ] = 103 ; out . mJc [ 61
] = 104 ; out . mJc [ 62 ] = 106 ; out . mJc [ 63 ] = 107 ; out . mJc [ 64 ]
= 108 ; out . mJc [ 65 ] = 109 ; out . mJc [ 66 ] = 110 ; for ( b = 0 ; b <
110 ; b ++ ) { out . mIr [ b ] = _cg_const_2 [ b ] ; } ( void ) LC ; ( void )
t2 ; return 0 ; }
