#include    "State.h"

/* Constructor */
MUNICH_API  Error   stdcall
Kernel_State(Kernel_State_Ptr   s) {

    /* Try to allocate some memory for handle list */
    s->Handle_List_Idx  =   0;
    s->Handle_List_Buf  =   (Kernel_Handle_Ptr)malloc(sizeof(Kernel_Handle_Obj));

    if(!s->Handle_List_Buf) {
        return  LUNO_ERROR_FATAL("Could not alloc handle list!");
    }

    return  LUNO_ERROR_OK();
}

/* Instructions */
MUNICH_API  Error   stdcall
Kernel_State_Load(  Kernel_Handle_Obj   h,
                    Kernel_State_Ptr    s) {
    if(!s) {
        return  LUNO_ERROR_FATAL("Invalid Kernel State pointer!");
    }

    /* Reallocate memory for buffer */
    s->Handle_List_Buf  =
        (Kernel_Handle_Ptr)realloc(s->Handle_List_Buf, (s->Handle_List_Idx + 1) * sizeof(Kernel_Handle_Obj));

    /* Set current index as >h< */
    s->Handle_List_Buf[s->Handle_List_Idx] =    h;

    /* Set current pointer */
    s->Handle_List_Current  =
        &s->Handle_List_Buf[s->Handle_List_Idx];

    /* Increase the index */
    s->Handle_List_Idx++;

    return  LUNO_ERROR_OK();
}

MUNICH_API  Kernel_Handle_Ptr   stdcall
Kernel_State_By_ID( USHORT              id,
                    Kernel_State_Ptr    s) {
    /* Set default result as null */
    Kernel_Handle_Ptr   r   = NULL;

    /* If pointer is valid... */
    if(s) {
        /* Search by the entire buffer */
        for(int i = 0; i < (s->Handle_List_Idx); i++) {

            /* Current Handle */
            Kernel_Handle_Ptr c = &s->Handle_List_Buf[i];

            if(id == c->id) {
                r = c;
            }
        }
    }
    /* Else, return null pointer */
    return r;
}
/* Destructor */
MUNICH_API  VOID   stdcall
_Kernel_State(Kernel_State_Ptr   s) {
    if(s) {
        if(s->Handle_List_Buf) {
            free(s->Handle_List_Buf);
        }
    }
}
