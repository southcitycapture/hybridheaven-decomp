#include "context.h"

extern void func_80011198(s32, void *);
extern void func_8013AE20(void *, s32, s32);
extern void func_803602D4(void *, s32, void *);
extern s32 D_8038CC14;
extern void func_8036FAA0(void);

void func_8036F9B0(void *arg0, s32 arg1) {
    u8 *var_v0;
    u8 *var_v1;
    u8 *temp_a2;

    if ((s32) arg0 == D_801BBCCC) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    if ((s32) arg0 != D_801BBCCC) {
        var_v1 = D_801BC03C;
    } else {
        var_v1 = D_801BC3D8;
    }
    temp_a2 = *(u8 **) ((u8 *) arg0 + 0x5C);
    D_8038CC14 = 0;
    var_v0[0x32] = (u8) (var_v0[0x32] & 0xFF1F);
    var_v0[0x2E8] = 0;
    var_v0[0x32C] = 0;
    var_v0[0x2DE] = 0;
    *(f32 *) (var_v0 + 0x2EC) = 1.0f;
    var_v1[0x2F8] = 0;
    var_v0[0x2F8] = 0;
    var_v0[0x2FA] = 0;
    var_v0[0x394] = 0;
    func_803602D4(arg0, arg1, temp_a2);
    temp_a2[0x84] = 0;
    *(f32 *) (var_v0 + 0x2F4) = 0.0f;
    func_80011198(arg1, temp_a2);
    func_8013AE20(arg0, arg1, 0);
    func_800058DC((s32) arg0, (void *) func_8036FAA0);
}
