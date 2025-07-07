#ifndef     __LUNOVERSIS_KERNEL_HANDLE_H__
#define     __LUNOVERSIS_KERNEL_HANDLE_H__

#include    "../../Common.h"
#include    "../../Error/Error.h"

OBJ Kernel_Handle_Obj {
    USHORT  id;
    bool    alive;
    bool    mut;

    struct {
        size_t  len;
        PVOID   buf;
    };
}   Kernel_Handle_Obj,
   *Kernel_Handle_Ptr;

/* Constructors */
MUNICH_API  Error   stdcall
Kernel_Handle(  USHORT              id,
                Kernel_Handle_Ptr   h,
                bool                mut);
MUNICH_API  Error   stdcall
Kernel_HandleA( STRING              name,
                Kernel_Handle_Ptr   h,
                bool                mut);

/* Destructor */
MUNICH_API  VOID    stdcall
_Kernel_Handle(Kernel_Handle_Ptr h);

#endif  //  __LUNOVERSIS_KERNEL_HANDLE_H__
