#include    "State.h"

/* Constructor */
Error   Kernel_State(Kernel_State_Ptr   s) {

    /* Try to allocate some memory for list */
    s->Handle_List_Len  =   0;
    s->Handle_List      =   (Kernel_Handle_Ptr)malloc(sizeof(Kernel_Handle_Obj));

    if(!s->Handle_List) {
        return  ERROR_FATAL("Could not alloc handle list!");
    }

    return  ERROR_OK();
}

/* Destructor */
VOID   _Kernel_State(Kernel_State_Ptr   s) {
    if(s) {
        if(s->Handle_List) {
            free(s->Handle_List);
        }
    }
}
