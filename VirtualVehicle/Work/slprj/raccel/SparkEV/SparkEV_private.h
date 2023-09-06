#ifndef RTW_HEADER_SparkEV_private_h_
#define RTW_HEADER_SparkEV_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "SparkEV.h"
#include "SparkEV_types.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
    ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
    }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((ptr));\
    (ptr) = (NULL);\
    }
#else
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((void *)(ptr));\
    (ptr) = (NULL);\
    }
#endif
#endif
extern void kkt5tjhslu ( real_T rtp_IC , ejm5hae4gj * localB ) ; extern void
bnlff5ayna ( SimStruct * rtS_p , mgxctp3zid * localDW ) ; extern void
aup0omwjn5 ( mgxctp3zid * localDW ) ; extern void fuob0ddam2 ( SimStruct *
rtS_i , boolean_T l0blttywkq , real_T epomb1gr42 , ejm5hae4gj * localB ,
mgxctp3zid * localDW ) ;
#if defined(MULTITASKING)
#error Models using the variable step solvers cannot define MULTITASKING
#endif
#endif
