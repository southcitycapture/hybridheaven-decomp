#include "context.h"

typedef struct func_801C2170_StructInner {
    u8 pad0[0x12];
    s16 unk12;
} func_801C2170_StructInner;
typedef struct func_801C2170_StructMid {
    u8 pad0[0x2C];
    func_801C2170_StructInner *unk2C;
} func_801C2170_StructMid;
typedef struct func_801C2170_StructArg {
    u8 pad0[0x24];
    func_801C2170_StructMid *unk24;
    u8 pad1[0x34];
    func_801C1D90_StructInner *unk5C;
} func_801C2170_StructArg;
typedef struct func_801C2170_StructG {
    u8 pad0[0x194];
    u16 unk194;
    u8 pad1[0x2];
    s32 unk198;
    u8 pad2[4];
    s32 unk1A0;
    u8 pad3[0xF04 - 0x1A4];
    s32 unkF04;
    u8 pad4[4];
    u16 unkF0C;
} func_801C2170_StructG;
extern s32 func_8012AE54(void *, s32, s32, s32);
extern void func_8012AEE0(void *, s32);
extern void func_801C1B38();
#define G2 ((func_801C2170_StructG *)D_801BBBF0)

void func_801C2170(func_801C2170_StructArg *arg0, s32 arg1) {
    func_801C1D90_StructInner *sp2C = arg0->unk5C;

    arg0->unk24->unk2C->unk12 += G2->unkF0C;
    func_8012A7F4(arg0, G2->unk198, G2->unk1A0, 0x80);
    func_8012AEE0(arg0, G2->unkF04);
    arg0->unk24->unk2C->unk12 -= G2->unkF0C;
    if (func_8012AE54(arg0, G2->unk198, G2->unk1A0, 0x40400000) == 0) {
        func_800058DC(arg0, func_801C1B38);
        return;
    }
    if (G2->unk194 == 1U) {
        sp2C->unk78 = 1;
        func_800058DC(arg0, func_801C1B38);
        return;
    }
    if (func_8012CE9C(arg1, sp2C, *(func_801C2494_Struct388500 *)&D_801E0B00, 10) == 0) {
        func_80010550(arg1, sp2C);
    }
}
