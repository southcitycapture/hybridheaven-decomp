#include "context.h"

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_80228C20();
extern s32 func_80228D90();
struct func_8038D4D8_Global;
extern struct func_8038D4D8_Global D_801BBBF0;
extern u8 D_801BBC8C[];
extern u8 D_801BBCAC[];

struct func_8038CFF4_Obj {
    u8 pad0[0xC];
    struct func_8038CFF4_Obj *unkC;
    u8 pad1[0x90 - 0x10];
    u8 unk90;
    u8 pad91;
    u8 unk92;
    u8 pad93[2];
    u8 unk95;
    u8 pad96[2];
    union {
        s16 h;
        u8 b[2];
    } unk98;
};

struct func_8038CFF4_G {
    u8 pad0[0xDC];
    struct func_8038CFF4_Obj *unkDC;
    u8 pad1[0x232 - 0xE0];
    s16 unk232;
    u8 pad2[0xB90 - 0x234];
    f32 unkB90;
    u8 pad3[0x1031 - 0xB94];
    u8 unk1031;
};

struct func_8038CFF4_A {
    u8 pad0[2];
    s16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
};

struct func_8038CFF4_B {
    u8 pad0[6];
    s16 unk6;
    u8 pad8[0x30 - 8];
    union {
        struct {
            u32 pad : 9;
            u32 f : 2;
        } bf;
        u16 h;
    } u30;
};


void func_8038CFF4(struct func_8038CFF4_Obj *arg0, s32 arg1) {
    s16 v;
    s16 t1;
    struct func_8038CFF4_A *a3;
    struct func_8038CFF4_B *a2;
    struct func_8038CFF4_Obj *c;

    t1 = (s16)(0x2800 - ((struct func_8038CFF4_G *)&D_801BBBF0)->unk232) & 0x1FFF;
    c = ((struct func_8038CFF4_G *)&D_801BBBF0)->unkDC;
    if (c == arg0->unkC->unkC) {
        a3 = (struct func_8038CFF4_A *)D_801BBC8C;
    } else {
        a3 = (struct func_8038CFF4_A *)D_801BBCAC;
    }
    if (c == arg0->unkC->unkC) {
        a2 = (struct func_8038CFF4_B *)D_801BC03C;
    } else {
        a2 = (struct func_8038CFF4_B *)D_801BC3D8;
    }
    if (a2->u30.bf.f != 0) {
        if (((struct func_8038CFF4_G *)&D_801BBBF0)->unk1031 >= 7 && ((struct func_8038CFF4_G *)&D_801BBBF0)->unk1031 != 0xF) {
            arg0->unk98.h = 0;
            arg0->unk95 = arg0->unk98.b[1];
            arg0->unk92 = arg0->unk98.b[1];
        }
        if (((struct func_8038CFF4_G *)&D_801BBBF0)->unk1031 == 5 && !(a2->u30.h & 7)) {
            if (((struct func_8038CFF4_G *)&D_801BBBF0)->unkB90 < 30.0f || arg0->unk95 == 1) {
                if (arg0->unk95 == 0) {
                    arg0->unk95 = 1;
                    arg0->unk92 = 1;
                    return;
                }
                if (((struct func_8038CFF4_G *)&D_801BBBF0)->unkB90 > 40.0f) {
                    arg0->unk95 = arg0->unk92 = 0;
                    return;
                }
                if (arg0->unk92 == 1 && a2->unk6 >= 0x64) {
                    if (func_80228D90((struct func_8038CFF4_Obj *)((s32)arg0 * 1), arg0, a2, a3) != 0) {
                        a3->unk4 = 0x8000;
                    }
                }
            } else {
                if (a2->unk6 >= 0x1C2) {
                    a3->unk2 = 0x2000;
                }
                v = (s16)(func_80228C20((struct func_8038CFF4_Obj *)((s32)arg0 * 1), arg0, a2, a3) + t1) & 0x1FFF;
                a3->unk6 = -func_8001EB64(v) * 40.0f;
                a3->unk8 = func_8001EAD0(v) * 40.0f;
                if (a2->unk6 >= 0x1F4) {
                    if (func_80228D90((struct func_8038CFF4_Obj *)((s32)arg0 / 1), arg0, a2, a3) != 0 && arg0->unk90 == 0) {
                        a3->unk4 = 0x8000;
                        arg0->unk90 = 0x64;
                    }
                }
                if (arg0->unk90 != 0) {
                    arg0->unk90--;
                }
            }
        }
    }
}
