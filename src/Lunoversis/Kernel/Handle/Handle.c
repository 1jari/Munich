#include    "Handle.h"

/* Constructor */
MUNICH_API  Error   stdcall
Kernel_Handle(  USHORT              id,
                Kernel_Handle_Ptr   h,
                bool                mut) {

    h->id   =   id;     /* Set ID */
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

MUNICH_API  Error   stdcall
Kernel_HandleA( STRING              name,
                Kernel_Handle_Ptr   h,
                bool                mut) {
    return  Kernel_Handle(Generate_Hash(name), h, mut);
}

/* Destructor */
MUNICH_API  VOID   stdcall
_Kernel_Handle(Kernel_Handle_Ptr h) {
    if(h) {
        if(h->buf) {
            free(h->buf);
        }
    }
}
