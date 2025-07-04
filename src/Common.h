#ifndef     __LUNOVERSIS_COMMON_H__
#define     __LUNOVERSIS_COMMON_H__

#include    <stdbool.h>
#include    <stdio.h>
#include    <stdint.h>
#include    <stdlib.h>

#define     MUNICH_VERSION      "0.0.1"
#define     MUNICH_MOTIF        "Os nossos dias serao pra sempre"
#define     MUNICH_DATE         "7/2025"

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
