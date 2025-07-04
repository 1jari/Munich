#include    "State.h"

/* Constructor */
MUNICH_API  Error   stdcall
Kernel_State(Kernel_State_Ptr   s) {

    /* Try to allocate some memory for handle list */
    s->Handle_List_Len  =   0;
    s->Handle_List      =   (Kernel_Handle_Ptr)malloc(sizeof(Kernel_Handle_Obj));

    if(!s->Handle_List) {
        return  LUNO_ERROR_FATAL("Could not alloc handle list!");
    }

    /* Try to allocate some memory for service list */
    s->Service_List_Len =   0;
    s->Service_List     =   (Kernel_Service_Ptr)malloc(sizeof(Kernel_Service_Obj));

    if(!s->Service_List) {
        return  LUNO_ERROR_FATAL("Could not alloc service list!");
    }

    return  LUNO_ERROR_OK();
}

/* Destructor */
MUNICH_API  VOID   stdcall
_Kernel_State(Kernel_State_Ptr   s) {
    if(s) {
        if(s->Handle_List) {
            free(s->Handle_List);
        }
    }
}
