#ifndef struct__NeDynamicSystemTag
#define struct__NeDynamicSystemTag
typedef struct _NeDynamicSystemTag { NeDynamicSystem mBase ; int32_T mRefCnt
; PmAllocator mAlloc ; real_T * mField0 ; real_T * mField1 ; real_T * mField2
; real_T * mField3 ; real_T * mField4 ; real_T * mField5 ; real_T * mField6 ;
} _NeDynamicSystem ;
#else
typedef struct _NeDynamicSystemTag _NeDynamicSystem ;
#endif
