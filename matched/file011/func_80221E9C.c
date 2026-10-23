#include "context.h"

void func_80221FF0(s32 arg0, s32 arg1);

void func_80221E9C(s32 arg0, s32 arg1) {
    struct func_80221070_StructS *p;
    struct func_8021F9C8_Struct *q;
    s32 sp3C;
    s32 pad;
    struct func_8021E52C_Struct sp2C;

    p = (struct func_80221070_StructS *)(arg0 == D_801BBBF0.unkDC ? &D_801BC03C : &D_801BC3D8);
    q = arg0 != D_801BBBF0.unkDC ? &D_801BC03C : &D_801BC3D8;
    sp3C = ((struct func_8021F9C8_Actor *)arg0)->unk5C;
    p->unk392 = 0;
    if (D_801BBBF0.unk1031 != 0xF) {
        if (!(((struct func_8021DC6C_Struct *)q)->unk30.b[0] & 1)) {
            func_800058DC(arg0, func_80222370);
            return;
        }
        p->unk2F1 = 0;
        *(u8 *)((u8 *)p + 0x365) = 0;
        *(f32 *)((u8 *)p + 0x370) = 0.0f;
        *(f32 *)((u8 *)p + 0x36C) = 0.0f;
        *(f32 *)((u8 *)p + 0x368) = 0.0f;
        if (((func_8021E59C_Player *)p)->unk30.f.c == 0) {
            ((struct func_80221720_Struct *)p)->u30.b.f = p->unk2F9 + 2;
        }
        func_802256E4(&sp2C, arg0, 0);
        if (func_80011140(arg1, sp3C, sp2C, 3) != 0) {
            func_80221CA0(arg0);
            func_800058DC(arg0, func_80221FF0);
        }
    }
}
