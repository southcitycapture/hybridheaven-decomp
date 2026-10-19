#include "common.h"

extern void func_800058DC(void *, void *);
struct func_80241834_StructObj2C {
    u8 pad0[0xC];
    f32 unkC;
    u8 pad1[0x12 - 0x10];
    u16 unk12;
};
struct func_80241834_StructObj1 {
    u8 pad0[0x2C];
    struct func_80241834_StructObj2C *unk2C;
};
struct func_80241834_StructBBBF0 {
    u8 pad0[0xE0];
    struct func_80241834_StructObj1 *unkE0;
};
extern struct func_80241834_StructBBBF0 D_801BBBF0;
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern u8 D_80164F40[];

struct func_80241580_StructGlobal {
    u8 pad0[0xE0];
    void *unkE0;
    u8 pad1[0xF32 - 0xE4];
    u8 unkF32;
    u8 unkF33;
    u8 unkF34;
    u8 unkF35;
};

struct func_80241580_StructB {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    u16 unk12;
    u8 pad2[0x4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad3[0x8];
    s32 unk30;
    u8 pad4[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};

struct func_80241580_StructA {
    u8 pad0[0x30];
    struct func_80241580_StructB *unk30;
};

extern s32 func_8000C3B0(void *);
extern void func_8012C89C(s32, s32, s32, s32);
extern void func_802416D4();

void func_80241580(s32 arg0, struct func_80241580_StructA **arg1) {
    f32 temp_fv0;
    struct func_80241580_StructB *temp_v1;
    struct func_80241580_StructGlobal *g;

    if (((struct func_80241580_StructGlobal *)&D_801BBBF0)->unkE0 != 0) {
        func_80005E44((void *)arg0, &D_80164F40);
        func_80006214((void *)arg0);
        (*arg1)->unk30->unk24 = 0x13;
        (*arg1)->unk30->unk30 = func_8000C3B0(*arg1);
        (*arg1)->unk30->unk4C = ((struct func_80241580_StructGlobal *)&D_801BBBF0)->unkF32;
        (*arg1)->unk30->unk4D = ((struct func_80241580_StructGlobal *)&D_801BBBF0)->unkF33;
        (*arg1)->unk30->unk4E = ((struct func_80241580_StructGlobal *)&D_801BBBF0)->unkF34;
        (*arg1)->unk30->unk4F = ((struct func_80241580_StructGlobal *)&D_801BBBF0)->unkF35;
        (*arg1)->unk30->unk20 = 1.0f;
        temp_v1 = (*arg1)->unk30;
        temp_fv0 = temp_v1->unk20;
        temp_v1->unk1C = temp_fv0;
        (*arg1)->unk30->unk18 = temp_fv0;
        func_8012C89C(arg0, 0, 0x23A, 2);
        (*arg1)->unk30->unk4 = 35.0f;
        (*arg1)->unk30->unk8 = 5.0f;
        (*arg1)->unk30->unkC = 310.0f;
        (*arg1)->unk30->unk12 = 0;
        func_800058DC((void *)arg0, (void *)func_802416D4);
    }
}


struct func_802416D4_StructV { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; };
struct func_802416D4_StructO { u8 pad0[0x2C]; struct func_802416D4_StructV *unk2C; u8 pad30[0x10]; f32 unk40; u8 pad44[4]; f32 unk48; };
struct func_802416D4_StructG { u8 pad0[0xDC]; struct func_802416D4_StructO *unkDC; struct func_802416D4_StructO *unkE0; };

struct func_802416D4_StructArg { u8 pad0[0x3C]; u16 unk3C; };
struct func_80241834_StructArg0;
void func_80241834(struct func_80241834_StructArg0 *arg0, s32 arg1);
struct func_80241960_StructObj;
extern struct func_80241960_StructObj *D_801BBCD0;
extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80133980(s32);
extern void func_80242390();
extern void func_8024252C();
extern f32 func_8002FC20(f32);
extern void func_801C3B2C(s32);
extern void func_801C3B10(s32);
extern u8 D_8024A3B4[];

void func_802416D4(struct func_802416D4_StructArg *arg0, s32 arg1) {
    struct func_802416D4_StructV *p;
    f32 dx;
    f32 dz;
    struct func_802416D4_StructG *g;

    p = (*(struct func_802416D4_StructO **)&D_801BBCD0)->unk2C;
    dx = p->unk4 - 55.0f;
    dz = p->unkC - 110.0f;
    if ((f64)func_8002FC20(dx * dx + dz * dz) < 5.0) {
        func_801C3B2C(2);
        func_801C3B10(1);
        arg0->unk3C = 0;
        g = (struct func_802416D4_StructG *)&D_801BBBF0;
        g->unkDC->unk40 = 0.0f;
        g->unkDC->unk48 = 0.0f;
        func_8011AAF4(D_8024A3B4, 0xFD, (s32)arg0, 0, 1, 0.0f, 20.0f, 5.0f, 270.0f, 0.0f, g->unkE0->unk2C->unk4, g->unkE0->unk2C->unk8 + 15.0f, g->unkE0->unk2C->unkC, 0.0f, 35.0f, -1, -1);
        func_80133980(0x6A);
        func_800058DC(arg0, (void *)func_80241834);
    }
}

void func_802418D8(void *arg0, s32 arg1);

struct func_80241834_StructArg0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x90 - 0x3E];
    f32 unk90;
    f32 unk94;
    f32 unk98;
};





