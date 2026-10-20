#include "context.h"

extern void func_80372A48();

void func_8037036C(void *arg0, s32 arg1) {
    u8 *s;
    func_8036FF7C_Obj *o;
    extern s32 func_80010550();
    extern void func_802237B0();

    if ((s32)arg0 == D_801BBCCC) {
        s = D_801BC03C;
    } else {
        s = D_801BC3D8;
    }
    o = ((func_8036FF7C_Arg *)arg0)->unk5C;
    s[0x392] = 0;
    func_802237B0(arg0, 1);
    if (o->anim.frame == 0) {
        s[0x2DA] = 0;
        if (((u16 *)arg0)[0x36 / 2] == 0x11D) {
            func_8013B808(arg0, arg1, 1);
        }
        if (s[0x2D9] == 5) {
            func_80020718(0x105);
        } else if (s[0x2D9] == 6) {
            func_80020718(0x106);
        } else {
            func_80020718(0x107);
        }
        func_80372A48(arg0, arg1);
        *(s16 *)(s + 0x312) = 0x3C;
    }
    func_80010550(arg1, o);
    *(s16 *)(s + 0x312) -= 1;
    if (*(s16 *)(s + 0x312) == 0) {
        if (o->unkC >= 0x16) {
            func_8013A1B4(arg1, func_8013BD84(arg0), 0x180000);
        }
        func_800058DC(arg0, func_8035C4C0);
    }
}
