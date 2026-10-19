#include "context.h"
void func_802234F8(s32 arg0, s32 arg1);
s32 func_802233B0(s32 arg0, s32 arg1) {
    func_8021E59C_Struct3C *s;
    func_8021E59C_Player *p0;
    func_8021E59C_Player *p1;

    s = A->unk5C;
    if (arg0 == DEV->unkDC) {
        p0 = (func_8021E59C_Player *)&D_801BC03C;
    } else {
        p0 = (func_8021E59C_Player *)&D_801BC3D8;
    }
    if (arg0 != DEV->unkDC) {
        p1 = (func_8021E59C_Player *)&D_801BC03C;
    } else {
        p1 = (func_8021E59C_Player *)&D_801BC3D8;
    }
    if (DEV->unk1031 != 0xF) {
        p0->unk30.b[0] = (u16)((p0->unk30.b[0] & 0xFF9F) | 0x20);
        p0->unk30.b[0] = (u16)(p0->unk30.b[0] | 1);
        p0->unk30.b[0] |= 0x80;
        p0->unk30.b[2] &= 0xFF1F;
        p1->unk30.b[0] = (u16)(p1->unk30.b[0] & 0xFFFE);
        p1->unk30.b[0] |= 0x80;
        if (s->unk9C == 1 || s->unk9C == 2) {
            s->unk9C = 3;
        }
        func_802237B0(arg0, 1);
        func_800113D0(arg1, (u8 *)s + 0x22, s);
        func_8013C6FC(arg0, arg1, 0);
        func_8013B808(arg0, arg1, 2);
        if (A->unk36 == 0x11D) {
            func_80366F88(arg0, arg1);
            return;
        }
        func_800058DC(arg0, func_802234F8);
    }
}
