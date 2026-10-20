#include "context.h"

extern func_8036D30C_Anim D_80387B20;
extern void func_803602D4(void *, s32);
extern void func_80366278(void);

void func_8036DB90(struct func_8036D9F8_Arg *arg0, s32 arg1) {
    s32 obj;
    func_8036D30C_State *state;
    func_8036D30C_Anim anim;

    obj = arg0->unk5C;
    if ((s32)arg0 == D_801BBCCC) {
        state = (func_8036D30C_State *)D_801BC03C;
    } else {
        state = (func_8036D30C_State *)D_801BC3D8;
    }
    anim = D_80387B20;
    func_802237B0(arg0, 1);
    if (func_80010550(arg1, obj)) {
        *((u8 *)state + 0x30) &= 0xFFFE;
        state->b30_7 = 0;
        state->b31_65 = 0;
        state->b38_7 = 0;
        state->b38_4 = 0;
        *((u8 *)state + 0x2FA) = 0;
        func_803602D4(arg0, arg1);
        if (state->b31_43 == 2) {
            state->b31_43 = 3;
            anim.id = 0x0190001D;
        }
        if (state->b31_43 == 3) {
            anim.id = 0x0190001D;
        } else {
            anim.id = 0x0190001B;
        }
        func_8013A28C((void *)arg1, anim);
        func_800058DC((s32)arg0, func_80366278);
    }
}
