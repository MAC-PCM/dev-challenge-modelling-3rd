#include "ne_ds.h"
#include "SparkEV_c4aff755_1_ds_sys_struct.h"
#include "SparkEV_c4aff755_1_ds_tdxf_p.h"
#include "SparkEV_c4aff755_1_ds.h"
#include "SparkEV_c4aff755_1_ds_externals.h"
#include "SparkEV_c4aff755_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T SparkEV_c4aff755_1_ds_tdxf_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { static int32_T
_cg_const_2 [ 192 ] = { 8 , 22 , 29 , 44 , 45 , 46 , 47 , 9 , 13 , 22 , 44 ,
45 , 46 , 47 , 61 , 62 , 5 , 23 , 33 , 47 , 6 , 24 , 37 , 48 , 49 , 50 , 51 ,
10 , 14 , 24 , 48 , 49 , 50 , 51 , 64 , 65 , 7 , 25 , 41 , 51 , 0 , 28 , 29 ,
32 , 33 , 36 , 37 , 40 , 41 , 17 , 52 , 53 , 57 , 56 , 18 , 54 , 58 , 19 , 58
, 59 , 61 , 64 , 20 , 60 , 62 , 21 , 63 , 65 , 1 , 22 , 22 , 30 , 22 , 45 ,
46 , 2 , 23 , 23 , 34 , 23 , 44 , 45 , 46 , 3 , 24 , 24 , 38 , 24 , 49 , 50 ,
4 , 25 , 25 , 42 , 25 , 48 , 49 , 50 , 26 , 28 , 30 , 31 , 32 , 34 , 35 , 27
, 36 , 38 , 39 , 40 , 42 , 43 , 0 , 26 , 27 , 28 , 29 , 30 , 31 , 28 , 31 ,
28 , 32 , 28 , 35 , 28 , 36 , 28 , 39 , 28 , 40 , 28 , 43 , 33 , 34 , 35 , 37
, 38 , 39 , 41 , 42 , 43 , 11 , 44 , 44 , 60 , 61 , 44 , 46 , 12 , 48 , 48 ,
63 , 64 , 48 , 50 , 15 , 16 , 54 , 55 , 58 , 15 , 52 , 54 , 55 , 18 , 54 , 58
, 17 , 55 , 52 , 56 , 57 , 54 , 55 , 57 , 16 , 53 , 56 , 19 , 58 , 59 , 61 ,
64 , 58 , 61 , 58 , 64 , 60 , 62 , 63 , 65 } ; PmSparsityPattern out ;
int32_T b ; ( void ) t1 ; ( void ) LC ; out = t2 -> mTDXF_P ; out . mNumCol =
66ULL ; out . mNumRow = 66ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 7 ;
out . mJc [ 2 ] = 16 ; out . mJc [ 3 ] = 20 ; out . mJc [ 4 ] = 27 ; out .
mJc [ 5 ] = 36 ; out . mJc [ 6 ] = 40 ; out . mJc [ 7 ] = 49 ; out . mJc [ 8
] = 49 ; out . mJc [ 9 ] = 49 ; out . mJc [ 10 ] = 49 ; out . mJc [ 11 ] = 49
; out . mJc [ 12 ] = 49 ; out . mJc [ 13 ] = 49 ; out . mJc [ 14 ] = 49 ; out
. mJc [ 15 ] = 49 ; out . mJc [ 16 ] = 53 ; out . mJc [ 17 ] = 54 ; out . mJc
[ 18 ] = 54 ; out . mJc [ 19 ] = 57 ; out . mJc [ 20 ] = 62 ; out . mJc [ 21
] = 65 ; out . mJc [ 22 ] = 68 ; out . mJc [ 23 ] = 70 ; out . mJc [ 24 ] =
72 ; out . mJc [ 25 ] = 75 ; out . mJc [ 26 ] = 77 ; out . mJc [ 27 ] = 79 ;
out . mJc [ 28 ] = 83 ; out . mJc [ 29 ] = 85 ; out . mJc [ 30 ] = 87 ; out .
mJc [ 31 ] = 90 ; out . mJc [ 32 ] = 92 ; out . mJc [ 33 ] = 94 ; out . mJc [
34 ] = 98 ; out . mJc [ 35 ] = 105 ; out . mJc [ 36 ] = 112 ; out . mJc [ 37
] = 116 ; out . mJc [ 38 ] = 119 ; out . mJc [ 39 ] = 121 ; out . mJc [ 40 ]
= 123 ; out . mJc [ 41 ] = 125 ; out . mJc [ 42 ] = 127 ; out . mJc [ 43 ] =
129 ; out . mJc [ 44 ] = 131 ; out . mJc [ 45 ] = 133 ; out . mJc [ 46 ] =
136 ; out . mJc [ 47 ] = 139 ; out . mJc [ 48 ] = 142 ; out . mJc [ 49 ] =
144 ; out . mJc [ 50 ] = 147 ; out . mJc [ 51 ] = 149 ; out . mJc [ 52 ] =
151 ; out . mJc [ 53 ] = 154 ; out . mJc [ 54 ] = 156 ; out . mJc [ 55 ] =
161 ; out . mJc [ 56 ] = 165 ; out . mJc [ 57 ] = 168 ; out . mJc [ 58 ] =
170 ; out . mJc [ 59 ] = 173 ; out . mJc [ 60 ] = 176 ; out . mJc [ 61 ] =
179 ; out . mJc [ 62 ] = 184 ; out . mJc [ 63 ] = 186 ; out . mJc [ 64 ] =
188 ; out . mJc [ 65 ] = 190 ; out . mJc [ 66 ] = 192 ; for ( b = 0 ; b < 192
; b ++ ) { out . mIr [ b ] = _cg_const_2 [ b ] ; } ( void ) LC ; ( void ) t2
; return 0 ; }
