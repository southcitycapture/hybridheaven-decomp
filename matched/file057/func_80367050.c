#include "context.h"
typedef struct func_80367050_StructP {
    s32 unk0;
    u16 unk4;
} func_80367050_StructP;
typedef struct func_80367050_StructB {
    u8 pad0[0x80];
    u16 unk80;
} func_80367050_StructB;
typedef struct func_80367050_StructA {
    u8 pad0[0x5C];
    func_80367050_StructB *unk5C;
} func_80367050_StructA;
typedef struct func_80367050_StructS {
    u8 pad0[0x30];
    u8 unk30;
    u8 pad31[0x2F8 - 0x31];
    u8 unk2F8;
    u8 pad2F9[0x392 - 0x2F9];
    u8 unk392;
} func_80367050_StructS;
extern u16 func_80011590(s32);
extern void func_8013B808(void *, s32, s32);
extern void func_80226710(void *, s32, f32);
extern void func_80371DF4(void *, s32);
extern u8 func_80222E84[];

void func_80367050(func_80367050_StructA *arg0, s32 arg1) {
    func_80367050_StructS *s;
    func_80367050_StructB *b;
    func_80367050_StructP *p;

    if ((s32)arg0 == D_801BBCCC) {
        s = (func_80367050_StructS *)&D_801BC03C;
    } else {
        s = (func_80367050_StructS *)&D_801BC3D8;
    }
    b = arg0->unk5C;
    s->unk392 = 0;
    p = (func_80367050_StructP *)((u8 *)b + 0x1C);
    if (b->unk80 == 0) {
        if (p->unk0 == 0x0191009F && p->unk4 == func_80011590(1)) {
            func_8013B808(arg0, arg1, 2);
        } else if (p->unk0 == 0x019100A5) {
            if (p->unk4 == func_80011590(1)) {
                func_80226710(arg0, 0x262, 1.0f);
                func_8013B808(arg0, arg1, 5);
                s->unk2F8 = 3;
                func_80371DF4(arg0, arg1);
            }
        }
    }
    if (func_801DB6B8((s32)arg0, arg1, 0) != 0) {
        func_80225540((s32)arg0);
        s->unk30 &= 0xFFFE;
        s->unk30 = (s->unk30 & 0x9F) | 0x20;
        func_800058DC((s32)arg0, func_80222E84);
    }
}
