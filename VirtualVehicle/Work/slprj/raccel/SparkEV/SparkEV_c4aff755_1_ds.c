#include "ne_ds.h"
#include "SparkEV_c4aff755_1_ds_zc.h"
#include "SparkEV_c4aff755_1_ds_tdxy_p.h"
#include "SparkEV_c4aff755_1_ds_y.h"
#include "SparkEV_c4aff755_1_ds_nldv.h"
#include "SparkEV_c4aff755_1_ds_eq_tol.h"
#include "SparkEV_c4aff755_1_ds_qx_p.h"
#include "SparkEV_c4aff755_1_ds_sclv.h"
#include "SparkEV_c4aff755_1_ds_obs_all.h"
#include "SparkEV_c4aff755_1_ds_obs_exp.h"
#include "SparkEV_c4aff755_1_ds_var_tol.h"
#include "SparkEV_c4aff755_1_ds_mode.h"
#include "SparkEV_c4aff755_1_ds_dxm_p.h"
#include "SparkEV_c4aff755_1_ds_log.h"
#include "SparkEV_c4aff755_1_ds_imax.h"
#include "SparkEV_c4aff755_1_ds_obs_act.h"
#include "SparkEV_c4aff755_1_ds_imin.h"
#include "SparkEV_c4aff755_1_ds_dxicrm_p.h"
#include "SparkEV_c4aff755_1_ds_dxicr_p.h"
#include "SparkEV_c4aff755_1_ds_obs_il.h"
#include "SparkEV_c4aff755_1_ds_vpf.h"
#include "SparkEV_c4aff755_1_ds_m_p.h"
#include "SparkEV_c4aff755_1_ds_slf.h"
#include "SparkEV_c4aff755_1_ds_tdxf_p.h"
#include "SparkEV_c4aff755_1_ds_a_p.h"
#include "SparkEV_c4aff755_1_ds_ic.h"
#include "SparkEV_c4aff755_1_ds_slv.h"
#include "SparkEV_c4aff755_1_ds_vmf.h"
#include "SparkEV_c4aff755_1_ds_dxf_p.h"
#include "SparkEV_c4aff755_1_ds_slf0.h"
#include "SparkEV_c4aff755_1_ds_dxf.h"
#include "SparkEV_c4aff755_1_ds_f.h"
#include "SparkEV_c4aff755_1_ds_dxy.h"
#include "SparkEV_c4aff755_1_ds_vsf.h"
#include "SparkEV_c4aff755_1_ds_a.h"
#include "SparkEV_c4aff755_1_ds_dxdelt_p.h"
#include "SparkEV_c4aff755_1_ds_lv.h"
#include "SparkEV_c4aff755_1_ds_dnf_v_x.h"
#include "SparkEV_c4aff755_1_ds_dnf_p.h"
#include "SparkEV_c4aff755_1_ds_mdxy_p.h"
#include "SparkEV_c4aff755_1_ds_dxy_p.h"
#include "SparkEV_c4aff755_1_ds_dxcer_p.h"
#include "SparkEV_c4aff755_1_ds_icrm_p.h"
#include "SparkEV_c4aff755_1_ds_duf.h"
#include "SparkEV_c4aff755_1_ds_assert.h"
#include "SparkEV_c4aff755_1_ds.h"
#include "ssc_ml_fun.h"
#include "SparkEV_c4aff755_1_ds_external_struct.h"
#include "SparkEV_c4aff755_1_ds_externals.h"
#include "SparkEV_c4aff755_1_ds_sys_struct.h"
static int32_T ds_m ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_vmm ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dxm ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_ddm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_ddm ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dum_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dum ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dtm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dtm ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dpm_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dpm ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_b_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_b ( const NeDynamicSystem * ds ,
const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_c_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_c ( const NeDynamicSystem * ds ,
const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_duf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dtf_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dtf ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_ddf_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_ddf ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_dpdxf_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dpdxf ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dwf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dwf ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_tduf_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dnf ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_cer ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dxcer ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_ddcer ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_ddcer_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_icr ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_icr_im ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_icr_id ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_icr_il ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dxicr ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_ddicr ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_ddicr_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_tduicr_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_icrm ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dxicrm ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_ddicrm_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_ddicrm ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_freqs ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_mduy_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_tduy_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_duy_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_duy
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dty_p ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dty ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_cache_r ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_cache_i ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_update_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_update_i ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_update2_r ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_update2_i ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_lock_r ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_lock_i ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_lock2_r ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_lock2_i ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_sfo
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_sfp ( const NeDynamicSystem * ds
, const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_init_r ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_init_i ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_passert ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_iassert ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_del_t ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_del_v ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_del_v0 ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_del_tmax ( const NeDynamicSystem * ds , const NeDynamicSystemInput
* in , NeDsMethodOutput * out ) ; static int32_T ds_dxdelt ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dudelt_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dudelt ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dtdelt_p ( const NeDynamicSystem
* ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_dtdelt ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_dp_l ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_dp_i ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T ds_dp_j
( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dp_r ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_qx ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_qu ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_qt ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in
, NeDsMethodOutput * out ) ; static int32_T ds_q1 ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
int32_T ds_qu_p ( const NeDynamicSystem * ds , const NeDynamicSystemInput *
in , NeDsMethodOutput * out ) ; static int32_T ds_qt_p ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , NeDsMethodOutput *
out ) ; static int32_T ds_q1_p ( const NeDynamicSystem * ds , const
NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static int32_T
ds_dimin ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
NeDsMethodOutput * out ) ; static int32_T ds_dimax ( const NeDynamicSystem *
ds , const NeDynamicSystemInput * in , NeDsMethodOutput * out ) ; static
NeDsMethodOutput * ds_output_m_p ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_m ( const NeDynamicSystem *
ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_vmm (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxm_p ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddm_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ddm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dum_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dum ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dtm_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dtm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dpm_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dpm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_a_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_a ( const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_b_p ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_b ( const NeDynamicSystem *
ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_c_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_c ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_f ( const NeDynamicSystem *
ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_vmf (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_vpf ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_vsf ( const NeDynamicSystem
* ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_slf (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_slf0 ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_duf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_duf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dtf_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dtf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_ddf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dpdxf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dpdxf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dwf_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dwf ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tduf_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_tdxf_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dnf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dnf ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dnf_v_x ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_cer ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxcer ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dxcer_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_ddcer ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddcer_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ic ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_icr_im ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_icr_id ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icr_il (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxicr ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dxicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_ddicr ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_ddicr_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tduicr_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_icrm_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_icrm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxicrm_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dxicrm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_ddicrm_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_ddicrm ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_freqs ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_mduy_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_mdxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_tduy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_tdxy_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_y ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dxy_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dxy ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_duy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_duy ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dty_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dty ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_mode ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_zc ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_cache_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_cache_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_update_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_update_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_update2_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_update2_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_lock_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_lock_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_lock2_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_lock2_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_sfo ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_sfp ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_init_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_init_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_log ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_assert ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_passert ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_iassert ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_del_t ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_del_v ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_del_v0 ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_del_tmax (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dxdelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dxdelt (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dudelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dudelt (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dtdelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dtdelt (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_obs_exp ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_obs_act (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_obs_all ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_obs_il (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_dp_l ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_dp_i ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_dp_j ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dp_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_qx ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_qu ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_qt ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_q1 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_qx_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_qu_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_qt_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_q1_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_var_tol ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_eq_tol (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_lv ( const NeDynamicSystem * ds , PmAllocator *
allocator ) ; static NeDsMethodOutput * ds_output_slv ( const NeDynamicSystem
* ds , PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_nldv (
const NeDynamicSystem * ds , PmAllocator * allocator ) ; static
NeDsMethodOutput * ds_output_sclv ( const NeDynamicSystem * ds , PmAllocator
* allocator ) ; static NeDsMethodOutput * ds_output_imin ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static NeDsMethodOutput *
ds_output_imax ( const NeDynamicSystem * ds , PmAllocator * allocator ) ;
static NeDsMethodOutput * ds_output_dimin ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) ; static NeDsMethodOutput * ds_output_dimax ( const
NeDynamicSystem * ds , PmAllocator * allocator ) ; static void
release_reference ( NeDynamicSystem * ds ) ; static void get_reference (
NeDynamicSystem * ds ) ; static NeDynamicSystem * diagnostics (
NeDynamicSystem * ds , boolean_T ) ; static void expand ( const
NeDynamicSystem * ds , const NeDynamicSystemInput * in , PmRealVector * out ,
boolean_T kp ) ; static void rtpmap ( const NeDynamicSystem * ds , const
PmIntVector * inl , const PmIntVector * ini , const PmIntVector * inj , const
PmRealVector * inr , PmIntVector * outl , PmIntVector * outi , PmIntVector *
outj , PmRealVector * outr ) ; static NeEquationData s_equation_data [ 66 ] =
{ { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/Longitudinal Vehicle Body"
, 2U , 0U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, 2U , 2U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, 2U , 4U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, 2U , 6U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, 2U , 8U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd2/Ideal Rotational Motion Sensor"
, 1U , 10U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd3/Ideal Rotational Motion Sensor"
, 1U , 11U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd4/Ideal Rotational Motion Sensor"
, 1U , 12U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpdFL/Ideal Rotational Motion Sensor"
, 1U , 13U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/DriveshftTrq Routing/Two Actuator AWD/Spd1/Ideal Rotational Motion Sensor"
, 1U , 14U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/DriveshftTrq Routing/Two Actuator AWD/Spd2/Ideal Rotational Motion Sensor"
, 1U , 15U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Inertia"
, 2U , 16U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Inertia1"
, 2U , 18U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Spd Sensor/Ideal Rotational Motion Sensor"
, 1U , 20U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Spd Sensor1/Ideal Rotational Motion Sensor"
, 1U , 21U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 2U , 22U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 2U , 24U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1U , 26U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor"
, 1U , 27U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor1"
, 1U , 28U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, 1U , 29U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, 1U , 30U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Front L"
, 1U , 31U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Front R"
, 1U , 32U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Rear L"
, 1U , 33U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Rear R"
, 1U , 34U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/Longitudinal Vehicle Body"
, 1U , 35U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/Longitudinal Vehicle Body"
, 1U , 36U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, 1U , 37U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, 1U , 38U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, 1U , 39U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, 1U , 40U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, 1U , 41U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, 1U , 42U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, 1U , 43U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, 1U , 44U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, 1U , 45U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, 1U , 46U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, 1U , 47U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, 1U , 48U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, 1U , 49U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, 1U , 50U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, 1U , 51U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, 1U , 52U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, 1U , 53U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, 1U , 54U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, 1U , 55U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, 1U , 56U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, 1U , 57U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, 1U , 58U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, 1U , 59U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, 1U , 60U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 2U , 61U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 2U , 63U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1U , 65U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1U , 66U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1U , 67U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 2U , 68U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Average-Value DC-DC Converter"
, 1U , 70U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Average-Value DC-DC Converter"
, 1U , 71U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, 7U , 72U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, 3U , 79U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, 1U , 82U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, 7U , 83U , TRUE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, 3U , 90U , FALSE , 1.0 , "1" , } , { "" , 0U , 8 , NE_EQUATION_DOMAIN_TIME
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, 1U , 93U , FALSE , 1.0 , "1" , } } ; static NeCERData * s_cer_data = NULL ;
static NeICRData s_icr_data [ 15 ] = { { "" , 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Front L"
, 1U , 0U , } , { "" , 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Front R"
, 1U , 1U , } , { "" , 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Rear L"
, 1U , 2U , } , { "" , 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Rear R"
, 1U , 3U , } , { "" , 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, 1U , 4U , } , { "" , 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, 1U , 5U , } , { "" , 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, 1U , 6U , } , { "" , 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, 1U , 7U , } , { "" , 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, 1U , 8U , } , { "" , 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, 1U , 9U , } , { "" , 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1U , 10U , } , { "" , 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1U , 11U , } , { "" , 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1U , 12U , } , { "" , 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1U , 13U , } , { "" , 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1U , 14U , } } ; static NeVariableData s_variable_data [ 66 ] = { {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.tire_inertia.w"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Inertia.w"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Inertia"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.tire_inertia.w"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.tire_inertia.w"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Inertia1.w"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Inertia1"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.tire_inertia.w"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Longitudinal_Vehicle_Body.v"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/Longitudinal Vehicle Body"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd2.Ideal_Rotational_Motion_Sensor.phi"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd2/Ideal Rotational Motion Sensor"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Angle" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd3.Ideal_Rotational_Motion_Sensor.phi"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd3/Ideal Rotational Motion Sensor"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Angle" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd4.Ideal_Rotational_Motion_Sensor.phi"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd4/Ideal Rotational Motion Sensor"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Angle" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpdFL.Ideal_Rotational_Motion_Sensor.phi"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpdFL/Ideal Rotational Motion Sensor"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Angle" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.Two_Actuator_AWD.Spd1.Ideal_Rotational_Motion_Sensor.phi"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/DriveshftTrq Routing/Two Actuator AWD/Spd1/Ideal Rotational Motion Sensor"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Angle" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.Two_Actuator_AWD.Spd2.Ideal_Rotational_Motion_Sensor.phi"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/DriveshftTrq Routing/Two Actuator AWD/Spd2/Ideal Rotational Motion Sensor"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Angle" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Spd_Sensor.Ideal_Rotational_Motion_Sensor.phi"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Spd Sensor/Ideal Rotational Motion Sensor"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Angle" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Spd_Sensor1.Ideal_Rotational_Motion_Sensor.phi"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Spd Sensor1/Ideal Rotational Motion Sensor"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Angle" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.cell_temperature"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.charge"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Charge" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.num_cycles"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Discharge cycles" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Capacitor.vc"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Capacitor voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Capacitor1.vc"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor1"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"Capacitor voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive.torque_ref"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Demanded torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive.torque_ref"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, 1.0 , "1" , 0.0 , TRUE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Demanded torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.tire_inertia.t"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.tire_road_interaction.f_tread"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Tread force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_left.t_S"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Sun torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.tire_inertia.t"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.tire_road_interaction.f_tread"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Tread force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_left.t_P"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Planet torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.tire_inertia.t"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.tire_road_interaction.f_tread"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Tread force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_left.t_S"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Sun torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.tire_inertia.t"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.tire_road_interaction.f_tread"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Tread force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_left.t_P"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Planet torque" , } , {
"Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.FzF" ,
0U , 0 ,
"SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "FzF"
, } , {
"Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.FzR" ,
0U , 0 ,
"SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "FzR"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Longitudinal_Vehicle_Body.f"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/Longitudinal Vehicle Body"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Longitudinal force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.S"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "S" ,
} , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.tire_road_interaction.f_hub"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Hub force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.resistance.fH"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Hub force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.tire_road_interaction.f_hub"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Hub force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.resistance.fH"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Hub force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.tire_road_interaction.f_hub"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Hub force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.resistance.fH"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Hub force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.tire_road_interaction.f_hub"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Hub force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.S"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "S" ,
} , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.S"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "S" ,
} , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.S"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "S" ,
} , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Inertia.t"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Inertia"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive.torque_elec"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Electrical torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_left.t_C"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Carrier torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Inertia1.t"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Inertia1"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive.torque_elec"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Electrical torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_left.t_C"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Carrier torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.i"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Current (positive in)" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.xVint"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Temperature adjusted open-circuit voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Capacitor.i"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Current" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.power_dissipated"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Power dissipated" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.stateOfCharge"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_MANDATORY ,
"State of charge" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.xR0"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Temperature adjusted terminal resistance" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.xqnom"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Faded cell capacity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Capacitor1.i"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor1"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Current" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Elec_Sensor.Current_Sensor2.I"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Elec Sensor/Current Sensor2"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "I" ,
} , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Elec_Sensor.Current_Sensor2.I"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Elec Sensor/Current Sensor2"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE , "I" ,
} , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive.torqueLimit"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Maximum torque magnitude" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive.torqueLimit"
, 0U , 0 ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, 1.0 , "1" , 0.0 , FALSE , FALSE , { { 1 , 1 } } , NE_INIT_MODE_NONE ,
"Maximum torque magnitude" , } } ; static NeVariableData * s_discrete_data =
NULL ; static NeObservableData s_observable_data [ 647 ] = { {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Front_L.H.T"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Front L"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Front_L.P"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Front L"
, { { 1 , 1 } } , "bar" , 1.0 , "bar" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "P"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Front_L.S.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Front L"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Front_L.fault_trigger"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Front L"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "T"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Front_L.temperature"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Front L"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Front_L.t_shaft"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Front L"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Braking torque on the shaft" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Front_L.w_shaft"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Front L"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity of the shaft" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Front_L.power_dissipated"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Front L"
, { { 1 , 1 } } , "J/s" , 1.0 , "J/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"Heat generated from friction" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Front_R.H.T"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Front R"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Front_R.P"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Front R"
, { { 1 , 1 } } , "bar" , 1.0 , "bar" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "P"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Front_R.S.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Front R"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Front_R.fault_trigger"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Front R"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "T"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Front_R.temperature"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Front R"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Front_R.t_shaft"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Front R"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Braking torque on the shaft" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Front_R.w_shaft"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Front R"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity of the shaft" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Front_R.power_dissipated"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Front R"
, { { 1 , 1 } } , "J/s" , 1.0 , "J/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"Heat generated from friction" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Rear_L.H.T"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Rear L"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Rear_L.P"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Rear L"
, { { 1 , 1 } } , "bar" , 1.0 , "bar" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "P"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Rear_L.S.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Rear L"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Rear_L.fault_trigger"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Rear L"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "T"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Rear_L.temperature"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Rear L"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Rear_L.t_shaft"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Rear L"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Braking torque on the shaft" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Rear_L.w_shaft"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Rear L"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity of the shaft" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Rear_L.power_dissipated"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Rear L"
, { { 1 , 1 } } , "J/s" , 1.0 , "J/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"Heat generated from friction" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Rear_R.H.T"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Rear R"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Rear_R.P"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Rear R"
, { { 1 , 1 } } , "bar" , 1.0 , "bar" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "P"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Rear_R.S.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Rear R"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Rear_R.fault_trigger"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Rear R"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "T"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Rear_R.temperature"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Rear R"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Rear_R.t_shaft"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Rear R"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Braking torque on the shaft" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Rear_R.w_shaft"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Rear R"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity of the shaft" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Rear_R.power_dissipated"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Rear R"
, { { 1 , 1 } } , "J/s" , 1.0 , "J/s" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"Heat generated from friction" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Simulink_PS_Converter1_output0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Simulink-PS\nConverter1"
, { { 1 , 1 } } , "Pa" , 1.0 , "Pa" , NE_NOMINAL_SOURCE_FIXED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter1_output0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Simulink_PS_Converter2_output0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Simulink-PS\nConverter2"
, { { 1 , 1 } } , "Pa" , 1.0 , "Pa" , NE_NOMINAL_SOURCE_FIXED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter2_output0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Simulink_PS_Converter3_output0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Simulink-PS\nConverter3"
, { { 1 , 1 } } , "Pa" , 1.0 , "Pa" , NE_NOMINAL_SOURCE_FIXED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter3_output0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Simulink_PS_Converter_output0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Simulink-PS\nConverter"
, { { 1 , 1 } } , "Pa" , 1.0 , "Pa" , NE_NOMINAL_SOURCE_FIXED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter_output0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.x_pmio_1_for_Simscape_Bus_at_index_0.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.x_pmio_2_for_Simscape_Bus_at_index_1.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.x_pmio_3_for_Simscape_Bus1_at_index_0.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.x_pmio_4_for_Simscape_Bus1_at_index_1.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.x_pmio_1_for_Simscape_Bus_at_index_0.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.x_pmio_2_for_Simscape_Bus_at_index_1.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.x_pmio_3_for_Simscape_Bus1_at_index_0.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.x_pmio_4_for_Simscape_Bus1_at_index_1.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Solver.v" ,
"SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels" , { {
1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Velocity" , } , {
"Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.FzF" ,
"SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"FzF" , } , {
"Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.FzR" ,
"SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"FzR" , } , {
"Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Solver.v"
,
"SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.FzF"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"FzF" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.FzR"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"FzR" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Longitudinal_Vehicle_Body.H.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/Longitudinal Vehicle Body"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Longitudinal_Vehicle_Body.NF"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/Longitudinal Vehicle Body"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"NF" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Longitudinal_Vehicle_Body.NR"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/Longitudinal Vehicle Body"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"NR" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Longitudinal_Vehicle_Body.V"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/Longitudinal Vehicle Body"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Longitudinal_Vehicle_Body.beta"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/Longitudinal Vehicle Body"
, { { 1 , 1 } } , "rad" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"beta" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Longitudinal_Vehicle_Body.cg_load"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/Longitudinal Vehicle Body"
, { { 1 , 2 } } , "m" , 1.0 , "m" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"CG" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Longitudinal_Vehicle_Body.f"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/Longitudinal Vehicle Body"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Longitudinal force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Longitudinal_Vehicle_Body.inertia_load"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/Longitudinal Vehicle Body"
, { { 1 , 1 } } , "kg*m^2" , 1.0 , "kg*m^2" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "J"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Longitudinal_Vehicle_Body.mass_load"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/Longitudinal Vehicle Body"
, { { 1 , 1 } } , "kg" , 1.0 , "kg" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "M"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Longitudinal_Vehicle_Body.suspension_force_f"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/Longitudinal Vehicle Body"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Front suspension force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Longitudinal_Vehicle_Body.suspension_force_r"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/Longitudinal Vehicle Body"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rear suspension force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Longitudinal_Vehicle_Body.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/Longitudinal Vehicle Body"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Longitudinal_Vehicle_Body.wind"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/Longitudinal Vehicle Body"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "W"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Longitudinal_Vehicle_Body_V0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/PS-Simulink\nConverter"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Longitudinal_Vehicle_Body_V0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Simulink_PS_Converter1_output0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/Simulink-PS\nConverter1"
, { { 1 , 1 } } , "deg" , 1.0 , "deg" , NE_NOMINAL_SOURCE_FIXED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter1_output0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Simulink_PS_Converter_output0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/Simulink-PS\nConverter"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_FIXED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter_output0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Solver.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.FzF"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"FzF" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.FzR"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"FzR" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.FzF"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"FzF" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.FzR"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"FzR" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.A.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.H.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.M"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, { { 1 , 4 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "M"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.N"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "N"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.S"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "S"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.resistance.H.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.resistance.N"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "N"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.resistance.fH"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Hub force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.resistance.vH"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Hub velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.tire_inertia.I.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.tire_inertia.J.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.tire_inertia.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.tire_inertia.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.tire_road_interaction.H.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.tire_road_interaction.M"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, { { 1 , 4 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "M"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.tire_road_interaction.N"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "N"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.tire_road_interaction.S"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "S"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.tire_road_interaction.T.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.tire_road_interaction.f_hub"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Hub force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.tire_road_interaction.f_tread"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Tread force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.wheel_axle.A.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.wheel_axle.P.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.wheel_axle.f"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.wheel_axle.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L_N0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/PS-Simulink\nConverter4"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Longitudinal_Wheel_Front_L_N0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L_S0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/PS-Simulink\nConverter"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Longitudinal_Wheel_Front_L_S0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.A.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.H.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.M"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, { { 1 , 4 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "M"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.N"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "N"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.S"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "S"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.resistance.H.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.resistance.N"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "N"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.resistance.fH"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Hub force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.resistance.vH"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Hub velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.tire_inertia.I.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.tire_inertia.J.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.tire_inertia.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.tire_inertia.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.tire_road_interaction.H.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.tire_road_interaction.M"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, { { 1 , 4 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "M"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.tire_road_interaction.N"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "N"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.tire_road_interaction.S"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "S"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.tire_road_interaction.T.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.tire_road_interaction.f_hub"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Hub force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.tire_road_interaction.f_tread"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Tread force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.wheel_axle.A.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.wheel_axle.P.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.wheel_axle.f"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.wheel_axle.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R_S0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/PS-Simulink\nConverter2"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Longitudinal_Wheel_Front_R_S0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.A.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.H.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.M"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, { { 1 , 4 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "M"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.N"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "N"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.S"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "S"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.resistance.H.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.resistance.N"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "N"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.resistance.fH"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Hub force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.resistance.vH"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Hub velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.tire_inertia.I.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.tire_inertia.J.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.tire_inertia.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.tire_inertia.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.tire_road_interaction.H.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.tire_road_interaction.M"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, { { 1 , 4 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "M"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.tire_road_interaction.N"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "N"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.tire_road_interaction.S"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "S"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.tire_road_interaction.T.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.tire_road_interaction.f_hub"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Hub force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.tire_road_interaction.f_tread"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Tread force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.wheel_axle.A.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.wheel_axle.P.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.wheel_axle.f"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.wheel_axle.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L_N0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/PS-Simulink\nConverter5"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Longitudinal_Wheel_Rear_L_N0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L_S0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/PS-Simulink\nConverter1"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Longitudinal_Wheel_Rear_L_S0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.A.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.H.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.M"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, { { 1 , 4 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "M"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.N"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "N"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.S"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "S"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.resistance.H.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.resistance.N"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "N"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.resistance.fH"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Hub force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.resistance.vH"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Hub velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.tire_inertia.I.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.tire_inertia.J.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.tire_inertia.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.tire_inertia.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.tire_road_interaction.H.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.tire_road_interaction.M"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, { { 1 , 4 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "M"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.tire_road_interaction.N"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "N"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.tire_road_interaction.S"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "S"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.tire_road_interaction.T.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.tire_road_interaction.f_hub"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Hub force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.tire_road_interaction.f_tread"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Tread force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.wheel_axle.A.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.wheel_axle.P.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.wheel_axle.f"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.wheel_axle.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R_S0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/PS-Simulink\nConverter3"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Longitudinal_Wheel_Rear_R_S0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Mechanical_Rotational_Reference.W.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Mechanical Rotational Reference"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Mechanical_Rotational_Reference1.W.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Mechanical Rotational Reference1"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Mechanical_Rotational_Reference2.W.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Mechanical Rotational Reference2"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Mechanical_Rotational_Reference3.W.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Mechanical Rotational Reference3"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Rotational_Damper.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Rotational Damper"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Rotational_Damper.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Rotational Damper"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Rotational_Damper.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Rotational Damper"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Rotational_Damper.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Rotational Damper"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Rotational_Damper.power_dissipated"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Rotational Damper"
, { { 1 , 1 } } , "kg*m^2/s^3" , 1.0 , "kg*m^2/s^3" , NE_NOMINAL_SOURCE_NONE
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Rotational_Damper1.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Rotational Damper1"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Rotational_Damper1.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Rotational Damper1"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Rotational_Damper1.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Rotational Damper1"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Rotational_Damper1.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Rotational Damper1"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Rotational_Damper1.power_dissipated"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Rotational Damper1"
, { { 1 , 1 } } , "kg*m^2/s^3" , 1.0 , "kg*m^2/s^3" , NE_NOMINAL_SOURCE_NONE
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Rotational_Damper2.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Rotational Damper2"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Rotational_Damper2.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Rotational Damper2"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Rotational_Damper2.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Rotational Damper2"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Rotational_Damper2.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Rotational Damper2"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Rotational_Damper2.power_dissipated"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Rotational Damper2"
, { { 1 , 1 } } , "kg*m^2/s^3" , 1.0 , "kg*m^2/s^3" , NE_NOMINAL_SOURCE_NONE
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Rotational_Damper3.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Rotational Damper3"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Rotational_Damper3.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Rotational Damper3"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Rotational_Damper3.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Rotational Damper3"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Rotational_Damper3.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Rotational Damper3"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Rotational_Damper3.power_dissipated"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Rotational Damper3"
, { { 1 , 1 } } , "kg*m^2/s^3" , 1.0 , "kg*m^2/s^3" , NE_NOMINAL_SOURCE_NONE
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Suspension.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd2.Ideal_Rotational_Motion_Sensor.A"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd2/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "A"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd2.Ideal_Rotational_Motion_Sensor.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd2/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd2.Ideal_Rotational_Motion_Sensor.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd2/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd2.Ideal_Rotational_Motion_Sensor.W"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd2/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "W"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd2.Ideal_Rotational_Motion_Sensor.alpha"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd2/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s^2" , 1.0 , "1/s^2" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\316\261" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd2.Ideal_Rotational_Motion_Sensor.phi"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd2/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angle" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd2.Ideal_Rotational_Motion_Sensor_W0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd2/PS-Simulink\nConverter"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Ideal_Rotational_Motion_Sensor_W0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd2.Mechanical_Rotational_Reference.W.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd2/Mechanical Rotational Reference"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd2.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd2"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd3.Ideal_Rotational_Motion_Sensor.A"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd3/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "A"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd3.Ideal_Rotational_Motion_Sensor.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd3/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd3.Ideal_Rotational_Motion_Sensor.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd3/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd3.Ideal_Rotational_Motion_Sensor.W"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd3/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "W"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd3.Ideal_Rotational_Motion_Sensor.alpha"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd3/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s^2" , 1.0 , "1/s^2" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\316\261" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd3.Ideal_Rotational_Motion_Sensor.phi"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd3/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angle" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd3.Ideal_Rotational_Motion_Sensor_W0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd3/PS-Simulink\nConverter"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Ideal_Rotational_Motion_Sensor_W0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd3.Mechanical_Rotational_Reference.W.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd3/Mechanical Rotational Reference"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd3.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd3"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd4.Ideal_Rotational_Motion_Sensor.A"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd4/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "A"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd4.Ideal_Rotational_Motion_Sensor.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd4/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd4.Ideal_Rotational_Motion_Sensor.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd4/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd4.Ideal_Rotational_Motion_Sensor.W"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd4/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "W"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd4.Ideal_Rotational_Motion_Sensor.alpha"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd4/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s^2" , 1.0 , "1/s^2" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\316\261" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd4.Ideal_Rotational_Motion_Sensor.phi"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd4/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angle" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd4.Ideal_Rotational_Motion_Sensor_W0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd4/PS-Simulink\nConverter"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Ideal_Rotational_Motion_Sensor_W0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd4.Mechanical_Rotational_Reference.W.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd4/Mechanical Rotational Reference"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd4.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpd4"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpdFL.Ideal_Rotational_Motion_Sensor.A"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpdFL/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "A"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpdFL.Ideal_Rotational_Motion_Sensor.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpdFL/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpdFL.Ideal_Rotational_Motion_Sensor.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpdFL/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpdFL.Ideal_Rotational_Motion_Sensor.W"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpdFL/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "W"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpdFL.Ideal_Rotational_Motion_Sensor.alpha"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpdFL/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s^2" , 1.0 , "1/s^2" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\316\261" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpdFL.Ideal_Rotational_Motion_Sensor.phi"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpdFL/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angle" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpdFL.Ideal_Rotational_Motion_Sensor_W0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpdFL/PS-Simulink\nConverter"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Ideal_Rotational_Motion_Sensor_W0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpdFL.Mechanical_Rotational_Reference.W.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpdFL/Mechanical Rotational Reference"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpdFL.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/WhlSpdFL"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.x_pmio_4_for_Simscape_Bus_at_index_0.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.x_pmio_5_for_Simscape_Bus_at_index_1.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.x_pmio_6_for_Simscape_Bus1_at_index_0.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.x_pmio_7_for_Simscape_Bus1_at_index_1.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.Suspension.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.x_pmio_4_for_Simscape_Bus_at_index_0.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.x_pmio_5_for_Simscape_Bus_at_index_1.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.x_pmio_6_for_Simscape_Bus1_at_index_0.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.x_pmio_7_for_Simscape_Bus1_at_index_1.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.x_pmio_2_for_Simscape_Bus_at_index_0.w"
, "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels" , {
{ 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.x_pmio_3_for_Simscape_Bus_at_index_1.w"
, "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels" , {
{ 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.x_pmio_4_for_Simscape_Bus1_at_index_0.w"
, "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels" , {
{ 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.x_pmio_5_for_Simscape_Bus1_at_index_1.w"
, "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels" , {
{ 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqFL.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/AxlTrqFL"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqFL.Ideal_Torque_Sensor.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/AxlTrqFL/Ideal Torque Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqFL.Ideal_Torque_Sensor.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/AxlTrqFL/Ideal Torque Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqFL.Ideal_Torque_Sensor.T"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/AxlTrqFL/Ideal Torque Sensor"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqFL.Ideal_Torque_Sensor.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/AxlTrqFL/Ideal Torque Sensor"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqFL.Ideal_Torque_Sensor_T0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/AxlTrqFL/PS-Simulink\nConverter"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Ideal_Torque_Sensor_T0" , } , {
"Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqFL.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/AxlTrqFL"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqFR.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/AxlTrqFR"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqFR.Ideal_Torque_Sensor.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/AxlTrqFR/Ideal Torque Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqFR.Ideal_Torque_Sensor.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/AxlTrqFR/Ideal Torque Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqFR.Ideal_Torque_Sensor.T"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/AxlTrqFR/Ideal Torque Sensor"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqFR.Ideal_Torque_Sensor.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/AxlTrqFR/Ideal Torque Sensor"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqFR.Ideal_Torque_Sensor_T0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/AxlTrqFR/PS-Simulink\nConverter"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Ideal_Torque_Sensor_T0" , } , {
"Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqFR.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/AxlTrqFR"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqR.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/AxlTrqR"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqR.Ideal_Torque_Sensor.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/AxlTrqR/Ideal Torque Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqR.Ideal_Torque_Sensor.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/AxlTrqR/Ideal Torque Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqR.Ideal_Torque_Sensor.T"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/AxlTrqR/Ideal Torque Sensor"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqR.Ideal_Torque_Sensor.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/AxlTrqR/Ideal Torque Sensor"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqR.Ideal_Torque_Sensor_T0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/AxlTrqR/PS-Simulink\nConverter"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Ideal_Torque_Sensor_T0" , } , {
"Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqR.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/AxlTrqR"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
"Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqRL.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/AxlTrqRL"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqRL.Ideal_Torque_Sensor.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/AxlTrqRL/Ideal Torque Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqRL.Ideal_Torque_Sensor.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/AxlTrqRL/Ideal Torque Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqRL.Ideal_Torque_Sensor.T"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/AxlTrqRL/Ideal Torque Sensor"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqRL.Ideal_Torque_Sensor.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/AxlTrqRL/Ideal Torque Sensor"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqRL.Ideal_Torque_Sensor_T0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/AxlTrqRL/PS-Simulink\nConverter"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Ideal_Torque_Sensor_T0" , } , {
"Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqRL.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/AxlTrqRL"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.FrntDiffrntlTrq.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/DriveshftTrq Routing"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.RearDiffrntlTrq.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/DriveshftTrq Routing"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.Two_Actuator_AWD.FrntDiffrntlTrq.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/DriveshftTrq Routing/Two Actuator AWD"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.Two_Actuator_AWD.RearDiffrntlTrq.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/DriveshftTrq Routing/Two Actuator AWD"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.Two_Actuator_AWD.Spd1.Ideal_Rotational_Motion_Sensor.A"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/DriveshftTrq Routing/Two Actuator AWD/Spd1/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "A"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.Two_Actuator_AWD.Spd1.Ideal_Rotational_Motion_Sensor.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/DriveshftTrq Routing/Two Actuator AWD/Spd1/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.Two_Actuator_AWD.Spd1.Ideal_Rotational_Motion_Sensor.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/DriveshftTrq Routing/Two Actuator AWD/Spd1/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.Two_Actuator_AWD.Spd1.Ideal_Rotational_Motion_Sensor.W"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/DriveshftTrq Routing/Two Actuator AWD/Spd1/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "W"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.Two_Actuator_AWD.Spd1.Ideal_Rotational_Motion_Sensor.alpha"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/DriveshftTrq Routing/Two Actuator AWD/Spd1/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s^2" , 1.0 , "1/s^2" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\316\261" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.Two_Actuator_AWD.Spd1.Ideal_Rotational_Motion_Sensor.phi"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/DriveshftTrq Routing/Two Actuator AWD/Spd1/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angle" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.Two_Actuator_AWD.Spd1.Ideal_Rotational_Motion_Sensor_W0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/DriveshftTrq Routing/Two Actuator AWD/Spd1/PS-Simulink\nConverter"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Ideal_Rotational_Motion_Sensor_W0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.Two_Actuator_AWD.Spd1.Mechanical_Rotational_Reference.W.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/DriveshftTrq Routing/Two Actuator AWD/Spd1/Mechanical Rotational Reference"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.Two_Actuator_AWD.Spd1.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/DriveshftTrq Routing/Two Actuator AWD/Spd1"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.Two_Actuator_AWD.Spd2.Ideal_Rotational_Motion_Sensor.A"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/DriveshftTrq Routing/Two Actuator AWD/Spd2/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "A"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.Two_Actuator_AWD.Spd2.Ideal_Rotational_Motion_Sensor.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/DriveshftTrq Routing/Two Actuator AWD/Spd2/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.Two_Actuator_AWD.Spd2.Ideal_Rotational_Motion_Sensor.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/DriveshftTrq Routing/Two Actuator AWD/Spd2/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.Two_Actuator_AWD.Spd2.Ideal_Rotational_Motion_Sensor.W"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/DriveshftTrq Routing/Two Actuator AWD/Spd2/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "W"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.Two_Actuator_AWD.Spd2.Ideal_Rotational_Motion_Sensor.alpha"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/DriveshftTrq Routing/Two Actuator AWD/Spd2/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s^2" , 1.0 , "1/s^2" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\316\261" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.Two_Actuator_AWD.Spd2.Ideal_Rotational_Motion_Sensor.phi"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/DriveshftTrq Routing/Two Actuator AWD/Spd2/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angle" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.Two_Actuator_AWD.Spd2.Ideal_Rotational_Motion_Sensor_W0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/DriveshftTrq Routing/Two Actuator AWD/Spd2/PS-Simulink\nConverter"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Ideal_Rotational_Motion_Sensor_W0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.Two_Actuator_AWD.Spd2.Mechanical_Rotational_Reference.W.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/DriveshftTrq Routing/Two Actuator AWD/Spd2/Mechanical Rotational Reference"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.Two_Actuator_AWD.Spd2.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/DriveshftTrq Routing/Two Actuator AWD/Spd2"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.AxlTrqFL.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.AxlTrqFR.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.DriveshftTrq.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.AxlTrqFL.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.AxlTrqFR.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.DriveshftTrq.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.D.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.H.T"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.S1.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.S2.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.base_gear.B.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.base_gear.F.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.base_gear.H.T"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.base_gear.tB"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Base torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.base_gear.temperature"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.base_gear.damperB.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.base_gear.damperB.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.base_gear.damperB.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.base_gear.damperB.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.base_gear.damperB.power_dissipated"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "kg*m^2/s^3" , 1.0 , "kg*m^2/s^3" , NE_NOMINAL_SOURCE_NONE
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.base_gear.damperF.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.base_gear.damperF.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.base_gear.damperF.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.base_gear.damperF.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.base_gear.damperF.power_dissipated"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "kg*m^2/s^3" , 1.0 , "kg*m^2/s^3" , NE_NOMINAL_SOURCE_NONE
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.base_gear.f_hardstop"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Hard stop force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.base_gear.fault_trigger"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "T"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.base_gear.tF"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Follower torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.base_gear.v_backlash"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Backlash velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.base_gear.x_backlash"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "mm" , 1.0 , "m" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Backlash position" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_left.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_left.H.T"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_left.P.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_left.S.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_left.temperature"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_left.t_S"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Sun torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_left.damper.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_left.damper.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_left.damper.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_left.damper.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_left.damper.power_dissipated"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "kg*m^2/s^3" , 1.0 , "kg*m^2/s^3" , NE_NOMINAL_SOURCE_NONE
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_left.t_C"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Carrier torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_left.t_P"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Planet torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_right.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_right.H.T"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_right.P.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_right.S.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_right.temperature"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_right.t_S"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Sun torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_right.damper.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_right.damper.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_right.damper.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_right.damper.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_right.damper.power_dissipated"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "kg*m^2/s^3" , 1.0 , "kg*m^2/s^3" , NE_NOMINAL_SOURCE_NONE
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_right.t_C"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Carrier torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_right.t_P"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Planet torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.AxlTrqRL.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.AxlTrqRR.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.DriveshftTrq.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.AxlTrqRL.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.AxlTrqRR.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.DriveshftTrq.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.D.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.H.T"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.S1.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.S2.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.base_gear.B.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.base_gear.F.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.base_gear.H.T"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.base_gear.tB"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Base torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.base_gear.temperature"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.base_gear.damperB.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.base_gear.damperB.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.base_gear.damperB.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.base_gear.damperB.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.base_gear.damperB.power_dissipated"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "kg*m^2/s^3" , 1.0 , "kg*m^2/s^3" , NE_NOMINAL_SOURCE_NONE
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.base_gear.damperF.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.base_gear.damperF.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.base_gear.damperF.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.base_gear.damperF.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.base_gear.damperF.power_dissipated"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "kg*m^2/s^3" , 1.0 , "kg*m^2/s^3" , NE_NOMINAL_SOURCE_NONE
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.base_gear.f_hardstop"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "N" , 1.0 , "N" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Hard stop force" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.base_gear.fault_trigger"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "T"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.base_gear.tF"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Follower torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.base_gear.v_backlash"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "m/s" , 1.0 , "m/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Backlash velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.base_gear.x_backlash"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "mm" , 1.0 , "m" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Backlash position" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_left.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_left.H.T"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_left.P.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_left.S.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_left.temperature"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_left.t_S"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Sun torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_left.damper.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_left.damper.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_left.damper.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_left.damper.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_left.damper.power_dissipated"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "kg*m^2/s^3" , 1.0 , "kg*m^2/s^3" , NE_NOMINAL_SOURCE_NONE
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_left.t_C"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Carrier torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_left.t_P"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Planet torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_right.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_right.H.T"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_right.P.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_right.S.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_right.temperature"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_right.t_S"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Sun torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_right.damper.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_right.damper.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_right.damper.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_right.damper.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_right.damper.power_dissipated"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "kg*m^2/s^3" , 1.0 , "kg*m^2/s^3" , NE_NOMINAL_SOURCE_NONE
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_right.t_C"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Carrier torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_right.t_P"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Planet torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.x_pmio_2_for_Simscape_Bus_at_index_0.w"
, "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.x_pmio_3_for_Simscape_Bus_at_index_1.w"
, "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.x_pmio_4_for_Simscape_Bus1_at_index_0.w"
, "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.x_pmio_5_for_Simscape_Bus1_at_index_1.w"
, "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.x_pmio_6_for_Simscape_Bus1_at_index_0.w"
, "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.x_pmio_7_for_Simscape_Bus1_at_index_1.w"
, "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Inertia.I.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Inertia"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Inertia.J.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Inertia"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Inertia.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Inertia"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Inertia.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Inertia"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Inertia1.I.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Inertia1"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Inertia1.J.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Inertia1"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Inertia1.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Inertia1"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Inertia1.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Inertia1"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Spd_Sensor.Ideal_Rotational_Motion_Sensor.A"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Spd Sensor/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "A"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Spd_Sensor.Ideal_Rotational_Motion_Sensor.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Spd Sensor/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Spd_Sensor.Ideal_Rotational_Motion_Sensor.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Spd Sensor/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Spd_Sensor.Ideal_Rotational_Motion_Sensor.W"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Spd Sensor/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "W"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Spd_Sensor.Ideal_Rotational_Motion_Sensor.alpha"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Spd Sensor/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s^2" , 1.0 , "1/s^2" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\316\261" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Spd_Sensor.Ideal_Rotational_Motion_Sensor.phi"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Spd Sensor/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angle" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Spd_Sensor.Ideal_Rotational_Motion_Sensor_W0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Spd Sensor/PS-Simulink\nConverter"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Ideal_Rotational_Motion_Sensor_W0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Spd_Sensor.Mechanical_Rotational_Reference.W.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Spd Sensor/Mechanical Rotational Reference"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Spd_Sensor.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Spd Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Spd_Sensor1.Ideal_Rotational_Motion_Sensor.A"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Spd Sensor1/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "A"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Spd_Sensor1.Ideal_Rotational_Motion_Sensor.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Spd Sensor1/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Spd_Sensor1.Ideal_Rotational_Motion_Sensor.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Spd Sensor1/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Spd_Sensor1.Ideal_Rotational_Motion_Sensor.W"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Spd Sensor1/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "W"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Spd_Sensor1.Ideal_Rotational_Motion_Sensor.alpha"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Spd Sensor1/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad/s^2" , 1.0 , "1/s^2" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"\316\261" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Spd_Sensor1.Ideal_Rotational_Motion_Sensor.phi"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Spd Sensor1/Ideal Rotational Motion Sensor"
, { { 1 , 1 } } , "rad" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angle" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Spd_Sensor1.Ideal_Rotational_Motion_Sensor_W0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Spd Sensor1/PS-Simulink\nConverter"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Ideal_Rotational_Motion_Sensor_W0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Spd_Sensor1.Mechanical_Rotational_Reference.W.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Spd Sensor1/Mechanical Rotational Reference"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Spd_Sensor1.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM/Spd Sensor1"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.x_pmio_2_for_Simscape_Bus_at_index_0.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.x_pmio_3_for_Simscape_Bus_at_index_1.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.x_pmio_4_for_Simscape_Bus1_at_index_0.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.x_pmio_5_for_Simscape_Bus1_at_index_1.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators/Electric Vehicle 1EM"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.x_pmio_3_for_Simscape_Bus_at_index_0.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.x_pmio_4_for_Simscape_Bus_at_index_1.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.x_pmio_5_for_Simscape_Bus1_at_index_0.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.x_pmio_6_for_Simscape_Bus1_at_index_1.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Transmission and Actuators"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.x_pmio_3_for_Simscape_Bus_at_index_0.w"
, "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain" , { { 1 , 1 } } ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } ,
{
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.x_pmio_4_for_Simscape_Bus_at_index_1.w"
, "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain" , { { 1 , 1 } } ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } ,
{
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.x_pmio_5_for_Simscape_Bus1_at_index_0.w"
, "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain" , { { 1 , 1 } } ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } ,
{
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.x_pmio_6_for_Simscape_Bus1_at_index_1.w"
, "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain" , { { 1 , 1 } } ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } ,
{
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.x_pmio_7_for_Simscape_Bus_at_index_0.w"
, "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain" , { { 1 , 1 } } ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } ,
{
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.x_pmio_8_for_Simscape_Bus_at_index_1.w"
, "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain" , { { 1 , 1 } } ,
"rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , FALSE
, FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "Rotational velocity" , } ,
{
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.H.T"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.Q"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Heat flow" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.cell_temperature"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "degC" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.charge"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "A*hr" , 1.0 , "C" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Charge" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.i"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current (positive in)" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.n.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.num_cycles"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Discharge cycles" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.xVint"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature adjusted open-circuit voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.xdVint_fade"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Open-circuit voltage fading factor" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.ocv"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"Open-circuit voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.p.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.power_dissipated"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Power dissipated" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.q_generated"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Heat generation" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.soc"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"SOC" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.stateOfCharge"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_MANDATORY , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE
, "State of charge" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Terminal voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.vrc1"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc1" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.vrc2"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc2" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.vrc3"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc3" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.vrc4"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc4" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.vrc5"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE
, "vrc5" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.xG1"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R1(SOC,T,N)" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.xG2"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R2(SOC,T,N)" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.xG3"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R3(SOC,T,N)" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.xG4"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R4(SOC,T,N)" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.xG5"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/R5(SOC,T,N)" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.xGsd"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "1/Ohm" , 1.0 , "C^2*s/(kg*m^2)" ,
NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE , TRUE , FALSE ,
NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "1/Rleak(T,N)" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.xR0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "Ohm" , 1.0 , "kg*m^2/(C^2*s)" , NE_NOMINAL_SOURCE_DERIVED
, NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature adjusted terminal resistance" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.xdAH_fade"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Cell capacity fading factor" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.xdR0_fade"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Internal resistance fading factor" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.xqnom"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, { { 1 , 1 } } , "A*hr" , 1.0 , "C" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Faded cell capacity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based_soc0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/PS-Simulink\nConverter4"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Battery_Table_Based_soc0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Electrical_Reference1.V.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Electrical Reference1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Electrical_Reference2.V.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Electrical Reference2"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Power_Acc.Controlled_Current_Source.head.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Power Acc/Controlled Current Source"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Power_Acc.Controlled_Current_Source.i"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Power Acc/Controlled Current Source"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "i"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Power_Acc.Controlled_Current_Source.iT"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Power Acc/Controlled Current Source"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"iT" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Power_Acc.Controlled_Current_Source.tail.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Power Acc/Controlled Current Source"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Power_Acc.Controlled_Current_Source.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Power Acc/Controlled Current Source"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "v"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Power_Acc.Simulink_PS_Converter_output0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Power Acc/Simulink-PS\nConverter"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_FIXED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter_output0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Power_Acc.x0.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Power Acc"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Power_Acc.x1.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Power Acc"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Sensor_VI.Current_Sensor.I"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Sensor VI/Current Sensor"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Sensor_VI.Current_Sensor.i1"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Sensor VI/Current Sensor"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Sensor_VI.Current_Sensor.n.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Sensor VI/Current Sensor"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Sensor_VI.Current_Sensor.p.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Sensor VI/Current Sensor"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Sensor_VI.Current_Sensor_I0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Sensor VI/PS-Simulink\nConverter2"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Current_Sensor_I0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Sensor_VI.G.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Sensor VI"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Sensor_VI.Voltage_Sensor2.V"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Sensor VI/Voltage Sensor2"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Sensor_VI.Voltage_Sensor2.n.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Sensor VI/Voltage Sensor2"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Sensor_VI.Voltage_Sensor2.p.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Sensor VI/Voltage Sensor2"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Sensor_VI.Voltage_Sensor2_V0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Sensor VI/PS-Simulink\nConverter4"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage_Sensor2_V0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Sensor_VI.x0.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Sensor VI"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Sensor_VI.x1.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Sensor VI"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Subsystem1.B.T"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Subsystem1"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Subsystem1.Controlled_Temperature_Source1.A.T"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Subsystem1/Controlled Temperature Source1"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Subsystem1.Controlled_Temperature_Source1.B.T"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Subsystem1/Controlled Temperature Source1"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Subsystem1.Controlled_Temperature_Source1.Q"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Subsystem1/Controlled Temperature Source1"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Heat flow rate" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Subsystem1.Controlled_Temperature_Source1.S"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Subsystem1/Controlled Temperature Source1"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "S"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Subsystem1.Controlled_Temperature_Source1.T"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Subsystem1/Controlled Temperature Source1"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature difference" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Subsystem1.Simulink_PS_Converter2_output0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Subsystem1/Simulink-PS\nConverter2"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_FIXED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter2_output0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Subsystem1.Thermal_Reference3.H.T"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Subsystem1/Thermal Reference3"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Thermal_Resistance2.A.T"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Thermal Resistance2"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Thermal_Resistance2.B.T"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Thermal Resistance2"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Thermal_Resistance2.Q"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Thermal Resistance2"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Heat flow rate" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Thermal_Resistance2.T"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Thermal Resistance2"
, { { 1 , 1 } } , "K" , 1.0 , "K" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Temperature difference" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.x0.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.x1.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.x0.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.x1.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Average_Value_DC_DC_Converter.DutyCycle"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Average-Value DC-DC Converter"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"DutyCycle" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Average_Value_DC_DC_Converter.Iref"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Average-Value DC-DC Converter"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Iref" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Average_Value_DC_DC_Converter.Vref"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Average-Value DC-DC Converter"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Vref" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Average_Value_DC_DC_Converter.i2"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Average-Value DC-DC Converter"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Output current" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Average_Value_DC_DC_Converter.efficiency"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Average-Value DC-DC Converter"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"efficiency" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Average_Value_DC_DC_Converter.i1"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Average-Value DC-DC Converter"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Input current" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Average_Value_DC_DC_Converter.n1.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Average-Value DC-DC Converter"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Average_Value_DC_DC_Converter.n2.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Average-Value DC-DC Converter"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Average_Value_DC_DC_Converter.p1.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Average-Value DC-DC Converter"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Average_Value_DC_DC_Converter.p2.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Average-Value DC-DC Converter"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Average_Value_DC_DC_Converter.v1"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Average-Value DC-DC Converter"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Input voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Average_Value_DC_DC_Converter.v2"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Average-Value DC-DC Converter"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Output voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Capacitor.i"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Capacitor.n.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Capacitor.p.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Capacitor.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Capacitor.vc"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Capacitor voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Capacitor.power_dissipated"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor"
, { { 1 , 1 } } , "kW" , 1.0 , "kW" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Capacitor1.i"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor1"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Capacitor1.n.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Capacitor1.p.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Capacitor1.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Capacitor1.vc"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_MANDATORY , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Capacitor voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Capacitor1.power_dissipated"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor1"
, { { 1 , 1 } } , "kW" , 1.0 , "kW" , NE_NOMINAL_SOURCE_NONE ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , FALSE ,
"power_dissipated" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Electrical_Reference.V.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Electrical Reference"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Vref"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Vref" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.x1.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.x2.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.x3.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.x4.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.Vref"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Vref" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.x1.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.x2.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.x3.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.x4.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter_Vref0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Simulink-PS\nConverter"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_FIXED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"DC_DC_Converter_Vref0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Elec_Sensor.Current_Sensor2.I"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Elec Sensor/Current Sensor2"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Elec_Sensor.Current_Sensor2.i1"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Elec Sensor/Current Sensor2"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Elec_Sensor.Current_Sensor2.n.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Elec Sensor/Current Sensor2"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Elec_Sensor.Current_Sensor2.p.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Elec Sensor/Current Sensor2"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Elec_Sensor.Current_Sensor2_I0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Elec Sensor/PS-Simulink\nConverter4"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Current_Sensor2_I0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Elec_Sensor.Electrical_Reference.V.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Elec Sensor/Electrical Reference"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Elec_Sensor.Voltage_Sensor.V"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Elec Sensor/Voltage Sensor"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Elec_Sensor.Voltage_Sensor.n.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Elec Sensor/Voltage Sensor"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Elec_Sensor.Voltage_Sensor.p.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Elec Sensor/Voltage Sensor"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Elec_Sensor.Voltage_Sensor_V0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Elec Sensor/PS-Simulink\nConverter"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage_Sensor_V0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Elec_Sensor.x0.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Elec Sensor"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Elec_Sensor.x1.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Elec Sensor"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Mechanical_Rotational_Reference1.W.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Mechanical Rotational Reference1"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive.Omega"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "w"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive.Tr"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Tr" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive.Vm.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive.Vp.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive.faulted"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Faulted flag" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive.i"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive.power_dissipated"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Power dissipated" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive.torqueLimit"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Maximum torque magnitude" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive.torqueLimitContinuous"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Calculated continuous torque limit (always positive)" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive.torque_elec"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Electrical torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive.torque_ref"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Demanded torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angular velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive.F"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "F"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Simulink_PS_Converter3_output0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Simulink-PS\nConverter3"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_FIXED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter3_output0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Torque_Sensor.Ideal_Torque_Sensor2.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Torque Sensor/Ideal Torque Sensor2"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Torque_Sensor.Ideal_Torque_Sensor2.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Torque Sensor/Ideal Torque Sensor2"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Torque_Sensor.Ideal_Torque_Sensor2.T"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Torque Sensor/Ideal Torque Sensor2"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Torque_Sensor.Ideal_Torque_Sensor2.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Torque Sensor/Ideal Torque Sensor2"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Torque_Sensor.Ideal_Torque_Sensor2_T0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Torque Sensor/PS-Simulink\nConverter2"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Ideal_Torque_Sensor2_T0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Torque_Sensor.Output.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Torque Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Torque_Sensor.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Torque Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.x0.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.x1.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Elec_Sensor.Current_Sensor2.I"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Elec Sensor/Current Sensor2"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "I"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Elec_Sensor.Current_Sensor2.i1"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Elec Sensor/Current Sensor2"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Elec_Sensor.Current_Sensor2.n.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Elec Sensor/Current Sensor2"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Elec_Sensor.Current_Sensor2.p.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Elec Sensor/Current Sensor2"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Elec_Sensor.Current_Sensor2_I0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Elec Sensor/PS-Simulink\nConverter4"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Current_Sensor2_I0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Elec_Sensor.Electrical_Reference.V.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Elec Sensor/Electrical Reference"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Elec_Sensor.Voltage_Sensor.V"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Elec Sensor/Voltage Sensor"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "V"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Elec_Sensor.Voltage_Sensor.n.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Elec Sensor/Voltage Sensor"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Elec_Sensor.Voltage_Sensor.p.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Elec Sensor/Voltage Sensor"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Elec_Sensor.Voltage_Sensor_V0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Elec Sensor/PS-Simulink\nConverter"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage_Sensor_V0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Elec_Sensor.x0.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Elec Sensor"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Elec_Sensor.x1.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Elec Sensor"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Mechanical_Rotational_Reference1.W.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Mechanical Rotational Reference1"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive.Omega"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "w"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive.Tr"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Tr" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive.Vm.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive.Vp.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive.faulted"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Faulted flag" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive.i"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, { { 1 , 1 } } , "A" , 1.0 , "A" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Current" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive.power_dissipated"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, { { 1 , 1 } } , "W" , 1.0 , "kW" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Power dissipated" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive.torqueLimit"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Maximum torque magnitude" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive.torqueLimitContinuous"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Calculated continuous torque limit (always positive)" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive.torque_elec"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Electrical torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive.torque_ref"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , TRUE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Demanded torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Angular velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive.F"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, { { 1 , 1 } } , "1" , 1.0 , "1" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE , "F"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Simulink_PS_Converter3_output0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Simulink-PS\nConverter3"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_FIXED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Simulink_PS_Converter3_output0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Torque_Sensor.Ideal_Torque_Sensor2.C.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Torque Sensor/Ideal Torque Sensor2"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Torque_Sensor.Ideal_Torque_Sensor2.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Torque Sensor/Ideal Torque Sensor2"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Torque_Sensor.Ideal_Torque_Sensor2.T"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Torque Sensor/Ideal Torque Sensor2"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE , "T"
, } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Torque_Sensor.Ideal_Torque_Sensor2.t"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Torque Sensor/Ideal Torque Sensor2"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , TRUE , TRUE ,
"Torque" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Torque_Sensor.Ideal_Torque_Sensor2_T0"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Torque Sensor/PS-Simulink\nConverter2"
, { { 1 , 1 } } , "N*m" , 1.0 , "N*m" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Ideal_Torque_Sensor2_T0" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Torque_Sensor.Output.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Torque Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Torque_Sensor.R.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Torque Sensor"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.x0.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.x1.v"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1"
, { { 1 , 1 } } , "V" , 1.0 , "V" , NE_NOMINAL_SOURCE_MODEL ,
NE_INIT_MODE_NONE , TRUE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Voltage" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.x_pmio_1_for_Simscape_Bus_at_index_0.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.x_pmio_2_for_Simscape_Bus_at_index_1.w"
,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM"
, { { 1 , 1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED ,
NE_INIT_MODE_NONE , FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.x_pmio_1_for_Simscape_Bus_at_index_0.w"
, "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System" , { { 1 ,
1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } , {
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.x_pmio_2_for_Simscape_Bus_at_index_1.w"
, "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System" , { { 1 ,
1 } } , "rad/s" , 1.0 , "1/s" , NE_NOMINAL_SOURCE_DERIVED , NE_INIT_MODE_NONE
, FALSE , FALSE , NE_FREQTIME_TYPE_TIME , FALSE , TRUE ,
"Rotational velocity" , } } ; static NeModeData * s_major_mode_data = NULL ;
static NeZCData s_zc_data [ 18 ] = { {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, 2U , 0U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.resistance"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, NE_ZC_TYPE_FALSE , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, 2U , 2U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.resistance"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, NE_ZC_TYPE_FALSE , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1U , 4U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1U , 5U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.xxR0"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1U , 6U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based.xxqnom"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1U , 7U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1U , 8U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_TRUE , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1U , 9U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, NE_ZC_TYPE_FALSE , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Average-Value DC-DC Converter"
, 1U , 10U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Average_Value_DC_DC_Converter"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+average_dcdc_converters/buck_boost.sscp"
, NE_ZC_TYPE_TRUE , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Average-Value DC-DC Converter"
, 1U , 11U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Average_Value_DC_DC_Converter"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+average_dcdc_converters/buck_boost.sscp"
, NE_ZC_TYPE_TRUE , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, 1U , 12U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, 1U , 13U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, 1U , 14U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, 1U , 15U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, 1U , 16U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, 1U , 17U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, NE_ZC_TYPE_FALSE , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, 2U , 18U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.tire_road_interaction"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, NE_ZC_TYPE_FALSE , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, 2U , 20U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.tire_road_interaction"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, NE_ZC_TYPE_FALSE , } } ; static NeRange s_range [ 22 ] = { {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 90U , 18U , 90U , 27U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 90U , 18U , 90U , 27U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 90U , 18U , 90U , 27U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 90U , 18U , 90U , 27U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+average_dcdc_converters/buck_boost.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+average_dcdc_converters/buck_boost.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 141U , 28U , 141U , 33U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 141U , 28U , 141U , 33U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 141U , 28U , 141U , 33U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 141U , 28U , 141U , 33U , NE_RANGE_TYPE_NORMAL , } } ; static NeAssertData
s_assert_data [ 113 ] = { {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1U , 0U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE , "State of charge must be greater than or equal to zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1U , 1U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE , "State of charge must be less than or equal to 1." ,
"physmod:simscape:compiler:patterns:checks:LessThanOrEqual" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1U , 2U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE ,
 "''Terminal voltage'' must be greater than or equal to its lower bound defined in ''Terminal voltage operating range [Min Max]''."
,
"physmod:battery:shared_library:batteryecm:ValueGreaterThanOrEqualLowerBound"
, } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1U , 3U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, TRUE ,
 "''Terminal voltage'' must be smaller than or equal to its upper bound defined in ''Terminal voltage operating range [Min Max]''."
,
"physmod:battery:shared_library:batteryecm:ValueSmallerThanOrEqualUpperBound"
, } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1U , 4U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"Temperature adjusted terminal resistance must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1U , 5U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
 "Temperature adjusted open-circuit voltage must be greater than or equal to zero."
, "physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1U , 6U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "Faded cell capacity must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Average-Value DC-DC Converter"
, 1U , 7U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Average_Value_DC_DC_Converter"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+average_dcdc_converters/buck_boost.sscp"
, FALSE , "Input voltage must be greater than or equal to zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanOrEqualZero" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Average-Value DC-DC Converter"
, 1U , 8U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Average_Value_DC_DC_Converter"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+average_dcdc_converters/buck_boost.sscp"
, TRUE , "Vref is not in an acceptable range. Setting to 0." ,
"physmod:ee:library:AdjustedParameter" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, 1U , 9U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, FALSE , "Servomotor DC voltage supply must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, 1U , 10U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, FALSE , "Servomotor DC voltage supply must be greater than zero." ,
"physmod:simscape:compiler:patterns:checks:GreaterThanZero" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Rotational Damper"
, 1U , 11U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Rotational_Damper.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Rotational Damper"
, 1U , 12U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Rotational_Damper.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Rotational Damper1"
, 1U , 13U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Rotational_Damper1.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Rotational Damper1"
, 1U , 14U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Rotational_Damper1.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Rotational Damper2"
, 1U , 15U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Rotational_Damper2.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Rotational Damper2"
, 1U , 16U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Rotational_Damper2.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Rotational Damper3"
, 1U , 17U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Rotational_Damper3.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Rotational Damper3"
, 1U , 18U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Rotational_Damper3.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, 1U , 19U ,
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.base_gear.damperB.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, 1U , 20U ,
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.base_gear.damperB.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, 1U , 21U ,
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.base_gear.damperF.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, 1U , 22U ,
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.base_gear.damperF.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, 1U , 23U ,
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_left.damper.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, 1U , 24U ,
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_left.damper.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, 1U , 25U ,
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_right.damper.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Front Axle/Open Differential/Open Differential"
, 1U , 26U ,
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Front_Axle.Open_Differential.Open_Differential.sun_planet_right.damper.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, 1U , 27U ,
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.base_gear.damperB.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, 1U , 28U ,
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.base_gear.damperB.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, 1U , 29U ,
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.base_gear.damperF.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, 1U , 30U ,
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.base_gear.damperF.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, 1U , 31U ,
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_left.damper.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, 1U , 32U ,
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_left.damper.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, 1U , 33U ,
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_right.damper.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Drivetrain/Drivetrain Layout/Rear Axle/Open Differential/Open Differential"
, 1U , 34U ,
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.Rear_Axle.Open_Differential.Open_Differential.sun_planet_right.damper.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor"
, 1U , 35U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Capacitor.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor"
, 1U , 36U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Capacitor.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor"
, 1U , 37U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Capacitor.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor"
, 1U , 38U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Capacitor.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor1"
, 1U , 39U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Capacitor1.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor1"
, 1U , 40U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Capacitor1.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor1"
, 1U , 41U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Capacitor1.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor1"
, 1U , 42U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter.DC_DC_Converter.Capacitor1.power_dissipated"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, 1U , 43U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, 1U , 44U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, 1U , 45U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, 1U , 46U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/Longitudinal Vehicle Body"
, 1U , 47U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Longitudinal_Vehicle_Body"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/vehicle_body.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Vehicle/Vehicle Body 1DOF Longitudinal/Longitudinal Vehicle Body"
, 1U , 48U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Longitudinal_Vehicle_Body"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/vehicle_body.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, 1U , 49U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.tire_road_interaction"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, 1U , 50U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.tire_road_interaction"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, 1U , 51U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.tire_road_interaction"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, FALSE , "Argument of sqrt must be finite (not Inf or Nan)." ,
"physmod:common:mf:expr:analyze:RequireArgumentFinite" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, 1U , 52U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.tire_road_interaction"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, FALSE , "Argument of sqrt must be nonnegative." ,
"physmod:common:mf:expr:analyze:RequireArgumentNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, 1U , 53U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.tire_road_interaction"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, 1U , 54U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.tire_road_interaction"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, 1U , 55U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.tire_road_interaction"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, FALSE , "Argument of sqrt must be finite (not Inf or Nan)." ,
"physmod:common:mf:expr:analyze:RequireArgumentFinite" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, 1U , 56U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.tire_road_interaction"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, FALSE , "Argument of sqrt must be nonnegative." ,
"physmod:common:mf:expr:analyze:RequireArgumentNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, 1U , 57U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.tire_road_interaction"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, 1U , 58U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.tire_road_interaction"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, 1U , 59U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.tire_road_interaction"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, FALSE , "Argument of sqrt must be finite (not Inf or Nan)." ,
"physmod:common:mf:expr:analyze:RequireArgumentFinite" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, 1U , 60U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.tire_road_interaction"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, FALSE , "Argument of sqrt must be nonnegative." ,
"physmod:common:mf:expr:analyze:RequireArgumentNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, 1U , 61U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.tire_road_interaction"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, 1U , 62U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.tire_road_interaction"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, 1U , 63U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.tire_road_interaction"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, FALSE , "Argument of sqrt must be finite (not Inf or Nan)." ,
"physmod:common:mf:expr:analyze:RequireArgumentFinite" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, 1U , 64U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.tire_road_interaction"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, FALSE , "Argument of sqrt must be nonnegative." ,
"physmod:common:mf:expr:analyze:RequireArgumentNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1U , 65U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Front L"
, 1U , 66U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Front_L"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Front L"
, 1U , 67U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Front_L"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Front L"
, 1U , 68U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Front_L"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, TRUE ,
"Large value inside exp, limiting the exponential to avoid nonfinite values."
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Front R"
, 1U , 69U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Front_R"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Front R"
, 1U , 70U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Front_R"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Front R"
, 1U , 71U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Front_R"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, TRUE ,
"Large value inside exp, limiting the exponential to avoid nonfinite values."
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Rear L"
, 1U , 72U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Rear_L"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Rear L"
, 1U , 73U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Rear_L"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Rear L"
, 1U , 74U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Rear_L"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, TRUE ,
"Large value inside exp, limiting the exponential to avoid nonfinite values."
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Rear R"
, 1U , 75U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Rear_R"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Rear R"
, 1U , 76U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Rear_R"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Brake System/Braking Hydraulics and Disc Brakes/Disc Brake - Rear R"
, 1U , 77U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Disc_Brake_Rear_R"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, TRUE ,
"Large value inside exp, limiting the exponential to avoid nonfinite values."
, "physmod:common:mf:expr:analyze:RequireSmallerExponentExponential" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, 1U , 78U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.resistance"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, 1U , 79U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.resistance"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, 1U , 80U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.resistance"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, 1U , 81U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.resistance"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, 1U , 82U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.resistance"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, 1U , 83U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.resistance"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front L"
, 1U , 84U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L.tire_road_interaction"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, 1U , 85U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.resistance"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, 1U , 86U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.resistance"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, 1U , 87U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.resistance"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, 1U , 88U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.resistance"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, 1U , 89U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.resistance"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, 1U , 90U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.resistance"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Front R"
, 1U , 91U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R.tire_road_interaction"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, 1U , 92U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.resistance"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, 1U , 93U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.resistance"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, 1U , 94U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.resistance"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, 1U , 95U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.resistance"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, 1U , 96U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.resistance"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, 1U , 97U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.resistance"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear L"
, 1U , 98U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L.tire_road_interaction"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, 1U , 99U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.resistance"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, 1U , 100U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.resistance"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, 1U , 101U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.resistance"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, 1U , 102U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.resistance"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, 1U , 103U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.resistance"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, 1U , 104U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.resistance"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Body, Suspension, Wheels/Wheels and Tires/MF Tires Longitudinal/Longitudinal Wheel - Rear R"
, 1U , 105U ,
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R.tire_road_interaction"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1U , 106U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1U , 107U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1U , 108U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the exponent must be positive when the base is equal to zero." ,
"physmod:common:mf:expr:analyze:RequireExponentPositive" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1U , 109U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE ,
"In power, the base must be nonnegative when the exponent is not an integer."
, "physmod:common:mf:expr:analyze:RequireBaseNonnegative" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, 1U , 110U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM/Motor & Drive"
, 1U , 111U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Motor_Drive"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } , {
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Mapped EM1/Motor & Drive"
, 1U , 112U ,
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Motor_Drive"
,
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, FALSE , "In divide, the denominator must be nonzero." ,
"physmod:common:mf:expr:analyze:RequireDenominatorNonzero" , } } ; static
NeRange s_assert_range [ 113 ] = { {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+average_dcdc_converters/buck_boost.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+average_dcdc_converters/buck_boost.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, 16U , 27U , 16U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, 16U , 25U , 16U , 26U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, 16U , 27U , 16U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, 16U , 25U , 16U , 26U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, 16U , 27U , 16U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, 16U , 25U , 16U , 26U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, 16U , 27U , 16U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, 16U , 25U , 16U , 26U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, 16U , 27U , 16U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, 16U , 25U , 16U , 26U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, 16U , 27U , 16U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, 16U , 25U , 16U , 26U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, 16U , 27U , 16U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, 16U , 25U , 16U , 26U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, 16U , 27U , 16U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, 16U , 25U , 16U , 26U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, 16U , 27U , 16U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, 16U , 25U , 16U , 26U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, 16U , 27U , 16U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, 16U , 25U , 16U , 26U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, 16U , 27U , 16U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, 16U , 25U , 16U , 26U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, 16U , 27U , 16U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/damper.ssc"
, 16U , 25U , 16U , 26U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 29U , 26U , 30U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 27U , 26U , 28U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 36U , 26U , 37U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 26U , 33U , 26U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/vehicle_body.ssc"
, 228U , 47U , 228U , 48U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/vehicle_body.ssc"
, 228U , 37U , 228U , 45U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 75U , 28U , 75U , 29U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 75U , 23U , 75U , 26U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 75U , 22U , 75U , 42U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 75U , 22U , 75U , 42U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 75U , 28U , 75U , 29U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 75U , 23U , 75U , 26U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 75U , 22U , 75U , 42U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 75U , 22U , 75U , 42U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 75U , 28U , 75U , 29U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 75U , 23U , 75U , 26U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 75U , 22U , 75U , 42U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 75U , 22U , 75U , 42U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 75U , 28U , 75U , 29U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 75U , 23U , 75U , 26U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 75U , 22U , 75U , 42U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 75U , 22U , 75U , 42U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 93U , 46U , 93U , 47U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 93U , 55U , 93U , 59U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 93U , 43U , 93U , 52U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 93U , 112U , 93U , 113U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 93U , 109U , 93U , 111U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 93U , 128U , 93U , 133U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 77U , 20U , 77U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 93U , 46U , 93U , 47U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 93U , 55U , 93U , 59U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 93U , 43U , 93U , 52U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 93U , 112U , 93U , 113U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 93U , 109U , 93U , 111U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 93U , 128U , 93U , 133U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 77U , 20U , 77U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 93U , 46U , 93U , 47U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 93U , 55U , 93U , 59U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 93U , 43U , 93U , 52U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 93U , 112U , 93U , 113U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 93U , 109U , 93U , 111U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 93U , 128U , 93U , 133U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 77U , 20U , 77U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 93U , 46U , 93U , 47U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 93U , 55U , 93U , 59U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 93U , 43U , 93U , 52U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 93U , 112U , 93U , 113U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 93U , 109U , 93U , 111U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 93U , 128U , 93U , 133U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 77U , 20U , 77U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeAssertData *
s_param_assert_data = NULL ; static NeRange * s_param_assert_range = NULL ;
static NeAssertData * s_initial_assert_data = NULL ; static NeRange *
s_initial_assert_range = NULL ; static NeRange s_equation_range [ 94 ] = { {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/vehicle_body.ssc"
, 231U , 9U , 231U , 48U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/vehicle_body.ssc"
, 231U , 47U , 231U , 52U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc"
, 44U , 5U , 44U , 21U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc"
, 44U , 20U , 44U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc"
, 44U , 5U , 44U , 21U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc"
, 44U , 20U , 44U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc"
, 44U , 5U , 44U , 21U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc"
, 44U , 20U , 44U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc"
, 44U , 5U , 44U , 21U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc"
, 44U , 20U , 44U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc"
, 78U , 9U , 78U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc"
, 78U , 9U , 78U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc"
, 78U , 9U , 78U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc"
, 78U , 9U , 78U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc"
, 78U , 9U , 78U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc"
, 78U , 9U , 78U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc"
, 44U , 5U , 44U , 21U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc"
, 44U , 20U , 44U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc"
, 44U , 5U , 44U , 21U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+rotational/inertia.ssc"
, 44U , 20U , 44U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc"
, 78U , 9U , 78U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+mechanical/+sensors/angular_velocity.ssc"
, 78U , 9U , 78U , 22U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/simscape/library/m/+foundation/+electrical/+elements/capacitor.ssc"
, 36U , 5U , 36U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/vehicle_body.ssc"
, 232U , 9U , 232U , 105U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/vehicle_body.ssc"
, 233U , 9U , 233U , 105U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 90U , 9U , 94U , 18U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 77U , 9U , 77U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 145U , 13U , 145U , 34U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 146U , 13U , 146U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 90U , 9U , 94U , 18U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 77U , 9U , 77U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 145U , 13U , 145U , 34U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 146U , 13U , 146U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 90U , 9U , 94U , 18U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 77U , 9U , 77U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 145U , 13U , 145U , 34U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 146U , 13U , 146U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/rolling_resistance.ssc"
, 90U , 9U , 94U , 18U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 77U , 9U , 77U , 25U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 145U , 13U , 145U , 34U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+tires/+tire_subcomponents/magic_formula.ssc"
, 146U , 13U , 146U , 35U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+gears/simple_gear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet_bevel.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet_bevel.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet_bevel.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+gears/simple_gear.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet_bevel.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet_bevel.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet_bevel.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+average_dcdc_converters/buck_boost.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+semiconductors/+converters/+average_dcdc_converters/buck_boost.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/elec/library/m/+ee/+electromech/motor_and_drive_base.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeRange *
s_cer_range = NULL ; static NeRange s_icr_range [ 15 ] = { {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+brakes/+rotational/disc_brake.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+gears/differential.ssc"
, 109U , 114U , 109U , 120U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+gears/differential.ssc"
, 101U , 118U , 101U , 124U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet_bevel.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+gears/differential.ssc"
, 109U , 114U , 109U , 120U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+gears/differential.ssc"
, 101U , 118U , 101U , 124U , NE_RANGE_TYPE_NORMAL , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/sdl/sdl/+sdl/+gears/+planetary_subcomponents/sun_planet_bevel.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } , {
 "C:/Program Files/MATLAB/R2022b/toolbox/physmod/battery/shared_library/m/+batteryecm/table_battery.sscp"
, 1U , 1U , 1U , 1U , NE_RANGE_TYPE_PROTECTED , } } ; static NeParameterData
* s_logical_parameter_data = NULL ; static NeParameterData *
s_integer_parameter_data = NULL ; static NeParameterData *
s_index_parameter_data = NULL ; static NeParameterData s_real_parameter_data
[ 4 ] = { { "RTP_52118A8B_vc" ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor"
, "" , 0U , 1U , TRUE , } , { "RTP_BC7AD626_cell_temperature" ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, "" , 0U , 1U , TRUE , } , { "RTP_BC7AD626_stateOfCharge" ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/Battery System/Mapped Battery/Battery (Table-Based)"
, "" , 0U , 1U , TRUE , } , { "RTP_CB18DB31_vc" ,
 "SparkEV/Vehicle/Plant Models/Simscape Models/Electrical System/Electrical System 1EM/DC-DC Converter/DC-DC Converter/Capacitor1"
, "" , 0U , 1U , TRUE , } } ; static real_T s_constant_table0 [ 42 ] = {
268.79999999999995 , 345.024 , 353.28000000000003 , 363.936 , 381.504 ,
405.216 , 268.79999999999995 , 345.024 , 353.28000000000003 , 363.936 ,
381.504 , 405.216 , 268.79999999999995 , 345.024 , 353.28000000000003 ,
363.936 , 381.504 , 405.216 , 268.79999999999995 , 345.024 ,
353.28000000000003 , 363.936 , 381.504 , 405.216 , 268.79999999999995 ,
345.024 , 353.28000000000003 , 363.936 , 381.504 , 405.216 ,
268.79999999999995 , 345.024 , 353.28000000000003 , 363.936 , 381.504 ,
405.216 , 268.79999999999995 , 345.024 , 353.28000000000003 , 363.936 ,
381.504 , 405.216 } ; static real_T s_constant_table1 [ 1932 ] = {
32880.788358413782 , 31236.748940493089 , 29592.709522572404 ,
27948.670104651712 , 26304.630686731027 , 24660.591268810334 ,
23016.551850889646 , 21372.512432968957 , 19728.473015048268 ,
18084.43359712758 , 16440.394179206891 , 14796.354761286202 ,
14.761296681667249 , 11.496779146298508 , 11.070972511250437 ,
11.861756262054028 , 9.92569949284521 , 10.203968639887441 ,
8.8287502304908454 , 7.8148041255885374 , 0.0700126362800011 ,
0.0700126362800011 , 7.8148041255885374 , 8.8287502304908454 ,
10.203968639887441 , 9.92569949284521 , 11.861756262054028 ,
11.070972511250437 , 11.496779146298508 , 14.761296681667249 ,
14796.354761286202 , 16440.394179206891 , 18084.43359712758 ,
19728.473015048268 , 21372.512432968957 , 23016.551850889646 ,
24660.591268810334 , 26304.630686731027 , 27948.670104651712 ,
29592.709522572404 , 31236.748940493089 , 32880.788358413782 ,
31236.748940493093 , 29674.911493468433 , 28113.074046443784 ,
26551.23659941912 , 24989.399152394475 , 23427.561705369819 ,
21865.724258345163 , 20303.88681132051 , 18742.049364295857 ,
17180.2119172712 , 15618.374470246546 , 12.346541083198844 ,
10.825752273216224 , 9.92993835528846 , 9.93635074283223 , 10.75645624672628
, 9.2215808281389648 , 9.3523200420638037 , 7.8880679142659318 ,
6.761201069370796 , 0.066512004466001029 , 0.066512004466001029 ,
6.761201069370796 , 7.8880679142659318 , 9.3523200420638037 ,
9.2215808281389648 , 10.75645624672628 , 9.93635074283223 , 9.92993835528846
, 10.825752273216224 , 12.346541083198844 , 15618.374470246546 ,
17180.2119172712 , 18742.049364295857 , 20303.88681132051 ,
21865.724258345163 , 23427.561705369819 , 24989.399152394475 ,
26551.23659941912 , 28113.074046443784 , 29674.911493468433 ,
31236.748940493093 , 29592.709522572404 , 28113.074046443784 ,
26633.438570315164 , 25153.80309418654 , 23674.167618057923 ,
22194.532141929303 , 20714.896665800679 , 19235.261189672059 ,
17755.625713543443 , 16275.990237414821 , 13.884088477223882 ,
10.436300380217554 , 9.6945813341760338 , 8.789272079053708 ,
8.5989608409301237 , 8.5345171099959849 , 8.5404645086788982 ,
8.5404645086789035 , 7.0116159237919371 , 6.1046278002176688 ,
0.060318578948924027 , 0.060318578948924027 , 6.1046278002176688 ,
7.0116159237919371 , 8.5404645086789035 , 8.5404645086788982 ,
8.5345171099959849 , 8.5989608409301237 , 8.789272079053708 ,
9.6945813341760338 , 10.436300380217554 , 13.884088477223882 ,
16275.990237414821 , 17755.625713543443 , 19235.261189672059 ,
20714.896665800679 , 22194.532141929303 , 23674.167618057923 ,
25153.80309418654 , 26633.438570315164 , 28113.074046443784 ,
29592.709522572404 , 27948.670104651716 , 26551.236599419128 ,
25153.80309418654 , 23756.369588953952 , 22358.936083721372 ,
20961.502578488788 , 19564.0690732562 , 18166.635568023612 ,
16769.202062791028 , 13.501772997416277 , 11.858541693961355 ,
9.5621060964106448 , 8.4996498634761277 , 7.7235699736506458 ,
7.6154414454091954 , 7.8419388621357271 , 7.6993581555514412 ,
7.4729064450940434 , 6.1970443691023736 , 4.9594964695669148 ,
0.052282715635004869 , 0.052282715635004869 , 4.9594964695669148 ,
6.1970443691023736 , 7.4729064450940434 , 7.6993581555514412 ,
7.8419388621357271 , 7.6154414454091954 , 7.7235699736506458 ,
8.4996498634761277 , 9.5621060964106448 , 11.858541693961355 ,
13.501772997416277 , 16769.202062791028 , 18166.635568023612 ,
19564.0690732562 , 20961.502578488788 , 22358.936083721372 ,
23756.369588953952 , 25153.80309418654 , 26551.236599419128 ,
27948.670104651716 , 26304.630686731027 , 24989.399152394475 ,
23674.167618057923 , 22358.936083721372 , 21043.704549384816 ,
19728.473015048268 , 18413.241480711713 , 17098.009946375165 ,
15782.778412038617 , 11.423095087079947 , 9.2356776029682521 ,
7.9711002081003084 , 7.3885420823746015 , 6.9997116522744589 ,
6.6965882507075882 , 6.9728777142682326 , 6.5679477370114956 ,
6.4881048205467682 , 5.4421166079399672 , 4.1953158990001649 ,
0.045238934211693019 , 0.045238934211693019 , 4.1953158990001649 ,
5.4421166079399672 , 6.4881048205467682 , 6.5679477370114956 ,
6.9728777142682326 , 6.6965882507075882 , 6.9997116522744589 ,
7.3885420823746015 , 7.9711002081003084 , 9.2356776029682521 ,
11.423095087079947 , 15782.778412038617 , 17098.009946375165 ,
18413.241480711713 , 19728.473015048268 , 21043.704549384816 ,
22358.936083721372 , 23674.167618057923 , 24989.399152394475 ,
26304.630686731027 , 24660.591268810334 , 23427.561705369815 ,
22194.532141929303 , 20961.502578488784 , 19728.473015048265 ,
18495.443451607753 , 17262.413888167233 , 14.079388954524996 ,
12.118226667720043 , 9.52429252806101 , 7.2488510490330134 ,
6.8386013887465484 , 6.5859303425135822 , 6.0609134269479146 ,
5.8413554422567913 , 6.158988828374202 , 5.5354862556252176 ,
5.58320596472543 , 4.7447025048216132 , 3.51290473914677 ,
0.040687456074540974 , 0.040687456074540974 , 3.51290473914677 ,
4.7447025048216132 , 5.58320596472543 , 5.5354862556252176 ,
6.158988828374202 , 5.8413554422567913 , 6.0609134269479146 ,
6.5859303425135822 , 6.8386013887465484 , 7.2488510490330134 ,
9.52429252806101 , 12.118226667720043 , 14.079388954524996 ,
17262.413888167233 , 18495.443451607753 , 19728.473015048265 ,
20961.502578488784 , 22194.532141929303 , 23427.561705369815 ,
24660.591268810334 , 23016.551850889646 , 21865.724258345163 ,
20714.896665800683 , 19564.0690732562 , 18413.241480711713 ,
17262.413888167237 , 15.118229675199338 , 12.695615225299802 ,
9.6974614831166654 , 7.8010712138293945 , 6.3763196109100582 ,
6.0890348811877315 , 5.6735063373304682 , 5.42477653051271 ,
5.0888461628966519 , 5.3993677411426217 , 4.7394741825022511 ,
4.7554859196053023 , 4.1027721659339838 , 3.0900625806717961 ,
0.0364424747816416 , 0.0364424747816416 , 3.0900625806717961 ,
4.1027721659339838 , 4.7554859196053023 , 4.7394741825022511 ,
5.3993677411426217 , 5.0888461628966519 , 5.42477653051271 ,
5.6735063373304682 , 6.0890348811877315 , 6.3763196109100582 ,
7.8010712138293945 , 9.6974614831166654 , 12.695615225299802 ,
15.118229675199338 , 17262.413888167237 , 18413.241480711713 ,
19564.0690732562 , 20714.896665800683 , 21865.724258345163 ,
23016.551850889646 , 21372.512432968961 , 20303.886811320506 ,
19235.261189672059 , 18166.635568023612 , 17098.009946375165 ,
15.525901518346057 , 13.588336696710524 , 9.7551844681352158 ,
7.9023838269960116 , 6.3809749097378345 , 5.3829334848008976 ,
5.1130412519064432 , 4.9292744415842282 , 4.6097238990810059 ,
4.5023928314470236 , 4.6931296515083325 , 4.1402404048922818 ,
4.002343152241381 , 3.5143901111294986 , 2.6985495496172924 ,
0.032482606832233071 , 0.032482606832233071 , 2.6985495496172924 ,
3.5143901111294986 , 4.002343152241381 , 4.1402404048922818 ,
4.6931296515083325 , 4.5023928314470236 , 4.6097238990810059 ,
4.9292744415842282 , 5.1130412519064432 , 5.3829334848008976 ,
6.3809749097378345 , 7.9023838269960116 , 9.7551844681352158 ,
13.588336696710524 , 15.525901518346057 , 17098.009946375165 ,
18166.635568023612 , 19235.261189672059 , 20303.886811320506 ,
21372.512432968961 , 19728.473015048268 , 18742.049364295857 ,
17755.625713543443 , 16769.202062791024 , 15.767011400637955 ,
13.884088477223882 , 10.499567478411688 , 7.9023838269960107 ,
6.558500171221775 , 5.4657478461055256 , 4.6950197560800255 ,
4.4719755104499761 , 4.1953158990001587 , 4.0593565874584865 ,
3.8159522272820627 , 4.0394088892400148 , 3.5837371507807974 ,
3.1377949714207043 , 2.9777098478535629 , 2.4136095350614282 ,
0.027646015351590184 , 0.027646015351590184 , 2.4136095350614282 ,
2.9777098478535629 , 3.1377949714207043 , 3.5837371507807974 ,
4.0394088892400148 , 3.8159522272820627 , 4.0593565874584865 ,
4.1953158990001587 , 4.4719755104499761 , 4.6950197560800255 ,
5.4657478461055256 , 6.558500171221775 , 7.9023838269960107 ,
10.499567478411688 , 13.884088477223882 , 15.767011400637955 ,
16769.202062791024 , 17755.625713543443 , 18742.049364295857 ,
19728.473015048268 , 18084.43359712758 , 17180.2119172712 ,
16275.990237414821 , 15.356412145413007 , 13.575553177730018 ,
10.312075202011481 , 7.8010712138293945 , 6.2492726412189867 ,
5.4657478461055264 , 4.6240997110275028 , 3.8056468007423425 ,
3.7833543090225024 , 3.6438318974036839 , 3.2765568775905121 ,
3.3433162344983125 , 3.4373584006704938 , 3.1768877640979474 ,
2.7099550844846485 , 2.4909688150313487 , 2.142438198936425 ,
0.020734511513692634 , 0.020734511513692634 , 2.142438198936425 ,
2.4909688150313487 , 2.7099550844846485 , 3.1768877640979474 ,
3.4373584006704938 , 3.3433162344983125 , 3.2765568775905121 ,
3.6438318974036839 , 3.7833543090225024 , 3.8056468007423425 ,
4.6240997110275028 , 5.4657478461055264 , 6.2492726412189867 ,
7.8010712138293945 , 10.312075202011481 , 13.575553177730018 ,
15.356412145413007 , 16275.990237414821 , 17180.2119172712 ,
18084.43359712758 , 16440.394179206891 , 15.602771698547976 ,
14.331601401550206 , 11.858541693961351 , 9.6166088301478343 ,
7.5984459874961647 , 6.1181690193752312 , 5.2047496554463333 ,
4.4226078178102135 , 3.8056468007423425 , 3.3516989188242587 ,
3.2762220322959328 , 3.1300131707200167 , 2.9305515470956918 ,
2.7882016303413146 , 2.8861492509275788 , 2.7902451044614951 ,
2.166059839157692 , 2.0524836678160923 , 1.822660108559522 ,
0.016057029118347829 , 0.016057029118347829 , 1.822660108559522 ,
2.0524836678160923 , 2.166059839157692 , 2.7902451044614951 ,
2.8861492509275788 , 2.7882016303413146 , 2.9305515470956918 ,
3.1300131707200167 , 3.2762220322959328 , 3.3516989188242587 ,
3.8056468007423425 , 4.4226078178102135 , 5.2047496554463333 ,
6.1181690193752312 , 7.5984459874961647 , 9.6166088301478343 ,
11.858541693961351 , 14.331601401550206 , 15.602771698547976 ,
16440.394179206891 , 13.884088477223882 , 12.767063599656593 ,
11.300492673069055 , 8.83161670783839 , 6.9588970070716929 ,
5.8996629829689731 , 4.9297707438840259 , 4.3120426223649577 ,
3.7364532225470271 , 3.2026741907545806 , 2.9115219915950736 ,
2.7294382541394548 , 2.6535646906861281 , 2.464885371942013 ,
2.3598651931875891 , 2.4909688150313465 , 2.3365421769027166 ,
1.8834154455115091 , 1.6146446058651955 , 1.5305952959831159 ,
0.013880127542223994 , 0.013880127542223994 , 1.5305952959831159 ,
1.6146446058651955 , 1.8834154455115091 , 2.3365421769027166 ,
2.4909688150313465 , 2.3598651931875891 , 2.464885371942013 ,
2.6535646906861281 , 2.7294382541394548 , 2.9115219915950736 ,
3.2026741907545806 , 3.7364532225470271 , 4.3120426223649577 ,
4.9297707438840259 , 5.8996629829689731 , 6.9588970070716929 ,
8.83161670783839 , 11.300492673069055 , 12.767063599656593 ,
13.884088477223882 , 10.771757037973371 , 9.49960867094391 ,
7.6319044545641246 , 6.572291617789932 , 5.5937545320002116 ,
4.8043842973350772 , 4.0770763068571609 , 3.5044639312407813 ,
3.1056234577014119 , 2.6501498964755013 , 2.409227178614092 ,
2.3292175932760588 , 2.21419450225009 , 2.0638836483114327 ,
1.9875446713111007 , 2.0262522633323106 , 1.9233217660295667 ,
1.6157635556960059 , 1.4352396496579516 , 1.2652540012857636 ,
0.010479075156380871 , 0.010479075156380871 , 1.2652540012857636 ,
1.4352396496579516 , 1.6157635556960059 , 1.9233217660295667 ,
2.0262522633323106 , 1.9875446713111007 , 2.0638836483114327 ,
2.21419450225009 , 2.3292175932760588 , 2.409227178614092 ,
2.6501498964755013 , 3.1056234577014119 , 3.5044639312407813 ,
4.0770763068571609 , 4.8043842973350772 , 5.5937545320002116 ,
6.572291617789932 , 7.6319044545641246 , 9.49960867094391 ,
10.771757037973371 , 7.7496807578753009 , 6.9240638652323838 ,
6.0890348811877315 , 5.2004436664689466 , 4.3820184390080232 ,
3.8697818405839368 , 3.2318537658388204 , 2.9031124957461194 ,
2.5296885375447968 , 2.1476828456902428 , 2.0457231814267116 ,
1.8972664031585975 , 1.8116136836591568 , 1.7394356445595955 ,
1.6432569146280089 , 1.61025688570628 , 1.5499361515750598 ,
1.3629829365265849 , 1.2558346934507076 , 1.0256930414834959 ,
0.0087964594300514228 , 0.0087964594300514228 , 1.0256930414834959 ,
1.2558346934507076 , 1.3629829365265849 , 1.5499361515750598 ,
1.61025688570628 , 1.6432569146280089 , 1.7394356445595955 ,
1.8116136836591568 , 1.8972664031585975 , 2.0457231814267116 ,
2.1476828456902428 , 2.5296885375447968 , 2.9031124957461194 ,
3.2318537658388204 , 3.8697818405839368 , 4.3820184390080232 ,
5.2004436664689466 , 6.0890348811877315 , 6.9240638652323838 ,
7.7496807578753009 , 6.1348701176992826 , 5.50912679726509 ,
4.7197303863751783 , 4.176881601699999 , 3.5815810757399489 ,
3.1137110187891892 , 2.6046644870867097 , 2.3489964991487398 ,
2.0082229206454221 , 1.6948859978563864 , 1.6735191005378516 ,
1.6021663740388017 , 1.5313120856682825 , 1.4152642799241615 ,
1.3267823453430641 , 1.3110362184375497 , 1.2157513579993864 ,
1.0818684933916314 , 1.0764297372434637 , 0.81101310256834591 ,
0.0060898565284971361 , 0.0060898565284971361 , 0.81101310256834591 ,
1.0764297372434637 , 1.0818684933916314 , 1.2157513579993864 ,
1.3110362184375497 , 1.3267823453430641 , 1.4152642799241615 ,
1.5313120856682825 , 1.6021663740388017 , 1.6735191005378516 ,
1.6948859978563864 , 2.0082229206454221 , 2.3489964991487398 ,
2.6046644870867097 , 3.1137110187891892 , 3.5815810757399489 ,
4.176881601699999 , 4.7197303863751783 , 5.50912679726509 ,
6.1348701176992826 , 4.8325673660220083 , 4.50270261490867 ,
3.7678519891230327 , 3.3256389938900175 , 2.7677431278126128 ,
2.426268326329228 , 2.1080737812873305 , 1.870696532067859 ,
1.6735191005378516 , 1.4124049982136553 , 1.3724346088327026 ,
1.3151077594886003 , 1.204613589307046 , 1.1322585522869728 ,
1.0379036729297297 , 1.0351795163078648 , 0.92014679183216 ,
0.72488510490330138 , 0.89702478103621985 , 0.62035621830282561 ,
0.0040391905546154462 , 0.0040391905546154462 , 0.62035621830282561 ,
0.89702478103621985 , 0.72488510490330138 , 0.92014679183216 ,
1.0351795163078648 , 1.0379036729297297 , 1.1322585522869728 ,
1.204613589307046 , 1.3151077594886003 , 1.3724346088327026 ,
1.4124049982136553 , 1.6735191005378516 , 1.870696532067859 ,
2.1080737812873305 , 2.426268326329228 , 2.7677431278126128 ,
3.3256389938900175 , 3.7678519891230327 , 4.50270261490867 ,
4.8325673660220083 , 3.8660538928176069 , 3.461430645922603 ,
2.9483870129647052 , 2.598667606197274 , 2.21419450225009 ,
1.9679171511682081 , 1.7364429913911401 , 1.5196800776312716 ,
1.3601153405755373 , 1.1299239985709242 , 1.0979476870661622 ,
1.0200865054316528 , 0.93518774008078254 , 0.86822149569557006 ,
0.78716686046728324 , 0.78250329268000418 , 0.66251489043703349 ,
0.6078756789996933 , 0.71761982482897579 , 0.45290342091479069 ,
0.0026491267781622034 , 0.0026491267781622034 , 0.45290342091479069 ,
0.71761982482897579 , 0.6078756789996933 , 0.66251489043703349 ,
0.78250329268000418 , 0.78716686046728324 , 0.86822149569557006 ,
0.93518774008078254 , 1.0200865054316528 , 1.0979476870661622 ,
1.1299239985709242 , 1.3601153405755373 , 1.5196800776312716 ,
1.7364429913911401 , 1.9679171511682081 , 2.21419450225009 ,
2.598667606197274 , 2.9483870129647052 , 3.461430645922603 ,
3.8660538928176069 , 3.1799601894017187 , 2.7545633986325448 ,
2.4843963379468321 , 2.1818896140074835 , 1.7907905378699744 ,
1.6381110161479664 , 1.3587102627443675 , 1.1744982495743699 ,
1.0841522303763416 , 0.9938062111783128 , 0.9034601919802846 ,
0.83721358513501409 , 0.77640586442535287 , 0.68877100290887261 ,
0.62274220375783784 , 0.55282597722627669 , 0.49688616782777506 ,
0.41406605632447196 , 0.53821486862173185 , 0.339677565686093 ,
0.001594962424130202 , 0.001594962424130202 , 0.339677565686093 ,
0.53821486862173185 , 0.41406605632447196 , 0.49688616782777506 ,
0.55282597722627669 , 0.62274220375783784 , 0.68877100290887261 ,
0.77640586442535287 , 0.83721358513501409 , 0.9034601919802846 ,
0.9938062111783128 , 1.0841522303763416 , 1.1744982495743699 ,
1.3587102627443675 , 1.6381110161479664 , 1.7907905378699744 ,
2.1818896140074835 , 2.4843963379468321 , 2.7545633986325448 ,
3.1799601894017187 , 4.1049673356321845 , 2.7436757962664093 ,
1.9079761136410311 , 1.643072904447483 , 1.3984386330000529 ,
1.1737549390200064 , 1.0319418241557163 , 0.95823169385887963 ,
0.8303229383437839 , 0.76112936014846844 , 0.6919357819531532 ,
0.62274220375783784 , 0.6114512014581821 , 0.51597091207785817 ,
0.44226078178102135 , 0.39125164634000209 , 0.32759855699607843 ,
0.276044037549648 , 0.3588099124144879 , 0.22645171045739534 ,
0.00094247779607693793 , 0.00094247779607693793 , 0.22645171045739534 ,
0.3588099124144879 , 0.276044037549648 , 0.32759855699607843 ,
0.39125164634000209 , 0.44226078178102135 , 0.51597091207785817 ,
0.6114512014581821 , 0.62274220375783784 , 0.6919357819531532 ,
0.76112936014846844 , 0.8303229383437839 , 0.95823169385887963 ,
1.0319418241557163 , 1.1737549390200064 , 1.3984386330000529 ,
1.643072904447483 , 1.9079761136410311 , 2.7436757962664093 ,
4.1049673356321845 , 3.1631350032144088 , 1.9498594844252879 ,
1.6976313082396259 , 1.3960374677648189 , 1.1552319142174357 ,
0.83032293834378224 , 0.67655943124308116 , 0.62823375758286115 ,
0.57990808392264115 , 0.53158241026242092 , 0.48325673660220086 ,
0.41406605632447191 , 0.38660538928176069 , 0.33827971562154058 ,
0.28995404196132057 , 0.24162836830110043 , 0.19330269464088035 ,
0.15196891974992333 , 0.17940495620724395 , 0.12407124366056511 ,
0.00047123889803846896 , 0.00047123889803846896 , 0.12407124366056511 ,
0.17940495620724395 , 0.15196891974992333 , 0.19330269464088035 ,
0.24162836830110043 , 0.28995404196132057 , 0.33827971562154058 ,
0.38660538928176069 , 0.41406605632447191 , 0.48325673660220086 ,
0.53158241026242092 , 0.57990808392264115 , 0.62823375758286115 ,
0.67655943124308116 , 0.83032293834378224 , 1.1552319142174357 ,
1.3960374677648189 , 1.6976313082396259 , 1.9498594844252879 ,
3.1631350032144088 , 1.9537010313971352 , 1.5715690863671583 ,
1.1813990800596075 , 0.9306916451765459 , 0.87594507781321962 ,
0.76143151551176635 , 0.7014432965143399 , 0.64279175909547692 ,
0.6170705989877282 , 0.5656480490720841 , 0.54746567363326237 ,
0.49271910626993609 , 0.43797253890660981 , 0.43053781988196138 ,
0.38964875318926079 , 0.34208061130268208 , 0.30193561394319374 ,
0.29305515470957033 , 0.27677431278126075 , 0.14714583717484742 ,
0.00035443609425115605 , 0.00035443609425115605 , 0.14714583717484742 ,
0.27677431278126075 , 0.29305515470957033 , 0.30193561394319374 ,
0.34208061130268208 , 0.38964875318926079 , 0.43053781988196138 ,
0.43797253890660981 , 0.49271910626993609 , 0.54746567363326237 ,
0.5656480490720841 , 0.6170705989877282 , 0.64279175909547692 ,
0.7014432965143399 , 0.76143151551176635 , 0.87594507781321962 ,
0.9306916451765459 , 1.1813990800596075 , 1.5715690863671583 ,
1.9537010313971352 , 2.1526890994098058 , 1.9450030473532431 ,
1.6606458766875642 , 1.4858410475625581 , 1.3603547922320791 ,
1.2471040231301278 , 1.1639637549214525 , 1.0747470067739864 ,
0.99207416009906468 , 0.90940131342414254 , 0.78064549758817114 ,
0.702580947829354 , 0.62451639807053672 , 0.54645184831171978 ,
0.46838729855290273 , 0.420393838839855 , 0.34388210814762138 ,
0.26220724368751031 , 0.18451620852084044 , 0.092258104260420221 ,
0.0002207605648468503 , 0.0002207605648468503 , 0.092258104260420221 ,
0.18451620852084044 , 0.26220724368751031 , 0.34388210814762138 ,
0.420393838839855 , 0.46838729855290273 , 0.54645184831171978 ,
0.62451639807053672 , 0.702580947829354 , 0.78064549758817114 ,
0.90940131342414254 , 0.99207416009906468 , 1.0747470067739864 ,
1.1639637549214525 , 1.2471040231301278 , 1.3603547922320791 ,
1.4858410475625581 , 1.6606458766875642 , 1.9450030473532431 ,
2.1526890994098058 , 0.92258104260420259 , 0.74660725114451187 ,
0.67935513137218551 , 0.61615233916780654 , 0.53446074192243465 ,
0.54366382867747642 , 0.52838732440058866 , 0.51083654025677128 ,
0.49088274342336807 , 0.46838729855290273 , 0.44320069693731295 ,
0.41516146917189117 , 0.38409496467603538 , 0.34981197865409347 ,
0.31210720377461321 , 0.27075747989471161 , 0.22551981041436064 ,
0.17612910813352964 , 0.12740404874058037 , 0.41516146917189117 ,
0.00094247779607693793 , 0.00094247779607693793 , 0.41516146917189117 ,
0.12740404874058037 , 0.17612910813352964 , 0.22551981041436064 ,
0.27075747989471161 , 0.31210720377461321 , 0.34981197865409347 ,
0.38409496467603538 , 0.41516146917189117 , 0.44320069693731295 ,
0.46838729855290273 , 0.49088274342336807 , 0.51083654025677128 ,
0.52838732440058866 , 0.54366382867747642 , 0.53446074192243465 ,
0.61615233916780654 , 0.67935513137218551 , 0.74660725114451187 ,
0.92258104260420259 , 0.92258104260420259 , 0.74660725114451187 ,
0.67935513137218551 , 0.61615233916780654 , 0.53446074192243465 ,
0.54366382867747642 , 0.52838732440058866 , 0.51083654025677128 ,
0.49088274342336807 , 0.46838729855290273 , 0.44320069693731295 ,
0.41516146917189117 , 0.38409496467603538 , 0.34981197865409347 ,
0.31210720377461321 , 0.27075747989471161 , 0.22551981041436064 ,
0.17612910813352964 , 0.12740404874058037 , 0.41516146917189117 ,
0.00094247779607693793 , 0.00094247779607693793 , 0.41516146917189117 ,
0.12740404874058037 , 0.17612910813352964 , 0.22551981041436064 ,
0.27075747989471161 , 0.31210720377461321 , 0.34981197865409347 ,
0.38409496467603538 , 0.41516146917189117 , 0.44320069693731295 ,
0.46838729855290273 , 0.49088274342336807 , 0.51083654025677128 ,
0.52838732440058866 , 0.54366382867747642 , 0.53446074192243465 ,
0.61615233916780654 , 0.67935513137218551 , 0.74660725114451187 ,
0.92258104260420259 , 2.1526890994098058 , 1.9450030473532431 ,
1.6606458766875642 , 1.4858410475625581 , 1.3603547922320791 ,
1.2471040231301278 , 1.1639637549214525 , 1.0747470067739864 ,
0.99207416009906468 , 0.90940131342414254 , 0.78064549758817114 ,
0.702580947829354 , 0.62451639807053672 , 0.54645184831171978 ,
0.46838729855290273 , 0.420393838839855 , 0.34388210814762138 ,
0.26220724368751031 , 0.18451620852084044 , 0.092258104260420221 ,
0.0002207605648468503 , 0.0002207605648468503 , 0.092258104260420221 ,
0.18451620852084044 , 0.26220724368751031 , 0.34388210814762138 ,
0.420393838839855 , 0.46838729855290273 , 0.54645184831171978 ,
0.62451639807053672 , 0.702580947829354 , 0.78064549758817114 ,
0.90940131342414254 , 0.99207416009906468 , 1.0747470067739864 ,
1.1639637549214525 , 1.2471040231301278 , 1.3603547922320791 ,
1.4858410475625581 , 1.6606458766875642 , 1.9450030473532431 ,
2.1526890994098058 , 1.9537010313971352 , 1.5715690863671583 ,
1.1813990800596075 , 0.9306916451765459 , 0.87594507781321962 ,
0.76143151551176635 , 0.7014432965143399 , 0.64279175909547692 ,
0.6170705989877282 , 0.5656480490720841 , 0.54746567363326237 ,
0.49271910626993609 , 0.43797253890660981 , 0.43053781988196138 ,
0.38964875318926079 , 0.34208061130268208 , 0.30193561394319374 ,
0.29305515470957033 , 0.27677431278126075 , 0.14714583717484742 ,
0.00035443609425115605 , 0.00035443609425115605 , 0.14714583717484742 ,
0.27677431278126075 , 0.29305515470957033 , 0.30193561394319374 ,
0.34208061130268208 , 0.38964875318926079 , 0.43053781988196138 ,
0.43797253890660981 , 0.49271910626993609 , 0.54746567363326237 ,
0.5656480490720841 , 0.6170705989877282 , 0.64279175909547692 ,
0.7014432965143399 , 0.76143151551176635 , 0.87594507781321962 ,
0.9306916451765459 , 1.1813990800596075 , 1.5715690863671583 ,
1.9537010313971352 , 3.1631350032144088 , 1.9498594844252879 ,
1.6976313082396259 , 1.3960374677648189 , 1.1552319142174357 ,
0.83032293834378224 , 0.67655943124308116 , 0.62823375758286115 ,
0.57990808392264115 , 0.53158241026242092 , 0.48325673660220086 ,
0.41406605632447191 , 0.38660538928176069 , 0.33827971562154058 ,
0.28995404196132057 , 0.24162836830110043 , 0.19330269464088035 ,
0.15196891974992333 , 0.17940495620724395 , 0.12407124366056511 ,
0.00047123889803846896 , 0.00047123889803846896 , 0.12407124366056511 ,
0.17940495620724395 , 0.15196891974992333 , 0.19330269464088035 ,
0.24162836830110043 , 0.28995404196132057 , 0.33827971562154058 ,
0.38660538928176069 , 0.41406605632447191 , 0.48325673660220086 ,
0.53158241026242092 , 0.57990808392264115 , 0.62823375758286115 ,
0.67655943124308116 , 0.83032293834378224 , 1.1552319142174357 ,
1.3960374677648189 , 1.6976313082396259 , 1.9498594844252879 ,
3.1631350032144088 , 4.1049673356321845 , 2.7436757962664093 ,
1.9079761136410311 , 1.643072904447483 , 1.3984386330000529 ,
1.1737549390200064 , 1.0319418241557163 , 0.95823169385887963 ,
0.8303229383437839 , 0.76112936014846844 , 0.6919357819531532 ,
0.62274220375783784 , 0.6114512014581821 , 0.51597091207785817 ,
0.44226078178102135 , 0.39125164634000209 , 0.32759855699607843 ,
0.276044037549648 , 0.3588099124144879 , 0.22645171045739534 ,
0.00094247779607693793 , 0.00094247779607693793 , 0.22645171045739534 ,
0.3588099124144879 , 0.276044037549648 , 0.32759855699607843 ,
0.39125164634000209 , 0.44226078178102135 , 0.51597091207785817 ,
0.6114512014581821 , 0.62274220375783784 , 0.6919357819531532 ,
0.76112936014846844 , 0.8303229383437839 , 0.95823169385887963 ,
1.0319418241557163 , 1.1737549390200064 , 1.3984386330000529 ,
1.643072904447483 , 1.9079761136410311 , 2.7436757962664093 ,
4.1049673356321845 , 3.1799601894017187 , 2.7545633986325448 ,
2.4843963379468321 , 2.1818896140074835 , 1.7907905378699744 ,
1.6381110161479664 , 1.3587102627443675 , 1.1744982495743699 ,
1.0841522303763416 , 0.9938062111783128 , 0.9034601919802846 ,
0.83721358513501409 , 0.77640586442535287 , 0.68877100290887261 ,
0.62274220375783784 , 0.55282597722627669 , 0.49688616782777506 ,
0.41406605632447196 , 0.53821486862173185 , 0.339677565686093 ,
0.001594962424130202 , 0.001594962424130202 , 0.339677565686093 ,
0.53821486862173185 , 0.41406605632447196 , 0.49688616782777506 ,
0.55282597722627669 , 0.62274220375783784 , 0.68877100290887261 ,
0.77640586442535287 , 0.83721358513501409 , 0.9034601919802846 ,
0.9938062111783128 , 1.0841522303763416 , 1.1744982495743699 ,
1.3587102627443675 , 1.6381110161479664 , 1.7907905378699744 ,
2.1818896140074835 , 2.4843963379468321 , 2.7545633986325448 ,
3.1799601894017187 , 3.8660538928176069 , 3.461430645922603 ,
2.9483870129647052 , 2.598667606197274 , 2.21419450225009 ,
1.9679171511682081 , 1.7364429913911401 , 1.5196800776312716 ,
1.3601153405755373 , 1.1299239985709242 , 1.0979476870661622 ,
1.0200865054316528 , 0.93518774008078254 , 0.86822149569557006 ,
0.78716686046728324 , 0.78250329268000418 , 0.66251489043703349 ,
0.6078756789996933 , 0.71761982482897579 , 0.45290342091479069 ,
0.0026491267781622034 , 0.0026491267781622034 , 0.45290342091479069 ,
0.71761982482897579 , 0.6078756789996933 , 0.66251489043703349 ,
0.78250329268000418 , 0.78716686046728324 , 0.86822149569557006 ,
0.93518774008078254 , 1.0200865054316528 , 1.0979476870661622 ,
1.1299239985709242 , 1.3601153405755373 , 1.5196800776312716 ,
1.7364429913911401 , 1.9679171511682081 , 2.21419450225009 ,
2.598667606197274 , 2.9483870129647052 , 3.461430645922603 ,
3.8660538928176069 , 4.8325673660220083 , 4.50270261490867 ,
3.7678519891230327 , 3.3256389938900175 , 2.7677431278126128 ,
2.426268326329228 , 2.1080737812873305 , 1.870696532067859 ,
1.6735191005378516 , 1.4124049982136553 , 1.3724346088327026 ,
1.3151077594886003 , 1.204613589307046 , 1.1322585522869728 ,
1.0379036729297297 , 1.0351795163078648 , 0.92014679183216 ,
0.72488510490330138 , 0.89702478103621985 , 0.62035621830282561 ,
0.0040391905546154462 , 0.0040391905546154462 , 0.62035621830282561 ,
0.89702478103621985 , 0.72488510490330138 , 0.92014679183216 ,
1.0351795163078648 , 1.0379036729297297 , 1.1322585522869728 ,
1.204613589307046 , 1.3151077594886003 , 1.3724346088327026 ,
1.4124049982136553 , 1.6735191005378516 , 1.870696532067859 ,
2.1080737812873305 , 2.426268326329228 , 2.7677431278126128 ,
3.3256389938900175 , 3.7678519891230327 , 4.50270261490867 ,
4.8325673660220083 , 6.1348701176992826 , 5.50912679726509 ,
4.7197303863751783 , 4.176881601699999 , 3.5815810757399489 ,
3.1137110187891892 , 2.6046644870867097 , 2.3489964991487398 ,
2.0082229206454221 , 1.6948859978563864 , 1.6735191005378516 ,
1.6021663740388017 , 1.5313120856682825 , 1.4152642799241615 ,
1.3267823453430641 , 1.3110362184375497 , 1.2157513579993864 ,
1.0818684933916314 , 1.0764297372434637 , 0.81101310256834591 ,
0.0060898565284971361 , 0.0060898565284971361 , 0.81101310256834591 ,
1.0764297372434637 , 1.0818684933916314 , 1.2157513579993864 ,
1.3110362184375497 , 1.3267823453430641 , 1.4152642799241615 ,
1.5313120856682825 , 1.6021663740388017 , 1.6735191005378516 ,
1.6948859978563864 , 2.0082229206454221 , 2.3489964991487398 ,
2.6046644870867097 , 3.1137110187891892 , 3.5815810757399489 ,
4.176881601699999 , 4.7197303863751783 , 5.50912679726509 ,
6.1348701176992826 , 7.7496807578753009 , 6.9240638652323838 ,
6.0890348811877315 , 5.2004436664689466 , 4.3820184390080232 ,
3.8697818405839368 , 3.2318537658388204 , 2.9031124957461194 ,
2.5296885375447968 , 2.1476828456902428 , 2.0457231814267116 ,
1.8972664031585975 , 1.8116136836591568 , 1.7394356445595955 ,
1.6432569146280089 , 1.61025688570628 , 1.5499361515750598 ,
1.3629829365265849 , 1.2558346934507076 , 1.0256930414834959 ,
0.0087964594300514228 , 0.0087964594300514228 , 1.0256930414834959 ,
1.2558346934507076 , 1.3629829365265849 , 1.5499361515750598 ,
1.61025688570628 , 1.6432569146280089 , 1.7394356445595955 ,
1.8116136836591568 , 1.8972664031585975 , 2.0457231814267116 ,
2.1476828456902428 , 2.5296885375447968 , 2.9031124957461194 ,
3.2318537658388204 , 3.8697818405839368 , 4.3820184390080232 ,
5.2004436664689466 , 6.0890348811877315 , 6.9240638652323838 ,
7.7496807578753009 , 10.771757037973371 , 9.49960867094391 ,
7.6319044545641246 , 6.572291617789932 , 5.5937545320002116 ,
4.8043842973350772 , 4.0770763068571609 , 3.5044639312407813 ,
3.1056234577014119 , 2.6501498964755013 , 2.409227178614092 ,
2.3292175932760588 , 2.21419450225009 , 2.0638836483114327 ,
1.9875446713111007 , 2.0262522633323106 , 1.9233217660295667 ,
1.6157635556960059 , 1.4352396496579516 , 1.2652540012857636 ,
0.010479075156380871 , 0.010479075156380871 , 1.2652540012857636 ,
1.4352396496579516 , 1.6157635556960059 , 1.9233217660295667 ,
2.0262522633323106 , 1.9875446713111007 , 2.0638836483114327 ,
2.21419450225009 , 2.3292175932760588 , 2.409227178614092 ,
2.6501498964755013 , 3.1056234577014119 , 3.5044639312407813 ,
4.0770763068571609 , 4.8043842973350772 , 5.5937545320002116 ,
6.572291617789932 , 7.6319044545641246 , 9.49960867094391 ,
10.771757037973371 , 13.884088477223882 , 12.767063599656593 ,
11.300492673069055 , 8.83161670783839 , 6.9588970070716929 ,
5.8996629829689731 , 4.9297707438840259 , 4.3120426223649577 ,
3.7364532225470271 , 3.2026741907545806 , 2.9115219915950736 ,
2.7294382541394548 , 2.6535646906861281 , 2.464885371942013 ,
2.3598651931875891 , 2.4909688150313465 , 2.3365421769027166 ,
1.8834154455115091 , 1.6146446058651955 , 1.5305952959831159 ,
0.013880127542223994 , 0.013880127542223994 , 1.5305952959831159 ,
1.6146446058651955 , 1.8834154455115091 , 2.3365421769027166 ,
2.4909688150313465 , 2.3598651931875891 , 2.464885371942013 ,
2.6535646906861281 , 2.7294382541394548 , 2.9115219915950736 ,
3.2026741907545806 , 3.7364532225470271 , 4.3120426223649577 ,
4.9297707438840259 , 5.8996629829689731 , 6.9588970070716929 ,
8.83161670783839 , 11.300492673069055 , 12.767063599656593 ,
13.884088477223882 , 16440.394179206891 , 15.602771698547976 ,
14.331601401550206 , 11.858541693961351 , 9.6166088301478343 ,
7.5984459874961647 , 6.1181690193752312 , 5.2047496554463333 ,
4.4226078178102135 , 3.8056468007423425 , 3.3516989188242587 ,
3.2762220322959328 , 3.1300131707200167 , 2.9305515470956918 ,
2.7882016303413146 , 2.8861492509275788 , 2.7902451044614951 ,
2.166059839157692 , 2.0524836678160923 , 1.822660108559522 ,
0.016057029118347829 , 0.016057029118347829 , 1.822660108559522 ,
2.0524836678160923 , 2.166059839157692 , 2.7902451044614951 ,
2.8861492509275788 , 2.7882016303413146 , 2.9305515470956918 ,
3.1300131707200167 , 3.2762220322959328 , 3.3516989188242587 ,
3.8056468007423425 , 4.4226078178102135 , 5.2047496554463333 ,
6.1181690193752312 , 7.5984459874961647 , 9.6166088301478343 ,
11.858541693961351 , 14.331601401550206 , 15.602771698547976 ,
16440.394179206891 , 18084.43359712758 , 17180.2119172712 ,
16275.990237414821 , 15.356412145413007 , 13.575553177730018 ,
10.312075202011481 , 7.8010712138293945 , 6.2492726412189867 ,
5.4657478461055264 , 4.6240997110275028 , 3.8056468007423425 ,
3.7833543090225024 , 3.6438318974036839 , 3.2765568775905121 ,
3.3433162344983125 , 3.4373584006704938 , 3.1768877640979474 ,
2.7099550844846485 , 2.4909688150313487 , 2.142438198936425 ,
0.020734511513692634 , 0.020734511513692634 , 2.142438198936425 ,
2.4909688150313487 , 2.7099550844846485 , 3.1768877640979474 ,
3.4373584006704938 , 3.3433162344983125 , 3.2765568775905121 ,
3.6438318974036839 , 3.7833543090225024 , 3.8056468007423425 ,
4.6240997110275028 , 5.4657478461055264 , 6.2492726412189867 ,
7.8010712138293945 , 10.312075202011481 , 13.575553177730018 ,
15.356412145413007 , 16275.990237414821 , 17180.2119172712 ,
18084.43359712758 , 19728.473015048268 , 18742.049364295857 ,
17755.625713543443 , 16769.202062791024 , 15.767011400637955 ,
13.884088477223882 , 10.499567478411688 , 7.9023838269960107 ,
6.558500171221775 , 5.4657478461055256 , 4.6950197560800255 ,
4.4719755104499761 , 4.1953158990001587 , 4.0593565874584865 ,
3.8159522272820627 , 4.0394088892400148 , 3.5837371507807974 ,
3.1377949714207043 , 2.9777098478535629 , 2.4136095350614282 ,
0.027646015351590184 , 0.027646015351590184 , 2.4136095350614282 ,
2.9777098478535629 , 3.1377949714207043 , 3.5837371507807974 ,
4.0394088892400148 , 3.8159522272820627 , 4.0593565874584865 ,
4.1953158990001587 , 4.4719755104499761 , 4.6950197560800255 ,
5.4657478461055256 , 6.558500171221775 , 7.9023838269960107 ,
10.499567478411688 , 13.884088477223882 , 15.767011400637955 ,
16769.202062791024 , 17755.625713543443 , 18742.049364295857 ,
19728.473015048268 , 21372.512432968961 , 20303.886811320506 ,
19235.261189672059 , 18166.635568023612 , 17098.009946375165 ,
15.525901518346057 , 13.588336696710524 , 9.7551844681352158 ,
7.9023838269960116 , 6.3809749097378345 , 5.3829334848008976 ,
5.1130412519064432 , 4.9292744415842282 , 4.6097238990810059 ,
4.5023928314470236 , 4.6931296515083325 , 4.1402404048922818 ,
4.002343152241381 , 3.5143901111294986 , 2.6985495496172924 ,
0.032482606832233071 , 0.032482606832233071 , 2.6985495496172924 ,
3.5143901111294986 , 4.002343152241381 , 4.1402404048922818 ,
4.6931296515083325 , 4.5023928314470236 , 4.6097238990810059 ,
4.9292744415842282 , 5.1130412519064432 , 5.3829334848008976 ,
6.3809749097378345 , 7.9023838269960116 , 9.7551844681352158 ,
13.588336696710524 , 15.525901518346057 , 17098.009946375165 ,
18166.635568023612 , 19235.261189672059 , 20303.886811320506 ,
21372.512432968961 , 23016.551850889646 , 21865.724258345163 ,
20714.896665800683 , 19564.0690732562 , 18413.241480711713 ,
17262.413888167237 , 15.118229675199338 , 12.695615225299802 ,
9.6974614831166654 , 7.8010712138293945 , 6.3763196109100582 ,
6.0890348811877315 , 5.6735063373304682 , 5.42477653051271 ,
5.0888461628966519 , 5.3993677411426217 , 4.7394741825022511 ,
4.7554859196053023 , 4.1027721659339838 , 3.0900625806717961 ,
0.0364424747816416 , 0.0364424747816416 , 3.0900625806717961 ,
4.1027721659339838 , 4.7554859196053023 , 4.7394741825022511 ,
5.3993677411426217 , 5.0888461628966519 , 5.42477653051271 ,
5.6735063373304682 , 6.0890348811877315 , 6.3763196109100582 ,
7.8010712138293945 , 9.6974614831166654 , 12.695615225299802 ,
15.118229675199338 , 17262.413888167237 , 18413.241480711713 ,
19564.0690732562 , 20714.896665800683 , 21865.724258345163 ,
23016.551850889646 , 24660.591268810334 , 23427.561705369815 ,
22194.532141929303 , 20961.502578488784 , 19728.473015048265 ,
18495.443451607753 , 17262.413888167233 , 14.079388954524996 ,
12.118226667720043 , 9.52429252806101 , 7.2488510490330134 ,
6.8386013887465484 , 6.5859303425135822 , 6.0609134269479146 ,
5.8413554422567913 , 6.158988828374202 , 5.5354862556252176 ,
5.58320596472543 , 4.7447025048216132 , 3.51290473914677 ,
0.040687456074540974 , 0.040687456074540974 , 3.51290473914677 ,
4.7447025048216132 , 5.58320596472543 , 5.5354862556252176 ,
6.158988828374202 , 5.8413554422567913 , 6.0609134269479146 ,
6.5859303425135822 , 6.8386013887465484 , 7.2488510490330134 ,
9.52429252806101 , 12.118226667720043 , 14.079388954524996 ,
17262.413888167233 , 18495.443451607753 , 19728.473015048265 ,
20961.502578488784 , 22194.532141929303 , 23427.561705369815 ,
24660.591268810334 , 26304.630686731027 , 24989.399152394475 ,
23674.167618057923 , 22358.936083721372 , 21043.704549384816 ,
19728.473015048268 , 18413.241480711713 , 17098.009946375165 ,
15782.778412038617 , 11.423095087079947 , 9.2356776029682521 ,
7.9711002081003084 , 7.3885420823746015 , 6.9997116522744589 ,
6.6965882507075882 , 6.9728777142682326 , 6.5679477370114956 ,
6.4881048205467682 , 5.4421166079399672 , 4.1953158990001649 ,
0.045238934211693019 , 0.045238934211693019 , 4.1953158990001649 ,
5.4421166079399672 , 6.4881048205467682 , 6.5679477370114956 ,
6.9728777142682326 , 6.6965882507075882 , 6.9997116522744589 ,
7.3885420823746015 , 7.9711002081003084 , 9.2356776029682521 ,
11.423095087079947 , 15782.778412038617 , 17098.009946375165 ,
18413.241480711713 , 19728.473015048268 , 21043.704549384816 ,
22358.936083721372 , 23674.167618057923 , 24989.399152394475 ,
26304.630686731027 , 27948.670104651716 , 26551.236599419128 ,
25153.80309418654 , 23756.369588953952 , 22358.936083721372 ,
20961.502578488788 , 19564.0690732562 , 18166.635568023612 ,
16769.202062791028 , 13.501772997416277 , 11.858541693961355 ,
9.5621060964106448 , 8.4996498634761277 , 7.7235699736506458 ,
7.6154414454091954 , 7.8419388621357271 , 7.6993581555514412 ,
7.4729064450940434 , 6.1970443691023736 , 4.9594964695669148 ,
0.052282715635004869 , 0.052282715635004869 , 4.9594964695669148 ,
6.1970443691023736 , 7.4729064450940434 , 7.6993581555514412 ,
7.8419388621357271 , 7.6154414454091954 , 7.7235699736506458 ,
8.4996498634761277 , 9.5621060964106448 , 11.858541693961355 ,
13.501772997416277 , 16769.202062791028 , 18166.635568023612 ,
19564.0690732562 , 20961.502578488788 , 22358.936083721372 ,
23756.369588953952 , 25153.80309418654 , 26551.236599419128 ,
27948.670104651716 , 29592.709522572404 , 28113.074046443784 ,
26633.438570315164 , 25153.80309418654 , 23674.167618057923 ,
22194.532141929303 , 20714.896665800679 , 19235.261189672059 ,
17755.625713543443 , 16275.990237414821 , 13.884088477223882 ,
10.436300380217554 , 9.6945813341760338 , 8.789272079053708 ,
8.5989608409301237 , 8.5345171099959849 , 8.5404645086788982 ,
8.5404645086789035 , 7.0116159237919371 , 6.1046278002176688 ,
0.060318578948924027 , 0.060318578948924027 , 6.1046278002176688 ,
7.0116159237919371 , 8.5404645086789035 , 8.5404645086788982 ,
8.5345171099959849 , 8.5989608409301237 , 8.789272079053708 ,
9.6945813341760338 , 10.436300380217554 , 13.884088477223882 ,
16275.990237414821 , 17755.625713543443 , 19235.261189672059 ,
20714.896665800679 , 22194.532141929303 , 23674.167618057923 ,
25153.80309418654 , 26633.438570315164 , 28113.074046443784 ,
29592.709522572404 , 31236.748940493093 , 29674.911493468433 ,
28113.074046443784 , 26551.23659941912 , 24989.399152394475 ,
23427.561705369819 , 21865.724258345163 , 20303.88681132051 ,
18742.049364295857 , 17180.2119172712 , 15618.374470246546 ,
12.346541083198844 , 10.825752273216224 , 9.92993835528846 , 9.93635074283223
, 10.75645624672628 , 9.2215808281389648 , 9.3523200420638037 ,
7.8880679142659318 , 6.761201069370796 , 0.066512004466001029 ,
0.066512004466001029 , 6.761201069370796 , 7.8880679142659318 ,
9.3523200420638037 , 9.2215808281389648 , 10.75645624672628 ,
9.93635074283223 , 9.92993835528846 , 10.825752273216224 , 12.346541083198844
, 15618.374470246546 , 17180.2119172712 , 18742.049364295857 ,
20303.88681132051 , 21865.724258345163 , 23427.561705369819 ,
24989.399152394475 , 26551.23659941912 , 28113.074046443784 ,
29674.911493468433 , 31236.748940493093 , 32880.788358413782 ,
31236.748940493089 , 29592.709522572404 , 27948.670104651712 ,
26304.630686731027 , 24660.591268810334 , 23016.551850889646 ,
21372.512432968957 , 19728.473015048268 , 18084.43359712758 ,
16440.394179206891 , 14796.354761286202 , 14.761296681667249 ,
11.496779146298508 , 11.070972511250437 , 11.861756262054028 ,
9.92569949284521 , 10.203968639887441 , 8.8287502304908454 ,
7.8148041255885374 , 0.0700126362800011 , 0.0700126362800011 ,
7.8148041255885374 , 8.8287502304908454 , 10.203968639887441 ,
9.92569949284521 , 11.861756262054028 , 11.070972511250437 ,
11.496779146298508 , 14.761296681667249 , 14796.354761286202 ,
16440.394179206891 , 18084.43359712758 , 19728.473015048268 ,
21372.512432968957 , 23016.551850889646 , 24660.591268810334 ,
26304.630686731027 , 27948.670104651712 , 29592.709522572404 ,
31236.748940493089 , 32880.788358413782 } ; static real_T s_constant_table2 [
42 ] = { - 922.58104260420259 , - 876.4519904739924 , - 830.32293834378231 ,
- 784.19388621357211 , - 738.064834083362 , - 691.935781953152 , -
645.80672982294175 , - 599.67767769273166 , - 553.54862556252158 , -
507.41957343231138 , - 461.2905213021013 , - 415.16146917189116 , -
369.032417041681 , - 322.90336491147087 , - 276.77431278126079 , -
230.64526065105065 , - 184.51620852084051 , - 138.38715639063039 , -
92.258104260420254 , - 46.129052130210127 , - 0.10471975511965977 ,
0.10471975511965977 , 46.129052130210127 , 92.258104260420254 ,
138.38715639063039 , 184.51620852084051 , 230.64526065105065 ,
276.77431278126079 , 322.90336491147087 , 369.032417041681 ,
415.16146917189116 , 461.2905213021013 , 507.41957343231138 ,
553.54862556252158 , 599.67767769273166 , 645.80672982294175 ,
691.935781953152 , 738.064834083362 , 784.19388621357211 , 830.32293834378231
, 876.4519904739924 , 922.58104260420259 } ; static real_T s_constant_table3
[ 46 ] = { - 360.0 , - 342.0 , - 324.0 , - 306.0 , - 288.0 , - 270.0 , -
252.0 , - 234.0 , - 216.0 , - 198.0 , - 180.0 , - 162.0 , - 144.0 , - 126.0 ,
- 108.0 , - 90.0 , - 72.0 , - 54.0 , - 36.0 , - 18.0 , - 12.0 , - 6.0 , - 1.0
, 1.0 , 6.0 , 12.0 , 18.0 , 36.0 , 54.0 , 72.0 , 90.0 , 108.0 , 126.0 , 144.0
, 162.0 , 180.0 , 198.0 , 216.0 , 234.0 , 252.0 , 270.0 , 288.0 , 306.0 ,
324.0 , 342.0 , 360.0 } ; static real_T s_constant_table4 [ 58 ] = { -
922.58104260420259 , - 900.589894029074 , - 858.70199198121009 , -
816.81408993334617 , - 774.92618788548225 , - 733.03828583761833 , -
701.62235930172039 , - 670.20643276582246 , - 638.79050622992452 , -
607.37457969402669 , - 575.95865315812875 , - 544.54272662223082 , -
513.12680008633288 , - 481.71087355043494 , - 450.294947014537 , -
418.87902047863906 , - 387.46309394274112 , - 356.04716740684319 , -
324.63124087094525 , - 293.21531433504737 , - 261.79938779914943 , -
230.38346126325149 , - 198.96753472735355 , - 167.55160819145561 , -
136.1356816555577 , - 104.71975511965977 , - 73.303828583761842 , -
31.415926535897931 , - 0.10471975511965977 , 0.10471975511965977 ,
31.415926535897931 , 73.303828583761842 , 104.71975511965977 ,
136.1356816555577 , 167.55160819145561 , 198.96753472735355 ,
230.38346126325149 , 261.79938779914943 , 293.21531433504737 ,
324.63124087094525 , 356.04716740684319 , 387.46309394274112 ,
418.87902047863906 , 450.294947014537 , 481.71087355043494 ,
513.12680008633288 , 544.54272662223082 , 575.95865315812875 ,
607.37457969402669 , 638.79050622992452 , 670.20643276582246 ,
701.62235930172039 , 733.03828583761833 , 774.92618788548225 ,
816.81408993334617 , 858.70199198121009 , 900.589894029074 ,
922.58104260420259 } ; static real_T s_constant_table5 [ 42 ] = {
0.027394064516129031 , 0.028858838709677415 , 0.027954580645161292 ,
0.026229677419354839 , 0.031958709677419352 , 0.040691612903225809 ,
0.019785290322580643 , 0.02029625806451613 , 0.017196387096774193 ,
0.017109677419354839 , 0.018713806451612903 , 0.024170322580645161 ,
0.013514322580645161 , 0.012699870967741934 , 0.012572903225806452 ,
0.010690064516129033 , 0.011910193548387097 , 0.013988129032258064 ,
0.0062895483870967737 , 0.0079370322580645161 , 0.0078410322580645155 ,
0.0076180645161290318 , 0.00841083870967742 , 0.0094358709677419342 ,
0.0044686451612903225 , 0.0056516129032258061 , 0.0055587096774193543 ,
0.0055060645161290325 , 0.0059581935483870967 , 0.0069181935483870966 ,
0.0017351225806451613 , 0.0022272 , 0.0021327483870967742 ,
0.0023402322580645162 , 0.0022776774193548387 , 0.003140129032258064 ,
0.0031834838709677419 , 0.0041434838709677414 , 0.003096774193548387 ,
0.0047566451612903226 , 0.0047876129032258068 , 0.0086369032258064513 } ;
static real_T s_constant_table6 [ 58 ] = { 152.195121951219 , 157.19263710183
, 168.578005975641 , 178.005775209291 , 192.222891861329 , 207.776256300937 ,
218.075437684875 , 229.462130210989 , 242.676261199004 , 254.400604378871 ,
265.691686602383 , 276.934802218937 , 289.161940741908 , 307.963362459085 ,
326.3978124807 , 334.455149023278 , 343.284814075766 , 351.285699987009 ,
355.472141711725 , 355.51814094933 , 356.300227986961 , 356.960983702214 ,
357.682405078656 , 357.728404316261 , 360.0 , 360.0 , 360.0 , 360.0 , 360.0 ,
360.0 , 360.0 , 360.0 , 360.0 , 360.0 , 357.728404316261 , 357.682405078656 ,
356.960983702214 , 356.300227986961 , 355.51814094933 , 355.472141711725 ,
351.285699987009 , 343.284814075766 , 334.455149023278 , 326.3978124807 ,
307.963362459085 , 289.161940741908 , 276.934802218937 , 265.691686602383 ,
254.400604378871 , 242.676261199004 , 229.462130210989 , 218.075437684875 ,
207.776256300937 , 192.222891861329 , 178.005775209291 , 168.578005975641 ,
157.19263710183 , 152.195121951219 } ; static NeDsMethodOutput *
ds_output_m_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mM_P .
mNumCol = 66 ; out -> mM_P . mNumRow = 66 ; out -> mM_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 67 ) ; out -> mM_P
. mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T
) , 22 ) ; return out ; } static NeDsMethodOutput * ds_output_m ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mM . mN = 22 ; out -> mM . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 22 ) ;
return out ; } static NeDsMethodOutput * ds_output_vmm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mVMM . mN = 22 ; out -> mVMM .
mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T
) , 22 ) ; return out ; } static NeDsMethodOutput * ds_output_dxm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXM_P . mNumCol = 66 ; out ->
mDXM_P . mNumRow = 22 ; out -> mDXM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 67 ) ; out -> mDXM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXM . mN = 0 ; out -> mDXM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_ddm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDM_P . mNumCol = 0 ; out ->
mDDM_P . mNumRow = 22 ; out -> mDDM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDDM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_ddm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDM . mN = 0 ; out -> mDDM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dum_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUM_P . mNumCol = 11 ; out ->
mDUM_P . mNumRow = 22 ; out -> mDUM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 12 ) ; out -> mDUM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dum ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUM . mN = 0 ; out -> mDUM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dtm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTM_P . mNumCol = 1 ; out ->
mDTM_P . mNumRow = 22 ; out -> mDTM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dtm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTM . mN = 0 ; out -> mDTM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dpm_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDPM_P . mNumCol = 4 ; out ->
mDPM_P . mNumRow = 22 ; out -> mDPM_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 5 ) ; out -> mDPM_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dpm ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDPM . mN = 0 ; out -> mDPM . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_a_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mA_P . mNumCol = 66 ; out ->
mA_P . mNumRow = 66 ; out -> mA_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 67 ) ; out -> mA_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 110 )
; return out ; } static NeDsMethodOutput * ds_output_a ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mA . mN = 110 ; out -> mA . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 110 )
; return out ; } static NeDsMethodOutput * ds_output_b_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mB_P . mNumCol = 11 ; out ->
mB_P . mNumRow = 66 ; out -> mB_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 12 ) ; out -> mB_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 3 ) ;
return out ; } static NeDsMethodOutput * ds_output_b ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mB . mN = 3 ; out -> mB . mX = ( real_T * )
allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 3 ) ; return out ;
} static NeDsMethodOutput * ds_output_c_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mC_P . mNumCol = 1 ; out -> mC_P . mNumRow
= 66 ; out -> mC_P . mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator
, sizeof ( int32_T ) , 2 ) ; out -> mC_P . mIr = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_c ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mC . mN = 0 ; out -> mC . mX = ( real_T * ) allocator -> mCallocFcn (
allocator , sizeof ( real_T ) , 0 ) ; return out ; } static NeDsMethodOutput
* ds_output_f ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mF .
mN = 66 ; out -> mF . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 66 ) ; return out ; } static NeDsMethodOutput *
ds_output_vmf ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mVMF .
mN = 66 ; out -> mVMF . mX = ( boolean_T * ) allocator -> mCallocFcn (
allocator , sizeof ( boolean_T ) , 66 ) ; return out ; } static
NeDsMethodOutput * ds_output_vpf ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mVPF . mN = 66 ; out -> mVPF . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 66 ) ; return out ; } static
NeDsMethodOutput * ds_output_vsf ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mVSF . mN = 66 ; out -> mVSF . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 66 ) ; return out ; } static
NeDsMethodOutput * ds_output_slf ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mSLF . mN = 66 ; out -> mSLF . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 66 ) ; return out ; } static
NeDsMethodOutput * ds_output_slf0 ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mSLF0 . mN = 66 ; out -> mSLF0 . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 66
) ; return out ; } static NeDsMethodOutput * ds_output_dxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXF_P . mNumCol = 66 ; out ->
mDXF_P . mNumRow = 66 ; out -> mDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 67 ) ; out -> mDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 94 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXF . mN = 94 ; out -> mDXF .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
94 ) ; return out ; } static NeDsMethodOutput * ds_output_duf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUF_P . mNumCol = 11 ; out ->
mDUF_P . mNumRow = 66 ; out -> mDUF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 12 ) ; out -> mDUF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 10 ) ;
return out ; } static NeDsMethodOutput * ds_output_duf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUF . mN = 10 ; out -> mDUF .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
10 ) ; return out ; } static NeDsMethodOutput * ds_output_dtf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTF_P . mNumCol = 1 ; out ->
mDTF_P . mNumRow = 66 ; out -> mDTF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dtf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTF . mN = 0 ; out -> mDTF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_ddf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDF_P . mNumCol = 0 ; out ->
mDDF_P . mNumRow = 66 ; out -> mDDF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDDF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_ddf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDF . mN = 0 ; out -> mDDF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dpdxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDPDXF_P . mNumCol = 4 ; out ->
mDPDXF_P . mNumRow = 94 ; out -> mDPDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 5 ) ; out -> mDPDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dpdxf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDPDXF . mN = 0 ; out -> mDPDXF
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_dwf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDWF_P . mNumCol = 0 ; out ->
mDWF_P . mNumRow = 66 ; out -> mDWF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDWF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dwf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDWF . mN = 0 ; out -> mDWF . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_tduf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUF_P . mNumCol = 11 ; out ->
mTDUF_P . mNumRow = 66 ; out -> mTDUF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 12 ) ; out -> mTDUF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 13 ) ;
return out ; } static NeDsMethodOutput * ds_output_tdxf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDXF_P . mNumCol = 66 ; out ->
mTDXF_P . mNumRow = 66 ; out -> mTDXF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 67 ) ; out -> mTDXF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 192 )
; return out ; } static NeDsMethodOutput * ds_output_dnf_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF_P . mNumCol = 56 ; out ->
mDNF_P . mNumRow = 66 ; out -> mDNF_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 57 ) ; out -> mDNF_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 17 ) ;
return out ; } static NeDsMethodOutput * ds_output_dnf ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF . mN = 17 ; out -> mDNF .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
17 ) ; return out ; } static NeDsMethodOutput * ds_output_dnf_v_x ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDNF_V_X . mN = 66 ; out ->
mDNF_V_X . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 66 ) ; return out ; } static NeDsMethodOutput * ds_output_cer
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCER . mN = 0 ; out ->
mCER . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dxcer (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXCER . mN = 0 ; out
-> mDXCER . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dxcer_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXCER_P . mNumCol =
66 ; out -> mDXCER_P . mNumRow = 0 ; out -> mDXCER_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 67 ) ; out ->
mDXCER_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddcer (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDCER . mN = 0 ; out
-> mDDCER . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddcer_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDCER_P . mNumCol = 0
; out -> mDDCER_P . mNumRow = 0 ; out -> mDDCER_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out ->
mDDCER_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ic (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mIC . mN = 66 ; out ->
mIC . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 66 ) ; return out ; } static NeDsMethodOutput * ds_output_icr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR . mN = 15 ; out -> mICR .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
15 ) ; return out ; } static NeDsMethodOutput * ds_output_icr_im ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR_IM . mN = 15 ; out ->
mICR_IM . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 15 ) ; return out ; } static NeDsMethodOutput * ds_output_icr_id
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICR_ID . mN = 15 ;
out -> mICR_ID . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( boolean_T ) , 15 ) ; return out ; } static NeDsMethodOutput *
ds_output_icr_il ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mICR_IL . mN = 15 ; out -> mICR_IL . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 15 ) ; return out ; } static
NeDsMethodOutput * ds_output_dxicr ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDXICR . mN = 0 ; out -> mDXICR . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICR_P . mNumCol = 66 ; out ->
mDXICR_P . mNumRow = 15 ; out -> mDXICR_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 67 ) ; out -> mDXICR_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_ddicr ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICR . mN = 0 ; out -> mDDICR
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICR_P . mNumCol = 0 ; out ->
mDDICR_P . mNumRow = 15 ; out -> mDDICR_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out -> mDDICR_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_tduicr_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUICR_P . mNumCol = 11 ; out
-> mTDUICR_P . mNumRow = 15 ; out -> mTDUICR_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 12 ) ; out ->
mTDUICR_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_icrm_p
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICRM_P . mNumCol = 66
; out -> mICRM_P . mNumRow = 15 ; out -> mICRM_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 67 ) ; out ->
mICRM_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_icrm (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mICRM . mN = 0 ; out
-> mICRM . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dxicrm_p
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICRM_P . mNumCol =
66 ; out -> mDXICRM_P . mNumRow = 0 ; out -> mDXICRM_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 67 ) ; out ->
mDXICRM_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dxicrm
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXICRM . mN = 0 ; out
-> mDXICRM . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicrm_p
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICRM_P . mNumCol =
0 ; out -> mDDICRM_P . mNumRow = 0 ; out -> mDDICRM_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 1 ) ; out ->
mDDICRM_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_ddicrm
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDDICRM . mN = 0 ; out
-> mDDICRM . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_freqs (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mFREQS . mN = 0 ; out
-> mFREQS . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_mduy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMDUY_P . mNumCol = 11
; out -> mMDUY_P . mNumRow = 28 ; out -> mMDUY_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 12 ) ; out ->
mMDUY_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_mdxy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMDXY_P . mNumCol = 66
; out -> mMDXY_P . mNumRow = 28 ; out -> mMDXY_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 67 ) ; out ->
mMDXY_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_tduy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDUY_P . mNumCol = 11
; out -> mTDUY_P . mNumRow = 28 ; out -> mTDUY_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 12 ) ; out ->
mTDUY_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_tdxy_p (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mTDXY_P . mNumCol = 66
; out -> mTDXY_P . mNumRow = 28 ; out -> mTDXY_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 67 ) ; out ->
mTDXY_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 37 ) ; return out ; } static NeDsMethodOutput * ds_output_y (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mY . mN = 28 ; out ->
mY . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 28 ) ; return out ; } static NeDsMethodOutput * ds_output_dxy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXY_P . mNumCol = 66 ; out ->
mDXY_P . mNumRow = 28 ; out -> mDXY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 67 ) ; out -> mDXY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 37 ) ;
return out ; } static NeDsMethodOutput * ds_output_dxy ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDXY . mN = 37 ; out -> mDXY .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
37 ) ; return out ; } static NeDsMethodOutput * ds_output_duy_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUY_P . mNumCol = 11 ; out ->
mDUY_P . mNumRow = 28 ; out -> mDUY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 12 ) ; out -> mDUY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_duy ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUY . mN = 0 ; out -> mDUY . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dty_p ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTY_P . mNumCol = 1 ; out ->
mDTY_P . mNumRow = 28 ; out -> mDTY_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out -> mDTY_P . mIr = (
int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_dty ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTY . mN = 0 ; out -> mDTY . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_mode ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mMODE . mN = 18 ; out -> mMODE .
mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) ,
18 ) ; return out ; } static NeDsMethodOutput * ds_output_zc ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mZC . mN = 18 ; out -> mZC . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 18 )
; return out ; } static NeDsMethodOutput * ds_output_cache_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCACHE_R . mN = 0 ; out ->
mCACHE_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_cache_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mCACHE_I . mN = 0 ;
out -> mCACHE_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_update_r ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mUPDATE_R . mN = 0 ; out -> mUPDATE_R . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_update_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mUPDATE_I . mN = 0 ; out -> mUPDATE_I . mX
= ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0
) ; return out ; } static NeDsMethodOutput * ds_output_update2_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mUPDATE2_R . mN = 0 ; out ->
mUPDATE2_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_update2_i
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mUPDATE2_I . mN = 0 ;
out -> mUPDATE2_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_lock_r ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mLOCK_R . mN = 0 ; out -> mLOCK_R . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_lock_i ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mLOCK_I . mN = 0 ; out -> mLOCK_I . mX = (
boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof ( boolean_T ) , 0
) ; return out ; } static NeDsMethodOutput * ds_output_lock2_r ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLOCK2_R . mN = 0 ; out ->
mLOCK2_R . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_lock2_i ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mLOCK2_I . mN = 0 ; out -> mLOCK2_I . mX = ( boolean_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( boolean_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_sfo ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mSFO . mN = 0 ; out -> mSFO . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_sfp ( const NeDynamicSystem * ds , PmAllocator *
allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput
* ) allocator -> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ;
out -> mSFP . mN = 0 ; out -> mSFP . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_init_r ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mINIT_R . mN = 0 ; out -> mINIT_R . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_init_i ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mINIT_I . mN = 0 ; out ->
mINIT_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_log (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLOG . mN = 507 ; out
-> mLOG . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 507 ) ; return out ; } static NeDsMethodOutput * ds_output_assert
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mASSERT . mN = 113 ;
out -> mASSERT . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( int32_T ) , 113 ) ; return out ; } static NeDsMethodOutput *
ds_output_passert ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mPASSERT . mN = 0 ; out -> mPASSERT . mX = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_iassert ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mIASSERT . mN = 0 ; out -> mIASSERT . mX =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_del_t ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_T . mN = 0 ; out -> mDEL_T
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_v ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_V . mN = 0 ; out -> mDEL_V
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_v0 ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_V0 . mN = 0 ; out ->
mDEL_V0 . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_del_tmax
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDEL_TMAX . mN = 0 ;
out -> mDEL_TMAX . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 0 ) ; return out ; } static NeDsMethodOutput *
ds_output_dxdelt_p ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mDXDELT_P . mNumCol = 66 ; out -> mDXDELT_P . mNumRow = 0 ; out -> mDXDELT_P
. mJc = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T
) , 67 ) ; out -> mDXDELT_P . mIr = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput
* ds_output_dxdelt ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mDXDELT . mN = 0 ; out -> mDXDELT . mX = ( real_T * ) allocator -> mCallocFcn
( allocator , sizeof ( real_T ) , 0 ) ; return out ; } static
NeDsMethodOutput * ds_output_dudelt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mDUDELT_P . mNumCol = 11 ; out -> mDUDELT_P
. mNumRow = 0 ; out -> mDUDELT_P . mJc = ( int32_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( int32_T ) , 12 ) ; out -> mDUDELT_P . mIr =
( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 )
; return out ; } static NeDsMethodOutput * ds_output_dudelt ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDUDELT . mN = 0 ; out ->
mDUDELT . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dtdelt_p
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTDELT_P . mNumCol =
1 ; out -> mDTDELT_P . mNumRow = 0 ; out -> mDTDELT_P . mJc = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 2 ) ; out ->
mDTDELT_P . mIr = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof
( int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dtdelt
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDTDELT . mN = 0 ; out
-> mDTDELT . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_obs_exp (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mOBS_EXP . mN = 652 ;
out -> mOBS_EXP . mX = ( real_T * ) allocator -> mCallocFcn ( allocator ,
sizeof ( real_T ) , 652 ) ; return out ; } static NeDsMethodOutput *
ds_output_obs_act ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out ->
mOBS_ACT . mN = 652 ; out -> mOBS_ACT . mX = ( real_T * ) allocator ->
mCallocFcn ( allocator , sizeof ( real_T ) , 652 ) ; return out ; } static
NeDsMethodOutput * ds_output_obs_all ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mOBS_ALL . mN = 652 ; out -> mOBS_ALL . mX
= ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 652
) ; return out ; } static NeDsMethodOutput * ds_output_obs_il ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mOBS_IL . mN = 652 ; out ->
mOBS_IL . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 652 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_l
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_L . mN = 0 ; out
-> mDP_L . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_i (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_I . mN = 0 ; out
-> mDP_I . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_j (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_J . mN = 0 ; out
-> mDP_J . mX = ( int32_T * ) allocator -> mCallocFcn ( allocator , sizeof (
int32_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_dp_r (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDP_R . mN = 0 ; out
-> mDP_R . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_qx (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mQX . mN = 0 ; out ->
mQX . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T
) , 0 ) ; return out ; } static NeDsMethodOutput * ds_output_qu ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mQU . mN = 0 ; out -> mQU . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ;
return out ; } static NeDsMethodOutput * ds_output_qt ( const NeDynamicSystem
* ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out
= ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQT . mN = 0 ; out -> mQT . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out
; } static NeDsMethodOutput * ds_output_q1 ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQ1 . mN = 0 ; out -> mQ1 . mX = ( real_T *
) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 0 ) ; return out
; } static NeDsMethodOutput * ds_output_qx_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQX_P . mNumCol = 66 ; out -> mQX_P .
mNumRow = 66 ; out -> mQX_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 67 ) ; out -> mQX_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_qu_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQU_P . mNumCol = 11 ; out -> mQU_P .
mNumRow = 66 ; out -> mQU_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 12 ) ; out -> mQU_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_qt_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQT_P . mNumCol = 1 ; out -> mQT_P .
mNumRow = 66 ; out -> mQT_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mQT_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_q1_p ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mQ1_P . mNumCol = 1 ; out -> mQ1_P .
mNumRow = 66 ; out -> mQ1_P . mJc = ( int32_T * ) allocator -> mCallocFcn (
allocator , sizeof ( int32_T ) , 2 ) ; out -> mQ1_P . mIr = ( int32_T * )
allocator -> mCallocFcn ( allocator , sizeof ( int32_T ) , 0 ) ; return out ;
} static NeDsMethodOutput * ds_output_var_tol ( const NeDynamicSystem * ds ,
PmAllocator * allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mVAR_TOL . mN = 66 ; out -> mVAR_TOL . mX =
( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 66 ) ;
return out ; } static NeDsMethodOutput * ds_output_eq_tol ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mEQ_TOL . mN = 66 ; out ->
mEQ_TOL . mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof (
real_T ) , 66 ) ; return out ; } static NeDsMethodOutput * ds_output_lv (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mLV . mN = 66 ; out ->
mLV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 66 ) ; return out ; } static NeDsMethodOutput * ds_output_slv (
const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSLV . mN = 66 ; out
-> mSLV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof (
boolean_T ) , 66 ) ; return out ; } static NeDsMethodOutput * ds_output_nldv
( const NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput *
out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn (
allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mNLDV . mN = 66 ; out
-> mNLDV . mX = ( boolean_T * ) allocator -> mCallocFcn ( allocator , sizeof
( boolean_T ) , 66 ) ; return out ; } static NeDsMethodOutput *
ds_output_sclv ( const NeDynamicSystem * ds , PmAllocator * allocator ) {
NeDsMethodOutput * out ; ( void ) ds ; out = ( NeDsMethodOutput * ) allocator
-> mCallocFcn ( allocator , sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mSCLV
. mN = 66 ; out -> mSCLV . mX = ( boolean_T * ) allocator -> mCallocFcn (
allocator , sizeof ( boolean_T ) , 66 ) ; return out ; } static
NeDsMethodOutput * ds_output_imin ( const NeDynamicSystem * ds , PmAllocator
* allocator ) { NeDsMethodOutput * out ; ( void ) ds ; out = (
NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator , sizeof (
NeDsMethodOutput ) , 1 ) ; out -> mIMIN . mN = 66 ; out -> mIMIN . mX = (
real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) , 66 ) ;
return out ; } static NeDsMethodOutput * ds_output_imax ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mIMAX . mN = 66 ; out -> mIMAX .
mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
66 ) ; return out ; } static NeDsMethodOutput * ds_output_dimin ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDIMIN . mN = 0 ; out -> mDIMIN
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static NeDsMethodOutput * ds_output_dimax ( const
NeDynamicSystem * ds , PmAllocator * allocator ) { NeDsMethodOutput * out ; (
void ) ds ; out = ( NeDsMethodOutput * ) allocator -> mCallocFcn ( allocator
, sizeof ( NeDsMethodOutput ) , 1 ) ; out -> mDIMAX . mN = 0 ; out -> mDIMAX
. mX = ( real_T * ) allocator -> mCallocFcn ( allocator , sizeof ( real_T ) ,
0 ) ; return out ; } static void release_reference ( NeDynamicSystem * ds ) {
_NeDynamicSystem * _ds ; _ds = ( _NeDynamicSystem * ) ds ; if ( -- _ds ->
mRefCnt == 0 ) { _ds -> mAlloc . mFreeFcn ( & _ds -> mAlloc , _ds ) ; } }
static void get_reference ( NeDynamicSystem * ds ) { _NeDynamicSystem * _ds ;
_ds = ( _NeDynamicSystem * ) ds ; ++ _ds -> mRefCnt ; } static
NeDynamicSystem * diagnostics ( NeDynamicSystem * ds , boolean_T kp ) {
_NeDynamicSystem * _ds = ( _NeDynamicSystem * ) ds ; ( void ) kp ;
ne_ds_get_reference ( & _ds -> mBase ) ; return & _ds -> mBase ; } static
void expand ( const NeDynamicSystem * ds , const NeDynamicSystemInput * in ,
PmRealVector * out , boolean_T kp ) { ( void ) ds ; ( void ) kp ; memcpy (
out -> mX , in -> mX . mX , sizeof ( real_T ) * out -> mN ) ; } static void
rtpmap ( const NeDynamicSystem * ds , const PmIntVector * inl , const
PmIntVector * ini , const PmIntVector * inj , const PmRealVector * inr ,
PmIntVector * outl , PmIntVector * outi , PmIntVector * outj , PmRealVector *
outr ) { ( void ) ds ; memcpy ( outl -> mX , inl -> mX , sizeof ( int32_T ) *
inl -> mN ) ; memcpy ( outi -> mX , ini -> mX , sizeof ( int32_T ) * ini ->
mN ) ; memcpy ( outj -> mX , inj -> mX , sizeof ( int32_T ) * inj -> mN ) ;
memcpy ( outr -> mX , inr -> mX , sizeof ( real_T ) * inr -> mN ) ; }
NeDynamicSystem * SparkEV_c4aff755_1_dae_ds ( PmAllocator * allocator ) {
NeDynamicSystem * ds ; _NeDynamicSystem * _ds ; static SscIoInfo input_info [
11 ] ; static SscIoInfo output_info [ 28 ] ; _ds = ( _NeDynamicSystem * )
allocator -> mCallocFcn ( allocator , sizeof ( _NeDynamicSystem ) , 1 ) ; _ds
-> mAlloc = * allocator ; _ds -> mRefCnt = 1 ; ds = & _ds -> mBase ; ds ->
mNumVariables = 66 ; ds -> mNumDiscreteRealVariables = 0 ; ds ->
mNumDifferentialVariables = 22 ; ds -> mNumEquations = 66 ; ds ->
mNumCEResiduals = 0 ; ds -> mNumICResiduals = 15 ; ds -> mNumFreqs = 0 ; ds
-> mNumModes = 18 ; ds -> mNumMajorModes = 0 ; ds -> mNumRealCache = 0 ; ds
-> mNumIntCache = 0 ; ds -> mNumObservables = 647 ; ds ->
mNumObservableElements = 652 ; ds -> mNumZcs = 18 ; ds -> mNumAsserts = 113 ;
ds -> mNumAssertRanges = 113 ; ds -> mNumParamAsserts = 0 ; ds ->
mNumParamAssertRanges = 0 ; ds -> mNumInitialAsserts = 0 ; ds ->
mNumInitialAssertRanges = 0 ; ds -> mNumRanges = 22 ; ds ->
mNumEquationRanges = 94 ; ds -> mNumCERRanges = 0 ; ds -> mNumICRRanges = 15
; ds -> mNumFundamentalSamples = 0 ; ds -> mNumDelays = 0 ; ds ->
mNumLogicalParameters = 0 ; ds -> mNumIntegerParameters = 0 ; ds ->
mNumIndexParameters = 0 ; ds -> mNumRealParameters = 4 ; ds ->
mNumLogicalDerivedParameters = 0 ; ds -> mNumIntegerDerivedParameters = 0 ;
ds -> mNumIndexDerivedParameters = 0 ; ds -> mNumRealDerivedParameters = 0 ;
ds -> mIsOutputLinear = TRUE ; ds -> mIsOutputSwitchedLinear = TRUE ; ds ->
mIsScalable = FALSE ; ds -> mNumIo [ SSC_INPUT_IO_TYPE ] = 11 ; input_info [
0 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Simulink_PS_Converter_output0"
; input_info [ 0 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & input_info [ 0 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & input_info [ 0 ] . mSize , 1 , 1 ) ; input_info [
0 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Simulink_PS_Converter_output0"
; input_info [ 0 ] . mUnit = "Pa" ; input_info [ 1 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Simulink_PS_Converter2_output0"
; input_info [ 1 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & input_info [ 1 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & input_info [ 1 ] . mSize , 1 , 1 ) ; input_info [
1 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Simulink_PS_Converter2_output0"
; input_info [ 1 ] . mUnit = "Pa" ; input_info [ 2 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Simulink_PS_Converter1_output0"
; input_info [ 2 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & input_info [ 2 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & input_info [ 2 ] . mSize , 1 , 1 ) ; input_info [
2 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Simulink_PS_Converter1_output0"
; input_info [ 2 ] . mUnit = "Pa" ; input_info [ 3 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Simulink_PS_Converter3_output0"
; input_info [ 3 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & input_info [ 3 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & input_info [ 3 ] . mSize , 1 , 1 ) ; input_info [
3 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Brake_System.Braking_Hydraulics_and_Disc_Brakes.Simulink_PS_Converter3_output0"
; input_info [ 3 ] . mUnit = "Pa" ; input_info [ 4 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Simulink_PS_Converter1_output0"
; input_info [ 4 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & input_info [ 4 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & input_info [ 4 ] . mSize , 1 , 1 ) ; input_info [
4 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Simulink_PS_Converter1_output0"
; input_info [ 4 ] . mUnit = "deg" ; input_info [ 5 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Simulink_PS_Converter_output0"
; input_info [ 5 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & input_info [ 5 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & input_info [ 5 ] . mSize , 1 , 1 ) ; input_info [
5 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Simulink_PS_Converter_output0"
; input_info [ 5 ] . mUnit = "m/s" ; input_info [ 6 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Subsystem1.Simulink_PS_Converter2_output0"
; input_info [ 6 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & input_info [ 6 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & input_info [ 6 ] . mSize , 1 , 1 ) ; input_info [
6 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Subsystem1.Simulink_PS_Converter2_output0"
; input_info [ 6 ] . mUnit = "K" ; input_info [ 7 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Power_Acc.Simulink_PS_Converter_output0"
; input_info [ 7 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & input_info [ 7 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & input_info [ 7 ] . mSize , 1 , 1 ) ; input_info [
7 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Power_Acc.Simulink_PS_Converter_output0"
; input_info [ 7 ] . mUnit = "A" ; input_info [ 8 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter_Vref0"
; input_info [ 8 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & input_info [ 8 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & input_info [ 8 ] . mSize , 1 , 1 ) ; input_info [
8 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.DC_DC_Converter_Vref0"
; input_info [ 8 ] . mUnit = "1" ; input_info [ 9 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Simulink_PS_Converter3_output0"
; input_info [ 9 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & input_info [ 9 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & input_info [ 9 ] . mSize , 1 , 1 ) ; input_info [
9 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Simulink_PS_Converter3_output0"
; input_info [ 9 ] . mUnit = "N*m" ; input_info [ 10 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Simulink_PS_Converter3_output0"
; input_info [ 10 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & input_info [ 10 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & input_info [ 10 ] . mSize , 1 , 1 ) ; input_info [
10 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Simulink_PS_Converter3_output0"
; input_info [ 10 ] . mUnit = "N*m" ; ds -> mIo [ SSC_INPUT_IO_TYPE ] =
input_info ; ds -> mNumIo [ SSC_OUTPUT_IO_TYPE ] = 28 ; output_info [ 0 ] .
mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Longitudinal_Vehicle_Body_V0"
; output_info [ 0 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 0 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 0 ] . mSize , 1 , 1 ) ; output_info
[ 0 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Vehicle.Vehicle_Body_1DOF_Longitudinal.Longitudinal_Vehicle_Body_V0"
; output_info [ 0 ] . mUnit = "m/s" ; output_info [ 1 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L_N0"
; output_info [ 1 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 1 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 1 ] . mSize , 1 , 1 ) ; output_info
[ 1 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L_N0"
; output_info [ 1 ] . mUnit = "N" ; output_info [ 2 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L_S0"
; output_info [ 2 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 2 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 2 ] . mSize , 1 , 1 ) ; output_info
[ 2 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_L_S0"
; output_info [ 2 ] . mUnit = "1" ; output_info [ 3 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R_S0"
; output_info [ 3 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 3 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 3 ] . mSize , 1 , 1 ) ; output_info
[ 3 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Front_R_S0"
; output_info [ 3 ] . mUnit = "1" ; output_info [ 4 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L_N0"
; output_info [ 4 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 4 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 4 ] . mSize , 1 , 1 ) ; output_info
[ 4 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L_N0"
; output_info [ 4 ] . mUnit = "N" ; output_info [ 5 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L_S0"
; output_info [ 5 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 5 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 5 ] . mSize , 1 , 1 ) ; output_info
[ 5 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_L_S0"
; output_info [ 5 ] . mUnit = "1" ; output_info [ 6 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R_S0"
; output_info [ 6 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 6 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 6 ] . mSize , 1 , 1 ) ; output_info
[ 6 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.Longitudinal_Wheel_Rear_R_S0"
; output_info [ 6 ] . mUnit = "1" ; output_info [ 7 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd2.Ideal_Rotational_Motion_Sensor_W0"
; output_info [ 7 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 7 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 7 ] . mSize , 1 , 1 ) ; output_info
[ 7 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd2.Ideal_Rotational_Motion_Sensor_W0"
; output_info [ 7 ] . mUnit = "rad/s" ; output_info [ 8 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd3.Ideal_Rotational_Motion_Sensor_W0"
; output_info [ 8 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 8 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 8 ] . mSize , 1 , 1 ) ; output_info
[ 8 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd3.Ideal_Rotational_Motion_Sensor_W0"
; output_info [ 8 ] . mUnit = "rad/s" ; output_info [ 9 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd4.Ideal_Rotational_Motion_Sensor_W0"
; output_info [ 9 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 9 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 9 ] . mSize , 1 , 1 ) ; output_info
[ 9 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpd4.Ideal_Rotational_Motion_Sensor_W0"
; output_info [ 9 ] . mUnit = "rad/s" ; output_info [ 10 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpdFL.Ideal_Rotational_Motion_Sensor_W0"
; output_info [ 10 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 10 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 10 ] . mSize , 1 , 1 ) ; output_info
[ 10 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Body_Suspension_Wheels.Wheels_and_Tires.MF_Tires_Longitudinal.WhlSpdFL.Ideal_Rotational_Motion_Sensor_W0"
; output_info [ 10 ] . mUnit = "rad/s" ; output_info [ 11 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqFL.Ideal_Torque_Sensor_T0"
; output_info [ 11 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 11 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 11 ] . mSize , 1 , 1 ) ; output_info
[ 11 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqFL.Ideal_Torque_Sensor_T0"
; output_info [ 11 ] . mUnit = "N*m" ; output_info [ 12 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqFR.Ideal_Torque_Sensor_T0"
; output_info [ 12 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 12 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 12 ] . mSize , 1 , 1 ) ; output_info
[ 12 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqFR.Ideal_Torque_Sensor_T0"
; output_info [ 12 ] . mUnit = "N*m" ; output_info [ 13 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqR.Ideal_Torque_Sensor_T0"
; output_info [ 13 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 13 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 13 ] . mSize , 1 , 1 ) ; output_info
[ 13 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqR.Ideal_Torque_Sensor_T0"
; output_info [ 13 ] . mUnit = "N*m" ; output_info [ 14 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqRL.Ideal_Torque_Sensor_T0"
; output_info [ 14 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 14 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 14 ] . mSize , 1 , 1 ) ; output_info
[ 14 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.AxlTrqRL.Ideal_Torque_Sensor_T0"
; output_info [ 14 ] . mUnit = "N*m" ; output_info [ 15 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.Two_Actuator_AWD.Spd1.Ideal_Rotational_Motion_Sensor_W0"
; output_info [ 15 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 15 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 15 ] . mSize , 1 , 1 ) ; output_info
[ 15 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.Two_Actuator_AWD.Spd1.Ideal_Rotational_Motion_Sensor_W0"
; output_info [ 15 ] . mUnit = "rad/s" ; output_info [ 16 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.Two_Actuator_AWD.Spd2.Ideal_Rotational_Motion_Sensor_W0"
; output_info [ 16 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 16 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 16 ] . mSize , 1 , 1 ) ; output_info
[ 16 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Drivetrain_Layout.DriveshftTrq_Routing.Two_Actuator_AWD.Spd2.Ideal_Rotational_Motion_Sensor_W0"
; output_info [ 16 ] . mUnit = "rad/s" ; output_info [ 17 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Spd_Sensor.Ideal_Rotational_Motion_Sensor_W0"
; output_info [ 17 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 17 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 17 ] . mSize , 1 , 1 ) ; output_info
[ 17 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Spd_Sensor.Ideal_Rotational_Motion_Sensor_W0"
; output_info [ 17 ] . mUnit = "rad/s" ; output_info [ 18 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Spd_Sensor1.Ideal_Rotational_Motion_Sensor_W0"
; output_info [ 18 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 18 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 18 ] . mSize , 1 , 1 ) ; output_info
[ 18 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Drivetrain.Transmission_and_Actuators.Electric_Vehicle_1EM.Spd_Sensor1.Ideal_Rotational_Motion_Sensor_W0"
; output_info [ 18 ] . mUnit = "rad/s" ; output_info [ 19 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based_soc0"
; output_info [ 19 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 19 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 19 ] . mSize , 1 , 1 ) ; output_info
[ 19 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Battery_Table_Based_soc0"
; output_info [ 19 ] . mUnit = "1" ; output_info [ 20 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Sensor_VI.Current_Sensor_I0"
; output_info [ 20 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 20 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 20 ] . mSize , 1 , 1 ) ; output_info
[ 20 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Sensor_VI.Current_Sensor_I0"
; output_info [ 20 ] . mUnit = "A" ; output_info [ 21 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Sensor_VI.Voltage_Sensor2_V0"
; output_info [ 21 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 21 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 21 ] . mSize , 1 , 1 ) ; output_info
[ 21 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Battery_System.Mapped_Battery.Sensor_VI.Voltage_Sensor2_V0"
; output_info [ 21 ] . mUnit = "V" ; output_info [ 22 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Elec_Sensor.Current_Sensor2_I0"
; output_info [ 22 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 22 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 22 ] . mSize , 1 , 1 ) ; output_info
[ 22 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Elec_Sensor.Current_Sensor2_I0"
; output_info [ 22 ] . mUnit = "A" ; output_info [ 23 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Elec_Sensor.Voltage_Sensor_V0"
; output_info [ 23 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 23 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 23 ] . mSize , 1 , 1 ) ; output_info
[ 23 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Elec_Sensor.Voltage_Sensor_V0"
; output_info [ 23 ] . mUnit = "V" ; output_info [ 24 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Torque_Sensor.Ideal_Torque_Sensor2_T0"
; output_info [ 24 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 24 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 24 ] . mSize , 1 , 1 ) ; output_info
[ 24 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM.Torque_Sensor.Ideal_Torque_Sensor2_T0"
; output_info [ 24 ] . mUnit = "N*m" ; output_info [ 25 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Elec_Sensor.Current_Sensor2_I0"
; output_info [ 25 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 25 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 25 ] . mSize , 1 , 1 ) ; output_info
[ 25 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Elec_Sensor.Current_Sensor2_I0"
; output_info [ 25 ] . mUnit = "A" ; output_info [ 26 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Elec_Sensor.Voltage_Sensor_V0"
; output_info [ 26 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 26 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 26 ] . mSize , 1 , 1 ) ; output_info
[ 26 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Elec_Sensor.Voltage_Sensor_V0"
; output_info [ 26 ] . mUnit = "V" ; output_info [ 27 ] . mIdentifier =
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Torque_Sensor.Ideal_Torque_Sensor2_T0"
; output_info [ 27 ] . mSize = ssc_make_scalar_array_size ( ) ;
ssc_array_size_set_dim ( & output_info [ 27 ] . mSize , 0 , 1 ) ;
ssc_array_size_set_dim ( & output_info [ 27 ] . mSize , 1 , 1 ) ; output_info
[ 27 ] . mName =
 "Vehicle.Plant_Models.Simscape_Models.Electrical_System.Electrical_System_1EM.Mapped_EM1.Torque_Sensor.Ideal_Torque_Sensor2_T0"
; output_info [ 27 ] . mUnit = "N*m" ; ds -> mIo [ SSC_OUTPUT_IO_TYPE ] =
output_info ; ds -> mReleaseReference = release_reference ; ds ->
mGetReference = get_reference ; ds -> mDiagnosticsDsFcn = diagnostics ; ds ->
mExpandFcn = expand ; ds -> mRtpMapFcn = rtpmap ; ds -> mMethods [
NE_DS_METHOD_M_P ] = SparkEV_c4aff755_1_ds_m_p ; ds -> mMakeOutput [
NE_DS_METHOD_M_P ] = ds_output_m_p ; ds -> mMethods [ NE_DS_METHOD_M ] = ds_m
; ds -> mMakeOutput [ NE_DS_METHOD_M ] = ds_output_m ; ds -> mMethods [
NE_DS_METHOD_VMM ] = ds_vmm ; ds -> mMakeOutput [ NE_DS_METHOD_VMM ] =
ds_output_vmm ; ds -> mMethods [ NE_DS_METHOD_DXM_P ] =
SparkEV_c4aff755_1_ds_dxm_p ; ds -> mMakeOutput [ NE_DS_METHOD_DXM_P ] =
ds_output_dxm_p ; ds -> mMethods [ NE_DS_METHOD_DXM ] = ds_dxm ; ds ->
mMakeOutput [ NE_DS_METHOD_DXM ] = ds_output_dxm ; ds -> mMethods [
NE_DS_METHOD_DDM_P ] = ds_ddm_p ; ds -> mMakeOutput [ NE_DS_METHOD_DDM_P ] =
ds_output_ddm_p ; ds -> mMethods [ NE_DS_METHOD_DDM ] = ds_ddm ; ds ->
mMakeOutput [ NE_DS_METHOD_DDM ] = ds_output_ddm ; ds -> mMethods [
NE_DS_METHOD_DUM_P ] = ds_dum_p ; ds -> mMakeOutput [ NE_DS_METHOD_DUM_P ] =
ds_output_dum_p ; ds -> mMethods [ NE_DS_METHOD_DUM ] = ds_dum ; ds ->
mMakeOutput [ NE_DS_METHOD_DUM ] = ds_output_dum ; ds -> mMethods [
NE_DS_METHOD_DTM_P ] = ds_dtm_p ; ds -> mMakeOutput [ NE_DS_METHOD_DTM_P ] =
ds_output_dtm_p ; ds -> mMethods [ NE_DS_METHOD_DTM ] = ds_dtm ; ds ->
mMakeOutput [ NE_DS_METHOD_DTM ] = ds_output_dtm ; ds -> mMethods [
NE_DS_METHOD_DPM_P ] = ds_dpm_p ; ds -> mMakeOutput [ NE_DS_METHOD_DPM_P ] =
ds_output_dpm_p ; ds -> mMethods [ NE_DS_METHOD_DPM ] = ds_dpm ; ds ->
mMakeOutput [ NE_DS_METHOD_DPM ] = ds_output_dpm ; ds -> mMethods [
NE_DS_METHOD_A_P ] = SparkEV_c4aff755_1_ds_a_p ; ds -> mMakeOutput [
NE_DS_METHOD_A_P ] = ds_output_a_p ; ds -> mMethods [ NE_DS_METHOD_A ] =
SparkEV_c4aff755_1_ds_a ; ds -> mMakeOutput [ NE_DS_METHOD_A ] = ds_output_a
; ds -> mMethods [ NE_DS_METHOD_B_P ] = ds_b_p ; ds -> mMakeOutput [
NE_DS_METHOD_B_P ] = ds_output_b_p ; ds -> mMethods [ NE_DS_METHOD_B ] = ds_b
; ds -> mMakeOutput [ NE_DS_METHOD_B ] = ds_output_b ; ds -> mMethods [
NE_DS_METHOD_C_P ] = ds_c_p ; ds -> mMakeOutput [ NE_DS_METHOD_C_P ] =
ds_output_c_p ; ds -> mMethods [ NE_DS_METHOD_C ] = ds_c ; ds -> mMakeOutput
[ NE_DS_METHOD_C ] = ds_output_c ; ds -> mMethods [ NE_DS_METHOD_F ] =
SparkEV_c4aff755_1_ds_f ; ds -> mMakeOutput [ NE_DS_METHOD_F ] = ds_output_f
; ds -> mMethods [ NE_DS_METHOD_VMF ] = SparkEV_c4aff755_1_ds_vmf ; ds ->
mMakeOutput [ NE_DS_METHOD_VMF ] = ds_output_vmf ; ds -> mMethods [
NE_DS_METHOD_VPF ] = SparkEV_c4aff755_1_ds_vpf ; ds -> mMakeOutput [
NE_DS_METHOD_VPF ] = ds_output_vpf ; ds -> mMethods [ NE_DS_METHOD_VSF ] =
SparkEV_c4aff755_1_ds_vsf ; ds -> mMakeOutput [ NE_DS_METHOD_VSF ] =
ds_output_vsf ; ds -> mMethods [ NE_DS_METHOD_SLF ] =
SparkEV_c4aff755_1_ds_slf ; ds -> mMakeOutput [ NE_DS_METHOD_SLF ] =
ds_output_slf ; ds -> mMethods [ NE_DS_METHOD_SLF0 ] =
SparkEV_c4aff755_1_ds_slf0 ; ds -> mMakeOutput [ NE_DS_METHOD_SLF0 ] =
ds_output_slf0 ; ds -> mMethods [ NE_DS_METHOD_DXF_P ] =
SparkEV_c4aff755_1_ds_dxf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DXF_P ] =
ds_output_dxf_p ; ds -> mMethods [ NE_DS_METHOD_DXF ] =
SparkEV_c4aff755_1_ds_dxf ; ds -> mMakeOutput [ NE_DS_METHOD_DXF ] =
ds_output_dxf ; ds -> mMethods [ NE_DS_METHOD_DUF_P ] = ds_duf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DUF_P ] = ds_output_duf_p ; ds -> mMethods [
NE_DS_METHOD_DUF ] = SparkEV_c4aff755_1_ds_duf ; ds -> mMakeOutput [
NE_DS_METHOD_DUF ] = ds_output_duf ; ds -> mMethods [ NE_DS_METHOD_DTF_P ] =
ds_dtf_p ; ds -> mMakeOutput [ NE_DS_METHOD_DTF_P ] = ds_output_dtf_p ; ds ->
mMethods [ NE_DS_METHOD_DTF ] = ds_dtf ; ds -> mMakeOutput [ NE_DS_METHOD_DTF
] = ds_output_dtf ; ds -> mMethods [ NE_DS_METHOD_DDF_P ] = ds_ddf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DDF_P ] = ds_output_ddf_p ; ds -> mMethods [
NE_DS_METHOD_DDF ] = ds_ddf ; ds -> mMakeOutput [ NE_DS_METHOD_DDF ] =
ds_output_ddf ; ds -> mMethods [ NE_DS_METHOD_DPDXF_P ] = ds_dpdxf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DPDXF_P ] = ds_output_dpdxf_p ; ds -> mMethods [
NE_DS_METHOD_DPDXF ] = ds_dpdxf ; ds -> mMakeOutput [ NE_DS_METHOD_DPDXF ] =
ds_output_dpdxf ; ds -> mMethods [ NE_DS_METHOD_DWF_P ] = ds_dwf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DWF_P ] = ds_output_dwf_p ; ds -> mMethods [
NE_DS_METHOD_DWF ] = ds_dwf ; ds -> mMakeOutput [ NE_DS_METHOD_DWF ] =
ds_output_dwf ; ds -> mMethods [ NE_DS_METHOD_TDUF_P ] = ds_tduf_p ; ds ->
mMakeOutput [ NE_DS_METHOD_TDUF_P ] = ds_output_tduf_p ; ds -> mMethods [
NE_DS_METHOD_TDXF_P ] = SparkEV_c4aff755_1_ds_tdxf_p ; ds -> mMakeOutput [
NE_DS_METHOD_TDXF_P ] = ds_output_tdxf_p ; ds -> mMethods [
NE_DS_METHOD_DNF_P ] = SparkEV_c4aff755_1_ds_dnf_p ; ds -> mMakeOutput [
NE_DS_METHOD_DNF_P ] = ds_output_dnf_p ; ds -> mMethods [ NE_DS_METHOD_DNF ]
= ds_dnf ; ds -> mMakeOutput [ NE_DS_METHOD_DNF ] = ds_output_dnf ; ds ->
mMethods [ NE_DS_METHOD_DNF_V_X ] = SparkEV_c4aff755_1_ds_dnf_v_x ; ds ->
mMakeOutput [ NE_DS_METHOD_DNF_V_X ] = ds_output_dnf_v_x ; ds -> mMethods [
NE_DS_METHOD_CER ] = ds_cer ; ds -> mMakeOutput [ NE_DS_METHOD_CER ] =
ds_output_cer ; ds -> mMethods [ NE_DS_METHOD_DXCER ] = ds_dxcer ; ds ->
mMakeOutput [ NE_DS_METHOD_DXCER ] = ds_output_dxcer ; ds -> mMethods [
NE_DS_METHOD_DXCER_P ] = SparkEV_c4aff755_1_ds_dxcer_p ; ds -> mMakeOutput [
NE_DS_METHOD_DXCER_P ] = ds_output_dxcer_p ; ds -> mMethods [
NE_DS_METHOD_DDCER ] = ds_ddcer ; ds -> mMakeOutput [ NE_DS_METHOD_DDCER ] =
ds_output_ddcer ; ds -> mMethods [ NE_DS_METHOD_DDCER_P ] = ds_ddcer_p ; ds
-> mMakeOutput [ NE_DS_METHOD_DDCER_P ] = ds_output_ddcer_p ; ds -> mMethods
[ NE_DS_METHOD_IC ] = SparkEV_c4aff755_1_ds_ic ; ds -> mMakeOutput [
NE_DS_METHOD_IC ] = ds_output_ic ; ds -> mMethods [ NE_DS_METHOD_ICR ] =
ds_icr ; ds -> mMakeOutput [ NE_DS_METHOD_ICR ] = ds_output_icr ; ds ->
mMethods [ NE_DS_METHOD_ICR_IM ] = ds_icr_im ; ds -> mMakeOutput [
NE_DS_METHOD_ICR_IM ] = ds_output_icr_im ; ds -> mMethods [
NE_DS_METHOD_ICR_ID ] = ds_icr_id ; ds -> mMakeOutput [ NE_DS_METHOD_ICR_ID ]
= ds_output_icr_id ; ds -> mMethods [ NE_DS_METHOD_ICR_IL ] = ds_icr_il ; ds
-> mMakeOutput [ NE_DS_METHOD_ICR_IL ] = ds_output_icr_il ; ds -> mMethods [
NE_DS_METHOD_DXICR ] = ds_dxicr ; ds -> mMakeOutput [ NE_DS_METHOD_DXICR ] =
ds_output_dxicr ; ds -> mMethods [ NE_DS_METHOD_DXICR_P ] =
SparkEV_c4aff755_1_ds_dxicr_p ; ds -> mMakeOutput [ NE_DS_METHOD_DXICR_P ] =
ds_output_dxicr_p ; ds -> mMethods [ NE_DS_METHOD_DDICR ] = ds_ddicr ; ds ->
mMakeOutput [ NE_DS_METHOD_DDICR ] = ds_output_ddicr ; ds -> mMethods [
NE_DS_METHOD_DDICR_P ] = ds_ddicr_p ; ds -> mMakeOutput [
NE_DS_METHOD_DDICR_P ] = ds_output_ddicr_p ; ds -> mMethods [
NE_DS_METHOD_TDUICR_P ] = ds_tduicr_p ; ds -> mMakeOutput [
NE_DS_METHOD_TDUICR_P ] = ds_output_tduicr_p ; ds -> mMethods [
NE_DS_METHOD_ICRM_P ] = SparkEV_c4aff755_1_ds_icrm_p ; ds -> mMakeOutput [
NE_DS_METHOD_ICRM_P ] = ds_output_icrm_p ; ds -> mMethods [ NE_DS_METHOD_ICRM
] = ds_icrm ; ds -> mMakeOutput [ NE_DS_METHOD_ICRM ] = ds_output_icrm ; ds
-> mMethods [ NE_DS_METHOD_DXICRM_P ] = SparkEV_c4aff755_1_ds_dxicrm_p ; ds
-> mMakeOutput [ NE_DS_METHOD_DXICRM_P ] = ds_output_dxicrm_p ; ds ->
mMethods [ NE_DS_METHOD_DXICRM ] = ds_dxicrm ; ds -> mMakeOutput [
NE_DS_METHOD_DXICRM ] = ds_output_dxicrm ; ds -> mMethods [
NE_DS_METHOD_DDICRM_P ] = ds_ddicrm_p ; ds -> mMakeOutput [
NE_DS_METHOD_DDICRM_P ] = ds_output_ddicrm_p ; ds -> mMethods [
NE_DS_METHOD_DDICRM ] = ds_ddicrm ; ds -> mMakeOutput [ NE_DS_METHOD_DDICRM ]
= ds_output_ddicrm ; ds -> mMethods [ NE_DS_METHOD_FREQS ] = ds_freqs ; ds ->
mMakeOutput [ NE_DS_METHOD_FREQS ] = ds_output_freqs ; ds -> mMethods [
NE_DS_METHOD_MDUY_P ] = ds_mduy_p ; ds -> mMakeOutput [ NE_DS_METHOD_MDUY_P ]
= ds_output_mduy_p ; ds -> mMethods [ NE_DS_METHOD_MDXY_P ] =
SparkEV_c4aff755_1_ds_mdxy_p ; ds -> mMakeOutput [ NE_DS_METHOD_MDXY_P ] =
ds_output_mdxy_p ; ds -> mMethods [ NE_DS_METHOD_TDUY_P ] = ds_tduy_p ; ds ->
mMakeOutput [ NE_DS_METHOD_TDUY_P ] = ds_output_tduy_p ; ds -> mMethods [
NE_DS_METHOD_TDXY_P ] = SparkEV_c4aff755_1_ds_tdxy_p ; ds -> mMakeOutput [
NE_DS_METHOD_TDXY_P ] = ds_output_tdxy_p ; ds -> mMethods [ NE_DS_METHOD_Y ]
= SparkEV_c4aff755_1_ds_y ; ds -> mMakeOutput [ NE_DS_METHOD_Y ] =
ds_output_y ; ds -> mMethods [ NE_DS_METHOD_DXY_P ] =
SparkEV_c4aff755_1_ds_dxy_p ; ds -> mMakeOutput [ NE_DS_METHOD_DXY_P ] =
ds_output_dxy_p ; ds -> mMethods [ NE_DS_METHOD_DXY ] =
SparkEV_c4aff755_1_ds_dxy ; ds -> mMakeOutput [ NE_DS_METHOD_DXY ] =
ds_output_dxy ; ds -> mMethods [ NE_DS_METHOD_DUY_P ] = ds_duy_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DUY_P ] = ds_output_duy_p ; ds -> mMethods [
NE_DS_METHOD_DUY ] = ds_duy ; ds -> mMakeOutput [ NE_DS_METHOD_DUY ] =
ds_output_duy ; ds -> mMethods [ NE_DS_METHOD_DTY_P ] = ds_dty_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DTY_P ] = ds_output_dty_p ; ds -> mMethods [
NE_DS_METHOD_DTY ] = ds_dty ; ds -> mMakeOutput [ NE_DS_METHOD_DTY ] =
ds_output_dty ; ds -> mMethods [ NE_DS_METHOD_MODE ] =
SparkEV_c4aff755_1_ds_mode ; ds -> mMakeOutput [ NE_DS_METHOD_MODE ] =
ds_output_mode ; ds -> mMethods [ NE_DS_METHOD_ZC ] =
SparkEV_c4aff755_1_ds_zc ; ds -> mMakeOutput [ NE_DS_METHOD_ZC ] =
ds_output_zc ; ds -> mMethods [ NE_DS_METHOD_CACHE_R ] = ds_cache_r ; ds ->
mMakeOutput [ NE_DS_METHOD_CACHE_R ] = ds_output_cache_r ; ds -> mMethods [
NE_DS_METHOD_CACHE_I ] = ds_cache_i ; ds -> mMakeOutput [
NE_DS_METHOD_CACHE_I ] = ds_output_cache_i ; ds -> mMethods [
NE_DS_METHOD_UPDATE_R ] = ds_update_r ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE_R ] = ds_output_update_r ; ds -> mMethods [
NE_DS_METHOD_UPDATE_I ] = ds_update_i ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE_I ] = ds_output_update_i ; ds -> mMethods [
NE_DS_METHOD_UPDATE2_R ] = ds_update2_r ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE2_R ] = ds_output_update2_r ; ds -> mMethods [
NE_DS_METHOD_UPDATE2_I ] = ds_update2_i ; ds -> mMakeOutput [
NE_DS_METHOD_UPDATE2_I ] = ds_output_update2_i ; ds -> mMethods [
NE_DS_METHOD_LOCK_R ] = ds_lock_r ; ds -> mMakeOutput [ NE_DS_METHOD_LOCK_R ]
= ds_output_lock_r ; ds -> mMethods [ NE_DS_METHOD_LOCK_I ] = ds_lock_i ; ds
-> mMakeOutput [ NE_DS_METHOD_LOCK_I ] = ds_output_lock_i ; ds -> mMethods [
NE_DS_METHOD_LOCK2_R ] = ds_lock2_r ; ds -> mMakeOutput [
NE_DS_METHOD_LOCK2_R ] = ds_output_lock2_r ; ds -> mMethods [
NE_DS_METHOD_LOCK2_I ] = ds_lock2_i ; ds -> mMakeOutput [
NE_DS_METHOD_LOCK2_I ] = ds_output_lock2_i ; ds -> mMethods [
NE_DS_METHOD_SFO ] = ds_sfo ; ds -> mMakeOutput [ NE_DS_METHOD_SFO ] =
ds_output_sfo ; ds -> mMethods [ NE_DS_METHOD_SFP ] = ds_sfp ; ds ->
mMakeOutput [ NE_DS_METHOD_SFP ] = ds_output_sfp ; ds -> mMethods [
NE_DS_METHOD_INIT_R ] = ds_init_r ; ds -> mMakeOutput [ NE_DS_METHOD_INIT_R ]
= ds_output_init_r ; ds -> mMethods [ NE_DS_METHOD_INIT_I ] = ds_init_i ; ds
-> mMakeOutput [ NE_DS_METHOD_INIT_I ] = ds_output_init_i ; ds -> mMethods [
NE_DS_METHOD_LOG ] = SparkEV_c4aff755_1_ds_log ; ds -> mMakeOutput [
NE_DS_METHOD_LOG ] = ds_output_log ; ds -> mMethods [ NE_DS_METHOD_ASSERT ] =
SparkEV_c4aff755_1_ds_assert ; ds -> mMakeOutput [ NE_DS_METHOD_ASSERT ] =
ds_output_assert ; ds -> mMethods [ NE_DS_METHOD_PASSERT ] = ds_passert ; ds
-> mMakeOutput [ NE_DS_METHOD_PASSERT ] = ds_output_passert ; ds -> mMethods
[ NE_DS_METHOD_IASSERT ] = ds_iassert ; ds -> mMakeOutput [
NE_DS_METHOD_IASSERT ] = ds_output_iassert ; ds -> mMethods [
NE_DS_METHOD_DEL_T ] = ds_del_t ; ds -> mMakeOutput [ NE_DS_METHOD_DEL_T ] =
ds_output_del_t ; ds -> mMethods [ NE_DS_METHOD_DEL_V ] = ds_del_v ; ds ->
mMakeOutput [ NE_DS_METHOD_DEL_V ] = ds_output_del_v ; ds -> mMethods [
NE_DS_METHOD_DEL_V0 ] = ds_del_v0 ; ds -> mMakeOutput [ NE_DS_METHOD_DEL_V0 ]
= ds_output_del_v0 ; ds -> mMethods [ NE_DS_METHOD_DEL_TMAX ] = ds_del_tmax ;
ds -> mMakeOutput [ NE_DS_METHOD_DEL_TMAX ] = ds_output_del_tmax ; ds ->
mMethods [ NE_DS_METHOD_DXDELT_P ] = SparkEV_c4aff755_1_ds_dxdelt_p ; ds ->
mMakeOutput [ NE_DS_METHOD_DXDELT_P ] = ds_output_dxdelt_p ; ds -> mMethods [
NE_DS_METHOD_DXDELT ] = ds_dxdelt ; ds -> mMakeOutput [ NE_DS_METHOD_DXDELT ]
= ds_output_dxdelt ; ds -> mMethods [ NE_DS_METHOD_DUDELT_P ] = ds_dudelt_p ;
ds -> mMakeOutput [ NE_DS_METHOD_DUDELT_P ] = ds_output_dudelt_p ; ds ->
mMethods [ NE_DS_METHOD_DUDELT ] = ds_dudelt ; ds -> mMakeOutput [
NE_DS_METHOD_DUDELT ] = ds_output_dudelt ; ds -> mMethods [
NE_DS_METHOD_DTDELT_P ] = ds_dtdelt_p ; ds -> mMakeOutput [
NE_DS_METHOD_DTDELT_P ] = ds_output_dtdelt_p ; ds -> mMethods [
NE_DS_METHOD_DTDELT ] = ds_dtdelt ; ds -> mMakeOutput [ NE_DS_METHOD_DTDELT ]
= ds_output_dtdelt ; ds -> mMethods [ NE_DS_METHOD_OBS_EXP ] =
SparkEV_c4aff755_1_ds_obs_exp ; ds -> mMakeOutput [ NE_DS_METHOD_OBS_EXP ] =
ds_output_obs_exp ; ds -> mMethods [ NE_DS_METHOD_OBS_ACT ] =
SparkEV_c4aff755_1_ds_obs_act ; ds -> mMakeOutput [ NE_DS_METHOD_OBS_ACT ] =
ds_output_obs_act ; ds -> mMethods [ NE_DS_METHOD_OBS_ALL ] =
SparkEV_c4aff755_1_ds_obs_all ; ds -> mMakeOutput [ NE_DS_METHOD_OBS_ALL ] =
ds_output_obs_all ; ds -> mMethods [ NE_DS_METHOD_OBS_IL ] =
SparkEV_c4aff755_1_ds_obs_il ; ds -> mMakeOutput [ NE_DS_METHOD_OBS_IL ] =
ds_output_obs_il ; ds -> mMethods [ NE_DS_METHOD_DP_L ] = ds_dp_l ; ds ->
mMakeOutput [ NE_DS_METHOD_DP_L ] = ds_output_dp_l ; ds -> mMethods [
NE_DS_METHOD_DP_I ] = ds_dp_i ; ds -> mMakeOutput [ NE_DS_METHOD_DP_I ] =
ds_output_dp_i ; ds -> mMethods [ NE_DS_METHOD_DP_J ] = ds_dp_j ; ds ->
mMakeOutput [ NE_DS_METHOD_DP_J ] = ds_output_dp_j ; ds -> mMethods [
NE_DS_METHOD_DP_R ] = ds_dp_r ; ds -> mMakeOutput [ NE_DS_METHOD_DP_R ] =
ds_output_dp_r ; ds -> mMethods [ NE_DS_METHOD_QX ] = ds_qx ; ds ->
mMakeOutput [ NE_DS_METHOD_QX ] = ds_output_qx ; ds -> mMethods [
NE_DS_METHOD_QU ] = ds_qu ; ds -> mMakeOutput [ NE_DS_METHOD_QU ] =
ds_output_qu ; ds -> mMethods [ NE_DS_METHOD_QT ] = ds_qt ; ds -> mMakeOutput
[ NE_DS_METHOD_QT ] = ds_output_qt ; ds -> mMethods [ NE_DS_METHOD_Q1 ] =
ds_q1 ; ds -> mMakeOutput [ NE_DS_METHOD_Q1 ] = ds_output_q1 ; ds -> mMethods
[ NE_DS_METHOD_QX_P ] = SparkEV_c4aff755_1_ds_qx_p ; ds -> mMakeOutput [
NE_DS_METHOD_QX_P ] = ds_output_qx_p ; ds -> mMethods [ NE_DS_METHOD_QU_P ] =
ds_qu_p ; ds -> mMakeOutput [ NE_DS_METHOD_QU_P ] = ds_output_qu_p ; ds ->
mMethods [ NE_DS_METHOD_QT_P ] = ds_qt_p ; ds -> mMakeOutput [
NE_DS_METHOD_QT_P ] = ds_output_qt_p ; ds -> mMethods [ NE_DS_METHOD_Q1_P ] =
ds_q1_p ; ds -> mMakeOutput [ NE_DS_METHOD_Q1_P ] = ds_output_q1_p ; ds ->
mMethods [ NE_DS_METHOD_VAR_TOL ] = SparkEV_c4aff755_1_ds_var_tol ; ds ->
mMakeOutput [ NE_DS_METHOD_VAR_TOL ] = ds_output_var_tol ; ds -> mMethods [
NE_DS_METHOD_EQ_TOL ] = SparkEV_c4aff755_1_ds_eq_tol ; ds -> mMakeOutput [
NE_DS_METHOD_EQ_TOL ] = ds_output_eq_tol ; ds -> mMethods [ NE_DS_METHOD_LV ]
= SparkEV_c4aff755_1_ds_lv ; ds -> mMakeOutput [ NE_DS_METHOD_LV ] =
ds_output_lv ; ds -> mMethods [ NE_DS_METHOD_SLV ] =
SparkEV_c4aff755_1_ds_slv ; ds -> mMakeOutput [ NE_DS_METHOD_SLV ] =
ds_output_slv ; ds -> mMethods [ NE_DS_METHOD_NLDV ] =
SparkEV_c4aff755_1_ds_nldv ; ds -> mMakeOutput [ NE_DS_METHOD_NLDV ] =
ds_output_nldv ; ds -> mMethods [ NE_DS_METHOD_SCLV ] =
SparkEV_c4aff755_1_ds_sclv ; ds -> mMakeOutput [ NE_DS_METHOD_SCLV ] =
ds_output_sclv ; ds -> mMethods [ NE_DS_METHOD_IMIN ] =
SparkEV_c4aff755_1_ds_imin ; ds -> mMakeOutput [ NE_DS_METHOD_IMIN ] =
ds_output_imin ; ds -> mMethods [ NE_DS_METHOD_IMAX ] =
SparkEV_c4aff755_1_ds_imax ; ds -> mMakeOutput [ NE_DS_METHOD_IMAX ] =
ds_output_imax ; ds -> mMethods [ NE_DS_METHOD_DIMIN ] = ds_dimin ; ds ->
mMakeOutput [ NE_DS_METHOD_DIMIN ] = ds_output_dimin ; ds -> mMethods [
NE_DS_METHOD_DIMAX ] = ds_dimax ; ds -> mMakeOutput [ NE_DS_METHOD_DIMAX ] =
ds_output_dimax ; ds -> mEquationData = s_equation_data ; ds -> mCERData =
s_cer_data ; ds -> mICRData = s_icr_data ; ds -> mVariableData =
s_variable_data ; ds -> mDiscreteData = s_discrete_data ; ds ->
mObservableData = s_observable_data ; ds -> mMajorModeData =
s_major_mode_data ; ds -> mZCData = s_zc_data ; ds -> mRanges = s_range ; ds
-> mAssertData = s_assert_data ; ds -> mAssertRanges = s_assert_range ; ds ->
mParamAssertData = s_param_assert_data ; ds -> mParamAssertRanges =
s_param_assert_range ; ds -> mInitialAssertData = s_initial_assert_data ; ds
-> mInitialAssertRanges = s_initial_assert_range ; ds -> mEquationRanges =
s_equation_range ; ds -> mCERRanges = s_cer_range ; ds -> mICRRanges =
s_icr_range ; ds -> mLogicalParameters = s_logical_parameter_data ; ds ->
mIntegerParameters = s_integer_parameter_data ; ds -> mIndexParameters =
s_index_parameter_data ; ds -> mRealParameters = s_real_parameter_data ; _ds
-> mField0 = s_constant_table0 ; _ds -> mField1 = s_constant_table1 ; _ds ->
mField2 = s_constant_table2 ; _ds -> mField3 = s_constant_table3 ; _ds ->
mField4 = s_constant_table4 ; _ds -> mField5 = s_constant_table5 ; _ds ->
mField6 = s_constant_table6 ; ds -> mNumLargeArray = 7 ; return (
NeDynamicSystem * ) _ds ; } static int32_T ds_passert ( const NeDynamicSystem
* LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void )
t1 ; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_iassert ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_cer ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dxcer ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_ddcer ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_ddcer_p (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mDDCER_P ; out . mNumCol = 0ULL ; out . mNumRow = 0ULL ; out .
mJc [ 0 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_del_v ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_del_v0 ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_del_tmax ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_del_t ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dxdelt
( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_dudelt ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_dudelt_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mDUDELT_P ; out . mNumCol = 11ULL ; out . mNumRow = 0ULL ; out .
mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] =
0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out .
mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ]
= 0 ; out . mJc [ 11 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static
int32_T ds_dtdelt ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; (
void ) t2 ; return 0 ; } static int32_T ds_dtdelt_p ( const NeDynamicSystem *
LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDTDELT_P ;
out . mNumCol = 1ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] = 0 ; out . mJc
[ 1 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_cache_r ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_init_r ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_update_r ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_lock_r ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_cache_i ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_init_i ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_update_i ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_lock_i ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_update2_r ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_lock2_r ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_update2_i ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_lock2_i ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_sfp (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_sfo ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_duf_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDUF_P
; out . mNumCol = 11ULL ; out . mNumRow = 66ULL ; out . mJc [ 0 ] = 0 ; out .
mJc [ 1 ] = 1 ; out . mJc [ 2 ] = 2 ; out . mJc [ 3 ] = 3 ; out . mJc [ 4 ] =
4 ; out . mJc [ 5 ] = 7 ; out . mJc [ 6 ] = 8 ; out . mJc [ 7 ] = 8 ; out .
mJc [ 8 ] = 9 ; out . mJc [ 9 ] = 10 ; out . mJc [ 10 ] = 10 ; out . mJc [ 11
] = 10 ; out . mIr [ 0 ] = 22 ; out . mIr [ 1 ] = 23 ; out . mIr [ 2 ] = 24 ;
out . mIr [ 3 ] = 25 ; out . mIr [ 4 ] = 0 ; out . mIr [ 5 ] = 26 ; out . mIr
[ 6 ] = 27 ; out . mIr [ 7 ] = 0 ; out . mIr [ 8 ] = 58 ; out . mIr [ 9 ] =
59 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dtf ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_dtf_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; ( void ) LC ; out = t2 -> mDTF_P ; out . mNumCol = 1ULL ; out .
mNumRow = 66ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; ( void ) LC ; (
void ) t2 ; return 0 ; } static int32_T ds_ddf ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_ddf_p
( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mDDF_P ; out . mNumCol = 0ULL ; out . mNumRow = 66ULL ; out . mJc
[ 0 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_b (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t2 ,
NeDsMethodOutput * t3 ) { PmRealVector out ; ( void ) t2 ; ( void ) LC ; out
= t3 -> mB ; out . mX [ 0 ] = 3.3602150537634409E-5 ; out . mX [ 1 ] = 1.0 ;
out . mX [ 2 ] = 1.0 ; ( void ) LC ; ( void ) t3 ; return 0 ; } static
int32_T ds_b_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1
, NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC
; out = t2 -> mB_P ; out . mNumCol = 11ULL ; out . mNumRow = 66ULL ; out .
mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] =
0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out .
mJc [ 7 ] = 1 ; out . mJc [ 8 ] = 1 ; out . mJc [ 9 ] = 1 ; out . mJc [ 10 ]
= 2 ; out . mJc [ 11 ] = 3 ; out . mIr [ 0 ] = 17 ; out . mIr [ 1 ] = 20 ;
out . mIr [ 2 ] = 21 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static
int32_T ds_c ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_c_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; ( void ) LC ; out = t2 -> mC_P ; out . mNumCol = 1ULL ; out .
mNumRow = 66ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; ( void ) LC ; (
void ) t2 ; return 0 ; } static int32_T ds_tduf_p ( const NeDynamicSystem *
LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mTDUF_P ; out
. mNumCol = 11ULL ; out . mNumRow = 66ULL ; out . mJc [ 0 ] = 0 ; out . mJc [
1 ] = 1 ; out . mJc [ 2 ] = 2 ; out . mJc [ 3 ] = 3 ; out . mJc [ 4 ] = 4 ;
out . mJc [ 5 ] = 7 ; out . mJc [ 6 ] = 8 ; out . mJc [ 7 ] = 9 ; out . mJc [
8 ] = 10 ; out . mJc [ 9 ] = 11 ; out . mJc [ 10 ] = 12 ; out . mJc [ 11 ] =
13 ; out . mIr [ 0 ] = 22 ; out . mIr [ 1 ] = 23 ; out . mIr [ 2 ] = 24 ; out
. mIr [ 3 ] = 25 ; out . mIr [ 4 ] = 0 ; out . mIr [ 5 ] = 26 ; out . mIr [ 6
] = 27 ; out . mIr [ 7 ] = 0 ; out . mIr [ 8 ] = 17 ; out . mIr [ 9 ] = 58 ;
out . mIr [ 10 ] = 59 ; out . mIr [ 11 ] = 20 ; out . mIr [ 12 ] = 21 ; (
void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dwf ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_dwf_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; ( void ) LC ; out = t2 -> mDWF_P ; out . mNumCol = 0ULL ; out .
mNumRow = 66ULL ; out . mJc [ 0 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0
; } static int32_T ds_dpdxf ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dpdxf_p (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mDPDXF_P ; out . mNumCol = 4ULL ; out . mNumRow = 94ULL ; out .
mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] =
0 ; out . mJc [ 4 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static
int32_T ds_dnf ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1
, NeDsMethodOutput * t2 ) { PmRealVector out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mDNF ; out . mX [ 0 ] = - 1.0 ; out . mX [ 1 ] = 1.0 ; out . mX [
2 ] = - 1.0 ; out . mX [ 3 ] = - 1.0 ; out . mX [ 4 ] = 1.0 ; out . mX [ 5 ]
= - 1.0 ; out . mX [ 6 ] = 1.0 ; out . mX [ 7 ] = - 0.30465949820788529 ; out
. mX [ 8 ] = - 0.19534050179211471 ; out . mX [ 9 ] = - 0.99979596000816173 ;
out . mX [ 10 ] = 1.0 ; out . mX [ 11 ] = 0.2583452093044345 ; out . mX [ 12
] = - 0.99979596000816173 ; out . mX [ 13 ] = 1.0 ; out . mX [ 14 ] =
0.2583452093044345 ; out . mX [ 15 ] = - 1.0 ; out . mX [ 16 ] = 1.0 ; ( void
) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_freqs ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_icr ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out ; (
void ) t1 ; ( void ) LC ; out = t2 -> mICR ; out . mX [ 0 ] = 0.0 ; out . mX
[ 1 ] = 0.0 ; out . mX [ 2 ] = 0.0 ; out . mX [ 3 ] = 0.0 ; out . mX [ 4 ] =
0.0 ; out . mX [ 5 ] = 0.0 ; out . mX [ 6 ] = 0.0 ; out . mX [ 7 ] = 0.0 ;
out . mX [ 8 ] = 0.0 ; out . mX [ 9 ] = 0.0 ; out . mX [ 10 ] = 0.0 ; out .
mX [ 11 ] = 0.0 ; out . mX [ 12 ] = 0.0 ; out . mX [ 13 ] = 0.0 ; out . mX [
14 ] = 0.0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_icr_im ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmIntVector out ; ( void ) t1 ; ( void ) LC ; out =
t2 -> mICR_IM ; out . mX [ 0 ] = 3 ; out . mX [ 1 ] = 3 ; out . mX [ 2 ] = 3
; out . mX [ 3 ] = 3 ; out . mX [ 4 ] = 3 ; out . mX [ 5 ] = 3 ; out . mX [ 6
] = 3 ; out . mX [ 7 ] = 3 ; out . mX [ 8 ] = 3 ; out . mX [ 9 ] = 3 ; out .
mX [ 10 ] = 3 ; out . mX [ 11 ] = 3 ; out . mX [ 12 ] = 3 ; out . mX [ 13 ] =
3 ; out . mX [ 14 ] = 3 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static
int32_T ds_icr_id ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { PmBoolVector out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mICR_ID ; out . mX [ 0 ] = false ; out . mX [ 1 ] = false ; out .
mX [ 2 ] = false ; out . mX [ 3 ] = false ; out . mX [ 4 ] = false ; out . mX
[ 5 ] = false ; out . mX [ 6 ] = false ; out . mX [ 7 ] = false ; out . mX [
8 ] = false ; out . mX [ 9 ] = false ; out . mX [ 10 ] = false ; out . mX [
11 ] = false ; out . mX [ 12 ] = false ; out . mX [ 13 ] = false ; out . mX [
14 ] = false ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_icr_il ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmBoolVector out ; ( void ) t1 ; ( void ) LC ; out
= t2 -> mICR_IL ; out . mX [ 0 ] = true ; out . mX [ 1 ] = true ; out . mX [
2 ] = true ; out . mX [ 3 ] = true ; out . mX [ 4 ] = true ; out . mX [ 5 ] =
true ; out . mX [ 6 ] = true ; out . mX [ 7 ] = true ; out . mX [ 8 ] = true
; out . mX [ 9 ] = true ; out . mX [ 10 ] = true ; out . mX [ 11 ] = true ;
out . mX [ 12 ] = true ; out . mX [ 13 ] = true ; out . mX [ 14 ] = true ; (
void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dxicr ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_ddicr ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_ddicr_p (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mDDICR_P ; out . mNumCol = 0ULL ; out . mNumRow = 15ULL ; out .
mJc [ 0 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_tduicr_p ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mTDUICR_P ; out . mNumCol = 11ULL ; out . mNumRow = 15ULL ; out .
mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] =
0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out .
mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ]
= 0 ; out . mJc [ 11 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static
int32_T ds_icrm ( const NeDynamicSystem * LC , const NeDynamicSystemInput *
t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; (
void ) t2 ; return 0 ; } static int32_T ds_dxicrm ( const NeDynamicSystem *
LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1
; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_ddicrm ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_ddicrm_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDDICRM_P ; out . mNumCol =
0ULL ; out . mNumRow = 0ULL ; out . mJc [ 0 ] = 0 ; ( void ) LC ; ( void ) t2
; return 0 ; } static int32_T ds_dimin ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dimax ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_m ( const NeDynamicSystem * LC , const NeDynamicSystemInput
* t1 , NeDsMethodOutput * t2 ) { PmRealVector out ; ( void ) t1 ; ( void ) LC
; out = t2 -> mM ; out . mX [ 0 ] = - 0.8 ; out . mX [ 1 ] = - 0.1 ; out . mX
[ 2 ] = - 0.8 ; out . mX [ 3 ] = - 0.8 ; out . mX [ 4 ] = - 0.1 ; out . mX [
5 ] = - 0.8 ; out . mX [ 6 ] = - 1.0 ; out . mX [ 7 ] = 1.0 ; out . mX [ 8 ]
= 1.0 ; out . mX [ 9 ] = 1.0 ; out . mX [ 10 ] = 1.0 ; out . mX [ 11 ] = 1.0
; out . mX [ 12 ] = 1.0 ; out . mX [ 13 ] = 1.0 ; out . mX [ 14 ] = 1.0 ; out
. mX [ 15 ] = 1.0 ; out . mX [ 16 ] = 1.0 ; out . mX [ 17 ] = 1.0 ; out . mX
[ 18 ] = - 9.9999999999999991E-5 ; out . mX [ 19 ] = - 9.9999999999999991E-5
; out . mX [ 20 ] = 0.02 ; out . mX [ 21 ] = 0.02 ; ( void ) LC ; ( void ) t2
; return 0 ; } static int32_T ds_dxm ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_ddm ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_ddm_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; ( void ) LC ; out = t2 -> mDDM_P ; out . mNumCol = 0ULL ; out .
mNumRow = 22ULL ; out . mJc [ 0 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0
; } static int32_T ds_dum ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dum_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDUM_P
; out . mNumCol = 11ULL ; out . mNumRow = 22ULL ; out . mJc [ 0 ] = 0 ; out .
mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] =
0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ; out .
mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ] = 0 ; out . mJc [ 11 ]
= 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dtm ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_dtm_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; ( void ) LC ; out = t2 -> mDTM_P ; out . mNumCol = 1ULL ; out .
mNumRow = 22ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; ( void ) LC ; (
void ) t2 ; return 0 ; } static int32_T ds_dpm ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; (
void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dpm_p
( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ;
out = t2 -> mDPM_P ; out . mNumCol = 4ULL ; out . mNumRow = 22ULL ; out . mJc
[ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ;
out . mJc [ 4 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T
ds_vmm ( const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { PmBoolVector out ; ( void ) t1 ; ( void ) LC ; out
= t2 -> mVMM ; out . mX [ 0 ] = false ; out . mX [ 1 ] = false ; out . mX [ 2
] = false ; out . mX [ 3 ] = false ; out . mX [ 4 ] = false ; out . mX [ 5 ]
= false ; out . mX [ 6 ] = false ; out . mX [ 7 ] = false ; out . mX [ 8 ] =
false ; out . mX [ 9 ] = false ; out . mX [ 10 ] = false ; out . mX [ 11 ] =
false ; out . mX [ 12 ] = false ; out . mX [ 13 ] = false ; out . mX [ 14 ] =
false ; out . mX [ 15 ] = false ; out . mX [ 16 ] = false ; out . mX [ 17 ] =
false ; out . mX [ 18 ] = false ; out . mX [ 19 ] = false ; out . mX [ 20 ] =
false ; out . mX [ 21 ] = false ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_dp_l ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dp_i ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_dp_j ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dp_r ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_qx ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_qu ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_qt ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void )
LC ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_q1 ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void ) t2 ; return 0 ; }
static int32_T ds_qu_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; ( void ) LC ; out = t2 -> mQU_P ; out . mNumCol = 11ULL ; out .
mNumRow = 66ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ]
= 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out .
mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] =
0 ; out . mJc [ 10 ] = 0 ; out . mJc [ 11 ] = 0 ; ( void ) LC ; ( void ) t2 ;
return 0 ; } static int32_T ds_qt_p ( const NeDynamicSystem * LC , const
NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern out ;
( void ) t1 ; ( void ) LC ; out = t2 -> mQT_P ; out . mNumCol = 1ULL ; out .
mNumRow = 66ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; ( void ) LC ; (
void ) t2 ; return 0 ; } static int32_T ds_q1_p ( const NeDynamicSystem * LC
, const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mQ1_P ; out .
mNumCol = 1ULL ; out . mNumRow = 66ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1
] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_duy (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_duy_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDUY_P ; out . mNumCol = 11ULL
; out . mNumRow = 28ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; out .
mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ; out . mJc [ 5 ] =
0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ; out . mJc [ 8 ] = 0 ; out .
mJc [ 9 ] = 0 ; out . mJc [ 10 ] = 0 ; out . mJc [ 11 ] = 0 ; ( void ) LC ; (
void ) t2 ; return 0 ; } static int32_T ds_mduy_p ( const NeDynamicSystem *
LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) {
PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mMDUY_P ; out
. mNumCol = 11ULL ; out . mNumRow = 28ULL ; out . mJc [ 0 ] = 0 ; out . mJc [
1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc [ 4 ] = 0 ;
out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ; out . mJc [
8 ] = 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ] = 0 ; out . mJc [ 11 ] = 0 ;
( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_tduy_p ( const
NeDynamicSystem * LC , const NeDynamicSystemInput * t1 , NeDsMethodOutput *
t2 ) { PmSparsityPattern out ; ( void ) t1 ; ( void ) LC ; out = t2 ->
mTDUY_P ; out . mNumCol = 11ULL ; out . mNumRow = 28ULL ; out . mJc [ 0 ] = 0
; out . mJc [ 1 ] = 0 ; out . mJc [ 2 ] = 0 ; out . mJc [ 3 ] = 0 ; out . mJc
[ 4 ] = 0 ; out . mJc [ 5 ] = 0 ; out . mJc [ 6 ] = 0 ; out . mJc [ 7 ] = 0 ;
out . mJc [ 8 ] = 0 ; out . mJc [ 9 ] = 0 ; out . mJc [ 10 ] = 0 ; out . mJc
[ 11 ] = 0 ; ( void ) LC ; ( void ) t2 ; return 0 ; } static int32_T ds_dty (
const NeDynamicSystem * LC , const NeDynamicSystemInput * t1 ,
NeDsMethodOutput * t2 ) { ( void ) t1 ; ( void ) LC ; ( void ) LC ; ( void )
t2 ; return 0 ; } static int32_T ds_dty_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmSparsityPattern
out ; ( void ) t1 ; ( void ) LC ; out = t2 -> mDTY_P ; out . mNumCol = 1ULL ;
out . mNumRow = 28ULL ; out . mJc [ 0 ] = 0 ; out . mJc [ 1 ] = 0 ; ( void )
LC ; ( void ) t2 ; return 0 ; }
