#include "ne_ds.h"
#include "SparkEV_c4aff755_1_ds_sys_struct.h"
#include "SparkEV_c4aff755_1_ds_dxf_p.h"
#include "SparkEV_c4aff755_1_ds.h"
#include "SparkEV_c4aff755_1_ds_externals.h"
#include "SparkEV_c4aff755_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T SparkEV_c4aff755_1_ds_dxf_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; ( void ) LC ; out = t2 -> mDXF_P ; out . mNumCol = 66ULL ; out
. mNumRow = 66ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 4 ; out . mJc [ 2
] = 9 ; out . mJc [ 3 ] = 11 ; out . mJc [ 4 ] = 15 ; out . mJc [ 5 ] = 20 ;
out . mJc [ 6 ] = 22 ; out . mJc [ 7 ] = 31 ; out . mJc [ 8 ] = 31 ; out .
mJc [ 9 ] = 31 ; out . mJc [ 10 ] = 31 ; out . mJc [ 11 ] = 31 ; out . mJc [
12 ] = 31 ; out . mJc [ 13 ] = 31 ; out . mJc [ 14 ] = 31 ; out . mJc [ 15 ]
= 31 ; out . mJc [ 16 ] = 34 ; out . mJc [ 17 ] = 35 ; out . mJc [ 18 ] = 35
; out . mJc [ 19 ] = 36 ; out . mJc [ 20 ] = 39 ; out . mJc [ 21 ] = 40 ; out
. mJc [ 22 ] = 41 ; out . mJc [ 23 ] = 41 ; out . mJc [ 24 ] = 41 ; out . mJc
[ 25 ] = 43 ; out . mJc [ 26 ] = 43 ; out . mJc [ 27 ] = 43 ; out . mJc [ 28
] = 43 ; out . mJc [ 29 ] = 43 ; out . mJc [ 30 ] = 43 ; out . mJc [ 31 ] =
45 ; out . mJc [ 32 ] = 45 ; out . mJc [ 33 ] = 45 ; out . mJc [ 34 ] = 45 ;
out . mJc [ 35 ] = 51 ; out . mJc [ 36 ] = 57 ; out . mJc [ 37 ] = 57 ; out .
mJc [ 38 ] = 59 ; out . mJc [ 39 ] = 59 ; out . mJc [ 40 ] = 59 ; out . mJc [
41 ] = 59 ; out . mJc [ 42 ] = 59 ; out . mJc [ 43 ] = 59 ; out . mJc [ 44 ]
= 59 ; out . mJc [ 45 ] = 59 ; out . mJc [ 46 ] = 61 ; out . mJc [ 47 ] = 63
; out . mJc [ 48 ] = 65 ; out . mJc [ 49 ] = 66 ; out . mJc [ 50 ] = 69 ; out
. mJc [ 51 ] = 69 ; out . mJc [ 52 ] = 70 ; out . mJc [ 53 ] = 73 ; out . mJc
[ 54 ] = 73 ; out . mJc [ 55 ] = 77 ; out . mJc [ 56 ] = 80 ; out . mJc [ 57
] = 81 ; out . mJc [ 58 ] = 81 ; out . mJc [ 59 ] = 83 ; out . mJc [ 60 ] =
85 ; out . mJc [ 61 ] = 87 ; out . mJc [ 62 ] = 90 ; out . mJc [ 63 ] = 91 ;
out . mJc [ 64 ] = 92 ; out . mJc [ 65 ] = 93 ; out . mJc [ 66 ] = 94 ; out .
mIr [ 0 ] = 22 ; out . mIr [ 1 ] = 29 ; out . mIr [ 2 ] = 45 ; out . mIr [ 3
] = 46 ; out . mIr [ 4 ] = 44 ; out . mIr [ 5 ] = 45 ; out . mIr [ 6 ] = 46 ;
out . mIr [ 7 ] = 61 ; out . mIr [ 8 ] = 62 ; out . mIr [ 9 ] = 23 ; out .
mIr [ 10 ] = 33 ; out . mIr [ 11 ] = 24 ; out . mIr [ 12 ] = 37 ; out . mIr [
13 ] = 49 ; out . mIr [ 14 ] = 50 ; out . mIr [ 15 ] = 48 ; out . mIr [ 16 ]
= 49 ; out . mIr [ 17 ] = 50 ; out . mIr [ 18 ] = 64 ; out . mIr [ 19 ] = 65
; out . mIr [ 20 ] = 25 ; out . mIr [ 21 ] = 41 ; out . mIr [ 22 ] = 0 ; out
. mIr [ 23 ] = 28 ; out . mIr [ 24 ] = 29 ; out . mIr [ 25 ] = 32 ; out . mIr
[ 26 ] = 33 ; out . mIr [ 27 ] = 36 ; out . mIr [ 28 ] = 37 ; out . mIr [ 29
] = 40 ; out . mIr [ 30 ] = 41 ; out . mIr [ 31 ] = 52 ; out . mIr [ 32 ] =
53 ; out . mIr [ 33 ] = 57 ; out . mIr [ 34 ] = 56 ; out . mIr [ 35 ] = 58 ;
out . mIr [ 36 ] = 58 ; out . mIr [ 37 ] = 61 ; out . mIr [ 38 ] = 64 ; out .
mIr [ 39 ] = 60 ; out . mIr [ 40 ] = 63 ; out . mIr [ 41 ] = 45 ; out . mIr [
42 ] = 46 ; out . mIr [ 43 ] = 49 ; out . mIr [ 44 ] = 50 ; out . mIr [ 45 ]
= 28 ; out . mIr [ 46 ] = 30 ; out . mIr [ 47 ] = 31 ; out . mIr [ 48 ] = 32
; out . mIr [ 49 ] = 34 ; out . mIr [ 50 ] = 35 ; out . mIr [ 51 ] = 36 ; out
. mIr [ 52 ] = 38 ; out . mIr [ 53 ] = 39 ; out . mIr [ 54 ] = 40 ; out . mIr
[ 55 ] = 42 ; out . mIr [ 56 ] = 43 ; out . mIr [ 57 ] = 30 ; out . mIr [ 58
] = 31 ; out . mIr [ 59 ] = 34 ; out . mIr [ 60 ] = 35 ; out . mIr [ 61 ] =
38 ; out . mIr [ 62 ] = 39 ; out . mIr [ 63 ] = 42 ; out . mIr [ 64 ] = 43 ;
out . mIr [ 65 ] = 44 ; out . mIr [ 66 ] = 44 ; out . mIr [ 67 ] = 60 ; out .
mIr [ 68 ] = 61 ; out . mIr [ 69 ] = 48 ; out . mIr [ 70 ] = 48 ; out . mIr [
71 ] = 63 ; out . mIr [ 72 ] = 64 ; out . mIr [ 73 ] = 16 ; out . mIr [ 74 ]
= 54 ; out . mIr [ 75 ] = 55 ; out . mIr [ 76 ] = 58 ; out . mIr [ 77 ] = 15
; out . mIr [ 78 ] = 54 ; out . mIr [ 79 ] = 55 ; out . mIr [ 80 ] = 58 ; out
. mIr [ 81 ] = 52 ; out . mIr [ 82 ] = 57 ; out . mIr [ 83 ] = 54 ; out . mIr
[ 84 ] = 55 ; out . mIr [ 85 ] = 16 ; out . mIr [ 86 ] = 56 ; out . mIr [ 87
] = 58 ; out . mIr [ 88 ] = 61 ; out . mIr [ 89 ] = 64 ; out . mIr [ 90 ] =
58 ; out . mIr [ 91 ] = 58 ; out . mIr [ 92 ] = 60 ; out . mIr [ 93 ] = 63 ;
( void ) LC ; ( void ) t2 ; return 0 ; }