void func_80241834(struct func_80241834_StructArg0 *arg0, s32 arg1) {
    u16 temp;

    temp = arg0->unk3C;
    if (temp == 0) {
        D_801BBBF0.unkE0->unk2C->unkC = D_801BBBF0.unkE0->unk2C->unkC + 10.0f;
        D_801BBBF0.unkE0->unk2C->unk12 = 0;
    }
    if (arg0->unk3C++ >= 0x28) {
        arg0->unk3C = 0;
        arg0->unk90 = 2.0f;
        arg0->unk94 = 5.0f;
        arg0->unk98 = 260.0f;
        func_800058DC(arg0, (void *) func_802418D8);
    }
}


extern s32 func_801C3DC8(void *arg0, s32 arg1, s32 arg2, s32 arg3, f32 f1, f32 f2, f32 f3, f32 f4, f32 f5);
extern f32 D_8024A578;
extern void func_80241960();

void func_802418D8(void *arg0, s32 arg1) {
    s32 *temp_v0;

    temp_v0 = ((s32 **)arg0)[0x24 / 4][0x30 / 4];
    if (func_801C3DC8(arg0, ((s32 *)arg0)[0x90 / 4], ((s32 *)arg0)[0x94 / 4], ((s32 *)arg0)[0x98 / 4], ((f32 *)temp_v0)[1], ((f32 *)temp_v0)[2] + 3.0f, ((f32 *)temp_v0)[3], D_8024A578, 35.0f) == 0) {
        func_800058DC(arg0, func_80241960);
    }
}


struct func_80241960_StructArg0 {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0xA0 - 0x3E];
    f32 unkA0;
};
struct func_80241960_StructC {
    u8 pad0[0xC];
    f32 unkC;
};
struct func_80241960_StructObj {
    u8 pad0[0x2C];
    struct func_80241960_StructC *unk2C;
};
extern void func_802419CC();

