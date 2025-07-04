#ifndef     __LUNOVERSIS_COMMON_H__
#define     __LUNOVERSIS_COMMON_H__

#include    <stdbool.h>
#include    <stdio.h>
#include    <stdint.h>
#include    <stdlib.h>

#define     VOID                void
#define     OBJ                 typedef struct

/* Just because i am lazy enough to hate pressing shift */
#ifndef     null
#define     null                ((void*)0)
#endif  //  null

#ifndef     stdcall
#define     stdcall             __stdcall
#endif //   stdcall

typedef     VOID*               PVOID;
typedef     char                CHAR;
typedef     unsigned char       UCHAR;
typedef     int                 INT;
typedef     unsigned int        UINT;
typedef     long                LONG;
typedef     unsigned long       ULONG;
typedef     short               SHORT;
typedef     unsigned short      USHORT;
typedef     char*               PCHAR;
typedef     PCHAR               string;


#endif  //  __LUNOVERSIS_COMMON_H__
