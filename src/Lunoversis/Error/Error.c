#include    "Error.h"

Error   Err(STRING  msg,
            LONG    code) {
    Error   e;
    e.msg   =   msg;
    e.code  =   code;
    return e;
}
