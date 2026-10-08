#include "context.h"

extern s32 func_80010550(s32, s32);
extern void func_800112B0(s32, s32, s32, void *);
extern void func_80362234(void);

void func_803621A8(u8 *arg0, s32 arg1) {
    s32 temp_a2;
    s32 sp24;
    u8 *sp1C;

    temp_a2 = *(s32 *)(arg0 + 0x5C);
    if ((s32)arg0 == D_801BBCCC) {
        sp1C = D_801BC03C;
    } else {
        sp1C = D_801BC3D8;
    }
    sp24 = temp_a2;
    func_800112B0(arg1, temp_a2 + 0x22, temp_a2, arg0);
    if (func_80010550(arg1, sp24) != 0) {
        func_800058DC(arg0, func_80362234);
    }
    sp1C[0x392] = 0;
}
