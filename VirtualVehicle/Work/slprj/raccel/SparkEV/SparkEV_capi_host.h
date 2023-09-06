#ifndef RTW_HEADER_SparkEV_cap_host_h__
#define RTW_HEADER_SparkEV_cap_host_h__
#ifdef HOST_CAPI_BUILD
#include "rtw_capi.h"
#include "rtw_modelmap_simtarget.h"
#include "OpenLoopBraking_capi_host.h"
#include "DriverPassThrough_capi_host.h"
#include "EvPowertrainController2EM_capi_host.h"
typedef struct { rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMappingInfo *
childMMI [ 3 ] ; OpenLoopBraking_host_DataMapInfo_T child0 ;
DriverPassThrough_host_DataMapInfo_T child1 ;
EvPowertrainController2EM_host_DataMapInfo_T child2 ; }
SparkEV_host_DataMapInfo_T ;
#ifdef __cplusplus
extern "C" {
#endif
void SparkEV_host_InitializeDataMapInfo ( SparkEV_host_DataMapInfo_T *
dataMap , const char * path ) ;
#ifdef __cplusplus
}
#endif
#endif
#endif
