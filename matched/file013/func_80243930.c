#include "context.h"

typedef struct func_80243930_StructV { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; } func_80243930_StructV;
typedef struct func_80243930_StructC { u8 pad0[0x2C]; func_80243930_StructV *unk2C; } func_80243930_StructC;
typedef struct func_80243930_Struct {
    u8 pad0[0x24];
    func_80243930_StructC *unk24;
    u8 pad28[0x5C - 0x28];
    func_80243688_StructE *unk5C;
    u8 pad60[0x92 - 0x60];
    u8 unk92;
    u8 pad93;
    u8 unk94;
} func_80243930_Struct;
extern s32 func_8012C6B4();
extern s32 func_80010550();
extern void func_80127430(f32, f32, s32, s32, f32, f32);
extern void func_80243A70();
extern func_8024373C_V D_80246C94;
extern f32 D_80246CA8;
extern f32 D_80249B60;
extern f32 D_80249B64;

void func_80243930(func_80243930_Struct *arg0, s32 arg1) {
    func_80243688_StructE *sp2C;
    func_80243930_StructV *v;
    s32 c;

    sp2C = arg0->unk5C;
    if (func_8012CE9C(arg1, (s32)sp2C, D_80246C94, 0x14) == 0) {
        func_80010550(arg1, sp2C);
        arg0->unk24->unk2C->unkC = -30.0f;
        c = arg0->unk94;
        if ((c % 70) == 0x23) {
            v = arg0->unk24->unk2C;
            func_80127430(v->unk4, v->unk8, *(s32 *)&v->unkC, 0x65F, D_80249B60, 1.0f);
            c = arg0->unk94;
        }
        arg0->unk94 = c - 1;
        if ((func_80242FD0((void *)arg0) != 0) && (func_8012C6B4(0x50) == 0)) {
            arg0->unk92 = func_8012C6B4(0x78) + 0x3C;
            sp2C->unk78 = 1;
            D_80246CA8 = D_80249B64;
            func_800058DC(arg0, func_80243A70);
        }
    }
}
