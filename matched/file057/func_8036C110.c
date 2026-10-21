#include "context.h"

typedef struct func_8036C110_Arg {
    u8 pad0[0x5C];
    s32 unk5C;
} func_8036C110_Arg;

extern func_8036D9F8_Struct3 func_802256E4(void *, s32);
extern func_8036D9F8_Struct3 D_80225664(s32, s32);
extern void D_8013A28C(void *, func_8036D9F8_Struct3);
extern void func_80011198(s32, s32);
extern void func_803602D4(void *, s32);
void func_8036C67C(s32 arg0, s32 arg1);

void func_8036C110(func_8036C110_Arg *arg0, s32 arg1) {
    func_8036C110_Arg *sp5C;
    u8 *v;
    u8 *sp54;
    s32 sp50;
    s32 sp4C;
    func_8036D9F8_Struct3 s;
    u32 t;
    s32 sp38;

    if (arg0 != (void *)D_801BBBF0.unkDC) {
        sp5C = (void *)D_801BBBF0.unkDC;
    } else {
        sp5C = (void *)D_801BBBF0.unkEC;
    }
    if (arg0 == (void *)D_801BBBF0.unkDC) {
        v = D_801BC03C;
    } else {
        v = D_801BC3D8;
    }
    sp54 = (arg0 != (void *)D_801BBBF0.unkDC) ? D_801BC03C : D_801BC3D8;
    sp50 = arg0->unk5C;
    sp4C = sp5C->unk5C;
    D_8038CC61 = 0;
    v[0x2E8] = 0;
    v[0x2DE] = 0;
    v[0x32C] = 0;
    *(f32 *)(v + 0x2EC) = 1.0f;
    func_803602D4(arg0, arg1);
    *(f32 *)(v + 0x2F4) = 0.0f;
    func_80011198(arg1, sp50);
    func_80011140(arg1, sp50, func_802256E4(arg0, 0), 1);
    func_800058DC((s32)arg0, func_8036C67C);
    t = (*(u32 *)(sp54 + 0x30) << 11) >> 30;
    if (t == 2) {
        sp38 = 0x01900018;
    } else if (t == 3) {
        sp38 = 0x01900019;
    } else {
        sp38 = 0x01900017;
    }
    func_80006214(sp5C);
    func_80011198((s32)D_8008DA88, sp4C);
    D_8013A28C(D_8008DA88, D_80225664((s32)sp5C, sp38));
    func_80006214(arg0);
    func_800058DC((s32)sp5C, func_8036B0D4);
}
