#include "context.h"

extern void func_80010550(s32, s32);
extern void func_800111E0(s32, s32);
extern void func_8013AE20(s32, s32, s32);
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];

void func_8036B0D4(void *arg0, s32 arg1) {
    s32 sp1C;
    u8 *var_v0;

    sp1C = *(s32 *) ((u8 *) arg0 + 0x5C);
    if ((s32) arg0 == D_801BBCCC) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    var_v0[0x32] = var_v0[0x32] & 0xFF1F;
    func_8013AE20((s32) arg0, arg1, 0);
    func_800111E0(arg1, sp1C + 0x22);
    func_80010550(arg1, sp1C);
}
