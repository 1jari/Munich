#include    <stdio.h>
#include    "../Lunoversis/Lunoversis.h"

int
main(   int     argc,
        char  **argv) {

    Kernel_State_Obj    k = {};

    Error ks_err  = Kernel_State(&k);

    Kernel_Handle_Obj handle = {};
    Kernel_HandleA("teste", &handle, false);

    Kernel_State_Load(handle, &k);

    if(ks_err.code == -1) {
        printf("Kernel>State: %s\n", ks_err.msg);
        exit(-1);
    }

    printf("Kernel>State: Created!\n");

    _Kernel_State(&k);
    return 0;
}
