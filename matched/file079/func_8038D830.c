#define func_8038D830 func_8038D830_ctx
#include "context.h"
#undef func_8038D830

extern s32 func_8022AB58();
extern u8 func_8022B3E0[];

struct func_8038D830_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
};
extern struct func_8038D830_G D_801BBBF0;

struct func_8038D830_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x91 - 0x10];
    u8 unk91;
    u8 pad2[0x9A - 0x92];
    s16 unk9A;
    u8 pad3[0xA8 - 0x9C];
    u8 unkA8;
    u8 pad4[0xB0 - 0xA9];
    void *unkB0;
};

struct func_8038D830_Obj {
    u8 pad0[0x30];
    u32 unk30;
    u8 pad1[4];
    u32 b31:1;
    u32 bp:2;
    u32 b28:1;
    u32 brest:28;
    u8 pad2[0x390 - 0x3C];
    u8 unk390;
};

void func_8038D830(arg0, arg1)
struct func_8038D830_Struct *arg0;
s32 arg1;
{
    struct func_8038D830_Obj *a1;
    struct func_8038D830_Obj *a2;
    u32 a3;
    u32 v0;
    u32 v1;

    a1 = (D_801BBBF0.unkDC == arg0->unkC) ? (struct func_8038D830_Obj *)&D_801BC03C : (struct func_8038D830_Obj *)&D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? (struct func_8038D830_Obj *)&D_801BC3D8 : (struct func_8038D830_Obj *)&D_801BC03C;
    if (a1->unk390 != 1 || ((((a1->unk30 << 27) >> 30) & 3) == 0)) {
        if (arg0->unkA8 == 2) {
            func_8038D638(arg0, a1, a2);
            arg0->unkA8 = 0;
            return;
        }
        if ((((u16 *)&a1->unk30)[0] & 7) || D_801BBBF0.unk1031 == 6) {
            arg0->unkA8 = 1;
            return;
        }
        if (D_801BBBF0.unk1031 == 7) {
            arg0->unkB0 = (void *)func_8038D830;
            func_800058DC((s32)arg0, func_8022B3E0);
            return;
        }
        if (((a1->unk30 << 27) >> 30) == 3) {
            func_8038D638(arg0, a1, a2);
            return;
        }
        if (func_8022AB58(arg0, a1, a2) != 0) {
            arg0->unk91 = 0;
            func_8038D638(arg0, a1, a2);
            return;
        }
        a3 = (a2->unk30 << 11) >> 30;
        if (a3 != 0 && !(arg0->unk9A & 8)) {
            func_8038D638(arg0, a1, a2);
            return;
        }
        if (a1->b31 && !a1->b28 && !(arg0->unk9A & 2)) {
            func_8038D638(arg0, a1, a2);
            return;
        }
        if (a1->b31 && a1->b28 && !(arg0->unk9A & 4)) {
            func_8038D638(arg0, a1, a2);
            return;
        }
        if (a2->b31 == 0 && a3 == 0 && arg0->unk9A != 0) {
            arg0->unk9A = 0;
            func_8038D638(arg0, a1, a2);
        }
    }
}
