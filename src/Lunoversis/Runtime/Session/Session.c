#include    "Session.h"


/* Constructor */
MUNICH_API  Error   stdcall
Runtime_Session(    Runtime_Session_Ptr ss) {

    /* Check if the Session Ptr is valid */
    if(!ss) {
        return  LUNO_ERROR_FATAL("Invalid Session Ptr");
    }

    /* Try to initiate Kernel State */
    Error   ks_Err  =   Kernel_State(&ss->State);

    if(ks_Err.code == LUNO_CERR_FATAL) {
        return  ks_Err;
    }

    return  LUNO_ERROR_OK();
}

/* Destructor */
MUNICH_API  VOID    stdcall
_Runtime_Session(   Runtime_Session_Ptr ss) {
    if(ss) {
        _Kernel_State(&ss->State);
    }
}
