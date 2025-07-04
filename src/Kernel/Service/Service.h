#ifndef     __LUNOVERSIS_KERNEL_SERVICE_H__
#define     __LUNOVERSIS_KERNEL_SERVICE_H__


#include    "../../Common.h"
#include    "../../Error/Error.h"
#include    "../Handle/Handle.h"

#define     READ    1
#define     WRITE   2


OBJ Kernel_Service_Obj {
    Kernel_Handle_Obj   handle;
    string              name;
    UCHAR               flags;

}   Kernel_Service_Obj,
   *Kernel_Service_Ptr;

/* Constructor */
Error   stdcall
Kernel_Service( Kernel_Service_Ptr  s,
                string              name,
                UCHAR               flags);

/* Destructor */
VOID    stdcall
_Kernel_Service( Kernel_Service_Ptr  s);

#endif  //  __LUNOVERSIS_KERNEL_SERVICE_H__
