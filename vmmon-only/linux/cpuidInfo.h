#ifndef __CPUID_INFO_H__
#define __CPUID_INFO_H__
#include "vm_basic_types.h"

typedef struct CpuidInfo CpuidInfo;
#define SVM_NPT             0
#define SVM_NRIP            1
#define SVM_FLUSH_BY_ASID   2
#define CpuidInfo_Vendor(c) 0
#define CpuidInfo_Version(c) 0
#define CpuidInfo_IsSet(f, c) TRUE

/* x86svm.h için eksik olan kritik veri tipleri */
typedef uint32 AccessMode;
#define ACCESS_MODE_WRITE 1
#define ACCESS_MODE_READ  0

#endif
