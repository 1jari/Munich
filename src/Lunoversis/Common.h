#ifndef     __LUNOVERSIS_COMMON_H__
#define     __LUNOVERSIS_COMMON_H__

#include    <stdbool.h>
#include    <stdio.h>
#include    <stdint.h>
#include    <stdlib.h>
#include    <string.h>

#define     MUNICH_VERSION      "0.0.1"
#define     MUNICH_MOTIF        "Os nossos dias serao pra sempre"
#define     MUNICH_DATE         "7/2025"

#ifdef      _WIN32

#ifdef      MUNICH_IMPORT
#define     MUNICH_API      __declspec(dllimport)
#else   //  MUNICH_IMPORT
#define     MUNICH_API      __declspec(dllexport)
#endif  //  MUNICH_IMPORT
#else   //  _WIN32
#define     MUNICH_API
#endif  //  _WIN32

#define     VOID                void
#define     OBJ                 typedef struct

#ifndef     stdcall
#define     stdcall             __stdcall
#endif //   stdcall

typedef     VOID*               PVOID;
typedef     char*               PCHAR;

typedef     int                 INT;
typedef     unsigned int        UINT;
typedef     PCHAR               STRING;

typedef     char                CHAR;
typedef     unsigned char       UCHAR;
typedef     short               SHORT;
typedef     unsigned short      USHORT;
typedef     long                LONG;
typedef     unsigned long       ULONG;
typedef     long long           LONGLONG;
typedef     unsigned long long  ULONGLONG;

static  USHORT  stdcall
Generate_Hash(      STRING  str) {
    int r = 0;
    for(int i = 0; i < strlen(str); i++) {
        CHAR c  =   str[i];
        r       =   r + c;
    }
    return r;
}

#endif  //  __LUNOVERSIS_COMMON_H__
