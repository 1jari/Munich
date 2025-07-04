#ifndef     __LUNOVERSIS_ERROR_H__
#define     __LUNOVERSIS_ERROR_H__

#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>

#include    "../Common.h"

#define     ERROR_FATAL(msg)    (Err(msg, -1))
#define     ERROR_OK()          (Err(NULL, 0))

OBJ Error {
    char   *msg;
    LONG    code;
}   Error,
   *Error_Ptr;

Error   Err(char   *msg,
            LONG    code) ;

#endif  //  __LUNOVERSIS_ERROR_H__
