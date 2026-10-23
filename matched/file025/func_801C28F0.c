#include "context.h"
typedef struct func_801C28F0_Struct { s32 a,b,c,d; } func_801C28F0_Struct;
extern func_801C28F0_Struct D_801D9FD8;
extern u32 D_801D9F30[];
void func_801C28F0(func_801C28F0_Struct *arg0) {
    D_801D9FD8 = *arg0;
    D_801D9FD8.a *= 4;
    D_801D9FD8.b *= 4;
    D_801D9FD8.c = 0x80;
    D_801D9FD8.d = 0x80;
    D_801D9F30[0x26] = 0xF2000000 | ((D_801D9FD8.a & 0xFFF) << 12) | (D_801D9FD8.b & 0xFFF), D_801D9F30[0x27] = ((D_801D9FD8.c & 0xFFF) << 12) | (D_801D9FD8.d & 0xFFF);
}
