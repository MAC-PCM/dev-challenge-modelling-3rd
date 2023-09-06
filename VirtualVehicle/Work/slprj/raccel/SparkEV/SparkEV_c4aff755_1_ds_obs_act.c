#include "ne_ds.h"
#include "SparkEV_c4aff755_1_ds_sys_struct.h"
#include "SparkEV_c4aff755_1_ds_obs_act.h"
#include "SparkEV_c4aff755_1_ds.h"
#include "SparkEV_c4aff755_1_ds_externals.h"
#include "SparkEV_c4aff755_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T SparkEV_c4aff755_1_ds_obs_act ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t40 , NeDsMethodOutput * t41 ) { ETTS0 b_efOut ; ETTS0
d_efOut ; ETTS0 e_efOut ; ETTS0 efOut ; ETTS0 t2 ; ETTS0 t3 ; PmRealVector
out ; real_T t22 [ 652 ] ; real_T
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W0 [ 4 ] ; real_T
c_efOut [ 1 ] ; real_T f_efOut [ 1 ] ; real_T t24 [ 1 ] ; real_T U_idx_0 ;
real_T U_idx_1 ; real_T U_idx_10 ; real_T U_idx_2 ; real_T U_idx_3 ; real_T
U_idx_4 ; real_T U_idx_5 ; real_T U_idx_6 ; real_T U_idx_7 ; real_T U_idx_8 ;
real_T U_idx_9 ; real_T
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
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr2 ; real_T
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
X_idx_8 ; real_T X_idx_9 ; real_T t23_idx_0 ; real_T t38 ; real_T t39 ;
size_t t5 [ 1 ] ; size_t t6 [ 1 ] ; size_t t8 [ 1 ] ; size_t t32 ; int32_T b
; U_idx_0 = t40 -> mU . mX [ 0 ] ; U_idx_1 = t40 -> mU . mX [ 1 ] ; U_idx_2 =
t40 -> mU . mX [ 2 ] ; U_idx_3 = t40 -> mU . mX [ 3 ] ; U_idx_4 = t40 -> mU .
mX [ 4 ] ; U_idx_5 = t40 -> mU . mX [ 5 ] ; U_idx_6 = t40 -> mU . mX [ 6 ] ;
U_idx_7 = t40 -> mU . mX [ 7 ] ; U_idx_8 = t40 -> mU . mX [ 8 ] ; U_idx_9 =
t40 -> mU . mX [ 9 ] ; U_idx_10 = t40 -> mU . mX [ 10 ] ; X_idx_0 = t40 -> mX
. mX [ 0 ] ; X_idx_1 = t40 -> mX . mX [ 1 ] ; X_idx_2 = t40 -> mX . mX [ 2 ]
; X_idx_3 = t40 -> mX . mX [ 3 ] ; X_idx_4 = t40 -> mX . mX [ 4 ] ; X_idx_5 =
t40 -> mX . mX [ 5 ] ; X_idx_6 = t40 -> mX . mX [ 6 ] ; X_idx_7 = t40 -> mX .
mX [ 7 ] ; X_idx_8 = t40 -> mX . mX [ 8 ] ; X_idx_9 = t40 -> mX . mX [ 9 ] ;
X_idx_10 = t40 -> mX . mX [ 10 ] ; X_idx_11 = t40 -> mX . mX [ 11 ] ;
X_idx_12 = t40 -> mX . mX [ 12 ] ; X_idx_13 = t40 -> mX . mX [ 13 ] ;
X_idx_14 = t40 -> mX . mX [ 14 ] ; X_idx_15 = t40 -> mX . mX [ 15 ] ;
X_idx_16 = t40 -> mX . mX [ 16 ] ; X_idx_17 = t40 -> mX . mX [ 17 ] ;
X_idx_18 = t40 -> mX . mX [ 18 ] ; X_idx_19 = t40 -> mX . mX [ 19 ] ;
X_idx_20 = t40 -> mX . mX [ 20 ] ; X_idx_21 = t40 -> mX . mX [ 21 ] ;
X_idx_22 = t40 -> mX . mX [ 22 ] ; X_idx_23 = t40 -> mX . mX [ 23 ] ;
X_idx_24 = t40 -> mX . mX [ 24 ] ; X_idx_25 = t40 -> mX . mX [ 25 ] ;
X_idx_26 = t40 -> mX . mX [ 26 ] ; X_idx_27 = t40 -> mX . mX [ 27 ] ;
X_idx_28 = t40 -> mX . mX [ 28 ] ; X_idx_29 = t40 -> mX . mX [ 29 ] ;
X_idx_30 = t40 -> mX . mX [ 30 ] ; X_idx_31 = t40 -> mX . mX [ 31 ] ;
X_idx_32 = t40 -> mX . mX [ 32 ] ; X_idx_33 = t40 -> mX . mX [ 33 ] ;
X_idx_34 = t40 -> mX . mX [ 34 ] ; X_idx_35 = t40 -> mX . mX [ 35 ] ;
X_idx_36 = t40 -> mX . mX [ 36 ] ; X_idx_37 = t40 -> mX . mX [ 37 ] ;
X_idx_38 = t40 -> mX . mX [ 38 ] ; X_idx_39 = t40 -> mX . mX [ 39 ] ;
X_idx_40 = t40 -> mX . mX [ 40 ] ; X_idx_41 = t40 -> mX . mX [ 41 ] ;
X_idx_42 = t40 -> mX . mX [ 42 ] ; X_idx_43 = t40 -> mX . mX [ 43 ] ;
X_idx_44 = t40 -> mX . mX [ 44 ] ; X_idx_45 = t40 -> mX . mX [ 45 ] ;
X_idx_46 = t40 -> mX . mX [ 46 ] ; X_idx_47 = t40 -> mX . mX [ 47 ] ;
X_idx_48 = t40 -> mX . mX [ 48 ] ; X_idx_49 = t40 -> mX . mX [ 49 ] ;
X_idx_50 = t40 -> mX . mX [ 50 ] ; X_idx_51 = t40 -> mX . mX [ 51 ] ;
X_idx_52 = t40 -> mX . mX [ 52 ] ; X_idx_53 = t40 -> mX . mX [ 53 ] ;
X_idx_54 = t40 -> mX . mX [ 54 ] ; X_idx_55 = t40 -> mX . mX [ 55 ] ;
X_idx_56 = t40 -> mX . mX [ 56 ] ; X_idx_57 = t40 -> mX . mX [ 57 ] ;
X_idx_58 = t40 -> mX . mX [ 58 ] ; X_idx_59 = t40 -> mX . mX [ 59 ] ;
X_idx_60 = t40 -> mX . mX [ 60 ] ; X_idx_61 = t40 -> mX . mX [ 61 ] ;
X_idx_62 = t40 -> mX . mX [ 62 ] ; X_idx_63 = t40 -> mX . mX [ 63 ] ;
X_idx_64 = t40 -> mX . mX [ 64 ] ; X_idx_65 = t40 -> mX . mX [ 65 ] ; out =
t41 -> mOBS_ACT ;
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W0 [ 0 ] = 0.0 ;
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W0 [ 1 ] = 0.0 ;
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W0 [ 2 ] = 0.0 ;
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W0 [ 3 ] = 0.0 ;
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
0.01 + U_idx_6 * 0.01 ;
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr2 = X_idx_56 *
1.0E-6 + X_idx_18 ;
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 = X_idx_61 *
1.0E-6 + X_idx_19 ; t24 [ 0ULL ] = X_idx_1 ; t5 [ 0 ] = 42ULL ; t6 [ 0 ] =
1ULL ; tlu2_linear_nearest_prelookup ( & efOut . mField0 [ 0ULL ] , & efOut .
mField1 [ 0ULL ] , & efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC
) ) -> mField2 , & t24 [ 0ULL ] , & t5 [ 0ULL ] , & t6 [ 0ULL ] ) ; t3 =
efOut ; t24 [ 0ULL ] = X_idx_49 ; t8 [ 0 ] = 46ULL ;
tlu2_linear_nearest_prelookup ( & b_efOut . mField0 [ 0ULL ] , & b_efOut .
mField1 [ 0ULL ] , & b_efOut . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) (
LC ) ) -> mField3 , & t24 [ 0ULL ] , & t8 [ 0ULL ] , & t6 [ 0ULL ] ) ; t2 =
b_efOut ; tlu2_2d_linear_nearest_value ( & c_efOut [ 0ULL ] , & t3 . mField0
[ 0ULL ] , & t3 . mField2 [ 0ULL ] , & t2 . mField0 [ 0ULL ] , & t2 . mField2
[ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField1 , & t5 [ 0ULL ] , &
t8 [ 0ULL ] , & t6 [ 0ULL ] ) ; t23_idx_0 = c_efOut [ 0 ] ; t38 = X_idx_1 *
0.001 - X_idx_49 ; t24 [ 0ULL ] = X_idx_4 ; tlu2_linear_nearest_prelookup ( &
d_efOut . mField0 [ 0ULL ] , & d_efOut . mField1 [ 0ULL ] , & d_efOut .
mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) -> mField2 , & t24 [
0ULL ] , & t5 [ 0ULL ] , & t6 [ 0ULL ] ) ; t3 = d_efOut ; t24 [ 0ULL ] =
X_idx_52 ; tlu2_linear_nearest_prelookup ( & e_efOut . mField0 [ 0ULL ] , &
e_efOut . mField1 [ 0ULL ] , & e_efOut . mField2 [ 0ULL ] , ( (
_NeDynamicSystem * ) ( LC ) ) -> mField3 , & t24 [ 0ULL ] , & t8 [ 0ULL ] , &
t6 [ 0ULL ] ) ; t2 = e_efOut ; tlu2_2d_linear_nearest_value ( & f_efOut [
0ULL ] , & t3 . mField0 [ 0ULL ] , & t3 . mField2 [ 0ULL ] , & t2 . mField0 [
0ULL ] , & t2 . mField2 [ 0ULL ] , ( ( _NeDynamicSystem * ) ( LC ) ) ->
mField1 , & t5 [ 0ULL ] , & t8 [ 0ULL ] , & t6 [ 0ULL ] ) ; t24 [ 0 ] =
f_efOut [ 0 ] ;
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr18 = t24 [ 0ULL
] ; t39 = X_idx_4 * 0.001 - X_idx_52 ; t22 [ 0ULL ] = 0.0 ; t22 [ 1ULL ] =
U_idx_0 * 1.0E-5 ; t22 [ 2ULL ] = X_idx_0 ; t22 [ 3ULL ] = 0.0 ; t22 [ 4ULL ]
= 300.0 ; t22 [ 5ULL ] = ( ( ( X_idx_0 * - 0.003 + X_idx_1 *
0.00051679586563307489 ) - X_idx_22 ) + X_idx_23 * - 0.2598801 ) - X_idx_24 ;
t22 [ 6ULL ] = X_idx_0 ; t22 [ 7ULL ] = 0.0 ; t22 [ 8ULL ] = U_idx_1 * 1.0E-5
; t22 [ 9ULL ] = X_idx_2 ; t22 [ 10ULL ] = 0.0 ; t22 [ 11ULL ] = 300.0 ; t22
[ 12ULL ] = ( ( X_idx_2 * - 0.001 - X_idx_25 ) + X_idx_26 * - 0.2598801 ) +
X_idx_27 ; t22 [ 13ULL ] = X_idx_2 ; t22 [ 14ULL ] = 0.0 ; t22 [ 15ULL ] =
U_idx_2 * 1.0E-5 ; t22 [ 16ULL ] = X_idx_3 ; t22 [ 17ULL ] = 0.0 ; t22 [
18ULL ] = 300.0 ; t22 [ 19ULL ] = ( ( ( X_idx_3 * - 0.003 + X_idx_4 *
0.00051679586563307489 ) - X_idx_28 ) + X_idx_29 * - 0.2598801 ) - X_idx_30 ;
t22 [ 20ULL ] = X_idx_3 ; t22 [ 21ULL ] = 0.0 ; t22 [ 22ULL ] = U_idx_3 *
1.0E-5 ; t22 [ 23ULL ] = X_idx_5 ; t22 [ 24ULL ] = 0.0 ; t22 [ 25ULL ] =
300.0 ; t22 [ 26ULL ] = ( ( X_idx_5 * - 0.001 - X_idx_31 ) + X_idx_32 * -
0.2598801 ) + X_idx_33 ; t22 [ 27ULL ] = X_idx_5 ; t22 [ 28ULL ] = U_idx_2 ;
t22 [ 29ULL ] = U_idx_1 ; t22 [ 30ULL ] = U_idx_3 ; t22 [ 31ULL ] = U_idx_0 ;
t22 [ 32ULL ] = X_idx_0 ; t22 [ 33ULL ] = X_idx_3 ; t22 [ 34ULL ] = X_idx_2 ;
t22 [ 35ULL ] = X_idx_5 ; t22 [ 36ULL ] = X_idx_0 ; t22 [ 37ULL ] = X_idx_3 ;
t22 [ 38ULL ] = X_idx_2 ; t22 [ 39ULL ] = X_idx_5 ; t22 [ 40ULL ] = X_idx_6 ;
t22 [ 41ULL ] = X_idx_34 ; t22 [ 42ULL ] = X_idx_35 ; t22 [ 43ULL ] = X_idx_6
; t22 [ 44ULL ] = X_idx_34 ; t22 [ 45ULL ] = X_idx_35 ; t22 [ 46ULL ] =
X_idx_6 ; t22 [ 47ULL ] = X_idx_34 ; t22 [ 48ULL ] = X_idx_35 ; t22 [ 49ULL ]
= X_idx_6 ; t22 [ 50ULL ] = U_idx_4 * 0.017453292519943295 ; t22 [ 51ULL ] =
0.0 ; t22 [ 52ULL ] = 0.0 ; t22 [ 53ULL ] = X_idx_36 ; t22 [ 54ULL ] = 0.0 ;
t22 [ 55ULL ] = 0.0 ; t22 [ 56ULL ] = 0.0 ; t22 [ 57ULL ] = 0.0 ; t22 [ 58ULL
] = X_idx_6 ; t22 [ 59ULL ] = U_idx_5 ; t22 [ 60ULL ] = X_idx_6 ; t22 [ 61ULL
] = U_idx_4 ; t22 [ 62ULL ] = U_idx_5 ; t22 [ 63ULL ] = X_idx_6 ; t22 [ 64ULL
] = X_idx_34 ; t22 [ 65ULL ] = X_idx_35 ; t22 [ 66ULL ] = X_idx_34 ; t22 [
67ULL ] = X_idx_35 ; t22 [ 68ULL ] = X_idx_0 ; t22 [ 69ULL ] = X_idx_6 ; for
( t32 = 0ULL ; t32 < 4ULL ; t32 ++ ) { t22 [ t32 + 70ULL ] =
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W0 [ t32 ] ; }
t22 [ 74ULL ] = X_idx_34 ; t22 [ 75ULL ] = X_idx_37 ; t22 [ 76ULL ] = X_idx_6
; t22 [ 77ULL ] = X_idx_34 ; t22 [ 78ULL ] = ( ( ( ( ( ( - X_idx_36 -
X_idx_38 ) - X_idx_39 ) - X_idx_40 ) - X_idx_41 ) - X_idx_42 ) - X_idx_43 ) -
X_idx_44 ; t22 [ 79ULL ] = X_idx_6 ; t22 [ 80ULL ] = X_idx_0 ; t22 [ 81ULL ]
= X_idx_0 ; t22 [ 82ULL ] = X_idx_22 ; t22 [ 83ULL ] = X_idx_0 ; t22 [ 84ULL
] = X_idx_6 ; for ( t32 = 0ULL ; t32 < 4ULL ; t32 ++ ) { t22 [ t32 + 85ULL ]
= Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W0 [ t32 ] ; }
t22 [ 89ULL ] = X_idx_34 ; t22 [ 90ULL ] = X_idx_37 ; t22 [ 91ULL ] = X_idx_0
* 0.2598801 ; t22 [ 92ULL ] = X_idx_38 ; t22 [ 93ULL ] = X_idx_23 ; t22 [
94ULL ] = X_idx_0 ; t22 [ 95ULL ] = X_idx_0 * 0.2598801 ; t22 [ 96ULL ] = -
X_idx_23 ; t22 [ 97ULL ] = X_idx_23 * 0.2598801 ; t22 [ 98ULL ] = X_idx_34 ;
t22 [ 99ULL ] = X_idx_37 ; t22 [ 100ULL ] = X_idx_2 ; t22 [ 101ULL ] =
X_idx_6 ; for ( t32 = 0ULL ; t32 < 4ULL ; t32 ++ ) { t22 [ t32 + 102ULL ] =
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W0 [ t32 ] ; }
t22 [ 106ULL ] = X_idx_34 ; t22 [ 107ULL ] = X_idx_45 ; t22 [ 108ULL ] =
X_idx_6 ; t22 [ 109ULL ] = X_idx_34 ; t22 [ 110ULL ] = X_idx_39 ; t22 [
111ULL ] = X_idx_6 ; t22 [ 112ULL ] = X_idx_2 ; t22 [ 113ULL ] = X_idx_2 ;
t22 [ 114ULL ] = X_idx_25 ; t22 [ 115ULL ] = X_idx_2 ; t22 [ 116ULL ] =
X_idx_6 ; for ( t32 = 0ULL ; t32 < 4ULL ; t32 ++ ) { t22 [ t32 + 117ULL ] =
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W0 [ t32 ] ; }
t22 [ 121ULL ] = X_idx_34 ; t22 [ 122ULL ] = X_idx_45 ; t22 [ 123ULL ] =
X_idx_2 * 0.2598801 ; t22 [ 124ULL ] = X_idx_40 ; t22 [ 125ULL ] = X_idx_26 ;
t22 [ 126ULL ] = X_idx_2 ; t22 [ 127ULL ] = X_idx_2 * 0.2598801 ; t22 [
128ULL ] = - X_idx_26 ; t22 [ 129ULL ] = X_idx_26 * 0.2598801 ; t22 [ 130ULL
] = X_idx_45 ; t22 [ 131ULL ] = X_idx_3 ; t22 [ 132ULL ] = X_idx_6 ; for (
t32 = 0ULL ; t32 < 4ULL ; t32 ++ ) { t22 [ t32 + 133ULL ] =
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W0 [ t32 ] ; }
t22 [ 137ULL ] = X_idx_35 ; t22 [ 138ULL ] = X_idx_46 ; t22 [ 139ULL ] =
X_idx_6 ; t22 [ 140ULL ] = X_idx_35 ; t22 [ 141ULL ] = X_idx_41 ; t22 [
142ULL ] = X_idx_6 ; t22 [ 143ULL ] = X_idx_3 ; t22 [ 144ULL ] = X_idx_3 ;
t22 [ 145ULL ] = X_idx_28 ; t22 [ 146ULL ] = X_idx_3 ; t22 [ 147ULL ] =
X_idx_6 ; for ( t32 = 0ULL ; t32 < 4ULL ; t32 ++ ) { t22 [ t32 + 148ULL ] =
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W0 [ t32 ] ; }
t22 [ 152ULL ] = X_idx_35 ; t22 [ 153ULL ] = X_idx_46 ; t22 [ 154ULL ] =
X_idx_3 * 0.2598801 ; t22 [ 155ULL ] = X_idx_42 ; t22 [ 156ULL ] = X_idx_29 ;
t22 [ 157ULL ] = X_idx_3 ; t22 [ 158ULL ] = X_idx_3 * 0.2598801 ; t22 [
159ULL ] = - X_idx_29 ; t22 [ 160ULL ] = X_idx_29 * 0.2598801 ; t22 [ 161ULL
] = X_idx_35 ; t22 [ 162ULL ] = X_idx_46 ; t22 [ 163ULL ] = X_idx_5 ; t22 [
164ULL ] = X_idx_6 ; for ( t32 = 0ULL ; t32 < 4ULL ; t32 ++ ) { t22 [ t32 +
165ULL ] = Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W0 [
t32 ] ; } t22 [ 169ULL ] = X_idx_35 ; t22 [ 170ULL ] = X_idx_47 ; t22 [
171ULL ] = X_idx_6 ; t22 [ 172ULL ] = X_idx_35 ; t22 [ 173ULL ] = X_idx_43 ;
t22 [ 174ULL ] = X_idx_6 ; t22 [ 175ULL ] = X_idx_5 ; t22 [ 176ULL ] =
X_idx_5 ; t22 [ 177ULL ] = X_idx_31 ; t22 [ 178ULL ] = X_idx_5 ; t22 [ 179ULL
] = X_idx_6 ; for ( t32 = 0ULL ; t32 < 4ULL ; t32 ++ ) { t22 [ t32 + 180ULL ]
= Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W0 [ t32 ] ; }
t22 [ 184ULL ] = X_idx_35 ; t22 [ 185ULL ] = X_idx_47 ; t22 [ 186ULL ] =
X_idx_5 * 0.2598801 ; t22 [ 187ULL ] = X_idx_44 ; t22 [ 188ULL ] = X_idx_32 ;
t22 [ 189ULL ] = X_idx_5 ; t22 [ 190ULL ] = X_idx_5 * 0.2598801 ; t22 [
191ULL ] = - X_idx_32 ; t22 [ 192ULL ] = X_idx_32 * 0.2598801 ; t22 [ 193ULL
] = X_idx_47 ; t22 [ 194ULL ] = 0.0 ; t22 [ 195ULL ] = 0.0 ; t22 [ 196ULL ] =
0.0 ; t22 [ 197ULL ] = 0.0 ; t22 [ 198ULL ] = 0.0 ; t22 [ 199ULL ] = X_idx_0
; t22 [ 200ULL ] =
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W3 ; t22 [ 201ULL
] = Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W3 * 1000.0 ;
t22 [ 202ULL ] = 0.0 ; t22 [ 203ULL ] = X_idx_3 ; t22 [ 204ULL ] =
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W5 ; t22 [ 205ULL
] = Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W5 * 1000.0 ;
t22 [ 206ULL ] = 0.0 ; t22 [ 207ULL ] = X_idx_5 ; t22 [ 208ULL ] =
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W7 ; t22 [ 209ULL
] = Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W7 * 1000.0 ;
t22 [ 210ULL ] = 0.0 ; t22 [ 211ULL ] = X_idx_2 ; t22 [ 212ULL ] =
Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W9 ; t22 [ 213ULL
] = Vehicle_Plant_Models_Simscape_Models_Body_Suspension_Wheels_W9 * 1000.0 ;
t22 [ 214ULL ] = X_idx_6 ; t22 [ 215ULL ] = X_idx_7 ; t22 [ 216ULL ] = 0.0 ;
t22 [ 217ULL ] = X_idx_2 ; t22 [ 218ULL ] = X_idx_2 ; t22 [ 219ULL ] = 0.0 ;
t22 [ 220ULL ] = X_idx_7 ; t22 [ 221ULL ] = X_idx_2 ; t22 [ 222ULL ] = 0.0 ;
t22 [ 223ULL ] = X_idx_2 ; t22 [ 224ULL ] = X_idx_8 ; t22 [ 225ULL ] = 0.0 ;
t22 [ 226ULL ] = X_idx_3 ; t22 [ 227ULL ] = X_idx_3 ; t22 [ 228ULL ] = 0.0 ;
t22 [ 229ULL ] = X_idx_8 ; t22 [ 230ULL ] = X_idx_3 ; t22 [ 231ULL ] = 0.0 ;
t22 [ 232ULL ] = X_idx_3 ; t22 [ 233ULL ] = X_idx_9 ; t22 [ 234ULL ] = 0.0 ;
t22 [ 235ULL ] = X_idx_5 ; t22 [ 236ULL ] = X_idx_5 ; t22 [ 237ULL ] = 0.0 ;
t22 [ 238ULL ] = X_idx_9 ; t22 [ 239ULL ] = X_idx_5 ; t22 [ 240ULL ] = 0.0 ;
t22 [ 241ULL ] = X_idx_5 ; t22 [ 242ULL ] = X_idx_10 ; t22 [ 243ULL ] = 0.0 ;
t22 [ 244ULL ] = X_idx_0 ; t22 [ 245ULL ] = X_idx_0 ; t22 [ 246ULL ] = 0.0 ;
t22 [ 247ULL ] = X_idx_10 ; t22 [ 248ULL ] = X_idx_0 ; t22 [ 249ULL ] = 0.0 ;
t22 [ 250ULL ] = X_idx_0 ; t22 [ 251ULL ] = X_idx_0 ; t22 [ 252ULL ] =
X_idx_3 ; t22 [ 253ULL ] = X_idx_2 ; t22 [ 254ULL ] = X_idx_5 ; t22 [ 255ULL
] = X_idx_6 ; t22 [ 256ULL ] = X_idx_0 ; t22 [ 257ULL ] = X_idx_3 ; t22 [
258ULL ] = X_idx_2 ; t22 [ 259ULL ] = X_idx_5 ; t22 [ 260ULL ] = X_idx_0 ;
t22 [ 261ULL ] = X_idx_3 ; t22 [ 262ULL ] = X_idx_2 ; t22 [ 263ULL ] =
X_idx_5 ; t22 [ 264ULL ] = X_idx_0 ; t22 [ 265ULL ] = X_idx_0 ; t22 [ 266ULL
] = X_idx_0 ; t22 [ 267ULL ] =
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La0 ; t22 [ 268ULL
] = Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La0 ; t22 [
269ULL ] = Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La0 ;
t22 [ 270ULL ] = X_idx_0 ; t22 [ 271ULL ] = X_idx_2 ; t22 [ 272ULL ] =
X_idx_2 ; t22 [ 273ULL ] = X_idx_2 ; t22 [ 274ULL ] = X_idx_27 ; t22 [ 275ULL
] = X_idx_27 ; t22 [ 276ULL ] = X_idx_27 ; t22 [ 277ULL ] = X_idx_2 ; t22 [
278ULL ] = X_idx_5 ; t22 [ 279ULL ] = X_idx_5 ; t22 [ 280ULL ] = X_idx_5 ;
t22 [ 281ULL ] = X_idx_33 ; t22 [ 282ULL ] = X_idx_33 ; t22 [ 283ULL ] =
X_idx_33 ; t22 [ 284ULL ] = X_idx_5 ; t22 [ 285ULL ] = X_idx_3 ; t22 [ 286ULL
] = X_idx_3 ; t22 [ 287ULL ] = X_idx_3 ; t22 [ 288ULL ] =
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La3 ; t22 [ 289ULL
] = Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La3 ; t22 [
290ULL ] = Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La3 ;
t22 [ 291ULL ] = X_idx_3 ; t22 [ 292ULL ] = X_idx_1 ; t22 [ 293ULL ] =
X_idx_4 ; t22 [ 294ULL ] = X_idx_1 ; t22 [ 295ULL ] = X_idx_4 ; t22 [ 296ULL
] = X_idx_11 ; t22 [ 297ULL ] = 0.0 ; t22 [ 298ULL ] = X_idx_1 ; t22 [ 299ULL
] = X_idx_1 ; t22 [ 300ULL ] = 0.0 ; t22 [ 301ULL ] = X_idx_11 ; t22 [ 302ULL
] = X_idx_1 ; t22 [ 303ULL ] = 0.0 ; t22 [ 304ULL ] = X_idx_1 ; t22 [ 305ULL
] = X_idx_12 ; t22 [ 306ULL ] = 0.0 ; t22 [ 307ULL ] = X_idx_4 ; t22 [ 308ULL
] = X_idx_4 ; t22 [ 309ULL ] = 0.0 ; t22 [ 310ULL ] = X_idx_12 ; t22 [ 311ULL
] = X_idx_4 ; t22 [ 312ULL ] = 0.0 ; t22 [ 313ULL ] = X_idx_4 ; t22 [ 314ULL
] = X_idx_0 ; t22 [ 315ULL ] = X_idx_2 ; t22 [ 316ULL ] = X_idx_1 ; t22 [
317ULL ] = X_idx_0 ; t22 [ 318ULL ] = X_idx_2 ; t22 [ 319ULL ] = X_idx_1 ;
t22 [ 320ULL ] = X_idx_1 ; t22 [ 321ULL ] = 0.0 ; t22 [ 322ULL ] = X_idx_0 ;
t22 [ 323ULL ] = X_idx_2 ; t22 [ 324ULL ] = X_idx_1 ; t22 [ 325ULL ] =
X_idx_1 * 0.25839793281653745 ; t22 [ 326ULL ] = 0.0 ; t22 [ 327ULL ] = (
X_idx_1 * - 0.002 - X_idx_48 ) + X_idx_49 ; t22 [ 328ULL ] = 300.0 ; t22 [
329ULL ] = 0.0 ; t22 [ 330ULL ] = X_idx_1 ; t22 [ 331ULL ] =
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La8 ; t22 [ 332ULL
] = Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La8 * 1000.0 ;
t22 [ 333ULL ] = 0.0 ; t22 [ 334ULL ] = X_idx_1 * 0.25839793281653745 ; t22 [
335ULL ] = 0.0 ; t22 [ 336ULL ] = X_idx_1 * 0.25839793281653745 ; t22 [
337ULL ] = 0.0 ; t22 [ 338ULL ] = 0.0 ; t22 [ 339ULL ] = ( ( X_idx_0 * 0.002
+ X_idx_1 * - 0.00051679586563307489 ) - X_idx_50 ) - X_idx_27 ; t22 [ 340ULL
] = 0.0 ; t22 [ 341ULL ] = 0.0 ; t22 [ 342ULL ] = X_idx_1 *
0.25839793281653745 ; t22 [ 343ULL ] = 0.0 ; t22 [ 344ULL ] =
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La14 ; t22 [
345ULL ] = X_idx_0 ; t22 [ 346ULL ] = 300.0 ; t22 [ 347ULL ] = X_idx_24 ; t22
[ 348ULL ] = X_idx_1 * 0.25839793281653745 ; t22 [ 349ULL ] = X_idx_0 ; t22 [
350ULL ] = Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La17 ;
t22 [ 351ULL ] =
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La17 * 500.0 ; t22
[ 352ULL ] = X_idx_50 ; t22 [ 353ULL ] = X_idx_27 ; t22 [ 354ULL ] = X_idx_1
* 0.25839793281653745 ; t22 [ 355ULL ] = 0.0 ; t22 [ 356ULL ] =
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La14 ; t22 [
357ULL ] = X_idx_2 ; t22 [ 358ULL ] = 300.0 ; t22 [ 359ULL ] = - X_idx_27 ;
t22 [ 360ULL ] = X_idx_1 * 0.25839793281653745 ; t22 [ 361ULL ] = X_idx_2 ;
t22 [ 362ULL ] = 0.0 ; t22 [ 363ULL ] = X_idx_1 * - 0.25839793281653745 +
X_idx_2 ; t22 [ 364ULL ] = X_idx_27 ; t22 [ 365ULL ] = - X_idx_27 ; t22 [
366ULL ] = X_idx_3 ; t22 [ 367ULL ] = X_idx_5 ; t22 [ 368ULL ] = X_idx_4 ;
t22 [ 369ULL ] = X_idx_3 ; t22 [ 370ULL ] = X_idx_5 ; t22 [ 371ULL ] =
X_idx_4 ; t22 [ 372ULL ] = X_idx_4 ; t22 [ 373ULL ] = 0.0 ; t22 [ 374ULL ] =
X_idx_3 ; t22 [ 375ULL ] = X_idx_5 ; t22 [ 376ULL ] = X_idx_4 ; t22 [ 377ULL
] = X_idx_4 * 0.25839793281653745 ; t22 [ 378ULL ] = 0.0 ; t22 [ 379ULL ] = (
X_idx_4 * - 0.002 - X_idx_51 ) + X_idx_52 ; t22 [ 380ULL ] = 300.0 ; t22 [
381ULL ] = 0.0 ; t22 [ 382ULL ] = X_idx_4 ; t22 [ 383ULL ] =
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La24 ; t22 [
384ULL ] = Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La24 *
1000.0 ; t22 [ 385ULL ] = 0.0 ; t22 [ 386ULL ] = X_idx_4 *
0.25839793281653745 ; t22 [ 387ULL ] = 0.0 ; t22 [ 388ULL ] = X_idx_4 *
0.25839793281653745 ; t22 [ 389ULL ] = 0.0 ; t22 [ 390ULL ] = 0.0 ; t22 [
391ULL ] = ( ( X_idx_3 * 0.002 + X_idx_4 * - 0.00051679586563307489 ) -
X_idx_53 ) - X_idx_33 ; t22 [ 392ULL ] = 0.0 ; t22 [ 393ULL ] = 0.0 ; t22 [
394ULL ] = X_idx_4 * 0.25839793281653745 ; t22 [ 395ULL ] = 0.0 ; t22 [
396ULL ] = Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La30 ;
t22 [ 397ULL ] = X_idx_3 ; t22 [ 398ULL ] = 300.0 ; t22 [ 399ULL ] = X_idx_30
; t22 [ 400ULL ] = X_idx_4 * 0.25839793281653745 ; t22 [ 401ULL ] = X_idx_3 ;
t22 [ 402ULL ] =
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La33 ; t22 [
403ULL ] = Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La33 *
500.0 ; t22 [ 404ULL ] = X_idx_53 ; t22 [ 405ULL ] = X_idx_33 ; t22 [ 406ULL
] = X_idx_4 * 0.25839793281653745 ; t22 [ 407ULL ] = 0.0 ; t22 [ 408ULL ] =
Vehicle_Plant_Models_Simscape_Models_Drivetrain_Drivetrain_La30 ; t22 [
409ULL ] = X_idx_5 ; t22 [ 410ULL ] = 300.0 ; t22 [ 411ULL ] = - X_idx_33 ;
t22 [ 412ULL ] = X_idx_4 * 0.25839793281653745 ; t22 [ 413ULL ] = X_idx_5 ;
t22 [ 414ULL ] = 0.0 ; t22 [ 415ULL ] = X_idx_4 * - 0.25839793281653745 +
X_idx_5 ; t22 [ 416ULL ] = X_idx_33 ; t22 [ 417ULL ] = - X_idx_33 ; t22 [
418ULL ] = X_idx_0 ; t22 [ 419ULL ] = X_idx_3 ; t22 [ 420ULL ] = X_idx_2 ;
t22 [ 421ULL ] = X_idx_5 ; t22 [ 422ULL ] = X_idx_1 ; t22 [ 423ULL ] =
X_idx_4 ; t22 [ 424ULL ] = X_idx_1 ; t22 [ 425ULL ] = X_idx_1 ; t22 [ 426ULL
] = X_idx_48 ; t22 [ 427ULL ] = X_idx_1 ; t22 [ 428ULL ] = X_idx_4 ; t22 [
429ULL ] = X_idx_4 ; t22 [ 430ULL ] = X_idx_51 ; t22 [ 431ULL ] = X_idx_4 ;
t22 [ 432ULL ] = X_idx_13 ; t22 [ 433ULL ] = 0.0 ; t22 [ 434ULL ] = X_idx_1 ;
t22 [ 435ULL ] = X_idx_1 ; t22 [ 436ULL ] = 0.0 ; t22 [ 437ULL ] = X_idx_13 ;
t22 [ 438ULL ] = X_idx_1 ; t22 [ 439ULL ] = 0.0 ; t22 [ 440ULL ] = X_idx_1 ;
t22 [ 441ULL ] = X_idx_14 ; t22 [ 442ULL ] = 0.0 ; t22 [ 443ULL ] = X_idx_4 ;
t22 [ 444ULL ] = X_idx_4 ; t22 [ 445ULL ] = 0.0 ; t22 [ 446ULL ] = X_idx_14 ;
t22 [ 447ULL ] = X_idx_4 ; t22 [ 448ULL ] = 0.0 ; t22 [ 449ULL ] = X_idx_4 ;
t22 [ 450ULL ] = X_idx_1 ; t22 [ 451ULL ] = X_idx_4 ; t22 [ 452ULL ] =
X_idx_1 ; t22 [ 453ULL ] = X_idx_4 ; t22 [ 454ULL ] = X_idx_1 ; t22 [ 455ULL
] = X_idx_4 ; t22 [ 456ULL ] = X_idx_1 ; t22 [ 457ULL ] = X_idx_4 ; t22 [
458ULL ] = X_idx_0 ; t22 [ 459ULL ] = X_idx_3 ; t22 [ 460ULL ] = X_idx_2 ;
t22 [ 461ULL ] = X_idx_5 ; t22 [ 462ULL ] = X_idx_1 ; t22 [ 463ULL ] =
X_idx_4 ; t22 [ 464ULL ] = X_idx_15 ; t22 [ 465ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr0 * 1000.0 ; t22
[ 466ULL ] = X_idx_15 - 273.15 ; t22 [ 467ULL ] = X_idx_16 *
0.00027777777777777778 ; t22 [ 468ULL ] = X_idx_54 ; t22 [ 469ULL ] = 0.0 ;
t22 [ 470ULL ] = X_idx_17 ; t22 [ 471ULL ] = X_idx_55 ; t22 [ 472ULL ] = 1.0
; t22 [ 473ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr2 ; t22 [ 474ULL
] = X_idx_57 * 1000.0 ; t22 [ 475ULL ] = X_idx_57 * 1000.0 ; t22 [ 476ULL ] =
X_idx_58 ; t22 [ 477ULL ] = X_idx_58 ; t22 [ 478ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr2 ; t22 [ 479ULL
] = 0.0 ; t22 [ 480ULL ] = 0.0 ; t22 [ 481ULL ] = 0.0 ; t22 [ 482ULL ] = 0.0
; t22 [ 483ULL ] = 0.0 ; t22 [ 484ULL ] = 0.0 ; t22 [ 485ULL ] = 0.0 ; t22 [
486ULL ] = 0.0 ; t22 [ 487ULL ] = 0.0 ; t22 [ 488ULL ] = 0.0 ; t22 [ 489ULL ]
= 0.0 ; t22 [ 490ULL ] = X_idx_59 ; t22 [ 491ULL ] = 1.0 ; t22 [ 492ULL ] =
1.0 ; t22 [ 493ULL ] = X_idx_60 * 0.00027777777777777778 ; t22 [ 494ULL ] =
X_idx_58 ; t22 [ 495ULL ] = 0.0 ; t22 [ 496ULL ] = 0.0 ; t22 [ 497ULL ] = 0.0
; t22 [ 498ULL ] = U_idx_7 ; t22 [ 499ULL ] = U_idx_7 ; t22 [ 500ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr2 ; t22 [ 501ULL
] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr2 ; t22 [
502ULL ] = U_idx_7 ; t22 [ 503ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr2 ; t22 [ 504ULL
] = 0.0 ; t22 [ 505ULL ] = - X_idx_54 ; t22 [ 506ULL ] = - X_idx_54 ; t22 [
507ULL ] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr2 ;
t22 [ 508ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr2 ; t22 [ 509ULL
] = - X_idx_54 ; t22 [ 510ULL ] = 0.0 ; t22 [ 511ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr2 ; t22 [ 512ULL
] = 0.0 ; t22 [ 513ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr2 ; t22 [ 514ULL
] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr2 ; t22 [
515ULL ] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr2 ;
t22 [ 516ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr2 ; t22 [ 517ULL
] = U_idx_6 ; t22 [ 518ULL ] = 0.0 ; t22 [ 519ULL ] = U_idx_6 ; t22 [ 520ULL
] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr0 * - 1000.0
; t22 [ 521ULL ] = U_idx_6 ; t22 [ 522ULL ] = U_idx_6 ; t22 [ 523ULL ] =
U_idx_6 ; t22 [ 524ULL ] = 0.0 ; t22 [ 525ULL ] = U_idx_6 ; t22 [ 526ULL ] =
X_idx_15 ; t22 [ 527ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr0 * 1000.0 ; t22
[ 528ULL ] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr0 *
100.0 ; t22 [ 529ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr2 ; t22 [ 530ULL
] = 0.0 ; t22 [ 531ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr2 ; t22 [ 532ULL
] = 0.0 ; t22 [ 533ULL ] = 0.0 ; t22 [ 534ULL ] = 0.0 ; t22 [ 535ULL ] =
U_idx_8 ; t22 [ 536ULL ] = ( - X_idx_61 - X_idx_62 ) - X_idx_63 ; t22 [
537ULL ] = ( - X_idx_54 - X_idx_56 ) - U_idx_7 ; t22 [ 538ULL ] = 0.0 ; t22 [
539ULL ] = 0.0 ; t22 [ 540ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr2 ; t22 [ 541ULL
] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
542ULL ] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr2 ;
t22 [ 543ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
544ULL ] = X_idx_56 ; t22 [ 545ULL ] = 0.0 ; t22 [ 546ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr2 ; t22 [ 547ULL
] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr2 ; t22 [
548ULL ] = X_idx_18 ; t22 [ 549ULL ] = X_idx_61 ; t22 [ 550ULL ] = 0.0 ; t22
[ 551ULL ] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10
; t22 [ 552ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
553ULL ] = X_idx_19 ; t22 [ 554ULL ] = 0.0 ; t22 [ 555ULL ] = U_idx_8 ; t22 [
556ULL ] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr2 ;
t22 [ 557ULL ] = 0.0 ; t22 [ 558ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
559ULL ] = 0.0 ; t22 [ 560ULL ] = U_idx_8 ; t22 [ 561ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr2 ; t22 [ 562ULL
] = 0.0 ; t22 [ 563ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
564ULL ] = 0.0 ; t22 [ 565ULL ] = U_idx_8 ; t22 [ 566ULL ] = X_idx_62 ; t22 [
567ULL ] = X_idx_62 ; t22 [ 568ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
569ULL ] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ;
t22 [ 570ULL ] = X_idx_62 ; t22 [ 571ULL ] = 0.0 ; t22 [ 572ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
573ULL ] = 0.0 ; t22 [ 574ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
575ULL ] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ;
t22 [ 576ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
577ULL ] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ;
t22 [ 578ULL ] = 0.0 ; t22 [ 579ULL ] = X_idx_1 ; t22 [ 580ULL ] = X_idx_1 ;
t22 [ 581ULL ] = U_idx_9 ; t22 [ 582ULL ] = 0.0 ; t22 [ 583ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
584ULL ] = 0.0 ; t22 [ 585ULL ] = 0.0 ; t22 [ 586ULL ] = X_idx_62 ; t22 [
587ULL ] = t23_idx_0 * 1000.0 ; t22 [ 588ULL ] = t38 ; t22 [ 589ULL ] =
X_idx_64 ; t22 [ 590ULL ] = X_idx_64 ; t22 [ 591ULL ] = X_idx_49 ; t22 [
592ULL ] = X_idx_20 ; t22 [ 593ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
594ULL ] = X_idx_1 ; t22 [ 595ULL ] = 0.0 ; t22 [ 596ULL ] = X_idx_1 ; t22 [
597ULL ] = U_idx_9 ; t22 [ 598ULL ] = X_idx_1 ; t22 [ 599ULL ] = X_idx_1 ;
t22 [ 600ULL ] = - t38 ; t22 [ 601ULL ] = - t38 ; t22 [ 602ULL ] = - t38 ;
t22 [ 603ULL ] = X_idx_1 ; t22 [ 604ULL ] = X_idx_1 ; t22 [ 605ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
606ULL ] = 0.0 ; t22 [ 607ULL ] = X_idx_63 ; t22 [ 608ULL ] = X_idx_63 ; t22
[ 609ULL ] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10
; t22 [ 610ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
611ULL ] = X_idx_63 ; t22 [ 612ULL ] = 0.0 ; t22 [ 613ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
614ULL ] = 0.0 ; t22 [ 615ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
616ULL ] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ;
t22 [ 617ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
618ULL ] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ;
t22 [ 619ULL ] = 0.0 ; t22 [ 620ULL ] = X_idx_4 ; t22 [ 621ULL ] = X_idx_4 ;
t22 [ 622ULL ] = U_idx_10 ; t22 [ 623ULL ] = 0.0 ; t22 [ 624ULL ] =
Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
625ULL ] = 0.0 ; t22 [ 626ULL ] = 0.0 ; t22 [ 627ULL ] = X_idx_63 ; t22 [
628ULL ] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr18 *
1000.0 ; t22 [ 629ULL ] = t39 ; t22 [ 630ULL ] = X_idx_65 ; t22 [ 631ULL ] =
X_idx_65 ; t22 [ 632ULL ] = X_idx_52 ; t22 [ 633ULL ] = X_idx_21 ; t22 [
634ULL ] = Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ;
t22 [ 635ULL ] = X_idx_4 ; t22 [ 636ULL ] = 0.0 ; t22 [ 637ULL ] = X_idx_4 ;
t22 [ 638ULL ] = U_idx_10 ; t22 [ 639ULL ] = X_idx_4 ; t22 [ 640ULL ] =
X_idx_4 ; t22 [ 641ULL ] = - t39 ; t22 [ 642ULL ] = - t39 ; t22 [ 643ULL ] =
- t39 ; t22 [ 644ULL ] = X_idx_4 ; t22 [ 645ULL ] = X_idx_4 ; t22 [ 646ULL ]
= Vehicle_Plant_Models_Simscape_Models_Electrical_System_Electr10 ; t22 [
647ULL ] = 0.0 ; t22 [ 648ULL ] = X_idx_1 ; t22 [ 649ULL ] = X_idx_4 ; t22 [
650ULL ] = X_idx_1 ; t22 [ 651ULL ] = X_idx_4 ; for ( b = 0 ; b < 652 ; b ++
) { out . mX [ b ] = t22 [ b ] ; } ( void ) LC ; ( void ) t41 ; return 0 ; }
