#include    "Handle.h"

/* Constructor */
Error   stdcall
Kernel_Handle(Kernel_Handle_Ptr h,  bool    mut) {

    h->mut  =   mut;    /* Set mutable flag */
    h->len  =   0;      /* Set initial length as 0 */

    /* Try to allocate some memory for buffer */
    h->buf  =   (PVOID)malloc(sizeof(ULONG));

    /* If failed, then quit */
    if(!h->buf) {
        return  LUNO_ERROR_FATAL("Could not alloc handle buf!");
    }

    /* Frankenstein' it */
    h->alive  = true;

    return  LUNO_ERROR_OK();
}

/* Destructor */
VOID    stdcall
_Kernel_Handle(Kernel_Handle_Ptr h) {
    if(h) {
        if(h->buf) {
            free(h->buf);
        }
    }
}
