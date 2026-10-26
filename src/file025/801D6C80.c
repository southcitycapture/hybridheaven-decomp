#include "common.h"

#define func_801D6D40 func_801D6D40__func_801D6C80

extern s32 func_801CC654(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_8013B570(s32, s32, s32, s32, void *);
extern void func_801D6D40();
extern s32 D_801DBA24;
extern s32 D_801DBA28;
extern s32 D_801DBA2C;
extern s32 D_801DBA34;
extern s32 D_801E1770;
extern s32 D_801E1774;

void func_801D6C80(s32 arg0, s32 arg1) {
    D_801E1770 = arg0;
    D_801DBA24 = 0;
    D_801DBA28 = 0;
    D_801DBA2C = 1;
    D_801E1774 = 0;
    D_801DBA34 = func_801CC654(arg0, 0x140, 0, 0x140, 1, 0x140, 2, 0x140, 1, 1, 1, 0);
    func_8013B570(arg0, 0x142, 0, 4, (void *) func_801D6D40);
}
#undef func_801D6D40

#define func_801D6D98 func_801D6D98__func_801D6D40

struct func_801D6D40_Struct {
    u8 pad[0x24];
    s32 unk24;
};

extern s32 func_800058DC(void *, void *);
extern s32 func_8012D844(void *, s32, s32);
extern s32 func_8012D894(void *, s32, s32);
extern void func_801D6D98();

void func_801D6D40(struct func_801D6D40_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_8012D844(arg0, 0x140, 0);
        func_8012D894(arg0, 0x140, 3);
        func_800058DC(arg0, func_801D6D98);
    }
}
#undef func_801D6D98

extern u8 D_801E1778;

struct func_801D6D98_StructA { s32 a, b, c; };
struct func_801D6D98_StructB { s32 a, b; f32 c; };
struct func_801D6D98_StructP { u8 pad[0x5C]; s32 u5C, u60, u64; };
struct func_801D6D98_StructQ { u8 pad[0x76]; u8 u76; };
struct func_801D6D98_StructR { u8 pad[4]; struct func_801D6D98_StructS *u4; };
struct func_801D6D98_StructS { u8 pad[0x2C]; struct func_801D6D98_StructP *u2C; };
struct func_801D6D98_StructT { u8 pad[0x5C]; struct func_801D6D98_StructQ *u5C; };
void func_80006214();
extern s32 func_801CC540();
extern s32 func_80010550(void *, void *);
extern s32 func_80011140(void *, void *, struct func_801D6D98_StructB, u32);
extern void func_8013A28C(void *, struct func_801D6D98_StructA);
extern void func_801CC6F4(s32);
extern void func_801D70FC(void *);
extern u8 D_8008DA88[];
extern u8 D_801D6D98[];
extern u8 D_801BC025[];

void func_801D6D98(struct func_801D6D98_StructT *arg0, struct func_801D6D98_StructR *arg1) {
    struct func_801D6D98_StructB *p;
    struct func_801D6D98_StructQ *q;
    if (func_801CC540() != 0) {
        func_800058DC(arg0, D_801D6D98);
        return;
    }
    if (D_801DBA24 != 0) {
        func_80006214((s32)arg0);
        func_8013A28C(D_8008DA88, *(struct func_801D6D98_StructA *)D_801DBA24);
        q = arg0->u5C;
        q->u76 = 1;
        D_801DBA24 = 0;
    }
    p = (struct func_801D6D98_StructB *)D_801DBA28;
    if (p != 0) {
        if (func_80011140(arg1, arg0->u5C, *p, (u32)p->c) != 0) {
            D_801DBA28 = 0;
        }
    } else {
        if (func_80010550(arg1, arg0->u5C) != 0) {
            D_801DBA2C = 1;
        } else {
            D_801DBA2C = 0;
        }
        *(struct func_801D6D98_StructA *)((u8 *)&D_801E1778 + 0x10) = *(struct func_801D6D98_StructA *)&arg1->u4->u2C->u5C;
        *(struct func_801D6D98_StructA *)&D_801E1778 = *(struct func_801D6D98_StructA *)&D_801BC025[3];
    }
    if (D_801E1774 != 0) {
        func_801D70FC(arg0);
    }
    func_801CC6F4(D_801DBA34);
}



s32 func_801D6FB0(void) {
    return D_801DBA28 != 0;
}



s32 func_801D6FC0(void) {
    if (D_801DBA28 != 0) {
        return 0;
    }
    if (D_801DBA24 != 0) {
        return 0;
    }
    return D_801DBA2C;
}


u8 *func_801D7000(void) {
    return &D_801E1778;
}


struct func_801D700C_Struct {
    s32 unk0;
    u16 unk4;
};

extern struct func_801D700C_Struct D_801E1788;

s32 func_801D700C(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1788.unk0) {
        return 0;
    }
    return D_801E1788.unk4 == arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D7044.s")


extern void func_801CC948(s32, s32);

void func_801D70A4(s32 arg0) {
    if (arg0 != 0) {
        func_8012D844(D_801E1770, 0x140, 2);
        func_8012D894(D_801E1770, 0x140, 6);
    }
    func_801CC948(D_801DBA34, arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D6C80/func_801D70FC.s")

