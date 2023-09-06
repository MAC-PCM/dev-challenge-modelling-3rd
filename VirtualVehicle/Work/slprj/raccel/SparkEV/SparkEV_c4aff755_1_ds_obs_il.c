#include "ne_ds.h"
#include "SparkEV_c4aff755_1_ds_sys_struct.h"
#include "SparkEV_c4aff755_1_ds_obs_il.h"
#include "SparkEV_c4aff755_1_ds.h"
#include "SparkEV_c4aff755_1_ds_externals.h"
#include "SparkEV_c4aff755_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T SparkEV_c4aff755_1_ds_obs_il ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { static boolean_T
_cg_const_1 [ 652 ] = { true , false , true , true , true , true , true ,
true , false , true , true , true , true , true , true , false , true , true
, true , true , true , true , false , true , true , true , true , true ,
false , false , false , false , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , false , true , true , true , true , true , true , true , true , false
, true , false , false , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , false ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , false ,
false , true , true , false , true , true , true , true , true , true , true
, true , true , true , true , true , true , true , false , true , false ,
false , false , false , false , true , false , true , false , false , true ,
true , true , true , true , true , false , true , false , true , true , true
, true , true , true , true , true , true , true , true , true , true , true
, true , true , true , false , true , true , true , true , false , true ,
true , true , true , false , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , false , true , true ,
true , true , true , false , true , true , true , true , true , true , true ,
true , true , false , true , true , true , true , true , true , true , true ,
true , true , true , true , true , true , true , true , true , true , true ,
true , true , true , true , true , false , true , true , true , true , true ,
false , true , true , true , true , true , true , true , true , true , false
, true , true , true , true , true , true , true , true , true , true , true
, true , true } ; PmBoolVector out ; int32_T b ; boolean_T t0 [ 652 ] ; (
void ) t1 ; ( void ) LC ; out = t2 -> mOBS_IL ; for ( b = 0 ; b < 652 ; b ++
) { t0 [ b ] = _cg_const_1 [ b ] ; } for ( b = 0 ; b < 652 ; b ++ ) { out .
mX [ b ] = t0 [ b ] ; } ( void ) LC ; ( void ) t2 ; return 0 ; }
