#include "context.h"
extern void func_801E95D4(void *, s32, void *, u16, s32);
extern s32 D_80010550(s32, void *);
void func_8037D320(func_8037D1DC_Arg0 *arg0, s32 arg1) {
    func_8037D1DC_S1 *t;
    u16 r;
    t = arg0->unk5C;
    D_801BBBF0.unkE8->unk2C->unk24 = 1.0f;
    D_801BBBF0.unkE0->unk2C->unk12 = 0x1E;
    r = D_80010550(arg1, t);
    func_801E95D4(arg0, arg1, t, r, 1);
}
