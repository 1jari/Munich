#ifndef     __LUNOVERSIS_RUNTIME_KERNEL_SERVICE_H__
#define     __LUNOVERSIS_RUNTIME_KERNEL_SERVICE_H__


#include    "../../../Common.h"
#include    "../../Error/Error.h"
#include    "../Handle/Handle.h"

#define     READ    1
#define     WRITE   2


OBJ Kernel_Service_Obj {
    Kernel_Handle_Obj   handle;
    UCHAR               flags;

}   Kernel_Service_Obj,
   *Kernel_Service_Ptr;

/* Constructor */
MUNICH_API  Error   stdcall
Kernel_Service( Kernel_Service_Ptr  s,
                STRING              name,
                UCHAR               flags);

/* Destructor */
MUNICH_API  VOID   stdcall
_Kernel_Service( Kernel_Service_Ptr  s);

#endif  //  __LUNOVERSIS_RUNTIME_KERNEL_SERVICE_H__
