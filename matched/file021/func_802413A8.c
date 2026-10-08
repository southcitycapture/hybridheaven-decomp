#include "common.h"

extern void func_8012FE50(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4);
extern s16 D_801BBBF6;

void func_802413A8(s32 arg0, s32 arg1) {
    D_801BBBF6 = 1;
    func_8012FE50(0x1E, 0x54, 6, 1, 1);
}
