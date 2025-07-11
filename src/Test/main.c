#include    <stdio.h>
#include    "../Lunoversis/Lunoversis.h"

int
main(   int     argc,
        char  **argv) {

    Runtime_Session_Obj Session = {};

    Error ss_Err  = Runtime_Session(&Session);

    if(ss_Err.code == LUNO_CERR_FATAL) {
        printf("Runtime>Session: %s / Quitting...\n", ss_Err.msg);
        exit(-1);
    }

    printf("Runtime>Session: Created!\n");

    while(Session.Running) {

    }

    printf("Runtime>Session: Quitting...\n");

    _Runtime_Session(&Session);
    return 0;
}
