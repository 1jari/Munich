#include    "Service.h"

/* Constructor */
Error   stdcall
Kernel_Service( Kernel_Service_Ptr  s,
                STRING              name,
                UCHAR               flags) {
    if(!s) {
        return LUNO_ERROR_FATAL("Invalid Service Ptr!");
    }

    s->flags  = flags;

    /* Try to initialize handle */
    Error   h_err =   Kernel_HandleA(   name,
                                        &s->handle,
                                        false);

    /* If failed, then carry the error */
    if(h_err.code == LUNO_CERR_FATAL) {
        return  h_err;
    }

    return  LUNO_ERROR_OK();
}

/* Destructor */
VOID    stdcall
_Kernel_Service( Kernel_Service_Ptr     s) {
    if(s) {
        _Kernel_Handle(&s->handle);
    }
}
