#ifndef     __LUNOVERSIS_KERNEL_STATE_H__
#define     __LUNOVERSIS_KERNEL_STATE_H__

#include    "../../Common.h"
#include    "../../Error/Error.h"

#include    "../Handle/Handle.h"
#include    "../Service/Service.h"

OBJ Kernel_State_Obj {
    struct {
        size_t              Handle_List_Idx;
        Kernel_Handle_Ptr   Handle_List_Buf;
        Kernel_Handle_Ptr   Handle_List_Current;
    };
}   Kernel_State_Obj,
   *Kernel_State_Ptr;

/* Constructor */
MUNICH_API  Error               stdcall
Kernel_State(       Kernel_State_Ptr    s);

/* Instructions */
MUNICH_API  Error               stdcall
Kernel_State_Load(  Kernel_Handle_Obj   h,
                    Kernel_State_Ptr    s);

/* Getter */
MUNICH_API  Kernel_Handle_Ptr   stdcall
Kernel_State_By_ID( USHORT              id,
                    Kernel_State_Ptr    s);

/* Destructor */
MUNICH_API  VOID    stdcall
_Kernel_State(      Kernel_State_Ptr    s);

#endif  //  __LUNOVERSIS_KERNEL_STATE_H__
