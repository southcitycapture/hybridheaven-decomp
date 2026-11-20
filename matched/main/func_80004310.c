#include "common.h"
extern u8 D_800892B0[];
extern s32 D_800894F4[];


typedef struct func_80004310_StructState {
    u8 pad[0x1BD];
    u8 count;
    u8 pad2[0x86];
    s32 values[256];
} func_80004310_StructState;

void func_80004310(s32 arg0) {
    s8 *counter = (s8 *) &D_800892B0[0x1BD];
    D_800894F4[*(u8 *) counter] = arg0;
    *counter = (u8) *counter + 1;
}
