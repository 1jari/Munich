#ifndef     __LUNOVERSIS_RUNTIME_SESSION_H__
#define     __LUNOVERSIS_RUNTIME_SESSION_H__

#include    "../../Common.h"
#include    "../Error/Error.h"

#include    "../Kernel/Kernel.h"

OBJ Runtime_Session_Obj {
    Kernel_State_Obj    State;
}   Runtime_Session_Obj,
   *Runtime_Session_Ptr;

/* Constructor */
MUNICH_API  Error   stdcall
Runtime_Session(    Runtime_Session_Ptr ss);

/* Destructor */
MUNICH_API  VOID    stdcall
_Runtime_Session(   Runtime_Session_Ptr ss);


#endif  //  __LUNOVERSIS_RUNTIME_SESSION_H__
