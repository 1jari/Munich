#ifndef     __LUNOVERSIS_KERNEL_STATE_H__
#define     __LUNOVERSIS_KERNEL_STATE_H__

#include    "../../Common.h"
#include    "../../Error/Error.h"

#include    "../Handle/Handle.h"

OBJ Kernel_State_Obj {
    ULONG   system_flags;

    struct {
        size_t              Handle_List_Len;
        Kernel_Handle_Ptr   Handle_List;
    };
}   Kernel_State_Obj,
   *Kernel_State_Ptr;

/* Constructor */
Error   Kernel_State(Kernel_State_Ptr   s);
VOID   _Kernel_State(Kernel_State_Ptr   s);

#endif  //  __LUNOVERSIS_KERNEL_STATE_H__
