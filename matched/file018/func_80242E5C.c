#include "context.h"

extern s32 D_80242620();
extern void func_80242FE0();
extern void func_802437C4();

typedef struct func_80242E5C_StructInner {
    u8 pad0[0x78];
    s16 unk78;
} func_80242E5C_StructInner;

typedef struct func_80242E5C_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x2C];
    func_80242E5C_StructInner *unk5C;
} func_80242E5C_Struct;

void func_80242E5C(func_80242E5C_Struct *arg0, s32 arg1) {
    func_80242E5C_StructInner *sp2C;
    func_80242E5C_StructInner **pp = &sp2C;

    sp2C = arg0->unk5C;
    arg0->unk2C |= 0x80;
    if (D_80242620() == 0 && D_80242714(arg0) == 0 && func_8012CE9C(arg1, sp2C, D_80258DA4, 0xA) == 0) {
        arg0->unk2C |= 0x80;
        func_80010550(arg1, *pp);
        if (func_8012A564(arg0, 0x436A0000) == 0) {
            (*pp)->unk78 = 1;
            arg0->unk2C &= ~0x80;
            func_800058DC(arg0, func_80242FE0);
            return;
        }
        if (func_8012A564(arg0, 0x42580000) != 0) {
            (*pp)->unk78 = 1;
            arg0->unk2C &= ~0x80;
            func_800058DC(arg0, func_802437C4);
            return;
        }
        if (func_8012A564(arg0, 0x43220000) != 0) {
            (*pp)->unk78 = 1;
            arg0->unk2C &= ~0x80;
            func_800058DC(arg0, func_80242FE0);
            return;
        }
        func_8012A94C(arg0, 0x16);
    }
}
