#include "context.h"
s32 func_80242FD0(func_80242FD0_StructA *arg0);
typedef struct func_80243688_Struct {
    u8 pad0[0x24];
    func_80242FD0_StructC *unk24;
    u8 pad28[0x5C - 0x28];
    void *unk5C;
    u8 pad60[0xA0 - 0x60];
    u16 unkA0;
} func_80243688_Struct;
typedef struct func_80243688_StructE {
    u8 pad0[0x78];
    u16 unk78;
} func_80243688_StructE;
void func_80242F80(void *, void *);
void func_80243688(func_80243688_Struct *arg0, s32 arg1);
typedef struct func_8024373C_V { s32 a; s32 b; s32 c; } func_8024373C_V;
extern s32 func_8012CE9C(s32, s32, func_8024373C_V, s32);
extern s32 func_80010550();
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
extern void func_80020744(s32);
extern func_8024373C_V D_80246C7C;
extern func_8024373C_V D_80246C88;

void func_80243578(func_80243A70_Struct *arg0, s32 arg1) {
    void *sp2C;

    sp2C = arg0->unk5C;
    if (func_8012CE9C(arg1, (s32)sp2C, D_80246C7C, 0xA) == 0) {
        if (arg0->unk70 == 0x14) {
            func_80020744(0x13B);
        }
        if (func_80010550(arg1, sp2C) != 0) {
            if ((--arg0->unk92 == 0) || (func_80242FD0((func_80242FD0_StructA *)arg0) == 0)) {
                func_80242F80(arg0, &D_80246C88);
                func_8013A1B4(arg1, D_80246C88, 0x1FFFFF);
                func_800058DC(arg0, func_80243688);
            }
        }
    }
}
