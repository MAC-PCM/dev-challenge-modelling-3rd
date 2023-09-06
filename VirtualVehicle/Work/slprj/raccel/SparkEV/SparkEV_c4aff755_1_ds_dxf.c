#include "ne_ds.h"
#include "SparkEV_c4aff755_1_ds_sys_struct.h"
#include "SparkEV_c4aff755_1_ds_dxf.h"
#include "SparkEV_c4aff755_1_ds.h"
#include "SparkEV_c4aff755_1_ds_externals.h"
#include "SparkEV_c4aff755_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T SparkEV_c4aff755_1_ds_dxf ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t388 , NeDsMethodOutput * t389 ) { ETTS0 b_efOut ;
ETTS0 d_efOut ; ETTS0 e_efOut ; ETTS0 efOut ; ETTS0 k_efOut ; ETTS0 l_efOut ;
ETTS0 m_efOut ; ETTS0 n_efOut ; ETTS0 t3 ; ETTS0 t4 ; ETTS0 t6 ; ETTS0 t7 ;
PmRealVector out ; real_T t88 [ 94 ] ; real_T t104 [ 9 ] ; real_T nonscalar1
[ 7 ] ; real_T nonscalar7 [ 7 ] ; real_T nonscalar6 [ 6 ] ; real_T t112 [ 6 ]
; real_T t113 [ 6 ] ; real_T t102 [ 5 ] ; real_T t98 [ 5 ] ; real_T t100 [ 4
] ; real_T t120 [ 4 ] ; real_T t96 [ 4 ] ; real_T c_efOut [ 1 ] ; real_T
f_efOut [ 1 ] ; real_T g_efOut [ 1 ] ; real_T h_efOut [ 1 ] ; real_T i_efOut
[ 1 ] ; real_T j_efOut [ 1 ] ; real_T o_efOut [ 1 ] ; real_T p_efOut [ 1 ] ;
real_T q_efOut [ 1 ] ; real_T r_efOut [ 1 ] ; real_T s_efOut [ 1 ] ; real_T
t122 [ 1 ] ; real_T t_efOut [ 1 ] ; real_T u_efOut [ 1 ] ; real_T U_idx_0 ;
real_T U_idx_1 ; real_T U_idx_2 ; real_T U_idx_3 ; real_T U_idx_5 ; real_T
U_idx_7 ; real_T
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; real_T
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr2 ; real_T
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr8 ; real_T
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr9 ; real_T
X_idx_0 ; real_T X_idx_1 ; real_T X_idx_15 ; real_T X_idx_16 ; real_T
X_idx_18 ; real_T X_idx_19 ; real_T X_idx_2 ; real_T X_idx_20 ; real_T
X_idx_21 ; real_T X_idx_24 ; real_T X_idx_3 ; real_T X_idx_30 ; real_T
X_idx_34 ; real_T X_idx_35 ; real_T X_idx_37 ; real_T X_idx_4 ; real_T
X_idx_45 ; real_T X_idx_46 ; real_T X_idx_47 ; real_T X_idx_48 ; real_T
X_idx_49 ; real_T X_idx_5 ; real_T X_idx_51 ; real_T X_idx_52 ; real_T
X_idx_54 ; real_T X_idx_56 ; real_T X_idx_58 ; real_T X_idx_59 ; real_T
X_idx_6 ; real_T X_idx_60 ; real_T X_idx_61 ; real_T X_idx_62 ; real_T
X_idx_63 ; real_T intermediate_der143 ; real_T intermediate_der145 ; real_T
intermediate_der148 ; real_T intermediate_der150 ; real_T intermediate_der35
; real_T intermediate_der48 ; real_T intermediate_der58 ; real_T
intermediate_der59 ; real_T intermediate_der68 ; real_T intrm_sf_mf_19 ;
real_T intrm_sf_mf_2 ; real_T intrm_sf_mf_44 ; real_T t166 ; real_T t190 ;
real_T t193 ; real_T t200 ; real_T t206 ; real_T t212 ; real_T t215 ; real_T
t221 ; real_T t225 ; real_T t227 ; real_T t231 ; real_T t232 ; real_T t236 ;
real_T t237 ; real_T t240 ; real_T t243 ; real_T t245 ; real_T t249 ; real_T
t25 ; real_T t258 ; real_T t262 ; real_T t266 ; real_T t270 ; real_T t271 ;
real_T t275 ; real_T t352 ; real_T t95_idx_0 ; size_t t30 [ 1 ] ; size_t t59
[ 1 ] ; size_t t65 [ 1 ] ; size_t t91 [ 1 ] ; size_t t129 ; size_t t130 ;
size_t t150 ; int32_T M_idx_0 ; int32_T M_idx_1 ; int32_T M_idx_10 ; int32_T
M_idx_11 ; int32_T M_idx_12 ; int32_T M_idx_13 ; int32_T M_idx_14 ; int32_T
M_idx_16 ; int32_T M_idx_17 ; int32_T M_idx_2 ; int32_T M_idx_3 ; M_idx_0 =
t388 -> mM . mX [ 0 ] ; M_idx_1 = t388 -> mM . mX [ 1 ] ; M_idx_2 = t388 ->
mM . mX [ 2 ] ; M_idx_3 = t388 -> mM . mX [ 3 ] ; M_idx_10 = t388 -> mM . mX
[ 10 ] ; M_idx_11 = t388 -> mM . mX [ 11 ] ; M_idx_12 = t388 -> mM . mX [ 12
] ; M_idx_13 = t388 -> mM . mX [ 13 ] ; M_idx_14 = t388 -> mM . mX [ 14 ] ;
M_idx_16 = t388 -> mM . mX [ 16 ] ; M_idx_17 = t388 -> mM . mX [ 17 ] ;
U_idx_0 = t388 -> mU . mX [ 0 ] ; U_idx_1 = t388 -> mU . mX [ 1 ] ; U_idx_2 =
t388 -> mU . mX [ 2 ] ; U_idx_3 = t388 -> mU . mX [ 3 ] ; U_idx_5 = t388 ->
mU . mX [ 5 ] ; U_idx_7 = t388 -> mU . mX [ 7 ] ; X_idx_0 = t388 -> mX . mX [
0 ] ; X_idx_1 = t388 -> mX . mX [ 1 ] ; X_idx_2 = t388 -> mX . mX [ 2 ] ;
X_idx_3 = t388 -> mX . mX [ 3 ] ; X_idx_4 = t388 -> mX . mX [ 4 ] ; X_idx_5 =
t388 -> mX . mX [ 5 ] ; X_idx_6 = t388 -> mX . mX [ 6 ] ; X_idx_15 = t388 ->
mX . mX [ 15 ] ; X_idx_16 = t388 -> mX . mX [ 16 ] ; X_idx_18 = t388 -> mX .
mX [ 18 ] ; X_idx_19 = t388 -> mX . mX [ 19 ] ; X_idx_20 = t388 -> mX . mX [
20 ] ; X_idx_21 = t388 -> mX . mX [ 21 ] ; X_idx_24 = t388 -> mX . mX [ 24 ]
; X_idx_30 = t388 -> mX . mX [ 30 ] ; X_idx_34 = t388 -> mX . mX [ 34 ] ;
X_idx_35 = t388 -> mX . mX [ 35 ] ; X_idx_37 = t388 -> mX . mX [ 37 ] ;
X_idx_45 = t388 -> mX . mX [ 45 ] ; X_idx_46 = t388 -> mX . mX [ 46 ] ;
X_idx_47 = t388 -> mX . mX [ 47 ] ; X_idx_48 = t388 -> mX . mX [ 48 ] ;
X_idx_49 = t388 -> mX . mX [ 49 ] ; X_idx_51 = t388 -> mX . mX [ 51 ] ;
X_idx_52 = t388 -> mX . mX [ 52 ] ; X_idx_54 = t388 -> mX . mX [ 54 ] ;
X_idx_56 = t388 -> mX . mX [ 56 ] ; X_idx_58 = t388 -> mX . mX [ 58 ] ;
X_idx_59 = t388 -> mX . mX [ 59 ] ; X_idx_60 = t388 -> mX . mX [ 60 ] ;
X_idx_61 = t388 -> mX . mX [ 61 ] ; X_idx_62 = t388 -> mX . mX [ 62 ] ;
X_idx_63 = t388 -> mX . mX [ 63 ] ; out = t389 -> mDXF ; nonscalar1 [ 0 ] =
188429.76 ; nonscalar1 [ 1 ] = 188429.76 ; nonscalar1 [ 2 ] = 188429.76 ;
nonscalar1 [ 3 ] = 188429.76 ; nonscalar1 [ 4 ] = 188429.76 ; nonscalar1 [ 5
] = 188429.76 ; nonscalar1 [ 6 ] = 188429.76 ; nonscalar6 [ 0 ] = 0.0 ;
nonscalar6 [ 1 ] = 0.2 ; nonscalar6 [ 2 ] = 0.4 ; nonscalar6 [ 3 ] = 0.6 ;
nonscalar6 [ 4 ] = 0.8 ; nonscalar6 [ 5 ] = 1.0 ; nonscalar7 [ 0 ] = 243.1 ;
nonscalar7 [ 1 ] = 253.1 ; nonscalar7 [ 2 ] = 263.1 ; nonscalar7 [ 3 ] =
273.1 ; nonscalar7 [ 4 ] = 283.1 ; nonscalar7 [ 5 ] = 298.1 ; nonscalar7 [ 6
] = 313.1 ; intermediate_der148 = U_idx_0 * 1.0E-5 ; t25 = U_idx_1 * 1.0E-5 ;
t193 = U_idx_2 * 1.0E-5 ; intrm_sf_mf_19 = U_idx_3 * 1.0E-5 ; t215 = (
X_idx_1 * - 0.002 - X_idx_48 ) + X_idx_49 ; intermediate_der48 = X_idx_0 -
X_idx_1 * 0.25839793281653745 ; intermediate_der58 = ( X_idx_4 * - 0.002 -
X_idx_51 ) + X_idx_52 ; intermediate_der68 = X_idx_3 - X_idx_4 *
0.25839793281653745 ;
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr2 = X_idx_56 *
1.0E-6 + X_idx_18 ;
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr8 = ( - X_idx_54
- X_idx_56 ) - U_idx_7 ;
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr9 = ( - X_idx_61
- X_idx_62 ) - X_idx_63 ;
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 = X_idx_61 *
1.0E-6 + X_idx_19 ; t122 [ 0ULL ] = X_idx_1 ; t59 [ 0 ] = 42ULL ; t30 [ 0 ] =
1ULL ; tlu2_linear_nearest_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut .
mField1 [ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField2 , & t122 [ 0ULL ] , & t59 [ 0ULL ] , & t30 [ 0ULL ] ) ; t7 =
efOut ; t122 [ 0ULL ] = X_idx_49 ; t65 [ 0 ] = 46ULL ;
tlu2_linear_nearest_prelookup ( & b_efOut . mField0 [ 0ULL ] , & b_efOut .
mField1 [ 0ULL ] , & b_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t122 [ 0ULL ] , & t65 [ 0ULL ] , & t30 [ 0ULL ] ) ; t6
= b_efOut ; tlu2_2d_linear_nearest_value ( & c_efOut [ 0ULL ] , & t7 .
mField0 [ 0ULL ] , & t7 . mField2 [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t59 [
0ULL ] , & t65 [ 0ULL ] , & t30 [ 0ULL ] ) ; t95_idx_0 = c_efOut [ 0 ] ;
intrm_sf_mf_44 = t95_idx_0 ; t122 [ 0ULL ] = X_idx_4 ;
tlu2_linear_nearest_prelookup ( & d_efOut . mField0 [ 0ULL ] , & d_efOut .
mField1 [ 0ULL ] , & d_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField2 , & t122 [ 0ULL ] , & t59 [ 0ULL ] , & t30 [ 0ULL ] ) ; t4
= d_efOut ; t122 [ 0ULL ] = X_idx_52 ; tlu2_linear_nearest_prelookup ( &
e_efOut . mField0 [ 0ULL ] , & e_efOut . mField1 [ 0ULL ] , & e_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField3 , & t122 [
0ULL ] , & t65 [ 0ULL ] , & t30 [ 0ULL ] ) ; t3 = e_efOut ;
tlu2_2d_linear_nearest_value ( & f_efOut [ 0ULL ] , & t4 . mField0 [ 0ULL ] ,
& t4 . mField2 [ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t59 [ 0ULL ] , & t65 [ 0ULL
] , & t30 [ 0ULL ] ) ; t95_idx_0 = f_efOut [ 0 ] ; intrm_sf_mf_2 = ( real_T )
( intermediate_der148 >= 0.0 ) * intermediate_der148 ; intermediate_der148 =
intrm_sf_mf_2 * 1.4137166941154069 / 4.0 * 0.00075000000000000012 ; t200 = (
real_T ) ( t193 >= 0.0 ) * t193 ; t193 = t200 * 1.0995574287564276 / 4.0 *
0.00075000000000000012 ; t231 = ( t200 * 1.4137166941154069 / 4.0 *
0.00075000000000000012 - t193 ) * 2.3316439815971242 ; t200 = ( real_T ) (
intrm_sf_mf_19 >= 0.0 ) * intrm_sf_mf_19 ; t206 = t200 * 1.4137166941154069 ;
t200 = t200 * 1.0995574287564276 / 4.0 * 0.00075000000000000012 ; t232 = (
t206 / 4.0 * 0.00075000000000000012 - t200 ) * 2.3316439815971242 ;
intrm_sf_mf_2 = intrm_sf_mf_2 * 1.0995574287564276 / 4.0 *
0.00075000000000000012 ; t206 = pmf_sqrt ( X_idx_6 * X_idx_6 +
0.010000000000000002 ) ; intermediate_der143 = sin ( atan ( X_idx_37 * 10.0 -
( X_idx_37 * 10.0 - atan ( X_idx_37 * 10.0 ) ) * 0.97 ) * 1.9 ) ;
intermediate_der145 = sin ( atan ( X_idx_45 * 10.0 - ( X_idx_45 * 10.0 - atan
( X_idx_45 * 10.0 ) ) * 0.97 ) * 1.9 ) ; t212 = ( intermediate_der148 -
intrm_sf_mf_2 ) * 2.3316439815971242 ; intermediate_der148 = sin ( atan (
X_idx_46 * 10.0 - ( X_idx_46 * 10.0 - atan ( X_idx_46 * 10.0 ) ) * 0.97 ) *
1.9 ) ; intermediate_der150 = sin ( atan ( X_idx_47 * 10.0 - ( X_idx_47 *
10.0 - atan ( X_idx_47 * 10.0 ) ) * 0.97 ) * 1.9 ) ; t221 = ( real_T ) ( t25
>= 0.0 ) * t25 ; t25 = X_idx_1 * X_idx_49 * 0.001 + intrm_sf_mf_44 ;
intrm_sf_mf_44 = X_idx_4 * X_idx_52 * 0.001 + t95_idx_0 ; t236 = t221 *
1.4137166941154069 ; t221 = t221 * 1.0995574287564276 / 4.0 *
0.00075000000000000012 ; t236 = ( t236 / 4.0 * 0.00075000000000000012 - t221
) * 2.3316439815971242 ; if ( M_idx_1 != 0 ) { t91 [ 0ULL ] = 0ULL ; for (
t150 = 0ULL ; t150 < 7ULL ; t150 ++ ) { t129 = t150 / 7ULL ; t130 = ( t150 -
t150 % 7ULL ) + t91 [ t129 > 0ULL ? 0ULL : t129 ] ; if ( nonscalar1 [ t150 ]
* 1.0E-5 < nonscalar1 [ t130 > 6ULL ? 6ULL : t130 ] * 1.0E-5 ) { t91 [ t129 >
0ULL ? 0ULL : t129 ] = t150 % 7ULL ; } } t150 = t91 [ 0ULL ] ; X_idx_60 =
nonscalar1 [ t150 > 6ULL ? 6ULL : t150 ] * 1.0E-5 ; } t237 = M_idx_14 != 0 ?
1.7351225806451615E-8 : X_idx_59 ; intrm_sf_mf_19 = M_idx_11 != 0 ? 0.0 :
X_idx_34 ; t225 = M_idx_13 != 0 ? 0.0 : X_idx_35 ; t227 = X_idx_1 * - 0.002 +
t215 ; t240 = t215 * X_idx_1 * 4.0 ; U_idx_1 = cosh ( t240 /
0.00516795865633075 * 0.001 ) * cosh ( t240 / 0.00516795865633075 * 0.001 ) ;
t243 = 3.87 ; U_idx_0 = t215 * 3.87 ; t215 = ( ( ( tanh ( t240 /
0.00516795865633075 * 0.001 ) * 0.03960000000000008 + 1.96 ) -
0.96039999999999992 ) - 1.0 ) * ( t243 / 1.96 ) + U_idx_0 / 1.96 * ( X_idx_1
* 4.0 / 0.00516795865633075 ) * ( 1.0 / ( U_idx_1 == 0.0 ? 1.0E-16 : U_idx_1
) ) * 3.9600000000000082E-5 ; t245 = cosh ( t240 / 0.00516795865633075 *
0.001 ) * cosh ( t240 / 0.00516795865633075 * 0.001 ) ; t249 = - 3.87 ;
intermediate_der35 = ( ( ( tanh ( t240 / 0.00516795865633075 * 0.001 ) *
0.03960000000000008 + 1.96 ) - 0.96039999999999992 ) - 1.0 ) * ( t249 / 1.96
) + U_idx_0 / 1.96 * ( - X_idx_1 * 4.0 / 0.00516795865633075 ) * ( 1.0 / (
t245 == 0.0 ? 1.0E-16 : t245 ) ) * 3.9600000000000082E-5 ; X_idx_59 = cosh (
t240 / 0.00516795865633075 * 0.001 ) * cosh ( t240 / 0.00516795865633075 *
0.001 ) ; t166 = - 0.00774 ; t227 = ( ( ( tanh ( t240 / 0.00516795865633075 *
0.001 ) * 0.03960000000000008 + 1.96 ) - 0.96039999999999992 ) - 1.0 ) * (
t166 / 1.96 ) + U_idx_0 / 1.96 * ( t227 * 4.0 / 0.00516795865633075 ) * ( 1.0
/ ( X_idx_59 == 0.0 ? 1.0E-16 : X_idx_59 ) ) * 3.9600000000000082E-5 ; t258 =
X_idx_24 * intermediate_der48 * 4.0 ; t240 = cosh ( t258 / 0.02 * 0.001 ) *
cosh ( t258 / 0.02 * 0.001 ) ; intermediate_der48 = ( ( ( tanh ( t258 / 0.02
* 0.001 ) * 0.03960000000000008 + 1.96 ) - 0.96039999999999992 ) - 1.0 ) *
0.51020408163265307 + X_idx_24 / 1.96 * ( intermediate_der48 * 4.0 / 0.02 ) *
( 1.0 / ( t240 == 0.0 ? 1.0E-16 : t240 ) ) * 3.9600000000000082E-5 ; U_idx_0
= cosh ( t258 / 0.02 * 0.001 ) * cosh ( t258 / 0.02 * 0.001 ) ; t190 =
X_idx_24 / 1.96 * ( X_idx_24 * 4.0 / 0.02 ) * ( 1.0 / ( U_idx_0 == 0.0 ?
1.0E-16 : U_idx_0 ) ) * 3.9600000000000082E-5 ; U_idx_0 = cosh ( t258 / 0.02
* 0.001 ) * cosh ( t258 / 0.02 * 0.001 ) ; t352 = X_idx_24 / 1.96 * (
X_idx_24 * - 0.25839793281653745 * 4.0 / 0.02 ) * ( 1.0 / ( U_idx_0 == 0.0 ?
1.0E-16 : U_idx_0 ) ) * 3.9600000000000082E-5 ; U_idx_1 = X_idx_4 * - 0.002 +
intermediate_der58 ; t271 = intermediate_der58 * X_idx_4 * 4.0 ; t258 = cosh
( t271 / 0.00516795865633075 * 0.001 ) * cosh ( t271 / 0.00516795865633075 *
0.001 ) ; t275 = intermediate_der58 * 3.87 ; intermediate_der58 = ( ( ( tanh
( t271 / 0.00516795865633075 * 0.001 ) * 0.03960000000000008 + 1.96 ) -
0.96039999999999992 ) - 1.0 ) * ( t243 / 1.96 ) + t275 / 1.96 * ( X_idx_4 *
4.0 / 0.00516795865633075 ) * ( 1.0 / ( t258 == 0.0 ? 1.0E-16 : t258 ) ) *
3.9600000000000082E-5 ; t243 = cosh ( t271 / 0.00516795865633075 * 0.001 ) *
cosh ( t271 / 0.00516795865633075 * 0.001 ) ; intermediate_der59 = ( ( ( tanh
( t271 / 0.00516795865633075 * 0.001 ) * 0.03960000000000008 + 1.96 ) -
0.96039999999999992 ) - 1.0 ) * ( t249 / 1.96 ) + t275 / 1.96 * ( - X_idx_4 *
4.0 / 0.00516795865633075 ) * ( 1.0 / ( t243 == 0.0 ? 1.0E-16 : t243 ) ) *
3.9600000000000082E-5 ; t249 = cosh ( t271 / 0.00516795865633075 * 0.001 ) *
cosh ( t271 / 0.00516795865633075 * 0.001 ) ; X_idx_63 = ( ( ( tanh ( t271 /
0.00516795865633075 * 0.001 ) * 0.03960000000000008 + 1.96 ) -
0.96039999999999992 ) - 1.0 ) * ( t166 / 1.96 ) + t275 / 1.96 * ( U_idx_1 *
4.0 / 0.00516795865633075 ) * ( 1.0 / ( t249 == 0.0 ? 1.0E-16 : t249 ) ) *
3.9600000000000082E-5 ; X_idx_24 = X_idx_30 * intermediate_der68 * 4.0 ; t166
= cosh ( X_idx_24 / 0.02 * 0.001 ) * cosh ( X_idx_24 / 0.02 * 0.001 ) ;
intermediate_der68 = ( ( ( tanh ( X_idx_24 / 0.02 * 0.001 ) *
0.03960000000000008 + 1.96 ) - 0.96039999999999992 ) - 1.0 ) *
0.51020408163265307 + X_idx_30 / 1.96 * ( intermediate_der68 * 4.0 / 0.02 ) *
( 1.0 / ( t166 == 0.0 ? 1.0E-16 : t166 ) ) * 3.9600000000000082E-5 ; U_idx_7
= cosh ( X_idx_24 / 0.02 * 0.001 ) * cosh ( X_idx_24 / 0.02 * 0.001 ) ;
X_idx_19 = X_idx_30 / 1.96 * ( X_idx_30 * 4.0 / 0.02 ) * ( 1.0 / ( U_idx_7 ==
0.0 ? 1.0E-16 : U_idx_7 ) ) * 3.9600000000000082E-5 ; t262 = cosh ( X_idx_24
/ 0.02 * 0.001 ) * cosh ( X_idx_24 / 0.02 * 0.001 ) ; X_idx_30 = X_idx_30 /
1.96 * ( X_idx_30 * - 0.25839793281653745 * 4.0 / 0.02 ) * ( 1.0 / ( t262 ==
0.0 ? 1.0E-16 : t262 ) ) * 3.9600000000000082E-5 ;
tlu2_2d_linear_nearest_value ( & g_efOut [ 0ULL ] , & t7 . mField1 [ 0ULL ] ,
& t7 . mField2 [ 0ULL ] , & t6 . mField0 [ 0ULL ] , & t6 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t59 [ 0ULL ] , & t65 [ 0ULL
] , & t30 [ 0ULL ] ) ; t95_idx_0 = g_efOut [ 0 ] ; t245 = t95_idx_0 ;
tlu2_2d_linear_nearest_value ( & h_efOut [ 0ULL ] , & t7 . mField0 [ 0ULL ] ,
& t7 . mField2 [ 0ULL ] , & t6 . mField1 [ 0ULL ] , & t6 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t59 [ 0ULL ] , & t65 [ 0ULL
] , & t30 [ 0ULL ] ) ; t95_idx_0 = h_efOut [ 0 ] ; X_idx_59 = t95_idx_0 ;
tlu2_2d_linear_nearest_value ( & i_efOut [ 0ULL ] , & t4 . mField1 [ 0ULL ] ,
& t4 . mField2 [ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t59 [ 0ULL ] , & t65 [ 0ULL
] , & t30 [ 0ULL ] ) ; t95_idx_0 = i_efOut [ 0 ] ; t240 = t95_idx_0 ;
tlu2_2d_linear_nearest_value ( & j_efOut [ 0ULL ] , & t4 . mField0 [ 0ULL ] ,
& t4 . mField2 [ 0ULL ] , & t3 . mField1 [ 0ULL ] , & t3 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t59 [ 0ULL ] , & t65 [ 0ULL
] , & t30 [ 0ULL ] ) ; t95_idx_0 = j_efOut [ 0 ] ; t266 = pmf_sqrt ( X_idx_6
* X_idx_6 + 0.010000000000000002 ) * 2.0 ; t258 = 1.0 / ( t266 == 0.0 ?
1.0E-16 : t266 ) * X_idx_6 * 2.0 ; t270 = X_idx_37 * X_idx_37 * 100.0 + 1.0 ;
t271 = ( X_idx_37 * 10.0 - ( X_idx_37 * 10.0 - atan ( X_idx_37 * 10.0 ) ) *
0.97 ) * ( X_idx_37 * 10.0 - ( X_idx_37 * 10.0 - atan ( X_idx_37 * 10.0 ) ) *
0.97 ) + 1.0 ; t243 = ( 10.0 - ( 10.0 - 1.0 / ( t270 == 0.0 ? 1.0E-16 : t270
) * 10.0 ) * 0.97 ) * ( 1.0 / ( t271 == 0.0 ? 1.0E-16 : t271 ) ) * cos ( atan
( X_idx_37 * 10.0 - ( X_idx_37 * 10.0 - atan ( X_idx_37 * 10.0 ) ) * 0.97 ) *
1.9 ) * 1.9 ; t275 = X_idx_45 * X_idx_45 * 100.0 + 1.0 ; X_idx_61 = (
X_idx_45 * 10.0 - ( X_idx_45 * 10.0 - atan ( X_idx_45 * 10.0 ) ) * 0.97 ) * (
X_idx_45 * 10.0 - ( X_idx_45 * 10.0 - atan ( X_idx_45 * 10.0 ) ) * 0.97 ) +
1.0 ; t249 = ( 10.0 - ( 10.0 - 1.0 / ( t275 == 0.0 ? 1.0E-16 : t275 ) * 10.0
) * 0.97 ) * ( 1.0 / ( X_idx_61 == 0.0 ? 1.0E-16 : X_idx_61 ) ) * cos ( atan
( X_idx_45 * 10.0 - ( X_idx_45 * 10.0 - atan ( X_idx_45 * 10.0 ) ) * 0.97 ) *
1.9 ) * 1.9 ; X_idx_56 = X_idx_46 * X_idx_46 * 100.0 + 1.0 ; X_idx_62 = (
X_idx_46 * 10.0 - ( X_idx_46 * 10.0 - atan ( X_idx_46 * 10.0 ) ) * 0.97 ) * (
X_idx_46 * 10.0 - ( X_idx_46 * 10.0 - atan ( X_idx_46 * 10.0 ) ) * 0.97 ) +
1.0 ; t166 = ( 10.0 - ( 10.0 - 1.0 / ( X_idx_56 == 0.0 ? 1.0E-16 : X_idx_56 )
* 10.0 ) * 0.97 ) * ( 1.0 / ( X_idx_62 == 0.0 ? 1.0E-16 : X_idx_62 ) ) * cos
( atan ( X_idx_46 * 10.0 - ( X_idx_46 * 10.0 - atan ( X_idx_46 * 10.0 ) ) *
0.97 ) * 1.9 ) * 1.9 ; X_idx_24 = X_idx_47 * X_idx_47 * 100.0 + 1.0 ;
X_idx_18 = ( X_idx_47 * 10.0 - ( X_idx_47 * 10.0 - atan ( X_idx_47 * 10.0 ) )
* 0.97 ) * ( X_idx_47 * 10.0 - ( X_idx_47 * 10.0 - atan ( X_idx_47 * 10.0 ) )
* 0.97 ) + 1.0 ; U_idx_7 = ( 10.0 - ( 10.0 - 1.0 / ( X_idx_24 == 0.0 ?
1.0E-16 : X_idx_24 ) * 10.0 ) * 0.97 ) * ( 1.0 / ( X_idx_18 == 0.0 ? 1.0E-16
: X_idx_18 ) ) * cos ( atan ( X_idx_47 * 10.0 - ( X_idx_47 * 10.0 - atan (
X_idx_47 * 10.0 ) ) * 0.97 ) * 1.9 ) * 1.9 ; t262 = X_idx_49 * 0.001 + t245 ;
t245 = X_idx_1 * 0.001 + X_idx_59 ; t266 = ( real_T ) ( M_idx_1 == 0 ) ; t270
= ( real_T ) ( M_idx_14 == 0 ) ; t271 = ( real_T ) ( M_idx_11 == 0 ) ; t275 =
t271 * intermediate_der143 ; intermediate_der143 = t243 * intrm_sf_mf_19 ;
t243 = t271 * intermediate_der145 ; intermediate_der145 = t249 *
intrm_sf_mf_19 ; intrm_sf_mf_19 = ( real_T ) ( M_idx_13 == 0 ) ; t249 =
intrm_sf_mf_19 * intermediate_der148 ; intermediate_der148 = t166 * t225 ;
t166 = intrm_sf_mf_19 * intermediate_der150 ; intermediate_der150 = U_idx_7 *
t225 ; if ( X_idx_20 != X_idx_20 ) { U_idx_0 = X_idx_20 ; } else if (
X_idx_20 > 0.0 ) { U_idx_0 = 1.0 ; } else { U_idx_0 = X_idx_20 < 0.0 ? - 1.0
: 0.0 ; } t122 [ 0ULL ] = U_idx_0 * X_idx_1 ; t59 [ 0 ] = 58ULL ;
tlu2_linear_nearest_prelookup ( & k_efOut . mField0 [ 0ULL ] , & k_efOut .
mField1 [ 0ULL ] , & k_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField4 , & t122 [ 0ULL ] , & t59 [ 0ULL ] , & t30 [ 0ULL ] ) ; t6
= k_efOut ; if ( X_idx_21 != X_idx_21 ) { U_idx_0 = X_idx_21 ; } else if (
X_idx_21 > 0.0 ) { U_idx_0 = 1.0 ; } else { U_idx_0 = X_idx_21 < 0.0 ? - 1.0
: 0.0 ; } t122 [ 0ULL ] = U_idx_0 * X_idx_4 ; tlu2_linear_nearest_prelookup (
& l_efOut . mField0 [ 0ULL ] , & l_efOut . mField1 [ 0ULL ] , & l_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField4 , & t122 [
0ULL ] , & t59 [ 0ULL ] , & t30 [ 0ULL ] ) ; t4 = l_efOut ; t122 [ 0ULL ] =
X_idx_58 ; t65 [ 0 ] = 6ULL ; tlu2_linear_nearest_prelookup ( & m_efOut .
mField0 [ 0ULL ] , & m_efOut . mField1 [ 0ULL ] , & m_efOut . mField2 [ 0ULL
] , & nonscalar6 [ 0ULL ] , & t122 [ 0ULL ] , & t65 [ 0ULL ] , & t30 [ 0ULL ]
) ; t3 = m_efOut ; t122 [ 0ULL ] = X_idx_15 ; t91 [ 0 ] = 7ULL ;
tlu2_linear_nearest_prelookup ( & n_efOut . mField0 [ 0ULL ] , & n_efOut .
mField1 [ 0ULL ] , & n_efOut . mField2 [ 0ULL ] , & nonscalar7 [ 0ULL ] , &
t122 [ 0ULL ] , & t91 [ 0ULL ] , & t30 [ 0ULL ] ) ; t7 = n_efOut ; X_idx_51 =
- ( t262 / ( Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10
== 0.0 ? 1.0E-16 :
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ) * 1000.0 )
; U_idx_1 = - ( ( X_idx_52 * 0.001 + t240 ) / (
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 == 0.0 ?
1.0E-16 : Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ) *
1000.0 ) ; if ( M_idx_10 != 0 ) { intrm_sf_mf_19 = 0.0 ; } else { U_idx_3 =
cosh ( X_idx_6 * 4.0 / 0.1 ) * cosh ( X_idx_6 * 4.0 / 0.1 ) ; intrm_sf_mf_19
= 1.0 / ( U_idx_3 == 0.0 ? 1.0E-16 : U_idx_3 ) * X_idx_34 * 0.4 ; } if (
M_idx_10 != 0 ) { t225 = 0.0 ; } else { X_idx_48 = cosh ( X_idx_6 * 4.0 / 0.1
) * cosh ( X_idx_6 * 4.0 / 0.1 ) ; t225 = 1.0 / ( X_idx_48 == 0.0 ? 1.0E-16 :
X_idx_48 ) * X_idx_34 * 0.4 ; } if ( M_idx_12 != 0 ) { X_idx_59 = 0.0 ; }
else { U_idx_2 = cosh ( X_idx_6 * 4.0 / 0.1 ) * cosh ( X_idx_6 * 4.0 / 0.1 )
; X_idx_59 = 1.0 / ( U_idx_2 == 0.0 ? 1.0E-16 : U_idx_2 ) * X_idx_35 * 0.4 ;
} if ( M_idx_12 != 0 ) { U_idx_7 = 0.0 ; } else { U_idx_0 = cosh ( X_idx_6 *
4.0 / 0.1 ) * cosh ( X_idx_6 * 4.0 / 0.1 ) ; U_idx_7 = 1.0 / ( U_idx_0 == 0.0
? 1.0E-16 : U_idx_0 ) * X_idx_35 * 0.4 ; } U_idx_0 =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 *
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t262 = - (
- t25 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) * 1000.0 ) ; U_idx_0 =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 *
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t271 = - (
- intrm_sf_mf_44 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) * 1000.0 ) ; if (
M_idx_16 != 0 ) { X_idx_61 = 0.0 ; } else { X_idx_61 = M_idx_17 != 0 ? 0.0 :
- 1.0 ; } if ( M_idx_2 != 0 ) { X_idx_56 = 0.0 ; } else { X_idx_56 = M_idx_3
!= 0 ? 0.0 : - 1.0 ; } if ( M_idx_10 != 0 ) { X_idx_62 = 0.0 ; } else {
X_idx_62 = tanh ( X_idx_6 * 4.0 / 0.1 ) * 0.01 ; } if ( M_idx_10 != 0 ) {
X_idx_24 = 0.0 ; } else { X_idx_24 = tanh ( X_idx_6 * 4.0 / 0.1 ) * 0.01 ; }
if ( M_idx_12 != 0 ) { X_idx_18 = 0.0 ; } else { X_idx_18 = tanh ( X_idx_6 *
4.0 / 0.1 ) * 0.01 ; } if ( M_idx_12 != 0 ) { U_idx_3 = 0.0 ; } else {
U_idx_3 = tanh ( X_idx_6 * 4.0 / 0.1 ) * 0.01 ; } X_idx_48 = - ( t245 / (
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 == 0.0 ?
1.0E-16 : Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ) *
1000.0 ) ; t245 = - ( ( X_idx_4 * 0.001 + t95_idx_0 ) / (
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 == 0.0 ?
1.0E-16 : Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ) *
1000.0 ) ; U_idx_0 =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 *
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t240 = - (
- t25 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) * 1.0E-6 * 1000.0 ) ; U_idx_0
= Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 *
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t25 = - ( -
intrm_sf_mf_44 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) * 1.0E-6 * 1000.0 ) ;
if ( M_idx_16 != 0 ) { intrm_sf_mf_44 = - 1.0 ; } else { intrm_sf_mf_44 = (
real_T ) ( M_idx_17 != 0 ) ; } if ( M_idx_2 != 0 ) { U_idx_2 = - 1.0 ; } else
{ U_idx_2 = ( real_T ) ( M_idx_3 != 0 ) ; } U_idx_0 = cosh ( X_idx_0 / 0.01 )
* cosh ( X_idx_0 / 0.01 ) ; t96 [ 0ULL ] = - ( ( pmf_exp ( - ( X_idx_0 /
0.14142135623730953 * ( X_idx_0 / 0.14142135623730953 ) ) ) *
7.0710678118654737 + - ( X_idx_0 / 0.14142135623730953 * 14.142135623730947 )
* ( X_idx_0 / 0.14142135623730953 ) * pmf_exp ( - ( X_idx_0 /
0.14142135623730953 * ( X_idx_0 / 0.14142135623730953 ) ) ) ) * t212 *
100000.0 + 1.0 / ( U_idx_0 == 0.0 ? 1.0E-16 : U_idx_0 ) * intrm_sf_mf_2 *
1.0E+7 ) ; t96 [ 1ULL ] = - ( 0.2598801 / ( t206 == 0.0 ? 1.0E-16 : t206 ) )
/ 10.0 ; t96 [ 2ULL ] = - t190 / 1.000204081632653 ; t96 [ 3ULL ] = t190 ;
tlu2_1d_linear_nearest_value ( & o_efOut [ 0ULL ] , & t6 . mField1 [ 0ULL ] ,
& t6 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t59 [ 0ULL ] , & t30 [ 0ULL ] ) ; t122 [ 0 ] = o_efOut [ 0 ] ; t98 [ 0ULL ] =
t227 / 3.8707897959183675 ; t98 [ 1ULL ] = - t352 / 1.000204081632653 ; t98 [
2ULL ] = t352 ; t98 [ 3ULL ] = X_idx_51 ; if ( X_idx_20 != X_idx_20 ) {
U_idx_0 = X_idx_20 ; } else if ( X_idx_20 > 0.0 ) { U_idx_0 = 1.0 ; } else {
U_idx_0 = X_idx_20 < 0.0 ? - 1.0 : 0.0 ; } t98 [ 4ULL ] = - ( t122 [ 0ULL ] *
U_idx_0 ) ; X_idx_51 = cosh ( X_idx_2 / 0.01 ) * cosh ( X_idx_2 / 0.01 ) ;
t190 = - ( ( pmf_exp ( - ( X_idx_2 / 0.14142135623730953 * ( X_idx_2 /
0.14142135623730953 ) ) ) * 7.0710678118654737 + - ( X_idx_2 /
0.14142135623730953 * 14.142135623730947 ) * ( X_idx_2 / 0.14142135623730953
) * pmf_exp ( - ( X_idx_2 / 0.14142135623730953 * ( X_idx_2 /
0.14142135623730953 ) ) ) ) * t236 * 100000.0 + 1.0 / ( X_idx_51 == 0.0 ?
1.0E-16 : X_idx_51 ) * t221 * 1.0E+7 ) ; X_idx_51 = cosh ( X_idx_3 / 0.01 ) *
cosh ( X_idx_3 / 0.01 ) ; t100 [ 0ULL ] = - ( ( pmf_exp ( - ( X_idx_3 /
0.14142135623730953 * ( X_idx_3 / 0.14142135623730953 ) ) ) *
7.0710678118654737 + - ( X_idx_3 / 0.14142135623730953 * 14.142135623730947 )
* ( X_idx_3 / 0.14142135623730953 ) * pmf_exp ( - ( X_idx_3 /
0.14142135623730953 * ( X_idx_3 / 0.14142135623730953 ) ) ) ) * t231 *
100000.0 + 1.0 / ( X_idx_51 == 0.0 ? 1.0E-16 : X_idx_51 ) * t193 * 1.0E+7 ) ;
t100 [ 1ULL ] = - ( 0.2598801 / ( t206 == 0.0 ? 1.0E-16 : t206 ) ) / 10.0 ;
t100 [ 2ULL ] = - X_idx_19 / 1.000204081632653 ; t100 [ 3ULL ] = X_idx_19 ;
tlu2_1d_linear_nearest_value ( & p_efOut [ 0ULL ] , & t4 . mField1 [ 0ULL ] ,
& t4 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField6 , &
t59 [ 0ULL ] , & t30 [ 0ULL ] ) ; t122 [ 0 ] = p_efOut [ 0 ] ; t102 [ 0ULL ]
= X_idx_63 / 3.8707897959183675 ; t102 [ 1ULL ] = - X_idx_30 /
1.000204081632653 ; t102 [ 2ULL ] = X_idx_30 ; t102 [ 3ULL ] = U_idx_1 ; if (
X_idx_21 != X_idx_21 ) { } else if ( X_idx_21 > 0.0 ) { X_idx_21 = 1.0 ; }
else { X_idx_21 = X_idx_21 < 0.0 ? - 1.0 : 0.0 ; } t102 [ 4ULL ] = - ( t122 [
0ULL ] * X_idx_21 ) ; t193 = cosh ( X_idx_5 / 0.01 ) * cosh ( X_idx_5 / 0.01
) ; X_idx_51 = - ( ( pmf_exp ( - ( X_idx_5 / 0.14142135623730953 * ( X_idx_5
/ 0.14142135623730953 ) ) ) * 7.0710678118654737 + - ( X_idx_5 /
0.14142135623730953 * 14.142135623730947 ) * ( X_idx_5 / 0.14142135623730953
) * pmf_exp ( - ( X_idx_5 / 0.14142135623730953 * ( X_idx_5 /
0.14142135623730953 ) ) ) ) * t232 * 100000.0 + 1.0 / ( t193 == 0.0 ? 1.0E-16
: t193 ) * t200 * 1.0E+7 ) ; t104 [ 0ULL ] = - ( - ( ( X_idx_6 + U_idx_5 ) *
( ( real_T ) ( X_idx_6 + U_idx_5 >= 0.0 ) * 2.0 - 1.0 ) * 1.0212093351999998
) / 1512.0 ) ; t104 [ 1ULL ] = - intrm_sf_mf_19 ; t352 = t206 * t206 ; t104 [
2ULL ] = - ( - ( X_idx_0 * 0.2598801 - X_idx_6 ) / ( t352 == 0.0 ? 1.0E-16 :
t352 ) * t258 + - 1.0 / ( t206 == 0.0 ? 1.0E-16 : t206 ) ) / 10.0 ; t104 [
3ULL ] = - t225 ; t104 [ 4ULL ] = - ( - ( X_idx_2 * 0.2598801 - X_idx_6 ) / (
t352 == 0.0 ? 1.0E-16 : t352 ) * t258 + - 1.0 / ( t206 == 0.0 ? 1.0E-16 :
t206 ) ) / 10.0 ; t104 [ 5ULL ] = - X_idx_59 ; t104 [ 6ULL ] = - ( - (
X_idx_3 * 0.2598801 - X_idx_6 ) / ( t352 == 0.0 ? 1.0E-16 : t352 ) * t258 + -
1.0 / ( t206 == 0.0 ? 1.0E-16 : t206 ) ) / 10.0 ; t104 [ 7ULL ] = - U_idx_7 ;
t104 [ 8ULL ] = - ( - ( X_idx_5 * 0.2598801 - X_idx_6 ) / ( t352 == 0.0 ?
1.0E-16 : t352 ) * t258 + - 1.0 / ( t206 == 0.0 ? 1.0E-16 : t206 ) ) / 10.0 ;
tlu2_2d_linear_nearest_value ( & q_efOut [ 0ULL ] , & t3 . mField0 [ 0ULL ] ,
& t3 . mField2 [ 0ULL ] , & t7 . mField1 [ 0ULL ] , & t7 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t65 [ 0ULL ] , & t91 [ 0ULL
] , & t30 [ 0ULL ] ) ; t122 [ 0 ] = q_efOut [ 0 ] ;
tlu2_1d_linear_nearest_value ( & r_efOut [ 0ULL ] , & t7 . mField1 [ 0ULL ] ,
& t7 . mField2 [ 0ULL ] , & nonscalar1 [ 0ULL ] , & t91 [ 0ULL ] , & t30 [
0ULL ] ) ; t95_idx_0 = r_efOut [ 0 ] ; tlu2_2d_linear_nearest_value ( &
s_efOut [ 0ULL ] , & t3 . mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , & t7 .
mField1 [ 0ULL ] , & t7 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC )
) -> mField5 , & t65 [ 0ULL ] , & t91 [ 0ULL ] , & t30 [ 0ULL ] ) ; U_idx_0 =
s_efOut [ 0 ] ; X_idx_30 = - t122 [ 0ULL ] ; intrm_sf_mf_19 = X_idx_30 /
381.12000000000018 ; U_idx_1 = - t95_idx_0 ; t112 [ 0ULL ] = - X_idx_62 ;
t112 [ 1ULL ] = - t275 ; t112 [ 2ULL ] = t275 ; t112 [ 3ULL ] = - X_idx_24 ;
t112 [ 4ULL ] = - t243 ; t112 [ 5ULL ] = t243 ; t113 [ 0ULL ] = - X_idx_18 ;
t113 [ 1ULL ] = - t249 ; t113 [ 2ULL ] = t249 ; t113 [ 3ULL ] = - U_idx_3 ;
t113 [ 4ULL ] = - t166 ; t113 [ 5ULL ] = t166 ; t120 [ 0ULL ] = - ( real_T )
( X_idx_54 < 0.0 ) / ( X_idx_60 == 0.0 ? 1.0E-16 : X_idx_60 ) ; t120 [ 1ULL ]
= - t237 ; t120 [ 2ULL ] = - ( X_idx_54 * t237 * 0.002 ) ; t120 [ 3ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr2 * 0.00098 ;
tlu2_2d_linear_nearest_value ( & t_efOut [ 0ULL ] , & t3 . mField1 [ 0ULL ] ,
& t3 . mField2 [ 0ULL ] , & t7 . mField0 [ 0ULL ] , & t7 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 , & t65 [ 0ULL ] , & t91 [ 0ULL
] , & t30 [ 0ULL ] ) ; t122 [ 0 ] = t_efOut [ 0 ] ;
tlu2_2d_linear_nearest_value ( & u_efOut [ 0ULL ] , & t3 . mField1 [ 0ULL ] ,
& t3 . mField2 [ 0ULL ] , & t7 . mField0 [ 0ULL ] , & t7 . mField2 [ 0ULL ] ,
( ( _NeDynamicSystem * ) ( LC ) ) -> mField5 , & t65 [ 0ULL ] , & t91 [ 0ULL
] , & t30 [ 0ULL ] ) ; t95_idx_0 = u_efOut [ 0 ] ; X_idx_30 = - t122 [ 0ULL ]
; t352 = X_idx_60 * X_idx_60 ; for ( t150 = 0ULL ; t150 < 4ULL ; t150 ++ ) {
t88 [ t150 ] = t96 [ t150 ] ; } for ( t150 = 0ULL ; t150 < 5ULL ; t150 ++ ) {
t88 [ t150 + 4ULL ] = t98 [ t150 ] ; } t88 [ 9ULL ] = t190 ; t88 [ 10ULL ] =
- ( 0.2598801 / ( t206 == 0.0 ? 1.0E-16 : t206 ) ) / 10.0 ; for ( t150 = 0ULL
; t150 < 4ULL ; t150 ++ ) { t88 [ t150 + 11ULL ] = t100 [ t150 ] ; } for (
t150 = 0ULL ; t150 < 5ULL ; t150 ++ ) { t88 [ t150 + 15ULL ] = t102 [ t150 ]
; } t88 [ 20ULL ] = X_idx_51 ; t88 [ 21ULL ] = - ( 0.2598801 / ( t206 == 0.0
? 1.0E-16 : t206 ) ) / 10.0 ; for ( t150 = 0ULL ; t150 < 9ULL ; t150 ++ ) {
t88 [ t150 + 22ULL ] = t104 [ t150 ] ; } t88 [ 31ULL ] = intrm_sf_mf_19 ; t88
[ 32ULL ] = U_idx_1 ; t88 [ 33ULL ] = - U_idx_0 ; t88 [ 34ULL ] = - ( 1.0 / (
X_idx_60 == 0.0 ? 1.0E-16 : X_idx_60 ) ) ; t88 [ 35ULL ] = -
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr8 * 0.00098 ;
t88 [ 36ULL ] = -
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr9 * 0.001 ; t88
[ 37ULL ] = t262 ; t88 [ 38ULL ] = t271 ; t88 [ 39ULL ] = X_idx_61 ; t88 [
40ULL ] = X_idx_56 ; t88 [ 41ULL ] = - intermediate_der48 / 1.000204081632653
; t88 [ 42ULL ] = intermediate_der48 ; t88 [ 43ULL ] = - intermediate_der68 /
1.000204081632653 ; t88 [ 44ULL ] = intermediate_der68 ; for ( t150 = 0ULL ;
t150 < 6ULL ; t150 ++ ) { t88 [ t150 + 45ULL ] = t112 [ t150 ] ; } for ( t150
= 0ULL ; t150 < 6ULL ; t150 ++ ) { t88 [ t150 + 51ULL ] = t113 [ t150 ] ; }
t88 [ 57ULL ] = - intermediate_der143 ; t88 [ 58ULL ] = intermediate_der143 ;
t88 [ 59ULL ] = - intermediate_der145 ; t88 [ 60ULL ] = intermediate_der145 ;
t88 [ 61ULL ] = - intermediate_der148 ; t88 [ 62ULL ] = intermediate_der148 ;
t88 [ 63ULL ] = - intermediate_der150 ; t88 [ 64ULL ] = intermediate_der150 ;
t88 [ 65ULL ] = intermediate_der35 / 3.8707897959183675 ; t88 [ 66ULL ] =
t215 / 3.8707897959183675 ; t88 [ 67ULL ] = 1.0 ; t88 [ 68ULL ] = X_idx_48 ;
t88 [ 69ULL ] = intermediate_der59 / 3.8707897959183675 ; t88 [ 70ULL ] =
intermediate_der58 / 3.8707897959183675 ; t88 [ 71ULL ] = 1.0 ; t88 [ 72ULL ]
= t245 ; for ( t150 = 0ULL ; t150 < 4ULL ; t150 ++ ) { t88 [ t150 + 73ULL ] =
t120 [ t150 ] ; } out . mX [ 0 ] = t88 [ 0 ] ; out . mX [ 1 ] = t88 [ 1 ] ;
out . mX [ 2 ] = t88 [ 2 ] ; out . mX [ 3 ] = t88 [ 3 ] ; out . mX [ 4 ] =
t88 [ 4 ] ; out . mX [ 5 ] = t88 [ 5 ] ; out . mX [ 6 ] = t88 [ 6 ] ; out .
mX [ 7 ] = t88 [ 7 ] ; out . mX [ 8 ] = t88 [ 8 ] ; out . mX [ 9 ] = t88 [ 9
] ; out . mX [ 10 ] = t88 [ 10 ] ; out . mX [ 11 ] = t88 [ 11 ] ; out . mX [
12 ] = t88 [ 12 ] ; out . mX [ 13 ] = t88 [ 13 ] ; out . mX [ 14 ] = t88 [ 14
] ; out . mX [ 15 ] = t88 [ 15 ] ; out . mX [ 16 ] = t88 [ 16 ] ; out . mX [
17 ] = t88 [ 17 ] ; out . mX [ 18 ] = t88 [ 18 ] ; out . mX [ 19 ] = t88 [ 19
] ; out . mX [ 20 ] = t88 [ 20 ] ; out . mX [ 21 ] = t88 [ 21 ] ; out . mX [
22 ] = t88 [ 22 ] ; out . mX [ 23 ] = t88 [ 23 ] ; out . mX [ 24 ] = t88 [ 24
] ; out . mX [ 25 ] = t88 [ 25 ] ; out . mX [ 26 ] = t88 [ 26 ] ; out . mX [
27 ] = t88 [ 27 ] ; out . mX [ 28 ] = t88 [ 28 ] ; out . mX [ 29 ] = t88 [ 29
] ; out . mX [ 30 ] = t88 [ 30 ] ; out . mX [ 31 ] = t88 [ 31 ] ; out . mX [
32 ] = t88 [ 32 ] ; out . mX [ 33 ] = t88 [ 33 ] ; out . mX [ 34 ] = t88 [ 34
] ; out . mX [ 35 ] = t88 [ 35 ] ; out . mX [ 36 ] = t88 [ 36 ] ; out . mX [
37 ] = t88 [ 37 ] ; out . mX [ 38 ] = t88 [ 38 ] ; out . mX [ 39 ] = t88 [ 39
] ; out . mX [ 40 ] = t88 [ 40 ] ; out . mX [ 41 ] = t88 [ 41 ] ; out . mX [
42 ] = t88 [ 42 ] ; out . mX [ 43 ] = t88 [ 43 ] ; out . mX [ 44 ] = t88 [ 44
] ; out . mX [ 45 ] = t88 [ 45 ] ; out . mX [ 46 ] = t88 [ 46 ] ; out . mX [
47 ] = t88 [ 47 ] ; out . mX [ 48 ] = t88 [ 48 ] ; out . mX [ 49 ] = t88 [ 49
] ; out . mX [ 50 ] = t88 [ 50 ] ; out . mX [ 51 ] = t88 [ 51 ] ; out . mX [
52 ] = t88 [ 52 ] ; out . mX [ 53 ] = t88 [ 53 ] ; out . mX [ 54 ] = t88 [ 54
] ; out . mX [ 55 ] = t88 [ 55 ] ; out . mX [ 56 ] = t88 [ 56 ] ; out . mX [
57 ] = t88 [ 57 ] ; out . mX [ 58 ] = t88 [ 58 ] ; out . mX [ 59 ] = t88 [ 59
] ; out . mX [ 60 ] = t88 [ 60 ] ; out . mX [ 61 ] = t88 [ 61 ] ; out . mX [
62 ] = t88 [ 62 ] ; out . mX [ 63 ] = t88 [ 63 ] ; out . mX [ 64 ] = t88 [ 64
] ; out . mX [ 65 ] = t88 [ 65 ] ; out . mX [ 66 ] = t88 [ 66 ] ; out . mX [
67 ] = t88 [ 67 ] ; out . mX [ 68 ] = t88 [ 68 ] ; out . mX [ 69 ] = t88 [ 69
] ; out . mX [ 70 ] = t88 [ 70 ] ; out . mX [ 71 ] = t88 [ 71 ] ; out . mX [
72 ] = t88 [ 72 ] ; out . mX [ 73 ] = t88 [ 73 ] ; out . mX [ 74 ] = t88 [ 74
] ; out . mX [ 75 ] = t88 [ 75 ] ; out . mX [ 76 ] = t88 [ 76 ] ; out . mX [
77 ] = - 0.0 ; out . mX [ 78 ] = - ( real_T ) ( M_idx_0 == 0 ) ; out . mX [
79 ] = - 0.0 ; out . mX [ 80 ] = (
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr2 + -
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr8 * 1.0E-6 ) *
0.00098 ; out . mX [ 81 ] = X_idx_30 / 381.12000000000018 ; out . mX [ 82 ] =
- t95_idx_0 ; out . mX [ 83 ] = - ( X_idx_54 * t270 ) ; out . mX [ 84 ] = - (
X_idx_54 * X_idx_54 * t270 * 0.001 ) ; out . mX [ 85 ] = - ( - X_idx_54 * (
real_T ) ( X_idx_54 < 0.0 ) ) / ( t352 == 0.0 ? 1.0E-16 : t352 ) * t266 ; out
. mX [ 86 ] = - ( - X_idx_16 / ( t352 == 0.0 ? 1.0E-16 : t352 ) * t266 ) ;
out . mX [ 87 ] = - ( -
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 +
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr9 * 1.0E-6 ) *
0.001 ; out . mX [ 88 ] = t240 ; out . mX [ 89 ] = t25 ; out . mX [ 90 ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 * 0.001 ; out
. mX [ 91 ] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10
* 0.001 ; out . mX [ 92 ] = intrm_sf_mf_44 ; out . mX [ 93 ] = U_idx_2 ; (
void ) LC ; ( void ) t389 ; return 0 ; }
