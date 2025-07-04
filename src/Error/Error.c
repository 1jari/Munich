#include    "Error.h"

Error   Err(char   *msg,
            LONG    code) {
    Error   e;
    e.msg   =   msg;
    e.code  =   code;
    return e;
}