void func_80241960(struct func_80241960_StructArg0 *arg0, s32 arg1) {
    struct func_80241960_StructC *temp_v0_2;

    if (arg0->unk3C++ >= 0xF) {
        arg0->unk3C = 0U;
        arg0->unkA0 = 0.0f;
        temp_v0_2 = D_801BBCD0->unk2C;
        temp_v0_2->unkC = (f32) (temp_v0_2->unkC + 30.0f);
        func_800058DC(arg0, &func_802419CC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80241580/func_802419CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80241580/func_80241D64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80241580/func_802420B0.s")


extern void func_800179B0(void *);
extern u8 D_80248404[];
extern u8 D_8024A468[];

void func_802422C0(s32 arg0, s32 arg1) {
    if (func_8011AAF4(D_8024A468, 0x1EA, arg0, 0, 2, 1.5f, 35.0f, 5.0f, 280.0f, 0.0f, 35.0f, 5.0f, 310.0f, 0.0f, 35.0f, -1, -1) == 0) {
        func_80133980(0x68);
        func_800179B0(D_80248404);
        func_800058DC(arg0, func_80242390);
    }
}


struct func_80242390_StructBuf {
    f32 f0;
    f32 f4;
    f32 f8;
    s16 s0;
    s16 pad;
    s32 w;
    f32 f10;
    s16 s1;
    s16 s2;
    s32 pad2;
};
struct func_80242390_StructC {
    u8 pad0[4];
    f32 unk4;
    u8 pad1[4];
    f32 unkC;
};
struct func_80242390_StructO {
    u8 pad0[0x2C];
    struct func_80242390_StructC *unk2C;
};
extern s32 func_800178E8();
void func_802424C0(s32 arg0, s32 arg1);
extern void func_801C2F0C(s32, s16 *);
extern u8 D_8024A4A4[];

void func_80242390(s32 arg0, s32 arg1) {
    struct func_80242390_StructBuf b;

    if (func_800178E8() != 0) {
        func_8011AAF4(D_8024A4A4, 0x1FC, arg0, 0, 1, 0.0f, 14.0f, 52.0f, 278.0f, 0.0f, 35.0f, 26.0f, 206.0f, 0.0f, 35.0f, -1, -1);
        b.f0 = ((struct func_80242390_StructO *)D_801BBCD0)->unk2C->unk4;
        b.f4 = ((struct func_80242390_StructO *)D_801BBCD0)->unk2C->unkC + 30.0f;
        b.s0 = 0x1100;
        b.w = 0x0168003E;
        b.s1 = 0;
        b.s2 = 0x96;
        b.f8 = 0.0f;
        b.f10 = 1.0f;
        func_801C2F0C(2, (s16 *)&b);
        func_800058DC((void *)arg0, func_802424C0);
    }
}


extern s32 func_801C3044();

struct func_802424C0_Struct {
    s16 a;
    s16 b;
    s32 c;
    f32 d;
    s16 e;
    u8 pad[0x10];
};

void func_802424C0(s32 arg0, s32 arg1) {
    struct func_802424C0_Struct sp;

    if (func_801C3044() == 0) {
        sp.a = 0x1000;
        sp.c = 0x01680041;
        sp.e = 0xF;
        sp.d = 1.0f;
        func_801C2F0C(3, &sp.a);
        func_800058DC(arg0, func_8024252C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file014/80241580/func_8024252C.s")


void func_802426D0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


typedef struct func_802426DC_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x44];
    s32 unk74;
    f32 unk78;
    f32 unk7C;
    f32 unk80;
    s16 unk84;
    s16 unk86;
    s16 unk88;
} func_802426DC_Struct;

extern s32 func_80133A24(s32);
extern s32 func_8012C97C(s32, s32);
extern void func_8024276C(s32 arg0, s32 arg1);

void func_802426DC(func_802426DC_Struct *arg0, s32 arg1) {
    if (func_80133A24(0x68) != 0) {
        func_80005E44(arg0, D_80164F40);
        func_80006214(arg0);
        arg0->unk84 = 0;
        arg0->unk86 = 0;
        arg0->unk88 = 0;
        arg0->unk78 = 0.0f;
        arg0->unk7C = 0.0f;
        arg0->unk80 = 0.0f;
        arg0->unk74 = func_8012C97C(0x23A, 4);
        arg0->unk2C = 0x800;
        func_800058DC(arg0, func_8024276C);
    }
}


void func_8024276C(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


struct func_80242778_StructB { u8 pad[0x30]; f32 unk30; f32 unk34; f32 unk38; f32 unk3C; f32 unk40; f32 unk44; };
struct func_80242778_StructA { u8 pad[0x2C]; struct func_80242778_StructB *unk2C; };
struct func_80242778_StructC { u8 pad[0xA0]; f32 unkA0; };
extern struct func_80242778_StructA *D_801BBCD8;
extern u8 D_8024A53C[];
extern f64 D_8024A5D8;

void func_80242778(struct func_80242778_StructC *arg0, s32 arg1) {
    f64 k;

    func_8011AAF4(D_8024A53C, 0x25B, (s32)arg0, 0, 1, 0.0f, D_801BBCD8->unk2C->unk30, arg0->unkA0 + D_801BBCD8->unk2C->unk34, D_801BBCD8->unk2C->unk38, 0.0f, D_801BBCD8->unk2C->unk3C, D_801BBCD8->unk2C->unk40, D_801BBCD8->unk2C->unk44, 0.0f, 35.0f, -1, -1);
    k = 1.0 - 2.0;
    arg0->unkA0 = (f32)((f64)arg0->unkA0 * k);
    if (!(arg1 % 2)) {
    } else {
        arg0->unkA0 = (f32)((f64)arg0->unkA0 * D_8024A5D8);
    }
}

