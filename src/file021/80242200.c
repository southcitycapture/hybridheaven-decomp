#include "common.h"

extern u8 D_80164F40[];

void func_8012C89C(void *, s32, s32, s32);
extern void func_8001F74C();
extern void func_800058DC(s32, void *);
extern void func_80005F6C(void *, void *);
extern void func_80006214(void *);
extern void func_800062F8(void *, u32);
struct func_80242200_Struct16 { s32 a, b, c, d; };
struct func_80242200_Inner {
    u8 pad0[0x24];
    u32 unk24;
    u8 pad1[0x30 - 0x28];
    u32 unk30;
    u8 pad2[0x4B - 0x34];
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};
struct func_80242200_Outer {
    u8 pad0[0x30];
    struct func_80242200_Inner *unk30;
};
struct func_80242200_Sub { u8 pad[0x10]; u32 unk10; };
struct func_80242200_Arg { u8 pad[0x38]; struct func_80242200_Sub *unk38; };
struct func_80242200_Glob { u8 pad[0x63]; u8 unk63; };

extern struct func_80242200_Glob *D_801BBCCC;
extern u8 D_80250FA0[];
extern void func_8012D918(void *, s32, s32, s32, s32);
extern void func_80020744(s32);
extern void func_802423B4();

void func_80242200(struct func_80242200_Arg *arg0, struct func_80242200_Outer **arg1) {
    struct func_80242200_Struct16 sp28;

    if (D_801BBCCC->unk63 != 0) {
        func_8001F74C();
        sp28 = *(struct func_80242200_Struct16 *)D_80164F40;
        *(u32 *)((u8 *)&sp28 + 4) = 0x80000600;
        func_80005F6C(arg0, &sp28);
        func_80006214(arg0);
        if ((arg0->unk38->unk10 >> 24) != 0) {
            func_8012C89C(arg0, 0, 0x501, 7);
            func_8012D918(arg0, 0x501, 4, 0, 0);
        } else {
            func_8012C89C(arg0, 0, 0x501, 6);
            func_8012D918(arg0, 0x500, 3, 0, 0);
        }
        (*arg1)->unk30->unk30 = (u32)D_80250FA0 | 0x40000000;
        (*arg1)->unk30->unk24 |= 0x4100;
        (*arg1)->unk30->unk4B = 0xDC;
        (*arg1)->unk30->unk4C = 0;
        (*arg1)->unk30->unk4D = 0;
        (*arg1)->unk30->unk4E = 0xFF;
        (*arg1)->unk30->unk4F = 0xFF;
        if ((arg0->unk38->unk10 >> 24) != 0) {
            func_80020744(0x6BB);
        }
        func_800062F8(*arg1, 0x80000400);
        func_800058DC((s32)arg0, func_802423B4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_802423B4.s")


/* Exact context.h declarations for names used before the file declares them. */
extern void func_802427B4();

extern u8 D_80251040[];

struct func_80242688_Inner {
    u8 pad0[0x24];
    u32 unk24;
    u8 pad1[0x30 - 0x28];
    u32 unk30;
    u8 pad2[0x48 - 0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};

struct func_80242688_Outer {
    u8 pad0[0x30];
    struct func_80242688_Inner *unk30;
};

void func_80242688(s32 arg0, struct func_80242688_Outer **arg1) {
    func_8001F74C();
    func_80005F6C((void *) arg0, D_80164F40);
    func_80006214((void *) arg0);
    func_8012C89C((void *) arg0, 0, 0x501, 8);
    func_8012D8C8(arg0, 0x501, 9, 0x3F000000, 1, 0);
    (*arg1)->unk30->unk24 = (*arg1)->unk30->unk24 | 0x300;
    func_800062F8(*arg1, 0x800003FF);
    (*arg1)->unk30->unk30 = ((u32) D_80251040 | 0x40000000);
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4C = 0x32;
    (*arg1)->unk30->unk4D = 0xFF;
    (*arg1)->unk30->unk4E = 0xFF;
    (*arg1)->unk30->unk4B = 0x78;
    func_800058DC(arg0, (void *) func_802427B4);
}


extern s32 func_80133A24(s32 arg0);

struct func_802427B4_Inner {
    u8 pad[0x4C];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};

struct func_802427B4_Outer {
    u8 pad[0x30];
    struct func_802427B4_Inner *unk30;
};

void func_802427B4(s32 arg0, struct func_802427B4_Outer **arg1) {
    if (func_80133A24(0x1A1) != 0) {
        (*arg1)->unk30->unk4C = 0xFF;
        (*arg1)->unk30->unk4D = 0x13;
        (*arg1)->unk30->unk4E = 0;
    }
}



void func_80242810(void *arg0) {
    if (func_80133A24(0x1A1) != 0) {
        func_8012D918(arg0, 0x500, 1, 0, 0);
    } else {
        func_8012D918(arg0, 0x500, 0, 0, 0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_8024286C.s")


extern s32 func_80126CC0(s32, void *);
extern void func_80126EAC();
extern void func_80242A6C();

void func_80242A24(s32 arg0, s32 arg1) {
    func_8001F74C();
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        func_800058DC(arg0, func_80242A6C);
    }
}

extern u8 D_8017AF38[];

struct func_80242A6C_Inner {
    u8 pad[0x10];
    u32 unk10;
};
struct func_80242A6C_Arg0 {
    u8 pad[0x38];
    struct func_80242A6C_Inner *unk38;
    u8 pad2[0x90 - 0x3C];
    u16 unk90;
};
struct func_80242A6C_Y {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad1[0x30 - 0x28];
    void *unk30;
    u8 pad2[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};
struct func_80242A6C_X {
    u8 pad0[0x30];
    struct func_80242A6C_Y *unk30;
};
extern s32 D_80257150;
struct func_8024345C_Struct;
extern struct func_8024345C_Struct D_801BBBF0;
extern void func_8012636C(void *, s32);
extern void func_8012C784(void *, s32, u32);
void func_80242BE8(void *arg0, s32 arg1);
void func_80242DD8(void *arg0, s32 arg1);

void func_80242A6C(struct func_80242A6C_Arg0 *arg0, struct func_80242A6C_X **arg1) {
    u32 v;
    struct func_80242A6C_Y *y;
    f32 f;

    func_80005F6C(arg0, D_80164F40);
    func_80006214(arg0);
    func_8012636C(arg0, 0);
    func_800062F8(*arg1, 0x80000C00);
    D_80257150 = 0;
    (*arg1)->unk30->unk30 = D_8017AF38;
    (*arg1)->unk30->unk24 = 0x400;
    (*arg1)->unk30->unk4C = ((u8 *)&D_801BBBF0)[0xF32];
    (*arg1)->unk30->unk4D = ((u8 *)&D_801BBBF0)[0xF33];
    (*arg1)->unk30->unk4E = ((u8 *)&D_801BBBF0)[0xF34];
    (*arg1)->unk30->unk4F = ((u8 *)&D_801BBBF0)[0xF35];
    func_8012C784(arg0, 0, (arg0->unk38->unk10 >> 8) & 0xFF);
    func_8012D918(arg0, 0x500, 0, 0, 0);
    (*arg1)->unk30->unk20 = 1.0f;
    y = (*arg1)->unk30;
    f = y->unk20;
    y->unk1C = f;
    (*arg1)->unk30->unk18 = f;
    v = arg0->unk38->unk10;
    if ((v >> 24) != 0) {
        func_800058DC((s32)arg0, func_80242DD8);
        return;
    }
    arg0->unk90 = ((v >> 16) & 0xFF) * 2;
    func_800058DC((s32)arg0, func_80242BE8);
}


struct func_80242BE8_Struct {
    u8 pad[0x90];
    u16 unk90;
};

extern void func_8024286C(void *arg0);
extern void func_80242C38();

void func_80242BE8(void *arg0, s32 arg1)
{
    s32 temp_v0;
    struct func_80242BE8_Struct *s;

    s = arg0;
    func_80242810(arg0);
    temp_v0 = s->unk90;
    s->unk90 = temp_v0 - 1;
    if (temp_v0 == 0) {
        func_8024286C(arg0);
        func_800058DC((s32) arg0, (void *) func_80242C38);
    }
}


extern void func_80242CB8();
extern f32 D_80257090;

struct func_80242C38_Inner {
    u8 pad0[0x8];
    f32 unk8;
};

struct func_80242C38_Outer {
    u8 pad0[0x30];
    struct func_80242C38_Inner *unk30;
};

struct func_80242C38_Arg0 {
    u8 pad0[0x24];
    struct func_80242C38_Outer *unk24;
    u8 pad1[0x90 - 0x28];
    u16 unk90;
};

void func_80242C38(struct func_80242C38_Arg0 *arg0, s32 arg1) {
    struct func_80242C38_Inner *temp_v0;
    f32 k;

    func_80242810(arg0);
    k = D_80257090;
    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk8 = temp_v0->unk8 - 1.0f;
    temp_v0 = arg0->unk24->unk30;
    if (!(k < temp_v0->unk8)) {
        temp_v0->unk8 = k;
        arg0->unk90 = 0x80;
        func_800058DC((s32)arg0, (void *)&func_80242CB8);
    }
}


struct func_80242CB8_Struct {
    u8 pad[0x90];
    u16 unk90;
};

extern void func_80242D08();

void func_80242CB8(void *arg0, s32 arg1)
{
    s32 temp_v0;
    struct func_80242CB8_Struct *s;

    s = arg0;
    func_80242810(arg0);
    temp_v0 = s->unk90;
    s->unk90 = temp_v0 - 1;
    if (temp_v0 == 0) {
        func_8024286C(arg0);
        func_800058DC((s32) arg0, (void *) func_80242D08);
    }
}


extern void func_80242D88(void *arg0, s32 arg1);

struct func_80242D08_Inner {
    u8 pad0[0x8];
    f32 unk8;
};

struct func_80242D08_Outer {
    u8 pad0[0x30];
    struct func_80242D08_Inner *unk30;
};

struct func_80242D08_Arg0 {
    u8 pad0[0x24];
    struct func_80242D08_Outer *unk24;
    u8 pad1[0x90 - 0x28];
    u16 unk90;
};

void func_80242D08(struct func_80242D08_Arg0 *arg0, s32 arg1) {
    struct func_80242D08_Inner *temp_v0;

    func_80242810(arg0);
    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk8 = temp_v0->unk8 + 1.0f;
    temp_v0 = arg0->unk24->unk30;
    if (!(temp_v0->unk8 < -470.0f)) {
        temp_v0->unk8 = -470.0f;
        arg0->unk90 = 0x80;
        func_800058DC((s32)arg0, (void *)&func_80242D88);
    }
}


struct func_80242D88_Struct {
    u8 pad[0x90];
    u16 unk90;
};


void func_80242D88(void *arg0, s32 arg1)
{
    s32 temp_v0;
    struct func_80242D88_Struct *s;

    s = arg0;
    func_80242810(arg0);
    temp_v0 = s->unk90;
    s->unk90 = temp_v0 - 1;
    if (temp_v0 == 0) {
        func_8024286C(arg0);
        func_800058DC((s32) arg0, (void *) func_80242C38);
    }
}


void func_80242DD8(void *arg0, s32 arg1) {
    func_80242810(arg0);
}


extern void func_80242E40();

void func_80242DF8(s32 arg0, s32 arg1) {
    func_8001F74C();
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        func_800058DC(arg0, func_80242E40);
    }
}


struct func_80242E40_Y {
    f32 pad0[6];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad1[0x30 - 0x28];
    void *unk30;
    u8 pad2[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};
struct func_80242E40_X {
    u8 pad0[0x30];
    struct func_80242E40_Y *unk30;
};
extern u8 func_80242FE8[];
struct func_8024345C_Struct;
extern void func_802436A8();

void func_80242E40(void *arg0, struct func_80242E40_X **arg1) {
    struct func_80242E40_Y *v;
    f32 t;
    func_80005F6C(arg0, D_80164F40);
    func_80005F6C(arg0, D_80164F40);
    func_80005F6C(arg0, D_80164F40);
    func_80006214(arg0);
    func_800062F8(*arg1, 0x80000C00);
    func_8012636C(arg0, 0);
    (*arg1)->unk30->unk30 = D_8017AF38;
    (*arg1)->unk30->unk24 = 0x400;
    (*arg1)->unk30->unk4C = ((u8 *)&D_801BBBF0)[0xF32];
    (*arg1)->unk30->unk4D = ((u8 *)&D_801BBBF0)[0xF33];
    (*arg1)->unk30->unk4E = ((u8 *)&D_801BBBF0)[0xF34];
    (*arg1)->unk30->unk4F = ((u8 *)&D_801BBBF0)[0xF35];
    func_8012C89C(arg0, 0, 0x501, 0x12);
    func_8012D918(arg0, 0x500, 0, 0, 0);
    (*arg1)->unk30->unk20 = 1.0f;
    v = (*arg1)->unk30;
    t = v->unk20;
    v->unk1C = t;
    (*arg1)->unk30->unk18 = t;
    if (func_80133A24(0x1A1) != 0) {
        func_8012D918(arg0, 0x500, 1, 0, 0);
        ((u8 *)&D_801BBBF0)[0xF23] = 0x96;
        ((u8 *)&D_801BBBF0)[0xF24] = 1;
        ((u8 *)&D_801BBBF0)[0xF25] = 1;
        func_800058DC((s32)arg0, func_802436A8);
    } else {
        func_800058DC((s32)arg0, func_80242FE8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80242FE8.s")


struct func_802432D4_Struct_I {
    u8 pad[0x4C];
    u8 a;
    u8 b;
    u8 c;
};
struct func_802432D4_Struct_M {
    u8 pad[0x30];
    struct func_802432D4_Struct_I *p;
};
struct func_802432D4_Struct_A {
    u8 pad[4];
    struct func_802432D4_Struct_M *m;
};

void func_8024345C(s32 arg0, s32 arg1);

void func_802432D4(s32 arg0, struct func_802432D4_Struct_A *arg1) {
    arg1->m->p->a += 1;
    arg1->m->p->b -= 2;
    arg1->m->p->c -= 2;
    if (arg1->m->p->a >= 0x82) {
        arg1->m->p->a = 0x82;
    }
    if (arg1->m->p->b < 3) {
        arg1->m->p->b = 2;
    }
    if (arg1->m->p->c < 3) {
        arg1->m->p->c = 2;
    }
    ((u8 *)&D_801BBBF0)[0xF23] += 1;
    ((u8 *)&D_801BBBF0)[0xF24] -= 2;
    ((u8 *)&D_801BBBF0)[0xF25] -= 2;
    if (((u8 *)&D_801BBBF0)[0xF23] >= 0x96) {
        ((u8 *)&D_801BBBF0)[0xF23] = 0x96;
    }
    if (((u8 *)&D_801BBBF0)[0xF24] < 3) {
        ((u8 *)&D_801BBBF0)[0xF24] = 2;
    }
    if (((u8 *)&D_801BBBF0)[0xF25] < 3) {
        ((u8 *)&D_801BBBF0)[0xF25] = 2;
    }
    if (arg1->m->p->a == 0x82 && arg1->m->p->b == 2 && arg1->m->p->c == 2 &&
        ((u8 *)&D_801BBBF0)[0xF23] == 0x96 && ((u8 *)&D_801BBBF0)[0xF24] == 2 && ((u8 *)&D_801BBBF0)[0xF25] == 2) {
        func_800058DC(arg0, (void *)func_8024345C);
    }
}


typedef struct func_8024345C_Struct {
    u8 pad0[0xF23];
    u8 unkF23;
    u8 unkF24;
    u8 unkF25;
    u8 pad1[0x1044 - 0xF26];
    struct func_8024345C_Inner *unk1044;
} func_8024345C_Struct;

typedef struct func_8024345C_Inner {
    u8 pad0[0x24];
    struct func_8024345C_Inner2 *unk24;
} func_8024345C_Inner;

typedef struct func_8024345C_Inner2 {
    u8 pad0[0x22];
    u8 unk22;
} func_8024345C_Inner2;

extern void func_802434C4();

void func_8024345C(s32 arg0, s32 arg1) {
    if (func_80133A24(0x1A2) != 0) {
        D_801BBBF0.unk1044->unk24->unk22 = 1;
        D_801BBBF0.unkF23 = 0x64;
        D_801BBBF0.unkF24 = 0xFF;
        D_801BBBF0.unkF25 = 0xFF;
        func_800058DC(arg0, func_802434C4);
    }
}


struct func_8024358C_StructArg0;
struct func_8024358C_StructArg1;
extern void func_8024358C(struct func_8024358C_StructArg0 *, struct func_8024358C_StructArg1 *);

struct func_802434C4_StructArg0 {
    u8 pad[0x90];
    u16 unk90;
};

void func_802434C4(struct func_802434C4_StructArg0 *arg0, s32 arg1) {
    D_801BBBF0.unkF23++;
    D_801BBBF0.unkF24 = (u8)(D_801BBBF0.unkF24 - 2);
    D_801BBBF0.unkF25 = (u8)(D_801BBBF0.unkF25 - 2);
    if (D_801BBBF0.unkF23 >= 0x96) {
        D_801BBBF0.unkF23 = 0x96U;
    }
    if ((s32)D_801BBBF0.unkF24 < 3) {
        D_801BBBF0.unkF24 = 2U;
    }
    if ((s32)D_801BBBF0.unkF25 < 3) {
        D_801BBBF0.unkF25 = 2U;
    }
    if ((D_801BBBF0.unkF23 == 0x96) && (D_801BBBF0.unkF24 == 2) && (D_801BBBF0.unkF25 == 2)) {
        arg0->unk90 = 0x96;
        func_800058DC((s32)arg0, func_8024358C);
    }
}


struct func_8024358C_StructArg0 {
    u8 pad0[0x90];
    u16 unk90;
};

struct func_8024358C_StructZ {
    u8 pad0[0x22];
    u8 unk22;
};

struct func_8024358C_StructY {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad1[0x30 - 0x28];
    void *unk30;
    u8 pad2[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};

struct func_8024358C_StructX {
    u8 pad0[0x30];
    struct func_8024358C_StructY *unk30;
};

struct func_8024358C_StructArg1 {
    struct func_8024358C_StructX *unk0;
    struct func_8024358C_StructZ *unk4;
    struct func_8024358C_StructZ *unk8;
};



void func_8024358C(struct func_8024358C_StructArg0 *arg0, struct func_8024358C_StructArg1 *arg1) {
    f32 temp_fv0;
    s32 temp_v0;

    temp_v0 = arg0->unk90;
    arg0->unk90 = temp_v0 - 1;
    if (temp_v0 == 0) {
        arg1->unk4->unk22 = 0;
        arg1->unk8->unk22 = 0;
        arg1->unk0->unk30->unk30 = D_8017AF38;
        arg1->unk0->unk30->unk24 = 0x400;
        arg1->unk0->unk30->unk4C = ((u8 *) &D_801BBBF0)[0xF32];
        arg1->unk0->unk30->unk4D = ((u8 *) &D_801BBBF0)[0xF33];
        arg1->unk0->unk30->unk4E = ((u8 *) &D_801BBBF0)[0xF34];
        arg1->unk0->unk30->unk4F = ((u8 *) &D_801BBBF0)[0xF35];
        func_8012C89C(arg0, 0, 0x501, 0x12);
        func_8012D918(arg0, 0x500, 1, 0, 0);
        arg1->unk0->unk30->unk20 = 1.0f;
        temp_fv0 = arg1->unk0->unk30->unk20;
        arg1->unk0->unk30->unk1C = temp_fv0;
        arg1->unk0->unk30->unk18 = temp_fv0;
        func_800058DC((s32) arg0, (void *) func_802436A8);
    }
}


void func_802436A8(void *arg0, s32 arg1) {
    func_80242810(arg0);
}


struct func_80243A00_Arg0;
void func_80243A00(struct func_80243A00_Arg0 *arg0, s32 arg1);

struct func_802436C8_Inner {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad1[0x30 - 0x28];
    void *unk30;
    u8 pad2[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};

struct func_802436C8_Outer {
    u8 pad0[0x30];
    struct func_802436C8_Inner *unk30;
};

extern void func_80243824();

void func_802436C8(s32 arg0, struct func_802436C8_Outer **arg1) {
    f32 temp_fv0;
    struct func_802436C8_Inner *temp_v0;

    func_8001F74C();
    if (func_80126CC0(arg0, &func_80126EAC) != 0) {
        func_80005F6C((void *) arg0, D_80164F40);
        func_80006214((void *) arg0);
        func_8012636C((void *) arg0, 0);
        func_800062F8((*arg1), 0x80000C00);
        (*arg1)->unk30->unk30 = D_8017AF38;
        (*arg1)->unk30->unk24 = 0x400;
        (*arg1)->unk30->unk4C = ((u8 *) &D_801BBBF0)[0xF32];
        (*arg1)->unk30->unk4D = ((u8 *) &D_801BBBF0)[0xF33];
        (*arg1)->unk30->unk4E = ((u8 *) &D_801BBBF0)[0xF34];
        (*arg1)->unk30->unk4F = ((u8 *) &D_801BBBF0)[0xF35];
        func_8012C89C((void *) arg0, 0, 0x502, 5);
        (*arg1)->unk30->unk20 = 1.0f;
        temp_v0 = (*arg1)->unk30;
        temp_fv0 = temp_v0->unk20;
        temp_v0->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        if (func_80133A24(0x1A5) != 0) {
            func_800058DC(arg0, &func_80243A00);
            return;
        }
        func_800058DC(arg0, &func_80243824);
    }
}


extern void func_8024386C();

void func_80243824(s32 arg0, s32 arg1) {
    if (func_80133A24(0x1A5) != 0) {
        func_80020744(0x1A1);
        func_800058DC(arg0, (void *)func_8024386C);
    }
}


typedef struct func_8024386C_Leaf {
    u8 pad0[0x8];
    f32 unk8;
} func_8024386C_Leaf;

typedef struct func_8024386C_Mid {
    u8 pad0[0x30];
    func_8024386C_Leaf *unk30;
} func_8024386C_Mid;

typedef struct func_8024386C_Arg0 {
    u8 pad0[0x24];
    func_8024386C_Mid *unk24;
} func_8024386C_Arg0;

extern f64 D_802570B8;
extern f64 D_802570C0;
extern void func_802438E0();

void func_8024386C(func_8024386C_Arg0 *arg0, s32 arg1) {
    func_8024386C_Leaf *temp_v0;

    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk8 = (f32) ((f64) temp_v0->unk8 + D_802570B8);
    if (!((f64) arg0->unk24->unk30->unk8 < D_802570C0)) {
        func_800058DC((s32) arg0, (void *) func_802438E0);
    }
}


struct func_802438E0_Inner {
    u8 pad[0x8];
    f32 unk8;
};

struct func_802438E0_Outer {
    u8 pad[0x30];
    struct func_802438E0_Inner *unk30;
};

struct func_802438E0_Arg0 {
    u8 pad[0x24];
    struct func_802438E0_Outer *unk24;
    u8 pad28[0x90 - 0x28];
    u16 unk90;
};

extern f64 D_802570C8;
extern void func_80243958();

void func_802438E0(struct func_802438E0_Arg0 *arg0, s32 arg1) {
    struct func_802438E0_Inner *temp_v0;

    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk8 = (f32) ((f64) temp_v0->unk8 - D_802570C8);
    if (!(arg0->unk24->unk30->unk8 > -426.0f)) {
        arg0->unk90 = 0x16;
        func_800058DC((s32) arg0, (void *) func_80243958);
    }
}

struct func_80243990_StructLeaf {
    u8 pad0[0x8];
    f32 unk8;
};
struct func_80243990_StructMid {
    u8 pad0[0x30];
    struct func_80243990_StructLeaf *unk30;
};
struct func_80243990_StructArg0 {
    u8 pad0[0x24];
    struct func_80243990_StructMid *unk24;
};
void func_80243990(struct func_80243990_StructArg0 *arg0, s32 arg1);

struct func_80243958_Struct {
    u8 pad[0x90];
    u16 unk90;
};

void func_80243958(struct func_80243958_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk90;
    arg0->unk90 = temp_v0 - 1;
    if (temp_v0 == 0) {
        func_800058DC((s32) arg0, func_80243990);
    }
}


struct func_80243A00_Arg0;




extern f64 D_802570D0;

void func_80243990(struct func_80243990_StructArg0 *arg0, s32 arg1) {
    struct func_80243990_StructLeaf *temp_v0;

    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk8 = (f32) ((f64) temp_v0->unk8 + D_802570D0);
    if (!(arg0->unk24->unk30->unk8 < -382.0f)) {
        func_800058DC((s32) arg0, (void *) func_80243A00);
    }
}


struct func_80243A00_Inner {
    u8 pad0[0x8];
    f32 unk8;
};

struct func_80243A00_Outer {
    u8 pad0[0x30];
    struct func_80243A00_Inner *unk30;
};

struct func_80243A00_Arg0 {
    u8 pad0[0x24];
    struct func_80243A00_Outer *unk24;
    u8 pad1[0x7C - 0x28];
    f32 unk7C;
};

void func_80243A00(struct func_80243A00_Arg0 *arg0, s32 arg1) {
    arg0->unk24->unk30->unk8 = -382.0f;
    arg0->unk7C = arg0->unk24->unk30->unk8;
}

extern u8 D_80250F40[];

typedef struct func_80243A2C_Leaf {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x18 - 0x10];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[0x30 - 0x28];
    s32 unk30;
    u8 pad34[0x48 - 0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_80243A2C_Leaf;

typedef struct func_80243A2C_Mid {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    func_80243A2C_Leaf *unk30;
} func_80243A2C_Mid;

typedef struct func_80243A2C_Arg1 {
    func_80243A2C_Mid *unk0;
    func_80243A2C_Mid *unk4;
    func_80243A2C_Mid *unk8;
} func_80243A2C_Arg1;

typedef struct func_80243A2C_Sub {
    u8 pad0[0x10];
    u32 unk10;
} func_80243A2C_Sub;

typedef struct func_80243A2C_Arg0 {
    u8 pad0[0x38];
    func_80243A2C_Sub *unk38;
} func_80243A2C_Arg0;

struct func_802440B4_Outer;
void func_802440B4(s32 arg0, struct func_802440B4_Outer *arg1);
extern void func_80244458();
extern void func_80005700();

extern f64 D_802570D8;
extern f64 D_802570E0;
extern f64 D_802570E8;

void func_80243A2C(func_80243A2C_Arg0 *arg0, func_80243A2C_Arg1 *arg1) {
    func_8001F74C();
    if (func_80126CC0((s32)arg0, func_80126EAC) != 0) {
        func_80005F6C(arg0, D_80164F40);
        func_80005F6C(arg0, D_80164F40);
        func_80005F6C(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012636C(arg0, 0);

        arg1->unk0->unk30->unk24 |= 0x60300;
        arg1->unk0->unk30->unk30 = (s32)D_80250F40 | 0x40000000;
        arg1->unk0->unk30->unk48 = 0xFF;
        arg1->unk0->unk30->unk49 = 0xFF;
        arg1->unk0->unk30->unk4A = 0xFF;
        arg1->unk0->unk30->unk4C = 0xFF;
        arg1->unk0->unk30->unk4D = 0xFF;
        arg1->unk0->unk30->unk4E = 0xFF;
        arg1->unk0->unk30->unk4B = 0x55;
        func_800062F8(arg1->unk0, 0x80000500);
        func_8012C89C(arg0, 0, 3, 4);
        func_8012D918(arg0, 0x502, 6, 0, 0);
        arg1->unk0->unk30->unk18 = (f32)((u32)(arg0->unk38->unk10 >> 16) & 0xFF) / 200.0;
        arg1->unk0->unk30->unk1C = (f32)((u32)(arg0->unk38->unk10 >> 16) & 0xFF) / 200.0 / D_802570D8;
        arg1->unk0->unk30->unk20 = (f32)((u32)(arg0->unk38->unk10 >> 16) & 0xFF) / 200.0;

        arg1->unk4->unk30->unk24 |= 0x60300;
        arg1->unk4->unk30->unk30 = (s32)D_80250F40 | 0x40000000;
        arg1->unk4->unk30->unk48 = 0xFF;
        arg1->unk4->unk30->unk49 = 0xFF;
        arg1->unk4->unk30->unk4A = 0xFF;
        arg1->unk4->unk30->unk4C = 0xFF;
        arg1->unk4->unk30->unk4D = 0xFF;
        arg1->unk4->unk30->unk4E = 0xFF;
        arg1->unk4->unk30->unk4B = 0x55;
        func_800062F8(arg1->unk4, 0x80000500);
        func_8012C89C(arg0, 1, 3, 4);
        func_8012D918(arg0, 0x502, 6, 1, 0);
        arg1->unk4->unk30->unk18 = (f32)((u32)(arg0->unk38->unk10 >> 16) & 0xFF) / 200.0;
        arg1->unk4->unk30->unk1C = (f32)((u32)(arg0->unk38->unk10 >> 16) & 0xFF) / 200.0 / D_802570E0;
        arg1->unk4->unk30->unk20 = (f32)((u32)(arg0->unk38->unk10 >> 16) & 0xFF) / 200.0;
        arg1->unk4->unk30->unk4 = arg1->unk0->unk30->unk4 + 3.0f;
        arg1->unk4->unk30->unkC = arg1->unk0->unk30->unkC + 3.0f;
        arg1->unk4->unk30->unk8 = arg1->unk0->unk30->unk8 - 3.0f;

        arg1->unk8->unk30->unk24 |= 0x60300;
        arg1->unk8->unk30->unk30 = (s32)D_80250F40 | 0x40000000;
        arg1->unk8->unk30->unk48 = 0xFF;
        arg1->unk8->unk30->unk49 = 0xFF;
        arg1->unk8->unk30->unk4A = 0xFF;
        arg1->unk8->unk30->unk4C = 0xFF;
        arg1->unk8->unk30->unk4D = 0xFF;
        arg1->unk8->unk30->unk4E = 0xFF;
        arg1->unk8->unk30->unk4B = 0x55;
        func_800062F8(arg1->unk8, 0x80000500);
        func_8012C89C(arg0, 2, 3, 4);
        func_8012D918(arg0, 0x502, 6, 2, 0);
        arg1->unk8->unk30->unk18 = (f32)((u32)(arg0->unk38->unk10 >> 16) & 0xFF) / 200.0;
        arg1->unk8->unk30->unk1C = (f32)((u32)(arg0->unk38->unk10 >> 16) & 0xFF) / 200.0 / D_802570E8;
        arg1->unk8->unk30->unk20 = (f32)((u32)(arg0->unk38->unk10 >> 16) & 0xFF) / 200.0;
        arg1->unk8->unk30->unk4 = arg1->unk0->unk30->unk4 - 3.0f;
        arg1->unk8->unk30->unkC = arg1->unk0->unk30->unkC - 3.0f;
        arg1->unk8->unk30->unk8 = arg1->unk0->unk30->unk8 - 6.0f;

        arg1->unk0->unk22 = 0;
        arg1->unk4->unk22 = 0;
        arg1->unk8->unk22 = 0;
        if (func_80133A24(0x1A5) != 0) {
            func_800058DC((s32)arg0, func_80244458);
        } else {
            func_800058DC((s32)arg0, func_802440B4);
        }
    }
}


struct func_802440B4_Inner {
    u8 pad0[0x22];
    u8 unk22;
};

struct func_802440B4_Outer {
    struct func_802440B4_Inner *unk0;
    struct func_802440B4_Inner *unk4;
    struct func_802440B4_Inner *unk8;
};

extern void func_80244110();

void func_802440B4(s32 arg0, struct func_802440B4_Outer *arg1) {
    if (func_80133A24(0x1A5) != 0) {
        arg1->unk0->unk22 = 1;
        arg1->unk4->unk22 = 1;
        arg1->unk8->unk22 = 1;
        func_800058DC(arg0, func_80244110);
    }
}


struct func_80244110_StructF { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[0x12]; u8 unk22; };
struct func_80244110_StructE { u8 pad[0x22]; u8 unk22; u8 pad23[0xD]; struct func_80244110_StructF *unk30; };
struct func_80244110_StructC { u8 pad[0x10]; u32 unk10; };
struct func_80244110_StructA { u8 pad[0x24]; struct func_80244110_StructE *unk24; u8 pad28[0x10]; struct func_80244110_StructC *unk38; };
struct func_80244110_StructB { struct func_80244110_StructE *unk0; struct func_80244110_StructE *unk4; struct func_80244110_StructE *unk8; };

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern f64 D_802570F0;

void func_80244110(struct func_80244110_StructA *arg0, struct func_80244110_StructB *arg1)
{
  struct func_80244110_StructF *v;
  struct func_80244110_StructF *new_var;
  f32 t;
  f64 k;
  v = arg1->unk0->unk30;
  v->unk8 = v->unk8 + (((f64) ((f32) (arg0->unk38->unk10 >> 24))) / 10.0);
  t = func_8001EAD0(arg0->unk24->unk30->unk8);
  k = D_802570F0;
  arg1->unk0->unk30->unk4 = arg1->unk0->unk30->unk4 + (t * k);
  t = func_8001EB64(arg0->unk24->unk30->unk8);
  arg1->unk0->unk30->unkC = arg1->unk0->unk30->unkC + (t * k);
  new_var = arg1->unk4->unk30;
  v = new_var;
  v->unk8 = v->unk8 + (((f64) ((f32) (arg0->unk38->unk10 >> 24))) / 15.0);
  t = func_8001EAD0(arg0->unk24->unk30->unk8);
  arg1->unk4->unk30->unk4 = arg1->unk4->unk30->unk4 + (t * k);
  t = func_8001EB64(arg0->unk24->unk30->unk8);
  arg1->unk4->unk30->unkC = arg1->unk4->unk30->unkC + (t * k);
  v = arg1->unk8->unk30;
  v->unk8 = v->unk8 + (((f64) ((f32) (arg0->unk38->unk10 >> 24))) / 20.0);
  t = func_8001EAD0(arg0->unk24->unk30->unk8);
  arg1->unk8->unk30->unk4 = arg1->unk8->unk30->unk4 + (t * k);
  t = func_8001EB64(arg0->unk24->unk30->unk8);
  arg1->unk8->unk30->unkC = arg1->unk8->unk30->unkC + (t * k);
  if (!(((f64) arg0->unk24->unk30->unk8) < (-400.0)))
  {
    arg1->unk0->unk22 = 0;
    arg1->unk4->unk22 = 0;
    arg1->unk8->unk22 = 0;
    func_800058DC((s32) arg0, func_80244458);
  }
}



void func_80244458(s32 arg0, s32 arg1) {
    s32 *p;
    p = &arg1;
    func_80005700(arg0, *p);
}


typedef struct func_80244478_Inner {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x30 - 0x28];
    s32 unk30;
    u8 pad2[0x4B - 0x34];
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80244478_Inner;

typedef struct func_80244478_Outer {
    u8 pad0[0x30];
    func_80244478_Inner *unk30;
} func_80244478_Outer;

typedef struct func_80244478_Copy {
    s32 w[4];
} func_80244478_Copy;

typedef struct func_80244478_Arg0 {
    u8 pad0[0x9C];
    f32 unk9C;
} func_80244478_Arg0;

extern f32 D_802570F8;
extern void func_80244720();
extern void func_802445E8();

void func_80244478(func_80244478_Arg0 *arg0, func_80244478_Outer **arg1) {
    func_80244478_Copy sp28;

    if (func_80126CC0((s32) arg0, func_80126EAC) != 0) {
        func_8001F74C(arg0);
        sp28 = *(func_80244478_Copy *) D_80164F40;
        sp28.w[1] = 0x80000600;
        func_80005F6C(arg0, &sp28);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x502, 2);
        func_8012D918(arg0, 0x500, 4, 0, 0);
        (*arg1)->unk30->unk24 = (*arg1)->unk30->unk24 | 0x4100;
        (*arg1)->unk30->unk30 = (s32) D_80250FA0 | 0x40000000;
        (*arg1)->unk30->unk4B = 0x80;
        (*arg1)->unk30->unk4C = 0;
        (*arg1)->unk30->unk4D = 0;
        (*arg1)->unk30->unk4E = 0xFF;
        (*arg1)->unk30->unk4F = 0xFF;
        arg0->unk9C = D_802570F8;
        if (func_80133A24(0x1A6) != 0) {
            func_800058DC((s32) arg0, func_80244720);
            return;
        }
        func_800058DC((s32) arg0, func_802445E8);
    }
}


typedef struct func_802445E8_StructInner {
    u8 pad[0x4C];
    u8 unk4C;
    u8 unk4D;
} func_802445E8_StructInner;

typedef struct func_802445E8_StructOuter {
    u8 pad[0x30];
    func_802445E8_StructInner *unk30;
} func_802445E8_StructOuter;

extern void func_80244644();

void func_802445E8(s32 arg0, func_802445E8_StructOuter **arg1) {
    func_802445E8_StructInner *temp_v0;

    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4C = temp_v0->unk4C;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4D = temp_v0->unk4D + 1;
    if (func_80133A24(0x1A6) != 0) {
        func_800058DC(arg0, func_80244644);
    }
}


extern f64 D_80257100;
extern f64 D_80257108;

struct func_80244644_Struct_C { u8 pad[0x8]; f32 unk8; u8 pad2[0x4C - 0xC]; u8 unk4C; u8 unk4D; };
struct func_80244644_Struct_B { u8 pad[0x30]; struct func_80244644_Struct_C *unk30; };
struct func_80244644_Struct_A { u8 pad[0x24]; struct func_80244644_Struct_B *unk24; u8 pad2[0x9C - 0x28]; f32 unk9C; };

void func_80244644(struct func_80244644_Struct_A *arg0, struct func_80244644_Struct_B **arg1) {
    arg0->unk24->unk30->unk8 = arg0->unk24->unk30->unk8 - arg0->unk9C;
    if (D_80257100 < arg0->unk9C && arg0->unk24->unk30->unk8 < -20.0f) {
        arg0->unk9C = arg0->unk9C - D_80257108;
    }
    (*arg1)->unk30->unk4C = (*arg1)->unk30->unk4C;
    (*arg1)->unk30->unk4D = (*arg1)->unk30->unk4D + 1;
    if (!(arg0->unk24->unk30->unk8 > -32.0f)) {
        func_800058DC((s32)arg0, func_80244720);
    }
}


typedef struct func_80244720_Struct {
    u8 pad0[0x8];
    f32 unk8;
    u8 pad1[0x40];
    u8 unk4C;
    u8 unk4D;
} func_80244720_Struct;

typedef struct func_80244720_Outer {
    u8 pad0[0x30];
    func_80244720_Struct *unk30;
} func_80244720_Outer;

typedef struct func_80244720_Arg0 {
    u8 pad0[0x24];
    func_80244720_Outer *unk24;
} func_80244720_Arg0;

void func_80244720(func_80244720_Arg0 *arg0, func_80244720_Outer **arg1) {
    func_80244720_Struct *temp_v0;

    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4C = temp_v0->unk4C;
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk4D = temp_v0->unk4D + 1;
    arg0->unk24->unk30->unk8 = -32.0f;
}


extern s32 func_8000522C(u16, s32);
void func_80244904(void *arg0, void *arg1);
struct func_80244AC4_Arg0;
void func_80244AC4(struct func_80244AC4_Arg0 *arg0, s32 arg1);
struct func_8024475C_B { u8 pad[0x10]; s32 unk10; };
struct func_8024475C_A { u16 *unk0; struct func_8024475C_B *unk4; };
extern struct func_8024475C_A *D_801730F4;
struct func_8024475C_S {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x74 - 0x30];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
};

void func_8024475C(struct func_8024475C_S *arg0, struct func_8024358C_StructArg1 *arg1) {
    struct func_8024358C_StructY *t_v0;
    f32 t_f;
    if (func_80126CC0((s32)arg0, func_80126EAC) != 0) {
        func_8001F74C(arg0);
        func_80005F6C(arg0, D_80164F40);
        func_80006214(arg0);
        func_8012636C(arg0, 0);
        func_800062F8(arg1->unk0, 0x80000C00);
        arg1->unk0->unk30->unk30 = (void *)D_8017AF38;
        arg1->unk0->unk30->unk24 = 0x400;
        arg1->unk0->unk30->unk4C = ((u8 *)&D_801BBBF0)[0xF32];
        arg1->unk0->unk30->unk4D = ((u8 *)&D_801BBBF0)[0xF33];
        arg1->unk0->unk30->unk4E = ((u8 *)&D_801BBBF0)[0xF34];
        arg1->unk0->unk30->unk4F = ((u8 *)&D_801BBBF0)[0xF35];
        func_8012C89C(arg0, 0, 0x502, 3);
        arg1->unk0->unk30->unk20 = 1.0f;
        t_v0 = arg1->unk0->unk30;
        t_f = t_v0->unk20;
        t_v0->unk1C = t_f;
        arg1->unk0->unk30->unk18 = t_f;
        arg0->unk2C |= 0x800;
        arg0->unk74 = func_8000522C(*D_801730F4->unk0, D_801730F4->unk4->unk10);
        arg0->unk84 = 0;
        arg0->unk86 = 0;
        arg0->unk88 = 0;
        arg0->unk78 = 0.0f;
        arg0->unk7C = 0.0f;
        arg0->unk80 = 0.0f;
        if (func_80133A24(0x1A7) != 0) {
            func_800058DC((s32)arg0, func_80244AC4);
            return;
        }
        func_800058DC((s32)arg0, func_80244904);
    }
}


extern f32 D_80257110;
extern void func_8024495C();

void func_80244904(void *arg0, void *arg1) {
    if (func_80133A24(0x1A7) != 0) {
        func_80020744(0x1A2);
        func_800058DC((s32) arg0, func_8024495C);
        ((f32 *) arg0)[0x9C / 4] = D_80257110;
    }
}


extern f64 D_80257118;
struct func_802449E0_Arg0;
void func_802449E0(struct func_802449E0_Arg0 *arg0, s32 arg1);

struct func_8024495C_Struct2 {
    u8 pad[8];
    f32 unk8;
};
struct func_8024495C_Struct1 {
    u8 pad[0x30];
    struct func_8024495C_Struct2 *unk30;
};
struct func_8024495C_Struct0 {
    u8 pad[0x24];
    struct func_8024495C_Struct1 *unk24;
    u8 pad2[0x9C - 0x28];
    f32 unk9C;
};

void func_8024495C(struct func_8024495C_Struct0 *arg0, s32 arg1) {
    arg0->unk9C = (f32)((f64)arg0->unk9C + D_80257118);
    arg0->unk24->unk30->unk8 = arg0->unk24->unk30->unk8 - arg0->unk9C;
    if (!(arg0->unk24->unk30->unk8 > -35.0f)) {
        arg0->unk24->unk30->unk8 = -35.0f;
        func_800058DC((s32)arg0, (void *)func_802449E0);
    }
}


extern f64 D_80257120;
extern f64 D_80257128;
extern void func_80244A54();

typedef struct func_802449E0_Inner {
    u8 pad0[0x8];
    f32 unk8;
} func_802449E0_Inner;

typedef struct func_802449E0_Outer {
    u8 pad0[0x30];
    func_802449E0_Inner *unk30;
} func_802449E0_Outer;

typedef struct func_802449E0_Arg0 {
    u8 pad0[0x24];
    func_802449E0_Outer *unk24;
} func_802449E0_Arg0;

void func_802449E0(func_802449E0_Arg0 *arg0, s32 arg1) {
    func_802449E0_Inner *temp_v0;

    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk8 = (f32) ((f64) temp_v0->unk8 + D_80257120);
    if (!((f64) arg0->unk24->unk30->unk8 < D_80257128)) {
        func_800058DC((s32) arg0, func_80244A54);
    }
}


struct func_80244A54_Inner {
    u8 pad[0x8];
    f32 unk8;
};

struct func_80244A54_Outer {
    u8 pad[0x30];
    struct func_80244A54_Inner *unk30;
};

struct func_80244A54_Arg0 {
    u8 pad[0x24];
    struct func_80244A54_Outer *unk24;
};

extern f64 D_80257130;

void func_80244A54(struct func_80244A54_Arg0 *arg0, s32 arg1) {
    struct func_80244A54_Inner *temp_v0;

    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk8 = (f32) ((f64) temp_v0->unk8 - D_80257130);
    if (!(arg0->unk24->unk30->unk8 > -34.0f)) {
        func_800058DC((s32) arg0, (void *) func_80244AC4);
    }
}

/* starting point: func_80243A00 (file021), whose assembly is 100% the same as this function's */

struct func_80244AC4_Inner {
    u8 pad0[0x8];
    f32 unk8;
};

struct func_80244AC4_Outer {
    u8 pad0[0x30];
    struct func_80244AC4_Inner *unk30;
};

struct func_80244AC4_Arg0 {
    u8 pad0[0x24];
    struct func_80244AC4_Outer *unk24;
    u8 pad1[0x7C - 0x28];
    f32 unk7C;
};

void func_80244AC4(struct func_80244AC4_Arg0 *arg0, s32 arg1) {
    arg0->unk24->unk30->unk8 = -34.0f;
    arg0->unk7C = arg0->unk24->unk30->unk8;
}


/* Declarations as they appear in context.h (used before this function's position in the file). */
struct func_80244C14_Mid;
void func_80244C14(s32 arg0, struct func_80244C14_Mid **arg1);

typedef struct func_80244AF0_Struct_Inner {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[0x8];
    void *unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80244AF0_Struct_Inner;

typedef struct func_80244AF0_Struct_Outer {
    u8 pad0[0x30];
    func_80244AF0_Struct_Inner *unk30;
} func_80244AF0_Struct_Outer;

void func_80244AF0(s32 arg0, func_80244AF0_Struct_Outer **arg1) {
    f32 temp_fv0;
    func_80244AF0_Struct_Inner *temp_v0;

    func_8001F74C();
    func_80005F6C((void *) arg0, D_80164F40);
    func_80006214((void *) arg0);
    func_8012636C((void *) arg0, 0);
    func_800062F8(*arg1, 0x80000C00);
    (*arg1)->unk30->unk30 = D_8017AF38;
    (*arg1)->unk30->unk24 = 0x400;
    (*arg1)->unk30->unk4C = ((u8 *) &D_801BBBF0)[0xF32];
    (*arg1)->unk30->unk4D = ((u8 *) &D_801BBBF0)[0xF33];
    (*arg1)->unk30->unk4E = ((u8 *) &D_801BBBF0)[0xF34];
    (*arg1)->unk30->unk4F = ((u8 *) &D_801BBBF0)[0xF35];
    func_8012C89C((void *) arg0, 0, 0x508, 5);
    (*arg1)->unk30->unk20 = 1.0f;
    temp_v0 = (*arg1)->unk30;
    temp_fv0 = temp_v0->unk20;
    temp_v0->unk1C = temp_fv0;
    (*arg1)->unk30->unk18 = temp_fv0;
    func_800058DC(arg0, (void *) func_80244C14);
}


struct func_80244C14_Inner {
    u8 pad[0x10];
    s16 unk10;
};

struct func_80244C14_Mid {
    u8 pad[0x30];
    struct func_80244C14_Inner *unk30;
};

extern s32 func_8012AAE8(s32, s32, s32, s32, f32);

void func_80244C14(s32 arg0, struct func_80244C14_Mid **arg1) {
    struct func_80244C14_Inner *temp_v0;

    if ((func_80133A24(0x1AD) != 0) && (func_8012AAE8(arg0, 0x43480000, 0xC4960000, 0xC4394000, 1.0f) != 0)) {
        temp_v0 = (*arg1)->unk30;
        temp_v0->unk10 = (s16) (temp_v0->unk10 + 5);
    }
}

typedef struct func_80244DA0_Inner {
    u8 pad0[0x14];
    u32 unk14;
} func_80244DA0_Inner;
typedef struct func_80244DA0_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x8];
    func_80244DA0_Inner *unk38;
    u8 pad2[0x8];
    f32 unk44;
    u8 pad3[0x48];
    u16 unk90;
} func_80244DA0_Struct;
void func_80244DA0(func_80244DA0_Struct *arg0, s32 arg1);

typedef struct func_80244C80_Sub38 {
    u8 pad0[0x10];
    u32 unk10;
} func_80244C80_Sub38;

typedef struct func_80244C80_Arg0 {
    u8 pad0[0x38];
    func_80244C80_Sub38 *unk38;
} func_80244C80_Arg0;

void func_80244C80(func_80244C80_Arg0 *arg0, func_80244AF0_Struct_Outer **arg1) {
    f32 temp_fv0;
    func_80244AF0_Struct_Inner *temp_v0;

    func_80005F6C(arg0, D_80164F40);
    func_80006214(arg0);
    func_8012636C(arg0, 0);
    func_800062F8(*arg1, 0x80000C00);
    (*arg1)->unk30->unk30 = D_8017AF38;
    (*arg1)->unk30->unk24 = 0x400;
    (*arg1)->unk30->unk4C = *((u8 *)&D_801BBBF0 + 0xF32);
    (*arg1)->unk30->unk4D = *((u8 *)&D_801BBBF0 + 0xF33);
    (*arg1)->unk30->unk4E = *((u8 *)&D_801BBBF0 + 0xF34);
    (*arg1)->unk30->unk4F = *((u8 *)&D_801BBBF0 + 0xF35);
    func_8012C784(arg0, 0, arg0->unk38->unk10 >> 24);
    (*arg1)->unk30->unk20 = 1.0f;
    temp_v0 = (*arg1)->unk30;
    temp_fv0 = temp_v0->unk20;
    temp_v0->unk1C = temp_fv0;
    (*arg1)->unk30->unk18 = temp_fv0;
    func_800058DC((s32) arg0, &func_80244DA0);
}


struct func_80244E28_Arg0;
struct func_80244E28_Outer;
void func_80244E28(struct func_80244E28_Arg0 *arg0, struct func_80244E28_Outer **arg1);



void func_80244DA0(func_80244DA0_Struct *arg0, s32 arg1) {
    if (func_80133A24(arg0->unk38->unk14 >> 16) != 0) {
        arg0->unk2C = 0x60;
        arg0->unk44 = (f32) (arg0->unk38->unk14 & 0xFFFF);
        arg0->unk90 = 0x20;
        func_800058DC((s32) arg0, (void *) func_80244E28);
    }
}



struct func_80244E28_Sub38 {
    u8 pad0[0x14];
    u32 unk14;
};

struct func_80244E28_Arg0 {
    u8 pad0[0x38];
    struct func_80244E28_Sub38 *unk38;
    u8 pad1[0x90 - 0x3C];
    u16 unk90;
};

struct func_80244E28_Inner {
    u8 pad0[0x10];
    s16 unk10;
};

struct func_80244E28_Outer {
    u8 pad0[0x30];
    struct func_80244E28_Inner *unk30;
};

void func_80244E28(struct func_80244E28_Arg0 *arg0, struct func_80244E28_Outer **arg1) {
    s32 temp_v0;

    if ((arg0->unk38->unk14 >> 0x10) & 1) {
        (*arg1)->unk30->unk10 += 0x80;
    } else {
        (*arg1)->unk30->unk10 -= 0x80;
    }
    temp_v0 = arg0->unk90;
    arg0->unk90 = temp_v0 - 1;
    if (temp_v0 == 0) {
        func_80005700();
    }
}


typedef struct func_80244E9C_StructInner {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad1[0x30 - 0x28];
    s32 unk30;
    u8 pad2[0x48 - 0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_80244E9C_StructInner;

typedef struct func_80244E9C_StructOuter {
    u8 pad0[0x30];
    func_80244E9C_StructInner *unk30;
} func_80244E9C_StructOuter;

extern void func_80244FCC(s32 arg0, s32 arg1);

void func_80244E9C(s32 arg0, func_80244E9C_StructOuter **arg1) {
    func_80244E9C_StructInner *temp_v0;

    func_8001F74C(arg0);
    func_80005F6C((void *) arg0, D_80164F40);
    func_80006214((void *) arg0);
    func_8012C89C((void *) arg0, 0, 0x507, 2);
    temp_v0 = (*arg1)->unk30;
    temp_v0->unk24 = temp_v0->unk24 | 0x300;
    (*arg1)->unk30->unk30 = (s32) D_80250F40 | 0x40000000;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0;
    (*arg1)->unk30->unk4A = 0;
    (*arg1)->unk30->unk4C = 0;
    (*arg1)->unk30->unk4D = 0;
    (*arg1)->unk30->unk4E = 0;
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk18 = 1.0f;
    (*arg1)->unk30->unk1C = 1.0f;
    (*arg1)->unk30->unk20 = 1.0f;
    func_800062F8(*arg1, 0x80000500);
    func_800058DC(arg0, (void *) func_80244FCC);
}


void func_80244FCC(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_80244FD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_8024522C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file021/80242200/func_802453E0.s")


extern void func_802455F0();

void func_80245588(s32 arg0, s32 arg1) {
    func_8001F74C();
    if (func_80133A24(0x1A9) != 0) {
        ((s8 *)&D_801BBBF0)[0xF29] = 0;
        ((s8 *)&D_801BBBF0)[0xF2A] = 0;
        ((s8 *)&D_801BBBF0)[0xF2B] = 0;
        ((s8 *)&D_801BBBF0)[0xF2C] = -0x20;
        ((s8 *)&D_801BBBF0)[0xF2D] = -0x40;
        ((s8 *)&D_801BBBF0)[0xF2E] = 0;
        func_800058DC(arg0, func_802455F0);
    }
}


struct func_802455F0_Struct { u8 pad[0xF29]; u8 a; u8 b; u8 c; };
void func_80245674(s32 arg0, s32 arg1);
#define G ((struct func_802455F0_Struct *)&D_801BBBF0)

void func_802455F0(s32 arg0, s32 arg1) {
    G->b += 8;
    if (G->b >= 0xF7) {
        G->b = 0xF7;
    }
    if (func_80133A24(0x1A9) == 0) {
        G->a = 0x50;
        G->b = 0x46;
        G->c = 0x5A;
        func_800058DC(arg0, func_80245674);
    }
}


void func_80245674(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


typedef struct func_80245680_StructB {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad1[0x8];
    void *unk30;
    u8 pad2[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80245680_StructB;

typedef struct func_80245680_StructA {
    u8 pad0[0x30];
    func_80245680_StructB *unk30;
} func_80245680_StructA;

typedef struct func_80245680_Struct38 {
    u8 pad0[0x10];
    u32 unk10;
} func_80245680_Struct38;

typedef struct func_80245680_Arg0 {
    u8 pad0[0x38];
    func_80245680_Struct38 *unk38;
} func_80245680_Arg0;

extern void func_802457A8();

void func_80245680(func_80245680_Arg0 *arg0, func_80245680_StructA **arg1) {
    f32 temp_fv0;
    func_80245680_StructB *temp_v0;

    func_8001F74C();
    func_80005F6C(arg0, D_80164F40);
    func_80006214(arg0);
    func_8012636C(arg0, 0);
    func_800062F8(*arg1, 0x80000C00);
    (*arg1)->unk30->unk30 = D_8017AF38;
    (*arg1)->unk30->unk24 = 0x400;
    (*arg1)->unk30->unk4C = D_801BBBF0.pad1[0xF32 - 0xF26];
    (*arg1)->unk30->unk4D = D_801BBBF0.pad1[0xF33 - 0xF26];
    (*arg1)->unk30->unk4E = D_801BBBF0.pad1[0xF34 - 0xF26];
    (*arg1)->unk30->unk4F = D_801BBBF0.pad1[0xF35 - 0xF26];
    func_8012C784(arg0, 0, arg0->unk38->unk10 >> 24);
    (*arg1)->unk30->unk20 = 1.0f;
    temp_v0 = (*arg1)->unk30;
    temp_fv0 = temp_v0->unk20;
    temp_v0->unk1C = temp_fv0;
    (*arg1)->unk30->unk18 = temp_fv0;
    func_800058DC((s32) arg0, func_802457A8);
}

struct func_802457A8_Inner { u8 pad[0xC]; f32 unkC; };
struct func_802457A8_Mid { u8 pad[0x30]; struct func_802457A8_Inner *unk30; };
void func_802457A8(s32 arg0, struct func_802457A8_Mid **arg1) {
    arg1[0]->unk30->unkC = (f32)((f64)arg1[0]->unk30->unkC + 1.5);
    if (arg1[0]->unk30->unkC >= 40.0f) {
        arg1[0]->unk30->unkC = 0.0f;
    }
}

struct func_8024593C_Inner {
    u8 pad0[0x10];
    s16 unk10;
};
struct func_8024593C_Outer {
    u8 pad0[0x30];
    struct func_8024593C_Inner *unk30;
};
struct func_8024593C_Arg0 {
    u8 pad0[0x90];
    u16 unk90;
};
void func_8024593C(struct func_8024593C_Arg0 *arg0, struct func_8024593C_Outer **arg1);

typedef struct func_8024580C_StructB {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad1[0x8];
    void *unk30;
    u8 pad2[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_8024580C_StructB;

typedef struct func_8024580C_StructA {
    u8 pad0[0x30];
    func_8024580C_StructB *unk30;
} func_8024580C_StructA;

typedef struct func_8024580C_Struct38 {
    u8 pad0[0x10];
    u32 unk10;
} func_8024580C_Struct38;

typedef struct func_8024580C_Arg0 {
    u8 pad0[0x38];
    func_8024580C_Struct38 *unk38;
    u8 pad1[0x90 - 0x3C];
    u16 unk90;
} func_8024580C_Arg0;

void func_8024580C(func_8024580C_Arg0 *arg0, func_8024580C_StructA **arg1) {
    f32 temp_fv0;
    func_8024580C_StructB *temp_v0;

    func_8001F74C();
    func_80005F6C(arg0, D_80164F40);
    func_80006214(arg0);
    func_8012636C(arg0, 0);
    func_800062F8(*arg1, 0x80000C00);
    (*arg1)->unk30->unk30 = D_8017AF38;
    (*arg1)->unk30->unk24 = 0x400;
    (*arg1)->unk30->unk4C = D_801BBBF0.pad1[0xF32 - 0xF26];
    (*arg1)->unk30->unk4D = D_801BBBF0.pad1[0xF33 - 0xF26];
    (*arg1)->unk30->unk4E = D_801BBBF0.pad1[0xF34 - 0xF26];
    (*arg1)->unk30->unk4F = D_801BBBF0.pad1[0xF35 - 0xF26];
    func_8012C784(arg0, 0, arg0->unk38->unk10 >> 24);
    (*arg1)->unk30->unk20 = 1.0f;
    temp_v0 = (*arg1)->unk30;
    temp_fv0 = temp_v0->unk20;
    temp_v0->unk1C = temp_fv0;
    (*arg1)->unk30->unk18 = temp_fv0;
    arg0->unk90 = 5;
    func_800058DC((s32) arg0, &func_8024593C);
}





extern f64 D_80257148;
extern void func_802459C8(s32 arg0, s32 arg1);

void func_8024593C(struct func_8024593C_Arg0 *arg0, struct func_8024593C_Outer **arg1) {
    struct func_8024593C_Inner *temp_v0;
    s32 temp_v1;

    if (func_80133A24(0x1AC) != 0) {
        temp_v0 = (*arg1)->unk30;
        temp_v0->unk10 = (s16) (s32) ((f64) temp_v0->unk10 + D_80257148);
        temp_v1 = arg0->unk90;
        arg0->unk90 = temp_v1 - 1;
        if (temp_v1 == 0) {
            func_800058DC((s32) arg0, func_802459C8);
        }
    }
}


void func_802459C8(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

