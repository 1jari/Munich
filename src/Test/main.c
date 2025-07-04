#include    <stdio.h>
#include    <Lunoversis.h>

int
main(   int     argc,
        char  **argv) {

    Kernel_State_Obj    k = {};

    Error ks_err  = Kernel_State(&k);
    if(ks_err.code == -1) {
        printf("Kernel>State: %s\n", ks_err.msg);
        exit(-1);
    }

    printf("Kernel>State: Created!\n");

    _Kernel_State(&k);
    return 0;
}
