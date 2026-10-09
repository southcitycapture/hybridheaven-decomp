#include "context.h"
extern u8 D_8038CD70[];
extern void func_80234ED4(void *arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4);
u8 func_802362B8(void *arg0);

typedef struct func_802365E0_Struct {
    u8 pad0[0xA3];
    s8 unkA3;
    u8 pad1[0x3];
    u8 unkA7;
    u8 pad2[0x2];
    u8 unkAA;
    u8 pad3[0x5];
    void *unkB0;
} func_802365E0_Struct;

void func_802365E0(func_802365E0_Struct *arg0, s32 arg1) {
    arg0->unkAA = 2;
    arg0->unkB0 = D_8038CD70;
    arg0->unkA7 = D_8038CD70[0];
    arg0->unkA3 = func_802362B8(arg0);
    func_80234ED4(arg0, arg1, 0, 1, 2);
}
