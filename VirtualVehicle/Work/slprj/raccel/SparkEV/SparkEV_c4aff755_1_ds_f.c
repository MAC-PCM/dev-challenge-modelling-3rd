#include "ne_ds.h"
#include "SparkEV_c4aff755_1_ds_sys_struct.h"
#include "SparkEV_c4aff755_1_ds_f.h"
#include "SparkEV_c4aff755_1_ds.h"
#include "SparkEV_c4aff755_1_ds_externals.h"
#include "SparkEV_c4aff755_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T SparkEV_c4aff755_1_ds_f ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t133 , NeDsMethodOutput * t134 ) { ETTS0 b_efOut ;
ETTS0 d_efOut ; ETTS0 e_efOut ; ETTS0 efOut ; ETTS0 g_efOut ; ETTS0 h_efOut ;
ETTS0 i_efOut ; ETTS0 j_efOut ; ETTS0 t2 ; ETTS0 t4 ; ETTS0 t5 ; ETTS0 t6 ;
PmRealVector out ; real_T nonscalar1 [ 7 ] ; real_T nonscalar7 [ 7 ] ; real_T
nonscalar6 [ 6 ] ; real_T c_efOut [ 1 ] ; real_T f_efOut [ 1 ] ; real_T
k_efOut [ 1 ] ; real_T l_efOut [ 1 ] ; real_T m_efOut [ 1 ] ; real_T n_efOut
[ 1 ] ; real_T o_efOut [ 1 ] ; real_T t63 [ 1 ] ; real_T U_idx_0 ; real_T
U_idx_1 ; real_T U_idx_2 ; real_T U_idx_3 ; real_T U_idx_4 ; real_T U_idx_5 ;
real_T U_idx_7 ; real_T U_idx_8 ; real_T
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La19 ; real_T
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La6 ; real_T
X_idx_0 ; real_T X_idx_1 ; real_T X_idx_15 ; real_T X_idx_16 ; real_T
X_idx_18 ; real_T X_idx_19 ; real_T X_idx_2 ; real_T X_idx_20 ; real_T
X_idx_21 ; real_T X_idx_24 ; real_T X_idx_3 ; real_T X_idx_30 ; real_T
X_idx_34 ; real_T X_idx_35 ; real_T X_idx_37 ; real_T X_idx_4 ; real_T
X_idx_45 ; real_T X_idx_46 ; real_T X_idx_47 ; real_T X_idx_48 ; real_T
X_idx_49 ; real_T X_idx_5 ; real_T X_idx_51 ; real_T X_idx_52 ; real_T
X_idx_54 ; real_T X_idx_55 ; real_T X_idx_56 ; real_T X_idx_58 ; real_T
X_idx_59 ; real_T X_idx_6 ; real_T X_idx_60 ; real_T X_idx_61 ; real_T
X_idx_62 ; real_T X_idx_63 ; real_T X_idx_64 ; real_T X_idx_65 ; real_T
intrm_sf_mf_41 ; real_T t11 ; real_T t121 ; real_T t127 ; real_T t128 ;
real_T t64_idx_0 ; real_T t78 ; real_T t79 ; real_T t84 ; real_T t85 ; real_T
t86 ; real_T t87 ; real_T t88 ; real_T t89 ; real_T t90 ; real_T t91 ; real_T
zc_int3 ; real_T zc_int7 ; size_t t18 [ 1 ] ; size_t t35 [ 1 ] ; size_t t38 [
1 ] ; size_t t61 [ 1 ] ; size_t t62 [ 1 ] ; size_t t71 ; size_t t72 ; size_t
t73 ; int32_T M_idx_0 ; int32_T M_idx_1 ; int32_T M_idx_10 ; int32_T M_idx_11
; int32_T M_idx_12 ; int32_T M_idx_13 ; int32_T M_idx_14 ; int32_T M_idx_15 ;
int32_T M_idx_16 ; int32_T M_idx_17 ; int32_T M_idx_2 ; int32_T M_idx_3 ;
M_idx_0 = t133 -> mM . mX [ 0 ] ; M_idx_1 = t133 -> mM . mX [ 1 ] ; M_idx_2 =
t133 -> mM . mX [ 2 ] ; M_idx_3 = t133 -> mM . mX [ 3 ] ; M_idx_10 = t133 ->
mM . mX [ 10 ] ; M_idx_11 = t133 -> mM . mX [ 11 ] ; M_idx_12 = t133 -> mM .
mX [ 12 ] ; M_idx_13 = t133 -> mM . mX [ 13 ] ; M_idx_14 = t133 -> mM . mX [
14 ] ; M_idx_15 = t133 -> mM . mX [ 15 ] ; M_idx_16 = t133 -> mM . mX [ 16 ]
; M_idx_17 = t133 -> mM . mX [ 17 ] ; U_idx_0 = t133 -> mU . mX [ 0 ] ;
U_idx_1 = t133 -> mU . mX [ 1 ] ; U_idx_2 = t133 -> mU . mX [ 2 ] ; U_idx_3 =
t133 -> mU . mX [ 3 ] ; U_idx_4 = t133 -> mU . mX [ 4 ] ; U_idx_5 = t133 ->
mU . mX [ 5 ] ; U_idx_7 = t133 -> mU . mX [ 7 ] ; U_idx_8 = t133 -> mU . mX [
8 ] ; X_idx_0 = t133 -> mX . mX [ 0 ] ; X_idx_1 = t133 -> mX . mX [ 1 ] ;
X_idx_2 = t133 -> mX . mX [ 2 ] ; X_idx_3 = t133 -> mX . mX [ 3 ] ; X_idx_4 =
t133 -> mX . mX [ 4 ] ; X_idx_5 = t133 -> mX . mX [ 5 ] ; X_idx_6 = t133 ->
mX . mX [ 6 ] ; X_idx_15 = t133 -> mX . mX [ 15 ] ; X_idx_16 = t133 -> mX .
mX [ 16 ] ; X_idx_18 = t133 -> mX . mX [ 18 ] ; X_idx_19 = t133 -> mX . mX [
19 ] ; X_idx_20 = t133 -> mX . mX [ 20 ] ; X_idx_21 = t133 -> mX . mX [ 21 ]
; X_idx_24 = t133 -> mX . mX [ 24 ] ; X_idx_30 = t133 -> mX . mX [ 30 ] ;
X_idx_34 = t133 -> mX . mX [ 34 ] ; X_idx_35 = t133 -> mX . mX [ 35 ] ;
X_idx_37 = t133 -> mX . mX [ 37 ] ; X_idx_45 = t133 -> mX . mX [ 45 ] ;
X_idx_46 = t133 -> mX . mX [ 46 ] ; X_idx_47 = t133 -> mX . mX [ 47 ] ;
X_idx_48 = t133 -> mX . mX [ 48 ] ; X_idx_49 = t133 -> mX . mX [ 49 ] ;
X_idx_51 = t133 -> mX . mX [ 51 ] ; X_idx_52 = t133 -> mX . mX [ 52 ] ;
X_idx_54 = t133 -> mX . mX [ 54 ] ; X_idx_55 = t133 -> mX . mX [ 55 ] ;
X_idx_56 = t133 -> mX . mX [ 56 ] ; X_idx_58 = t133 -> mX . mX [ 58 ] ;
X_idx_59 = t133 -> mX . mX [ 59 ] ; X_idx_60 = t133 -> mX . mX [ 60 ] ;
X_idx_61 = t133 -> mX . mX [ 61 ] ; X_idx_62 = t133 -> mX . mX [ 62 ] ;
X_idx_63 = t133 -> mX . mX [ 63 ] ; X_idx_64 = t133 -> mX . mX [ 64 ] ;
X_idx_65 = t133 -> mX . mX [ 65 ] ; out = t134 -> mF ; nonscalar1 [ 0 ] =
188429.76 ; nonscalar1 [ 1 ] = 188429.76 ; nonscalar1 [ 2 ] = 188429.76 ;
nonscalar1 [ 3 ] = 188429.76 ; nonscalar1 [ 4 ] = 188429.76 ; nonscalar1 [ 5
] = 188429.76 ; nonscalar1 [ 6 ] = 188429.76 ; nonscalar6 [ 0 ] = 0.0 ;
nonscalar6 [ 1 ] = 0.2 ; nonscalar6 [ 2 ] = 0.4 ; nonscalar6 [ 3 ] = 0.6 ;
nonscalar6 [ 4 ] = 0.8 ; nonscalar6 [ 5 ] = 1.0 ; nonscalar7 [ 0 ] = 243.1 ;
nonscalar7 [ 1 ] = 253.1 ; nonscalar7 [ 2 ] = 263.1 ; nonscalar7 [ 3 ] =
273.1 ; nonscalar7 [ 4 ] = 283.1 ; nonscalar7 [ 5 ] = 298.1 ; nonscalar7 [ 6
] = 313.1 ; t128 = U_idx_0 * 1.0E-5 ; intrm_sf_mf_41 = U_idx_1 * 1.0E-5 ;
t127 = U_idx_2 * 1.0E-5 ; t121 = U_idx_3 * 1.0E-5 ; U_idx_0 = U_idx_4 *
0.017453292519943295 ;
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La6 = ( X_idx_1 *
- 0.002 - X_idx_48 ) + X_idx_49 ;
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La6 = ( ( ( tanh (
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La6 * X_idx_1 *
4.0 / 0.00516795865633075 * 0.001 ) * 0.03960000000000008 + 1.96 ) -
0.96039999999999992 ) - 1.0 ) * (
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La6 * 3.87 / 1.96
) ; Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La19 = ( ( (
tanh ( X_idx_24 * ( X_idx_0 - X_idx_1 * 0.25839793281653745 ) * 4.0 / 0.02 *
0.001 ) * 0.03960000000000008 + 1.96 ) - 0.96039999999999992 ) - 1.0 ) * (
X_idx_24 / 1.96 ) ; t78 = ( X_idx_4 * - 0.002 - X_idx_51 ) + X_idx_52 ; t78 =
( ( ( tanh ( t78 * X_idx_4 * 4.0 / 0.00516795865633075 * 0.001 ) *
0.03960000000000008 + 1.96 ) - 0.96039999999999992 ) - 1.0 ) * ( t78 * 3.87 /
1.96 ) ; t79 = ( ( ( tanh ( X_idx_30 * ( X_idx_3 - X_idx_4 *
0.25839793281653745 ) * 4.0 / 0.02 * 0.001 ) * 0.03960000000000008 + 1.96 ) -
0.96039999999999992 ) - 1.0 ) * ( X_idx_30 / 1.96 ) ; t84 = X_idx_61 * 1.0E-6
+ X_idx_19 ; t63 [ 0ULL ] = X_idx_1 ; t35 [ 0 ] = 42ULL ; t18 [ 0 ] = 1ULL ;
tlu2_linear_nearest_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut .
mField1 [ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField2 , & t63 [ 0ULL ] , & t35 [ 0ULL ] , & t18 [ 0ULL ] ) ; t4 =
efOut ; t63 [ 0ULL ] = X_idx_49 ; t38 [ 0 ] = 46ULL ;
tlu2_linear_nearest_prelookup ( & b_efOut . mField0 [ 0ULL ] , & b_efOut .
mField1 [ 0ULL ] , & b_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t63 [ 0ULL ] , & t38 [ 0ULL ] , & t18 [ 0ULL ] ) ; t6 =
b_efOut ; tlu2_2d_linear_nearest_value ( & c_efOut [ 0ULL ] , & t4 . mField0
[ 0ULL ] , & t4 . mField2 [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t35 [ 0ULL ] , &
t38 [ 0ULL ] , & t18 [ 0ULL ] ) ; t64_idx_0 = c_efOut [ 0 ] ; t85 = t64_idx_0
; t63 [ 0ULL ] = X_idx_4 ; tlu2_linear_nearest_prelookup ( & d_efOut .
mField0 [ 0ULL ] , & d_efOut . mField1 [ 0ULL ] , & d_efOut . mField2 [ 0ULL
] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t63 [ 0ULL ] , & t35 [
0ULL ] , & t18 [ 0ULL ] ) ; t4 = d_efOut ; t63 [ 0ULL ] = X_idx_52 ;
tlu2_linear_nearest_prelookup ( & e_efOut . mField0 [ 0ULL ] , & e_efOut .
mField1 [ 0ULL ] , & e_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t63 [ 0ULL ] , & t38 [ 0ULL ] , & t18 [ 0ULL ] ) ; t6 =
e_efOut ; tlu2_2d_linear_nearest_value ( & f_efOut [ 0ULL ] , & t4 . mField0
[ 0ULL ] , & t4 . mField2 [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t35 [ 0ULL ] , &
t38 [ 0ULL ] , & t18 [ 0ULL ] ) ; t64_idx_0 = f_efOut [ 0 ] ; U_idx_4 = (
real_T ) ( t128 >= 0.0 ) * t128 ; t128 = U_idx_4 * 1.4137166941154069 / 4.0 *
0.00075000000000000012 ; t86 = ( real_T ) ( t127 >= 0.0 ) * t127 ; t127 = t86
* 1.0995574287564276 / 4.0 * 0.00075000000000000012 ; t87 = ( t86 *
1.4137166941154069 / 4.0 * 0.00075000000000000012 - t127 ) *
2.3316439815971242 ; t86 = ( real_T ) ( t121 >= 0.0 ) * t121 ; t89 = t86 *
1.4137166941154069 ; t86 = t86 * 1.0995574287564276 / 4.0 *
0.00075000000000000012 ; t88 = ( t89 / 4.0 * 0.00075000000000000012 - t86 ) *
2.3316439815971242 ; t121 = sin ( U_idx_0 ) * 14832.720000000001 ; t89 = cos
( U_idx_0 ) * 14832.720000000001 ; U_idx_4 = U_idx_4 * 1.0995574287564276 /
4.0 * 0.00075000000000000012 ; t90 = pmf_sqrt ( X_idx_6 * X_idx_6 +
0.010000000000000002 ) ; t91 = sin ( atan ( X_idx_37 * 10.0 - ( X_idx_37 *
10.0 - atan ( X_idx_37 * 10.0 ) ) * 0.97 ) * 1.9 ) ; zc_int7 = sin ( atan (
X_idx_45 * 10.0 - ( X_idx_45 * 10.0 - atan ( X_idx_45 * 10.0 ) ) * 0.97 ) *
1.9 ) ; U_idx_3 = ( t128 - U_idx_4 ) * 2.3316439815971242 ; t128 = sin ( atan
( X_idx_46 * 10.0 - ( X_idx_46 * 10.0 - atan ( X_idx_46 * 10.0 ) ) * 0.97 ) *
1.9 ) ; t11 = sin ( atan ( X_idx_47 * 10.0 - ( X_idx_47 * 10.0 - atan (
X_idx_47 * 10.0 ) ) * 0.97 ) * 1.9 ) ; U_idx_1 = ( real_T ) ( intrm_sf_mf_41
>= 0.0 ) * intrm_sf_mf_41 ; U_idx_2 = U_idx_1 * 1.4137166941154069 ; U_idx_1
= U_idx_1 * 1.0995574287564276 / 4.0 * 0.00075000000000000012 ; U_idx_2 = (
U_idx_2 / 4.0 * 0.00075000000000000012 - U_idx_1 ) * 2.3316439815971242 ; if
( M_idx_0 != 0 ) { t61 [ 0ULL ] = 0ULL ; for ( t71 = 0ULL ; t71 < 42ULL ; t71
++ ) { t72 = t71 / 42ULL ; t73 = ( t71 - t71 % 42ULL ) + t61 [ t72 > 0ULL ?
0ULL : t72 ] ; if ( ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t71 ] *
1.0E-5 < ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t73 > 41ULL ? 41ULL :
t73 ] * 1.0E-5 ) { t61 [ t72 > 0ULL ? 0ULL : t72 ] = t71 % 42ULL ; } } t71 =
t61 [ 0ULL ] ; X_idx_55 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t71
> 41ULL ? 41ULL : t71 ] * 1.0E-5 ; } if ( M_idx_1 != 0 ) { t62 [ 0ULL ] =
0ULL ; for ( t71 = 0ULL ; t71 < 7ULL ; t71 ++ ) { t72 = t71 / 7ULL ; t73 = (
t71 - t71 % 7ULL ) + t62 [ t72 > 0ULL ? 0ULL : t72 ] ; if ( nonscalar1 [ t71
] * 1.0E-5 < nonscalar1 [ t73 > 6ULL ? 6ULL : t73 ] * 1.0E-5 ) { t62 [ t72 >
0ULL ? 0ULL : t72 ] = t71 % 7ULL ; } } X_idx_60 = nonscalar1 [ t62 [ 0ULL ] >
6ULL ? 6ULL : t62 [ 0ULL ] ] * 1.0E-5 ; } X_idx_59 = M_idx_14 != 0 ?
1.7351225806451615E-8 : X_idx_59 ; X_idx_47 = M_idx_11 != 0 ? 0.0 : X_idx_34
; zc_int3 = t91 * X_idx_47 ; t91 = zc_int7 * X_idx_47 ; X_idx_47 = M_idx_13
!= 0 ? 0.0 : X_idx_35 ; zc_int7 = t128 * X_idx_47 ; t128 = t11 * X_idx_47 ;
t63 [ 0ULL ] = X_idx_58 ; t35 [ 0 ] = 6ULL ; tlu2_linear_nearest_prelookup (
& g_efOut . mField0 [ 0ULL ] , & g_efOut . mField1 [ 0ULL ] , & g_efOut .
mField2 [ 0ULL ] , & nonscalar6 [ 0ULL ] , & t63 [ 0ULL ] , & t35 [ 0ULL ] ,
& t18 [ 0ULL ] ) ; t2 = g_efOut ; t63 [ 0ULL ] = X_idx_15 ; t38 [ 0 ] = 7ULL
; tlu2_linear_nearest_prelookup ( & h_efOut . mField0 [ 0ULL ] , & h_efOut .
mField1 [ 0ULL ] , & h_efOut . mField2 [ 0ULL ] , & nonscalar7 [ 0ULL ] , &
t63 [ 0ULL ] , & t38 [ 0ULL ] , & t18 [ 0ULL ] ) ; t5 = h_efOut ; if (
X_idx_20 != X_idx_20 ) { U_idx_0 = X_idx_20 ; } else if ( X_idx_20 > 0.0 ) {
U_idx_0 = 1.0 ; } else { U_idx_0 = X_idx_20 < 0.0 ? - 1.0 : 0.0 ; } t63 [
0ULL ] = U_idx_0 * X_idx_1 ; t61 [ 0 ] = 58ULL ;
tlu2_linear_nearest_prelookup ( & i_efOut . mField0 [ 0ULL ] , & i_efOut .
mField1 [ 0ULL ] , & i_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField4 , & t63 [ 0ULL ] , & t61 [ 0ULL ] , & t18 [ 0ULL ] ) ; t4 =
i_efOut ; if ( X_idx_21 != X_idx_21 ) { X_idx_45 = X_idx_21 ; } else if (
X_idx_21 > 0.0 ) { X_idx_45 = 1.0 ; } else { X_idx_45 = X_idx_21 < 0.0 ? -
1.0 : 0.0 ; } t63 [ 0ULL ] = X_idx_45 * X_idx_4 ;
tlu2_linear_nearest_prelookup ( & j_efOut . mField0 [ 0ULL ] , & j_efOut .
mField1 [ 0ULL ] , & j_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField4 , & t63 [ 0ULL ] , & t61 [ 0ULL ] , & t18 [ 0ULL ] ) ; t6 =
j_efOut ; if ( M_idx_10 != 0 ) { X_idx_46 = 0.0 ; } else { X_idx_46 = tanh (
X_idx_6 * 4.0 / 0.1 ) * X_idx_34 * 0.01 ; } if ( M_idx_10 != 0 ) { X_idx_37 =
0.0 ; } else { X_idx_37 = tanh ( X_idx_6 * 4.0 / 0.1 ) * X_idx_34 * 0.01 ; }
if ( M_idx_12 != 0 ) { X_idx_47 = 0.0 ; } else { X_idx_47 = tanh ( X_idx_6 *
4.0 / 0.1 ) * X_idx_35 * 0.01 ; } if ( M_idx_12 != 0 ) { t11 = 0.0 ; } else {
t11 = tanh ( X_idx_6 * 4.0 / 0.1 ) * X_idx_35 * 0.01 ; } if ( M_idx_16 != 0 )
{ X_idx_19 = X_idx_49 - X_idx_64 ; } else if ( M_idx_17 != 0 ) { X_idx_19 =
X_idx_49 - ( - X_idx_64 ) ; } else { X_idx_19 = X_idx_49 - X_idx_20 ; } if (
M_idx_2 != 0 ) { intrm_sf_mf_41 = X_idx_52 - X_idx_65 ; } else if ( M_idx_3
!= 0 ) { intrm_sf_mf_41 = X_idx_52 - ( - X_idx_65 ) ; } else { intrm_sf_mf_41
= X_idx_52 - X_idx_21 ; } X_idx_45 = - ( ( X_idx_4 * X_idx_52 * 0.001 +
t64_idx_0 ) / ( t84 == 0.0 ? 1.0E-16 : t84 ) * 1000.0 ) ;
tlu2_2d_linear_nearest_value ( & k_efOut [ 0ULL ] , & t2 . mField0 [ 0ULL ] ,
& t2 . mField2 [ 0ULL ] , & t5 . mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t35 [ 0ULL ] , & t38 [ 0ULL
] , & t18 [ 0ULL ] ) ; t63 [ 0 ] = k_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & l_efOut [ 0ULL ] , & t5 . mField0 [ 0ULL ] ,
& t5 . mField2 [ 0ULL ] , & nonscalar1 [ 0ULL ] , & t38 [ 0ULL ] , & t18 [
0ULL ] ) ; t64_idx_0 = l_efOut [ 0 ] ; tlu2_2d_linear_nearest_value ( &
m_efOut [ 0ULL ] , & t2 . mField0 [ 0ULL ] , & t2 . mField2 [ 0ULL ] , & t5 .
mField0 [ 0ULL ] , & t5 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField5 , & t35 [ 0ULL ] , & t38 [ 0ULL ] , & t18 [ 0ULL ] ) ; X_idx_24
= m_efOut [ 0 ] ; tlu2_1d_linear_nearest_value ( & n_efOut [ 0ULL ] , & t4 .
mField0 [ 0ULL ] , & t4 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField6 , & t61 [ 0ULL ] , & t18 [ 0ULL ] ) ; X_idx_51 = n_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & o_efOut [ 0ULL ] , & t6 . mField0 [ 0ULL ] ,
& t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t61 [ 0ULL ] , & t18 [ 0ULL ] ) ; X_idx_30 = o_efOut [ 0 ] ; X_idx_48 = - (
X_idx_0 / 0.14142135623730953 * pmf_exp ( - ( X_idx_0 / 0.14142135623730953 *
( X_idx_0 / 0.14142135623730953 ) ) ) * U_idx_3 * 100000.0 + tanh ( X_idx_0 /
0.01 ) * U_idx_4 * 100000.0 ) ; U_idx_4 = - ( X_idx_2 / 0.14142135623730953 *
pmf_exp ( - ( X_idx_2 / 0.14142135623730953 * ( X_idx_2 / 0.14142135623730953
) ) ) * U_idx_2 * 100000.0 + tanh ( X_idx_2 / 0.01 ) * U_idx_1 * 100000.0 ) ;
U_idx_3 = - ( X_idx_3 / 0.14142135623730953 * pmf_exp ( - ( X_idx_3 /
0.14142135623730953 * ( X_idx_3 / 0.14142135623730953 ) ) ) * t87 * 100000.0
+ tanh ( X_idx_3 / 0.01 ) * t127 * 100000.0 ) ; U_idx_0 = - ( X_idx_5 /
0.14142135623730953 * pmf_exp ( - ( X_idx_5 / 0.14142135623730953 * ( X_idx_5
/ 0.14142135623730953 ) ) ) * t88 * 100000.0 + tanh ( X_idx_5 / 0.01 ) * t86
* 100000.0 ) ; U_idx_1 = - t128 ; U_idx_2 = t128 ; t128 = - t63 [ 0ULL ] ;
out . mX [ 0 ] = - ( - ( t121 + ( ( real_T ) ( X_idx_6 + U_idx_5 >= 0.0 ) *
2.0 - 1.0 ) * ( X_idx_6 + U_idx_5 ) * ( X_idx_6 + U_idx_5 ) *
0.5106046675999999 ) / 1512.0 ) ; out . mX [ 1 ] = - 0.0 ; out . mX [ 2 ] = -
0.0 ; out . mX [ 3 ] = - 0.0 ; out . mX [ 4 ] = - 0.0 ; out . mX [ 5 ] = -
0.0 ; out . mX [ 6 ] = - 0.0 ; out . mX [ 7 ] = - 0.0 ; out . mX [ 8 ] = -
0.0 ; out . mX [ 9 ] = - 0.0 ; out . mX [ 10 ] = - 0.0 ; out . mX [ 11 ] = -
0.0 ; out . mX [ 12 ] = - 0.0 ; out . mX [ 13 ] = - 0.0 ; out . mX [ 14 ] = -
0.0 ; out . mX [ 15 ] = - 0.0 ; out . mX [ 16 ] = - X_idx_54 * ( real_T ) (
X_idx_54 < 0.0 ) / ( X_idx_60 == 0.0 ? 1.0E-16 : X_idx_60 ) ; out . mX [ 17 ]
= - 0.0 ; out . mX [ 18 ] = - 0.0 ; out . mX [ 19 ] = - 0.0 ; out . mX [ 20 ]
= - 0.0 ; out . mX [ 21 ] = - 0.0 ; out . mX [ 22 ] = X_idx_48 ; out . mX [
23 ] = U_idx_4 ; out . mX [ 24 ] = U_idx_3 ; out . mX [ 25 ] = U_idx_0 ; out
. mX [ 26 ] = - ( t89 * 1.7 / 2.79 / 2.0 ) ; out . mX [ 27 ] = - ( t89 * 1.09
/ 2.79 / 2.0 ) ; out . mX [ 28 ] = - X_idx_46 ; out . mX [ 29 ] = - ( (
X_idx_0 * 0.2598801 - X_idx_6 ) / ( t90 == 0.0 ? 1.0E-16 : t90 ) ) / 10.0 ;
out . mX [ 30 ] = - zc_int3 ; out . mX [ 31 ] = zc_int3 ; out . mX [ 32 ] = -
X_idx_37 ; out . mX [ 33 ] = - ( ( X_idx_2 * 0.2598801 - X_idx_6 ) / ( t90 ==
0.0 ? 1.0E-16 : t90 ) ) / 10.0 ; out . mX [ 34 ] = - t91 ; out . mX [ 35 ] =
t91 ; out . mX [ 36 ] = - X_idx_47 ; out . mX [ 37 ] = - ( ( X_idx_3 *
0.2598801 - X_idx_6 ) / ( t90 == 0.0 ? 1.0E-16 : t90 ) ) / 10.0 ; out . mX [
38 ] = - zc_int7 ; out . mX [ 39 ] = zc_int7 ; out . mX [ 40 ] = - t11 ; out
. mX [ 41 ] = - ( ( X_idx_5 * 0.2598801 - X_idx_6 ) / ( t90 == 0.0 ? 1.0E-16
: t90 ) ) / 10.0 ; out . mX [ 42 ] = U_idx_1 ; out . mX [ 43 ] = U_idx_2 ;
out . mX [ 44 ] =
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La6 /
3.8707897959183675 ; out . mX [ 45 ] = -
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La19 /
1.000204081632653 ; out . mX [ 46 ] =
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La19 ; out . mX [
47 ] = 0.0 ; out . mX [ 48 ] = t78 / 3.8707897959183675 ; out . mX [ 49 ] = -
t79 / 1.000204081632653 ; out . mX [ 50 ] = t79 ; out . mX [ 51 ] = 0.0 ; out
. mX [ 52 ] = t128 / 381.12000000000018 ; out . mX [ 53 ] = - t64_idx_0 ; out
. mX [ 54 ] = - 0.0 - ( X_idx_54 * X_idx_59 + X_idx_55 ) ; out . mX [ 55 ] =
- ( X_idx_54 * X_idx_54 * X_idx_59 * 0.001 ) ; out . mX [ 56 ] = - ( X_idx_16
/ ( X_idx_60 == 0.0 ? 1.0E-16 : X_idx_60 ) ) ; out . mX [ 57 ] = - X_idx_24 ;
out . mX [ 58 ] = ( - ( ( - X_idx_54 - X_idx_56 ) - U_idx_7 ) * ( X_idx_56 *
1.0E-6 + X_idx_18 ) * 0.98 - ( ( - X_idx_61 - X_idx_62 ) - X_idx_63 ) * t84 )
* 0.001 ; out . mX [ 59 ] = - ( M_idx_15 != 0 ? 0.0 : U_idx_8 ) ; out . mX [
60 ] = X_idx_19 ; out . mX [ 61 ] = - ( ( X_idx_1 * X_idx_49 * 0.001 + t85 )
/ ( t84 == 0.0 ? 1.0E-16 : t84 ) * 1000.0 ) ; out . mX [ 62 ] = - X_idx_51 ;
out . mX [ 63 ] = intrm_sf_mf_41 ; out . mX [ 64 ] = X_idx_45 ; out . mX [ 65
] = - X_idx_30 ; ( void ) LC ; ( void ) t134 ; return 0 ; }
