#include "ne_ds.h"
#include "SparkEV_c4aff755_1_ds_sys_struct.h"
#include "SparkEV_c4aff755_1_ds_log.h"
#include "SparkEV_c4aff755_1_ds.h"
#include "SparkEV_c4aff755_1_ds_externals.h"
#include "SparkEV_c4aff755_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T SparkEV_c4aff755_1_ds_log ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t36 , NeDsMethodOutput * t37 ) { ETTS0 b_efOut ; ETTS0
d_efOut ; ETTS0 e_efOut ; ETTS0 efOut ; ETTS0 t2 ; ETTS0 t3 ; PmRealVector
out ; real_T t22 [ 507 ] ; real_T c_efOut [ 1 ] ; real_T f_efOut [ 1 ] ;
real_T t23 [ 1 ] ; real_T U_idx_0 ; real_T U_idx_1 ; real_T U_idx_10 ; real_T
U_idx_2 ; real_T U_idx_3 ; real_T U_idx_4 ; real_T U_idx_5 ; real_T U_idx_6 ;
real_T U_idx_7 ; real_T U_idx_8 ; real_T U_idx_9 ; real_T
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_B10 ; real_T
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_B13 ; real_T
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_B3 ; real_T
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_B7 ; real_T
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W3 ; real_T
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W5 ; real_T
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W7 ; real_T
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W9 ; real_T
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La0 ; real_T
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La14 ; real_T
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La17 ; real_T
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La24 ; real_T
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La3 ; real_T
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La30 ; real_T
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La33 ; real_T
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La8 ; real_T
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr0 ; real_T
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; real_T
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr18 ; real_T
X_idx_0 ; real_T X_idx_1 ; real_T X_idx_10 ; real_T X_idx_11 ; real_T
X_idx_12 ; real_T X_idx_13 ; real_T X_idx_14 ; real_T X_idx_15 ; real_T
X_idx_16 ; real_T X_idx_17 ; real_T X_idx_18 ; real_T X_idx_19 ; real_T
X_idx_2 ; real_T X_idx_20 ; real_T X_idx_21 ; real_T X_idx_22 ; real_T
X_idx_23 ; real_T X_idx_24 ; real_T X_idx_25 ; real_T X_idx_26 ; real_T
X_idx_27 ; real_T X_idx_28 ; real_T X_idx_29 ; real_T X_idx_3 ; real_T
X_idx_30 ; real_T X_idx_31 ; real_T X_idx_32 ; real_T X_idx_33 ; real_T
X_idx_34 ; real_T X_idx_35 ; real_T X_idx_36 ; real_T X_idx_37 ; real_T
X_idx_38 ; real_T X_idx_39 ; real_T X_idx_4 ; real_T X_idx_40 ; real_T
X_idx_41 ; real_T X_idx_42 ; real_T X_idx_43 ; real_T X_idx_44 ; real_T
X_idx_45 ; real_T X_idx_46 ; real_T X_idx_47 ; real_T X_idx_48 ; real_T
X_idx_49 ; real_T X_idx_5 ; real_T X_idx_50 ; real_T X_idx_51 ; real_T
X_idx_52 ; real_T X_idx_53 ; real_T X_idx_54 ; real_T X_idx_55 ; real_T
X_idx_56 ; real_T X_idx_57 ; real_T X_idx_58 ; real_T X_idx_59 ; real_T
X_idx_6 ; real_T X_idx_60 ; real_T X_idx_61 ; real_T X_idx_62 ; real_T
X_idx_63 ; real_T X_idx_64 ; real_T X_idx_65 ; real_T X_idx_7 ; real_T
X_idx_8 ; real_T X_idx_9 ; real_T t24_idx_0 ; real_T t29 ; real_T t30 ;
real_T t34 ; real_T t35 ; size_t t5 [ 1 ] ; size_t t6 [ 1 ] ; size_t t8 [ 1 ]
; size_t t26 ; size_t t27 ; int32_T b ; U_idx_0 = t36 -> mU . mX [ 0 ] ;
U_idx_1 = t36 -> mU . mX [ 1 ] ; U_idx_2 = t36 -> mU . mX [ 2 ] ; U_idx_3 =
t36 -> mU . mX [ 3 ] ; U_idx_4 = t36 -> mU . mX [ 4 ] ; U_idx_5 = t36 -> mU .
mX [ 5 ] ; U_idx_6 = t36 -> mU . mX [ 6 ] ; U_idx_7 = t36 -> mU . mX [ 7 ] ;
U_idx_8 = t36 -> mU . mX [ 8 ] ; U_idx_9 = t36 -> mU . mX [ 9 ] ; U_idx_10 =
t36 -> mU . mX [ 10 ] ; X_idx_0 = t36 -> mX . mX [ 0 ] ; X_idx_1 = t36 -> mX
. mX [ 1 ] ; X_idx_2 = t36 -> mX . mX [ 2 ] ; X_idx_3 = t36 -> mX . mX [ 3 ]
; X_idx_4 = t36 -> mX . mX [ 4 ] ; X_idx_5 = t36 -> mX . mX [ 5 ] ; X_idx_6 =
t36 -> mX . mX [ 6 ] ; X_idx_7 = t36 -> mX . mX [ 7 ] ; X_idx_8 = t36 -> mX .
mX [ 8 ] ; X_idx_9 = t36 -> mX . mX [ 9 ] ; X_idx_10 = t36 -> mX . mX [ 10 ]
; X_idx_11 = t36 -> mX . mX [ 11 ] ; X_idx_12 = t36 -> mX . mX [ 12 ] ;
X_idx_13 = t36 -> mX . mX [ 13 ] ; X_idx_14 = t36 -> mX . mX [ 14 ] ;
X_idx_15 = t36 -> mX . mX [ 15 ] ; X_idx_16 = t36 -> mX . mX [ 16 ] ;
X_idx_17 = t36 -> mX . mX [ 17 ] ; X_idx_18 = t36 -> mX . mX [ 18 ] ;
X_idx_19 = t36 -> mX . mX [ 19 ] ; X_idx_20 = t36 -> mX . mX [ 20 ] ;
X_idx_21 = t36 -> mX . mX [ 21 ] ; X_idx_22 = t36 -> mX . mX [ 22 ] ;
X_idx_23 = t36 -> mX . mX [ 23 ] ; X_idx_24 = t36 -> mX . mX [ 24 ] ;
X_idx_25 = t36 -> mX . mX [ 25 ] ; X_idx_26 = t36 -> mX . mX [ 26 ] ;
X_idx_27 = t36 -> mX . mX [ 27 ] ; X_idx_28 = t36 -> mX . mX [ 28 ] ;
X_idx_29 = t36 -> mX . mX [ 29 ] ; X_idx_30 = t36 -> mX . mX [ 30 ] ;
X_idx_31 = t36 -> mX . mX [ 31 ] ; X_idx_32 = t36 -> mX . mX [ 32 ] ;
X_idx_33 = t36 -> mX . mX [ 33 ] ; X_idx_34 = t36 -> mX . mX [ 34 ] ;
X_idx_35 = t36 -> mX . mX [ 35 ] ; X_idx_36 = t36 -> mX . mX [ 36 ] ;
X_idx_37 = t36 -> mX . mX [ 37 ] ; X_idx_38 = t36 -> mX . mX [ 38 ] ;
X_idx_39 = t36 -> mX . mX [ 39 ] ; X_idx_40 = t36 -> mX . mX [ 40 ] ;
X_idx_41 = t36 -> mX . mX [ 41 ] ; X_idx_42 = t36 -> mX . mX [ 42 ] ;
X_idx_43 = t36 -> mX . mX [ 43 ] ; X_idx_44 = t36 -> mX . mX [ 44 ] ;
X_idx_45 = t36 -> mX . mX [ 45 ] ; X_idx_46 = t36 -> mX . mX [ 46 ] ;
X_idx_47 = t36 -> mX . mX [ 47 ] ; X_idx_48 = t36 -> mX . mX [ 48 ] ;
X_idx_49 = t36 -> mX . mX [ 49 ] ; X_idx_50 = t36 -> mX . mX [ 50 ] ;
X_idx_51 = t36 -> mX . mX [ 51 ] ; X_idx_52 = t36 -> mX . mX [ 52 ] ;
X_idx_53 = t36 -> mX . mX [ 53 ] ; X_idx_54 = t36 -> mX . mX [ 54 ] ;
X_idx_55 = t36 -> mX . mX [ 55 ] ; X_idx_56 = t36 -> mX . mX [ 56 ] ;
X_idx_57 = t36 -> mX . mX [ 57 ] ; X_idx_58 = t36 -> mX . mX [ 58 ] ;
X_idx_59 = t36 -> mX . mX [ 59 ] ; X_idx_60 = t36 -> mX . mX [ 60 ] ;
X_idx_61 = t36 -> mX . mX [ 61 ] ; X_idx_62 = t36 -> mX . mX [ 62 ] ;
X_idx_63 = t36 -> mX . mX [ 63 ] ; X_idx_64 = t36 -> mX . mX [ 64 ] ;
X_idx_65 = t36 -> mX . mX [ 65 ] ; out = t37 -> mLOG ;
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_B3 = ( ( (
X_idx_0 * - 0.003 + X_idx_1 * 0.00051679586563307489 ) - X_idx_22 ) +
X_idx_23 * - 0.2598801 ) - X_idx_24 ;
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_B7 = ( ( X_idx_2
* - 0.001 - X_idx_25 ) + X_idx_26 * - 0.2598801 ) + X_idx_27 ;
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_B10 = ( ( (
X_idx_3 * - 0.003 + X_idx_4 * 0.00051679586563307489 ) - X_idx_28 ) +
X_idx_29 * - 0.2598801 ) - X_idx_30 ;
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_B13 = ( ( X_idx_5
* - 0.001 - X_idx_31 ) + X_idx_32 * - 0.2598801 ) + X_idx_33 ;
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W3 = X_idx_0 *
0.001 ; Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W5 =
X_idx_3 * 0.001 ;
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W7 = X_idx_5 *
0.001 ; Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W9 =
X_idx_2 * 0.001 ;
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La0 = ( X_idx_0 *
- 0.002 + X_idx_1 * 0.00051679586563307489 ) - X_idx_24 ;
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La3 = ( X_idx_3 *
- 0.002 + X_idx_4 * 0.00051679586563307489 ) - X_idx_30 ;
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La8 = X_idx_1 *
0.001 ; Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La14 =
X_idx_1 * - 0.25839793281653745 + X_idx_0 ;
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La17 = X_idx_0 *
0.002 + X_idx_1 * - 0.00051679586563307489 ;
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La24 = X_idx_4 *
0.001 ; Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La30 =
X_idx_4 * - 0.25839793281653745 + X_idx_3 ;
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La33 = X_idx_3 *
0.002 + X_idx_4 * - 0.00051679586563307489 ;
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr0 = X_idx_15 * -
0.01 + U_idx_6 * 0.01 ; t23 [ 0ULL ] = pmf_get_inf ( ) ; for ( t26 = 0ULL ;
t26 < 42ULL ; t26 ++ ) { t27 = t26 / 42ULL ; t30 = t23 [ t27 > 0ULL ? 0ULL :
t27 ] ; t29 = ( ( _NeDynamicSystem * ) ( LC ) ) -> mField0 [ t26 ] * 1.0E-5 ;
t23 [ t27 > 0ULL ? 0ULL : t27 ] = t30 > t29 ? t29 : t30 ; } t30 = t23 [ 0ULL
] ; t29 = X_idx_56 * 1.0E-6 + X_idx_18 ;
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 = X_idx_61 *
1.0E-6 + X_idx_19 ; t23 [ 0ULL ] = X_idx_1 ; t5 [ 0 ] = 42ULL ; t6 [ 0 ] =
1ULL ; tlu2_linear_nearest_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut .
mField1 [ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField2 , & t23 [ 0ULL ] , & t5 [ 0ULL ] , & t6 [ 0ULL ] ) ; t3 =
efOut ; t23 [ 0ULL ] = X_idx_49 ; t8 [ 0 ] = 46ULL ;
tlu2_linear_nearest_prelookup ( & b_efOut . mField0 [ 0ULL ] , & b_efOut .
mField1 [ 0ULL ] , & b_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t23 [ 0ULL ] , & t8 [ 0ULL ] , & t6 [ 0ULL ] ) ; t2 =
b_efOut ; tlu2_2d_linear_nearest_value ( & c_efOut [ 0ULL ] , & t3 . mField0
[ 0ULL ] , & t3 . mField2 [ 0ULL ] , & t2 . mField0 [ 0ULL ] , & t2 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t5 [ 0ULL ] , &
t8 [ 0ULL ] , & t6 [ 0ULL ] ) ; t24_idx_0 = c_efOut [ 0 ] ; t34 = X_idx_1 *
0.001 - X_idx_49 ; t23 [ 0ULL ] = X_idx_4 ; tlu2_linear_nearest_prelookup ( &
d_efOut . mField0 [ 0ULL ] , & d_efOut . mField1 [ 0ULL ] , & d_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t23 [
0ULL ] , & t5 [ 0ULL ] , & t6 [ 0ULL ] ) ; t3 = d_efOut ; t23 [ 0ULL ] =
X_idx_52 ; tlu2_linear_nearest_prelookup ( & e_efOut . mField0 [ 0ULL ] , &
e_efOut . mField1 [ 0ULL ] , & e_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t23 [ 0ULL ] , & t8 [ 0ULL ] , &
t6 [ 0ULL ] ) ; t2 = e_efOut ; tlu2_2d_linear_nearest_value ( & f_efOut [
0ULL ] , & t3 . mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , & t2 . mField0 [
0ULL ] , & t2 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t5 [ 0ULL ] , & t8 [ 0ULL ] , & t6 [ 0ULL ] ) ; t23 [ 0 ] =
f_efOut [ 0 ] ;
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr18 = t23 [ 0ULL
] ; t35 = X_idx_4 * 0.001 - X_idx_52 ; t22 [ 0ULL ] = U_idx_0 * 1.0E-5 ; t22
[ 1ULL ] = X_idx_0 ; t22 [ 2ULL ] =
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_B3 ; t22 [ 3ULL ]
= X_idx_0 ; t22 [ 4ULL ] =
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_B3 * X_idx_0 ;
t22 [ 5ULL ] = U_idx_1 * 1.0E-5 ; t22 [ 6ULL ] = X_idx_2 ; t22 [ 7ULL ] =
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_B7 ; t22 [ 8ULL ]
= X_idx_2 ; t22 [ 9ULL ] =
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_B7 * X_idx_2 ;
t22 [ 10ULL ] = U_idx_2 * 1.0E-5 ; t22 [ 11ULL ] = X_idx_3 ; t22 [ 12ULL ] =
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_B10 ; t22 [ 13ULL
] = X_idx_3 ; t22 [ 14ULL ] =
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_B10 * X_idx_3 ;
t22 [ 15ULL ] = U_idx_3 * 1.0E-5 ; t22 [ 16ULL ] = X_idx_5 ; t22 [ 17ULL ] =
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_B13 ; t22 [ 18ULL
] = X_idx_5 ; t22 [ 19ULL ] =
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_B13 * X_idx_5 ;
t22 [ 20ULL ] = U_idx_2 ; t22 [ 21ULL ] = U_idx_1 ; t22 [ 22ULL ] = U_idx_3 ;
t22 [ 23ULL ] = U_idx_0 ; t22 [ 24ULL ] = X_idx_0 ; t22 [ 25ULL ] = X_idx_3 ;
t22 [ 26ULL ] = X_idx_2 ; t22 [ 27ULL ] = X_idx_5 ; t22 [ 28ULL ] = X_idx_0 ;
t22 [ 29ULL ] = X_idx_3 ; t22 [ 30ULL ] = X_idx_2 ; t22 [ 31ULL ] = X_idx_5 ;
t22 [ 32ULL ] = X_idx_6 ; t22 [ 33ULL ] = X_idx_34 ; t22 [ 34ULL ] = X_idx_35
; t22 [ 35ULL ] = X_idx_6 ; t22 [ 36ULL ] = X_idx_34 ; t22 [ 37ULL ] =
X_idx_35 ; t22 [ 38ULL ] = X_idx_6 ; t22 [ 39ULL ] = X_idx_34 ; t22 [ 40ULL ]
= X_idx_35 ; t22 [ 41ULL ] = X_idx_6 ; t22 [ 42ULL ] = U_idx_4 *
0.017453292519943295 ; t22 [ 43ULL ] = X_idx_36 ; t22 [ 44ULL ] = X_idx_6 ;
t22 [ 45ULL ] = U_idx_5 ; t22 [ 46ULL ] = X_idx_6 ; t22 [ 47ULL ] = U_idx_4 ;
t22 [ 48ULL ] = U_idx_5 ; t22 [ 49ULL ] = X_idx_6 ; t22 [ 50ULL ] = X_idx_34
; t22 [ 51ULL ] = X_idx_35 ; t22 [ 52ULL ] = X_idx_34 ; t22 [ 53ULL ] =
X_idx_35 ; t22 [ 54ULL ] = X_idx_0 ; t22 [ 55ULL ] = X_idx_6 ; t22 [ 56ULL ]
= X_idx_34 ; t22 [ 57ULL ] = X_idx_37 ; t22 [ 58ULL ] = X_idx_6 ; t22 [ 59ULL
] = X_idx_34 ; t22 [ 60ULL ] = ( ( ( ( ( ( - X_idx_36 - X_idx_38 ) - X_idx_39
) - X_idx_40 ) - X_idx_41 ) - X_idx_42 ) - X_idx_43 ) - X_idx_44 ; t22 [
61ULL ] = X_idx_6 ; t22 [ 62ULL ] = X_idx_0 ; t22 [ 63ULL ] = X_idx_0 ; t22 [
64ULL ] = X_idx_22 ; t22 [ 65ULL ] = X_idx_0 ; t22 [ 66ULL ] = X_idx_6 ; t22
[ 67ULL ] = X_idx_34 ; t22 [ 68ULL ] = X_idx_37 ; t22 [ 69ULL ] = X_idx_0 *
0.2598801 ; t22 [ 70ULL ] = X_idx_38 ; t22 [ 71ULL ] = X_idx_23 ; t22 [ 72ULL
] = X_idx_0 ; t22 [ 73ULL ] = X_idx_0 * 0.2598801 ; t22 [ 74ULL ] = -
X_idx_23 ; t22 [ 75ULL ] = X_idx_23 * 0.2598801 ; t22 [ 76ULL ] = X_idx_34 ;
t22 [ 77ULL ] = X_idx_37 ; t22 [ 78ULL ] = X_idx_2 ; t22 [ 79ULL ] = X_idx_6
; t22 [ 80ULL ] = X_idx_34 ; t22 [ 81ULL ] = X_idx_45 ; t22 [ 82ULL ] =
X_idx_6 ; t22 [ 83ULL ] = X_idx_34 ; t22 [ 84ULL ] = X_idx_39 ; t22 [ 85ULL ]
= X_idx_6 ; t22 [ 86ULL ] = X_idx_2 ; t22 [ 87ULL ] = X_idx_2 ; t22 [ 88ULL ]
= X_idx_25 ; t22 [ 89ULL ] = X_idx_2 ; t22 [ 90ULL ] = X_idx_6 ; t22 [ 91ULL
] = X_idx_34 ; t22 [ 92ULL ] = X_idx_45 ; t22 [ 93ULL ] = X_idx_2 * 0.2598801
; t22 [ 94ULL ] = X_idx_40 ; t22 [ 95ULL ] = X_idx_26 ; t22 [ 96ULL ] =
X_idx_2 ; t22 [ 97ULL ] = X_idx_2 * 0.2598801 ; t22 [ 98ULL ] = - X_idx_26 ;
t22 [ 99ULL ] = X_idx_26 * 0.2598801 ; t22 [ 100ULL ] = X_idx_45 ; t22 [
101ULL ] = X_idx_3 ; t22 [ 102ULL ] = X_idx_6 ; t22 [ 103ULL ] = X_idx_35 ;
t22 [ 104ULL ] = X_idx_46 ; t22 [ 105ULL ] = X_idx_6 ; t22 [ 106ULL ] =
X_idx_35 ; t22 [ 107ULL ] = X_idx_41 ; t22 [ 108ULL ] = X_idx_6 ; t22 [
109ULL ] = X_idx_3 ; t22 [ 110ULL ] = X_idx_3 ; t22 [ 111ULL ] = X_idx_28 ;
t22 [ 112ULL ] = X_idx_3 ; t22 [ 113ULL ] = X_idx_6 ; t22 [ 114ULL ] =
X_idx_35 ; t22 [ 115ULL ] = X_idx_46 ; t22 [ 116ULL ] = X_idx_3 * 0.2598801 ;
t22 [ 117ULL ] = X_idx_42 ; t22 [ 118ULL ] = X_idx_29 ; t22 [ 119ULL ] =
X_idx_3 ; t22 [ 120ULL ] = X_idx_3 * 0.2598801 ; t22 [ 121ULL ] = - X_idx_29
; t22 [ 122ULL ] = X_idx_29 * 0.2598801 ; t22 [ 123ULL ] = X_idx_35 ; t22 [
124ULL ] = X_idx_46 ; t22 [ 125ULL ] = X_idx_5 ; t22 [ 126ULL ] = X_idx_6 ;
t22 [ 127ULL ] = X_idx_35 ; t22 [ 128ULL ] = X_idx_47 ; t22 [ 129ULL ] =
X_idx_6 ; t22 [ 130ULL ] = X_idx_35 ; t22 [ 131ULL ] = X_idx_43 ; t22 [
132ULL ] = X_idx_6 ; t22 [ 133ULL ] = X_idx_5 ; t22 [ 134ULL ] = X_idx_5 ;
t22 [ 135ULL ] = X_idx_31 ; t22 [ 136ULL ] = X_idx_5 ; t22 [ 137ULL ] =
X_idx_6 ; t22 [ 138ULL ] = X_idx_35 ; t22 [ 139ULL ] = X_idx_47 ; t22 [
140ULL ] = X_idx_5 * 0.2598801 ; t22 [ 141ULL ] = X_idx_44 ; t22 [ 142ULL ] =
X_idx_32 ; t22 [ 143ULL ] = X_idx_5 ; t22 [ 144ULL ] = X_idx_5 * 0.2598801 ;
t22 [ 145ULL ] = - X_idx_32 ; t22 [ 146ULL ] = X_idx_32 * 0.2598801 ; t22 [
147ULL ] = X_idx_47 ; t22 [ 148ULL ] = X_idx_0 ; t22 [ 149ULL ] =
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W3 ; t22 [ 150ULL
] = Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W3 * 1000.0 ;
t22 [ 151ULL ] =
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W3 *
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W3 * 1000.0 ; t22
[ 152ULL ] = X_idx_3 ; t22 [ 153ULL ] =
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W5 ; t22 [ 154ULL
] = Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W5 * 1000.0 ;
t22 [ 155ULL ] =
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W5 *
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W5 * 1000.0 ; t22
[ 156ULL ] = X_idx_5 ; t22 [ 157ULL ] =
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W7 ; t22 [ 158ULL
] = Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W7 * 1000.0 ;
t22 [ 159ULL ] =
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W7 *
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W7 * 1000.0 ; t22
[ 160ULL ] = X_idx_2 ; t22 [ 161ULL ] =
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W9 ; t22 [ 162ULL
] = Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W9 * 1000.0 ;
t22 [ 163ULL ] =
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W9 *
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W9 * 1000.0 ; t22
[ 164ULL ] = X_idx_6 ; t22 [ 165ULL ] = X_idx_7 ; t22 [ 166ULL ] = X_idx_2 ;
t22 [ 167ULL ] = X_idx_2 ; t22 [ 168ULL ] = X_idx_7 ; t22 [ 169ULL ] =
X_idx_2 ; t22 [ 170ULL ] = X_idx_2 ; t22 [ 171ULL ] = X_idx_8 ; t22 [ 172ULL
] = X_idx_3 ; t22 [ 173ULL ] = X_idx_3 ; t22 [ 174ULL ] = X_idx_8 ; t22 [
175ULL ] = X_idx_3 ; t22 [ 176ULL ] = X_idx_3 ; t22 [ 177ULL ] = X_idx_9 ;
t22 [ 178ULL ] = X_idx_5 ; t22 [ 179ULL ] = X_idx_5 ; t22 [ 180ULL ] =
X_idx_9 ; t22 [ 181ULL ] = X_idx_5 ; t22 [ 182ULL ] = X_idx_5 ; t22 [ 183ULL
] = X_idx_10 ; t22 [ 184ULL ] = X_idx_0 ; t22 [ 185ULL ] = X_idx_0 ; t22 [
186ULL ] = X_idx_10 ; t22 [ 187ULL ] = X_idx_0 ; t22 [ 188ULL ] = X_idx_0 ;
t22 [ 189ULL ] = X_idx_0 ; t22 [ 190ULL ] = X_idx_3 ; t22 [ 191ULL ] =
X_idx_2 ; t22 [ 192ULL ] = X_idx_5 ; t22 [ 193ULL ] = X_idx_6 ; t22 [ 194ULL
] = X_idx_0 ; t22 [ 195ULL ] = X_idx_3 ; t22 [ 196ULL ] = X_idx_2 ; t22 [
197ULL ] = X_idx_5 ; t22 [ 198ULL ] = X_idx_0 ; t22 [ 199ULL ] = X_idx_3 ;
t22 [ 200ULL ] = X_idx_2 ; t22 [ 201ULL ] = X_idx_5 ; t22 [ 202ULL ] =
X_idx_0 ; t22 [ 203ULL ] = X_idx_0 ; t22 [ 204ULL ] = X_idx_0 ; t22 [ 205ULL
] = Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La0 ; t22 [
206ULL ] = Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La0 ;
t22 [ 207ULL ] =
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La0 ; t22 [ 208ULL
] = X_idx_0 ; t22 [ 209ULL ] = X_idx_2 ; t22 [ 210ULL ] = X_idx_2 ; t22 [
211ULL ] = X_idx_2 ; t22 [ 212ULL ] = X_idx_27 ; t22 [ 213ULL ] = X_idx_27 ;
t22 [ 214ULL ] = X_idx_27 ; t22 [ 215ULL ] = X_idx_2 ; t22 [ 216ULL ] =
X_idx_5 ; t22 [ 217ULL ] = X_idx_5 ; t22 [ 218ULL ] = X_idx_5 ; t22 [ 219ULL
] = X_idx_33 ; t22 [ 220ULL ] = X_idx_33 ; t22 [ 221ULL ] = X_idx_33 ; t22 [
222ULL ] = X_idx_5 ; t22 [ 223ULL ] = X_idx_3 ; t22 [ 224ULL ] = X_idx_3 ;
t22 [ 225ULL ] = X_idx_3 ; t22 [ 226ULL ] =
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La3 ; t22 [ 227ULL
] = Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La3 ; t22 [
228ULL ] = Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La3 ;
t22 [ 229ULL ] = X_idx_3 ; t22 [ 230ULL ] = X_idx_1 ; t22 [ 231ULL ] =
X_idx_4 ; t22 [ 232ULL ] = X_idx_1 ; t22 [ 233ULL ] = X_idx_4 ; t22 [ 234ULL
] = X_idx_11 ; t22 [ 235ULL ] = X_idx_1 ; t22 [ 236ULL ] = X_idx_1 ; t22 [
237ULL ] = X_idx_11 ; t22 [ 238ULL ] = X_idx_1 ; t22 [ 239ULL ] = X_idx_1 ;
t22 [ 240ULL ] = X_idx_12 ; t22 [ 241ULL ] = X_idx_4 ; t22 [ 242ULL ] =
X_idx_4 ; t22 [ 243ULL ] = X_idx_12 ; t22 [ 244ULL ] = X_idx_4 ; t22 [ 245ULL
] = X_idx_4 ; t22 [ 246ULL ] = X_idx_0 ; t22 [ 247ULL ] = X_idx_2 ; t22 [
248ULL ] = X_idx_1 ; t22 [ 249ULL ] = X_idx_0 ; t22 [ 250ULL ] = X_idx_2 ;
t22 [ 251ULL ] = X_idx_1 ; t22 [ 252ULL ] = X_idx_1 ; t22 [ 253ULL ] =
X_idx_0 ; t22 [ 254ULL ] = X_idx_2 ; t22 [ 255ULL ] = X_idx_1 ; t22 [ 256ULL
] = X_idx_1 * 0.25839793281653745 ; t22 [ 257ULL ] = ( X_idx_1 * - 0.002 -
X_idx_48 ) + X_idx_49 ; t22 [ 258ULL ] = X_idx_1 ; t22 [ 259ULL ] =
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La8 ; t22 [ 260ULL
] = Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La8 * 1000.0 ;
t22 [ 261ULL ] =
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La8 *
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La8 * 1000.0 ; t22
[ 262ULL ] = X_idx_1 * 0.25839793281653745 ; t22 [ 263ULL ] = X_idx_1 *
0.25839793281653745 ; t22 [ 264ULL ] = 0.0 ; t22 [ 265ULL ] = ( ( X_idx_0 *
0.002 + X_idx_1 * - 0.00051679586563307489 ) - X_idx_50 ) - X_idx_27 ; t22 [
266ULL ] = X_idx_1 * 0.25839793281653745 ; t22 [ 267ULL ] =
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La14 ; t22 [
268ULL ] = X_idx_0 ; t22 [ 269ULL ] = X_idx_24 ; t22 [ 270ULL ] = X_idx_1 *
0.25839793281653745 ; t22 [ 271ULL ] = X_idx_0 ; t22 [ 272ULL ] =
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La17 ; t22 [
273ULL ] = Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La17 *
500.0 ; t22 [ 274ULL ] =
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La17 *
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La17 * 500.0 ; t22
[ 275ULL ] = X_idx_50 ; t22 [ 276ULL ] = X_idx_27 ; t22 [ 277ULL ] = X_idx_1
* 0.25839793281653745 ; t22 [ 278ULL ] =
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La14 ; t22 [
279ULL ] = X_idx_2 ; t22 [ 280ULL ] = - X_idx_27 ; t22 [ 281ULL ] = X_idx_1 *
0.25839793281653745 ; t22 [ 282ULL ] = X_idx_2 ; t22 [ 283ULL ] = X_idx_1 * -
0.25839793281653745 + X_idx_2 ; t22 [ 284ULL ] = 0.0 ; t22 [ 285ULL ] =
X_idx_27 ; t22 [ 286ULL ] = - X_idx_27 ; t22 [ 287ULL ] = X_idx_3 ; t22 [
288ULL ] = X_idx_5 ; t22 [ 289ULL ] = X_idx_4 ; t22 [ 290ULL ] = X_idx_3 ;
t22 [ 291ULL ] = X_idx_5 ; t22 [ 292ULL ] = X_idx_4 ; t22 [ 293ULL ] =
X_idx_4 ; t22 [ 294ULL ] = X_idx_3 ; t22 [ 295ULL ] = X_idx_5 ; t22 [ 296ULL
] = X_idx_4 ; t22 [ 297ULL ] = X_idx_4 * 0.25839793281653745 ; t22 [ 298ULL ]
= ( X_idx_4 * - 0.002 - X_idx_51 ) + X_idx_52 ; t22 [ 299ULL ] = X_idx_4 ;
t22 [ 300ULL ] =
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La24 ; t22 [
301ULL ] = Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La24 *
1000.0 ; t22 [ 302ULL ] =
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La24 *
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La24 * 1000.0 ;
t22 [ 303ULL ] = X_idx_4 * 0.25839793281653745 ; t22 [ 304ULL ] = X_idx_4 *
0.25839793281653745 ; t22 [ 305ULL ] = 0.0 ; t22 [ 306ULL ] = ( ( X_idx_3 *
0.002 + X_idx_4 * - 0.00051679586563307489 ) - X_idx_53 ) - X_idx_33 ; t22 [
307ULL ] = X_idx_4 * 0.25839793281653745 ; t22 [ 308ULL ] =
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La30 ; t22 [
309ULL ] = X_idx_3 ; t22 [ 310ULL ] = X_idx_30 ; t22 [ 311ULL ] = X_idx_4 *
0.25839793281653745 ; t22 [ 312ULL ] = X_idx_3 ; t22 [ 313ULL ] =
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La33 ; t22 [
314ULL ] = Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La33 *
500.0 ; t22 [ 315ULL ] =
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La33 *
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La33 * 500.0 ; t22
[ 316ULL ] = X_idx_53 ; t22 [ 317ULL ] = X_idx_33 ; t22 [ 318ULL ] = X_idx_4
* 0.25839793281653745 ; t22 [ 319ULL ] =
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La30 ; t22 [
320ULL ] = X_idx_5 ; t22 [ 321ULL ] = - X_idx_33 ; t22 [ 322ULL ] = X_idx_4 *
0.25839793281653745 ; t22 [ 323ULL ] = X_idx_5 ; t22 [ 324ULL ] = X_idx_4 * -
0.25839793281653745 + X_idx_5 ; t22 [ 325ULL ] = 0.0 ; t22 [ 326ULL ] =
X_idx_33 ; t22 [ 327ULL ] = - X_idx_33 ; t22 [ 328ULL ] = X_idx_0 ; t22 [
329ULL ] = X_idx_3 ; t22 [ 330ULL ] = X_idx_2 ; t22 [ 331ULL ] = X_idx_5 ;
t22 [ 332ULL ] = X_idx_1 ; t22 [ 333ULL ] = X_idx_4 ; t22 [ 334ULL ] =
X_idx_1 ; t22 [ 335ULL ] = X_idx_1 ; t22 [ 336ULL ] = X_idx_48 ; t22 [ 337ULL
] = X_idx_1 ; t22 [ 338ULL ] = X_idx_4 ; t22 [ 339ULL ] = X_idx_4 ; t22 [
340ULL ] = X_idx_51 ; t22 [ 341ULL ] = X_idx_4 ; t22 [ 342ULL ] = X_idx_13 ;
t22 [ 343ULL ] = X_idx_1 ; t22 [ 344ULL ] = X_idx_1 ; t22 [ 345ULL ] =
X_idx_13 ; t22 [ 346ULL ] = X_idx_1 ; t22 [ 347ULL ] = X_idx_1 ; t22 [ 348ULL
] = X_idx_14 ; t22 [ 349ULL ] = X_idx_4 ; t22 [ 350ULL ] = X_idx_4 ; t22 [
351ULL ] = X_idx_14 ; t22 [ 352ULL ] = X_idx_4 ; t22 [ 353ULL ] = X_idx_4 ;
t22 [ 354ULL ] = X_idx_1 ; t22 [ 355ULL ] = X_idx_4 ; t22 [ 356ULL ] =
X_idx_1 ; t22 [ 357ULL ] = X_idx_4 ; t22 [ 358ULL ] = X_idx_1 ; t22 [ 359ULL
] = X_idx_4 ; t22 [ 360ULL ] = X_idx_1 ; t22 [ 361ULL ] = X_idx_4 ; t22 [
362ULL ] = X_idx_0 ; t22 [ 363ULL ] = X_idx_3 ; t22 [ 364ULL ] = X_idx_2 ;
t22 [ 365ULL ] = X_idx_5 ; t22 [ 366ULL ] = X_idx_1 ; t22 [ 367ULL ] =
X_idx_4 ; t22 [ 368ULL ] = X_idx_15 ; t22 [ 369ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr0 * 1000.0 ; t22
[ 370ULL ] = X_idx_15 - 273.15 ; t22 [ 371ULL ] = X_idx_16 *
0.00027777777777777778 ; t22 [ 372ULL ] = X_idx_54 ; t22 [ 373ULL ] =
X_idx_17 ; t22 [ 374ULL ] = X_idx_55 ; t22 [ 375ULL ] = t30 > X_idx_55 ? t30
: X_idx_55 ; t22 [ 376ULL ] = t29 ; t22 [ 377ULL ] = X_idx_57 * 1000.0 ; t22
[ 378ULL ] = X_idx_57 * 1000.0 ; t22 [ 379ULL ] = X_idx_58 ; t22 [ 380ULL ] =
X_idx_58 ; t22 [ 381ULL ] = t29 ; t22 [ 382ULL ] = X_idx_59 ; t22 [ 383ULL ]
= X_idx_60 * 0.00027777777777777778 ; t22 [ 384ULL ] = X_idx_58 ; t22 [
385ULL ] = U_idx_7 ; t22 [ 386ULL ] = U_idx_7 ; t22 [ 387ULL ] = t29 ; t22 [
388ULL ] = t29 ; t22 [ 389ULL ] = U_idx_7 ; t22 [ 390ULL ] = t29 ; t22 [
391ULL ] = - X_idx_54 ; t22 [ 392ULL ] = - X_idx_54 ; t22 [ 393ULL ] = t29 ;
t22 [ 394ULL ] = t29 ; t22 [ 395ULL ] = - X_idx_54 ; t22 [ 396ULL ] = t29 ;
t22 [ 397ULL ] = t29 ; t22 [ 398ULL ] = t29 ; t22 [ 399ULL ] = t29 ; t22 [
400ULL ] = t29 ; t22 [ 401ULL ] = U_idx_6 ; t22 [ 402ULL ] = U_idx_6 ; t22 [
403ULL ] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr0 * -
1000.0 ; t22 [ 404ULL ] = U_idx_6 ; t22 [ 405ULL ] = U_idx_6 ; t22 [ 406ULL ]
= U_idx_6 ; t22 [ 407ULL ] = U_idx_6 ; t22 [ 408ULL ] = X_idx_15 ; t22 [
409ULL ] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr0 *
1000.0 ; t22 [ 410ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr0 * 100.0 ; t22
[ 411ULL ] = t29 ; t22 [ 412ULL ] = t29 ; t22 [ 413ULL ] = U_idx_8 ; t22 [
414ULL ] = ( - X_idx_61 - X_idx_62 ) - X_idx_63 ; t22 [ 415ULL ] = ( -
X_idx_54 - X_idx_56 ) - U_idx_7 ; t22 [ 416ULL ] = t29 ; t22 [ 417ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
418ULL ] = t29 ; t22 [ 419ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
420ULL ] = X_idx_56 ; t22 [ 421ULL ] = t29 ; t22 [ 422ULL ] = t29 ; t22 [
423ULL ] = X_idx_18 ; t22 [ 424ULL ] = X_idx_56 * X_idx_56 * 1.0E-9 ; t22 [
425ULL ] = X_idx_61 ; t22 [ 426ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
427ULL ] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ;
t22 [ 428ULL ] = X_idx_19 ; t22 [ 429ULL ] = X_idx_61 * X_idx_61 * 1.0E-9 ;
t22 [ 430ULL ] = U_idx_8 ; t22 [ 431ULL ] = t29 ; t22 [ 432ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
433ULL ] = U_idx_8 ; t22 [ 434ULL ] = t29 ; t22 [ 435ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
436ULL ] = U_idx_8 ; t22 [ 437ULL ] = X_idx_62 ; t22 [ 438ULL ] = X_idx_62 ;
t22 [ 439ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
440ULL ] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ;
t22 [ 441ULL ] = X_idx_62 ; t22 [ 442ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
443ULL ] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ;
t22 [ 444ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
445ULL ] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ;
t22 [ 446ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
447ULL ] = X_idx_1 ; t22 [ 448ULL ] = X_idx_1 ; t22 [ 449ULL ] = U_idx_9 ;
t22 [ 450ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
451ULL ] = X_idx_62 ; t22 [ 452ULL ] = t24_idx_0 * 1000.0 ; t22 [ 453ULL ] =
t34 ; t22 [ 454ULL ] = X_idx_64 ; t22 [ 455ULL ] = X_idx_64 ; t22 [ 456ULL ]
= X_idx_49 ; t22 [ 457ULL ] = X_idx_20 ; t22 [ 458ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
459ULL ] = X_idx_1 ; t22 [ 460ULL ] = X_idx_1 ; t22 [ 461ULL ] = U_idx_9 ;
t22 [ 462ULL ] = X_idx_1 ; t22 [ 463ULL ] = X_idx_1 ; t22 [ 464ULL ] = - t34
; t22 [ 465ULL ] = - t34 ; t22 [ 466ULL ] = - t34 ; t22 [ 467ULL ] = X_idx_1
; t22 [ 468ULL ] = X_idx_1 ; t22 [ 469ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
470ULL ] = X_idx_63 ; t22 [ 471ULL ] = X_idx_63 ; t22 [ 472ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
473ULL ] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ;
t22 [ 474ULL ] = X_idx_63 ; t22 [ 475ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
476ULL ] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ;
t22 [ 477ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
478ULL ] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ;
t22 [ 479ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
480ULL ] = X_idx_4 ; t22 [ 481ULL ] = X_idx_4 ; t22 [ 482ULL ] = U_idx_10 ;
t22 [ 483ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
484ULL ] = X_idx_63 ; t22 [ 485ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr18 * 1000.0 ;
t22 [ 486ULL ] = t35 ; t22 [ 487ULL ] = X_idx_65 ; t22 [ 488ULL ] = X_idx_65
; t22 [ 489ULL ] = X_idx_52 ; t22 [ 490ULL ] = X_idx_21 ; t22 [ 491ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
492ULL ] = X_idx_4 ; t22 [ 493ULL ] = X_idx_4 ; t22 [ 494ULL ] = U_idx_10 ;
t22 [ 495ULL ] = X_idx_4 ; t22 [ 496ULL ] = X_idx_4 ; t22 [ 497ULL ] = - t35
; t22 [ 498ULL ] = - t35 ; t22 [ 499ULL ] = - t35 ; t22 [ 500ULL ] = X_idx_4
; t22 [ 501ULL ] = X_idx_4 ; t22 [ 502ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
503ULL ] = X_idx_1 ; t22 [ 504ULL ] = X_idx_4 ; t22 [ 505ULL ] = X_idx_1 ;
t22 [ 506ULL ] = X_idx_4 ; for ( b = 0 ; b < 507 ; b ++ ) { out . mX [ b ] =
t22 [ b ] ; } ( void ) LC ; ( void ) t37 ; return 0 ; }
