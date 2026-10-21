#include "context.h"

struct func_80224F5C_Bits {
    u8 pad0[0x30];
    u32 : 9;
    u32 f : 2;
    u32 : 21;
};
struct func_80224F5C_In {
    u8 pad0[0x12];
    s16 unk12;
};
struct func_80224F5C_Mid {
    u8 pad0[0x2C];
    struct func_80224F5C_In *unk2C;
};
struct func_80224F5C_Arg1 {
    struct func_80224F5C_Mid *unk0;
};
struct func_80224F5C_Arg0 {
    u8 pad0[0x5C];
    u8 *unk5C;
};
typedef struct func_80224F5C_V {
    s32 a;
    s32 b;
    s32 c;
} func_80224F5C_V;

extern u16 func_80010550(struct func_80224F5C_Arg1 *, u8 *);
extern void func_8013A28C(struct func_80224F5C_Arg1 *, func_80224F5C_V);
extern void func_80224BEC(struct func_80224F5C_Arg0 *, struct func_80224F5C_Arg1 *, struct func_80224F5C_Bits *);
extern u16 D_8022560C(u8 *);
extern u16 D_80224AC4(s32, u8);
void func_802256E4(s32 arg0, s32 arg1, s32 arg2);
extern void func_80224E00(struct func_80224F5C_Arg0 *, s16);

u16 func_80224F5C(struct func_80224F5C_Arg0 *arg0, struct func_80224F5C_Arg1 *arg1) {
    u8 *sp34;
    struct func_80224F5C_Bits *sp30;
    s16 sp2E;
    u16 sp2C;
    u16 sp2A;
    func_80224F5C_V sp1C;

    sp34 = arg0->unk5C;
    if ((s32)arg0 == D_801BBCCC) {
        sp30 = (struct func_80224F5C_Bits *)&D_801BC03C;
    } else {
        sp30 = (struct func_80224F5C_Bits *)&D_801BC3D8;
    }
    sp2E = 0;
    func_80224BEC(arg0, arg1, sp30);
    sp2C = func_80010550(arg1, sp34);
    if ((sp2A = D_8022560C(sp34)) == 6 || (u8)sp2A == 4 || (u8)sp2A == 5) {
        if (sp2C == 0) {
            return 1;
        }
        if ((u8)sp2A == 6) {
            sp2E = 0x1000;
            sp30->f = sp30->f ^ 1;
        } else if ((u8)sp2A == 4) {
            sp2E = (sp30->f == 3) ? 0x800 : 0x1800;
        } else if ((u8)sp2A == 5) {
            sp2E = (sp30->f == 3) ? 0x1800 : 0x800;
        }
        arg1->unk0->unk2C->unk12 = arg1->unk0->unk2C->unk12 + sp2E;
        arg1->unk0->unk2C->unk12 = arg1->unk0->unk2C->unk12 & 0x1FFF;
        func_802256E4((s32)&sp1C, (s32)arg0, 0);
        func_8013A28C(arg1, sp1C);
        func_80224E00(arg0, sp2E);
        func_80010550(arg1, sp34);
        return 0;
    }
    sp2A = D_80224AC4((s32)arg0, 0);
    if (sp2A == 0) {
        func_802256E4((s32)&sp1C, (s32)arg0, 0);
        func_8013A28C(arg1, sp1C);
        func_80010550(arg1, sp34);
    }
    return sp2A;
}
