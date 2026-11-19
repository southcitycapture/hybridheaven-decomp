#include "common.h"
extern void func_800058DC(void *, void *);
extern s32 func_80010550();
extern void func_80020744(s32);
typedef struct func_8024373C_V { s32 a; s32 b; s32 c; } func_8024373C_V;
extern s32 func_8012CE9C(s32, s32, func_8024373C_V, s32);
typedef struct func_80243688_StructE {
    u8 pad0[0x78];
    u16 unk78;
} func_80243688_StructE;
extern void func_80243930();
typedef struct func_80242FD0_StructB {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
} func_80242FD0_StructB;
typedef struct func_80242FD0_StructC {
    u8 pad0[0x2C];
    func_80242FD0_StructB *unk2C;
} func_80242FD0_StructC;
typedef struct func_80243A70_Struct {
    u8 pad0[0x24];
    func_80242FD0_StructC *unk24;
    u8 pad28[0x5C - 0x28];
    func_80243688_StructE *unk5C;
    u8 pad60[0x70 - 0x60];
    u16 unk70;
    u8 pad72[0x91 - 0x72];
    u8 unk91;
    u8 unk92;
} func_80243A70_Struct;


extern func_8024373C_V D_80246CA0;

void func_80243A70(func_80243A70_Struct *arg0, s32 arg1) {
    func_80243688_StructE *sp2C;

    sp2C = arg0->unk5C;
    if (func_8012CE9C(arg1, (s32)sp2C, D_80246CA0, 10) == 0) {
        func_80010550(arg1, sp2C);
        arg0->unk24->unk2C->unkC = -30.0f;
        if (arg0->unk70 == 0x19) {
            if (arg0->unk91 == 0) {
                func_80020744(0x322);
            } else {
                func_80020744(0x323);
            }
            arg0->unk91 = (u8)(arg0->unk91 ^ 1);
        }
        if (arg0->unk92 > 0) {
            arg0->unk92--;
        }
        if (arg0->unk92 == 0) {
            sp2C->unk78 = 1;
            func_800058DC(arg0, &func_80243930);
        }
    }
}
