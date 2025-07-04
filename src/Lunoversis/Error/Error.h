#ifndef     __LUNOVERSIS_ERROR_H__
#define     __LUNOVERSIS_ERROR_H__

#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>

#include    "../Common.h"

#define     LUNO_CERR_FATAL     -1
#define     LUNO_CERR_OK        0

#define     LUNO_ERROR_FATAL(msg)   (Err(msg,   LUNO_CERR_FATAL))
#define     LUNO_ERROR_OK()         (Err(NULL,  LUNO_CERR_OK))

OBJ Error {
    char   *msg;
    LONG    code;
}   Error,
   *Error_Ptr;

Error   Err(char   *msg,
            LONG    code) ;

#endif  //  __LUNOVERSIS_ERROR_H__
