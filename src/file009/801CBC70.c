#include "common.h"

extern f32 D_801E33A4;
extern f32 D_801E33A8;
extern f32 D_801E33AC;
extern f32 D_801E3430;
extern f32 D_801E3434;
extern f32 D_801E3438;
extern f32 D_801E343C;
extern s16 D_8001EF38(f32, f32);
extern s32 D_80006214(void *);
extern s32 D_801CE330(void *, s32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32);
extern s32 func_80126944(void);
extern s32 func_8012C6B4(s32);
extern s32 func_801CE3F8(void *, s32, s32, s32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32);
extern u8 D_8017B768[];
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_801BCC25;
extern u8 D_801E0CA0[];
extern u8 D_801E0CB8[];
extern u8 D_801E0CE8[];
extern u8 D_801E0CFC[];
extern u8 D_801E0D10[];
extern u8 D_801E0D24[];
extern u8 D_801E4070[];
#define func_801CD208 func_801CD208__decl
extern u8 func_801CD208[];
extern u8 func_801E5010[];
extern void *func_80005670(void *, void *);
extern void *func_801CE1C8(void *, s32, s32, s32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, f32, f32, s32);
extern void func_80005700(s32);
extern void func_800058DC(void *, void *);
extern void func_80006214(void *);
extern void func_8001F6FC(void);
extern void func_80020718(s32);
extern void func_80116E80(s32);
extern void func_801170DC(s32);
extern void func_80126E88(s32);
extern void func_8013A334(s32 *, u8 *, s32, s32);
extern void func_801479A8(void *);
extern void func_801CBD70(void);
extern void func_801CBDBC(void *, void **, s32);
extern void func_801CC830(u8 *arg0, s32 arg1);
extern void func_801CCA44();
extern void func_801CCDE4();
extern void func_801CD1CC();
extern void func_801CE330(void *, s32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32);
extern void func_801DB6B8(void *, s32, s32);



void func_801CBC70(u8 arg0, u8 arg1, u8 arg2) {
    D_801E0CA0[4] = arg0;
    D_801E0CA0[0] = arg0;
    D_801E0CA0[5] = arg1;
    D_801E0CA0[1] = arg1;
    D_801E0CA0[6] = arg2;
    D_801E0CA0[2] = arg2;
}


void func_801CBCA0(u8 arg0, u8 arg1, u8 arg2) {
    D_801E0CA0[0xC] = arg0;
    D_801E0CA0[0x8] = arg0;
    D_801E0CA0[0xD] = arg1;
    D_801E0CA0[0x9] = arg1;
    D_801E0CA0[0xE] = arg2;
    D_801E0CA0[0xA] = arg2;
}



void func_801CBCD0(s8 arg0, s32 arg1, s8 arg2) {
    D_801E0CA0[0x10] = arg0;
    D_801E0CA0[0x11] = arg2;
}

#define func_801CBD00 D_801CBD00
#undef func_801CBD00

void func_801CBD00(u8 a0, u8 a1, u8 a2, u8 a3, u8 a4, u8 a5, s8 a6, s8 a7, s8 a8) {
    func_801CBC70(a0, a1, a2);
    func_801CBCA0(a3, a4, a5);
    func_801CBCD0(a6, a7, a8);
    D_801E0CA0[0x13] = 0;
    D_801E0CA0[0xF] = 0;
    D_801E0CA0[0xB] = 0;
    D_801E0CA0[0x7] = 0;
    D_801E0CA0[0x3] = 0;
}


#define func_801CBD00 func_801CBD00__decl81
void func_801CBD00(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 a8);

void func_801CBD70(void) {
    func_801CBD00(0x80, 0x80, 0x80, 0, 0xFF, 0xFF, 0, -0x7F, 0);
}
#undef func_801CBD00

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CBC70/func_801CBDBC.s")

#define func_801CBD70 func_801CBD70__func_801CBE04

struct func_801CBE04_Inner {
    u8 pad[0xC];
    u16 unkC;
};

struct func_801CBE04_Outer {
    u8 pad[0x5C];
    struct func_801CBE04_Inner *unk5C;
};

struct func_801CBE04_Sub {
    u8 pad[0x34];
    void *unk34;
};

struct func_801CBE04_Node {
    u8 pad[0x2C];
    struct func_801CBE04_Sub *unk2C;
};

extern void func_801CBD70(void);

void func_801CBE04(struct func_801CBE04_Outer *arg0, void **arg1) {
    struct func_801CBE04_Inner *sp1C;

    sp1C = arg0->unk5C;
    func_80116E80(0x40);
    func_801CBDBC(arg0, arg1, 0x40);
    func_801479A8(arg0);
    func_801CBD70();
    ((struct func_801CBE04_Node *)*arg1)->unk2C->unk34 = D_801E0CB8;
    ((struct func_801CBE04_Node *)arg1[sp1C->unkC - 1])->unk2C->unk34 = D_8017B768;
}
#undef func_801CBD70



struct func_801CBE90_Sub {
    u8 pad[0x34];
    s32 unk34;
};

struct func_801CBE90_Node {
    u8 pad[0x2C];
    struct func_801CBE90_Sub *unk2C;
};

struct func_801CBE90_Mid {
    u8 pad[0xC];
    u16 unkC;
};

struct func_801CBE90_Top {
    u8 pad[0x24];
    struct func_801CBE90_Node *unk24;
    u8 pad2[0x34];
    struct func_801CBE90_Mid *unk5C;
};

void func_801CBE90(struct func_801CBE90_Top *arg0, struct func_801CBE90_Node **arg1) {
    struct func_801CBE90_Mid *sp1C;

    sp1C = arg0->unk5C;
    func_801CBDBC(arg0, arg1, 0x1000);
    func_801170DC(0x40);
    arg0->unk24->unk2C->unk34 = 0;
    arg1[sp1C->unkC - 1]->unk2C->unk34 = 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CBC70/D_801E3140.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CBC70/_mrg_func_801CBEF8.s")


typedef struct func_801CC660_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
} func_801CC660_Struct;

extern func_801CC660_Struct *D_801E4080;

void func_801CC660(s32 arg0, s32 arg1) {
    if ((s32) D_801E4080->unk4C >= (s32) (D_801E4080->unk4E + 0x8002)) {
        if (func_80126944() != 1) {
            func_80126E88(0x1AA);
            func_80126E88(0x1AB);
            func_80126E88(0x1AC);
            func_80126E88(0x1AD);
            func_80126E88(0x1AF);
        }
        func_80005700(arg0);
        D_801E4080 = NULL;
    }
}

#define func_801CC830 func_801CC830__func_801CC6F0
extern u8 D_8008DA88[];
extern u16 D_801BCAE0;


void func_801CC830(u8 *arg0, s32 arg1);

struct func_801CC6F0_Act {
    u8 pad0[0x34];
    u8 unk34;
    u8 unk35;
    u8 unk36;
};

struct func_801CC6F0_Out {
    s32 unk0;
    s32 unk4;
    f32 unk8;
};

void func_801CC6F0(void *arg0, s32 arg1) {
    s32 sp64;
    struct func_801CC6F0_Out out;
    s32 a3;
    void *temp_a0;

    temp_a0 = *(void **)((u8 *)arg0 + 0xC);
    sp64 = *(s32 *)((u8 *)temp_a0 + 0x5C);
    func_80006214(temp_a0);
    if ((func_80126944() == 0) && (D_801BCAE0 & 0x100)) {
        a3 = 6;
    } else {
        a3 = 3;
    }
    func_8013A334((s32 *)&out, D_8008DA88, sp64, a3);
    D_80006214(arg0);
    if (func_801CE3F8(arg0, 0, out.unk0, out.unk4, out.unk8, 0xFF, 0xFF, 0xFF, 0xFF, ((struct func_801CC6F0_Act *)D_801E4080)->unk34, ((struct func_801CC6F0_Act *)D_801E4080)->unk35, ((struct func_801CC6F0_Act *)D_801E4080)->unk36, 0xFF, 0xA, 0x1E, 0.00999999978f, 8) != 0) {
        func_80020718(0x10C);
        D_801E4080->unk4C = 1;
    } else {
        D_801E4080->unk4C = 2;
    }
    func_800058DC(arg0, func_801CC830);
}
#undef func_801CC830



void func_801CC830(u8 *arg0, s32 arg1) {
    u8 *v1;
    s32 sp78;
    s32 sp6C[3];
    u8 *t2;

    v1 = *(u8 **)(arg0 + 0xC);
    t2 = *(u8 **)(*(u8 **)(v1 + 0x24) + 0x2C);
    sp78 = *(s32 *)(v1 + 0x5C);
    if (D_801E4080->unk4C >= 2) {
        D_801E4080->unk4E = 0;
        func_801CE330(arg0, 7, *(f32 *)(t2 + 4), *(f32 *)(t2 + 8), *(f32 *)(t2 + 0xC),
            *(u8 *)((u8 *)D_801E4080 + 0x34), *(u8 *)((u8 *)D_801E4080 + 0x35), *(u8 *)((u8 *)D_801E4080 + 0x36),
            0xFF, *(u8 *)((u8 *)D_801E4080 + 0x34), *(u8 *)((u8 *)D_801E4080 + 0x35), *(u8 *)((u8 *)D_801E4080 + 0x36),
            0, 1, 0x3C, 0.200000003f, 0xC);
        func_80006214(*(void **)(arg0 + 0xC));
        func_8013A334(sp6C, D_8008DA88, sp78, 0x1B);
        func_80006214(arg0);
        func_801CE330(arg0, 2, *(f32 *)&sp6C[0], *(f32 *)&sp6C[1], *(f32 *)&sp6C[2],
            *(u8 *)((u8 *)D_801E4080 + 0x34), *(u8 *)((u8 *)D_801E4080 + 0x35), *(u8 *)((u8 *)D_801E4080 + 0x36),
            0xFF, *(u8 *)((u8 *)D_801E4080 + 0x34), *(u8 *)((u8 *)D_801E4080 + 0x35), *(u8 *)((u8 *)D_801E4080 + 0x36),
            0, 0x1E, 0x3C, 0.00999999978f, 9);
        func_80020718(0x10A);
        func_800058DC(arg0, func_801CC660);
    }
}

extern s32 D_801BBCCC;

struct func_801CC9B0_Struct {
    u8 pad[0x2C];
    s32 unk2C;
};

void func_801CC9B0(struct func_801CC9B0_Struct *arg0, void **arg1) {
    u8 pad[4];
    u8 sp1B;
    u8 *var_v0;

    if ((void *)arg0 == (void *)D_801BBCCC) {
        var_v0 = D_801BC03C;
    } else {
        var_v0 = D_801BC3D8;
    }
    sp1B = var_v0[0x2D9];
    D_801E4080 = func_80005670(arg0, D_801E0CE8);
    ((u8 *)D_801E4080)[0x30] = sp1B;
    arg0->unk2C = arg0->unk2C & ~0x80;
    func_801CBE04((void *)arg0, arg1);
    func_800058DC(arg0, func_801CCA44);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file009/801CBC70/func_801CCA44.s")

#define D_801E4080 D_801E4080__func_801CCD58
#define func_801CCDE4 func_801CCDE4__func_801CCD58

struct func_801CCD58_Inner {
    u8 pad0[0x7C];
    void *unk7C;
    u16 unk80;
};

struct func_801CCD58_Outer {
    u8 pad0[0x5C];
    struct func_801CCD58_Inner *unk5C;
};

struct func_801CCD58_Global {
    u8 pad0[0x4C];
    u16 unk4C;
};

extern void func_801CCDE4();
extern struct func_801CCD58_Global *D_801E4080;

void func_801CCD58(struct func_801CCD58_Outer *arg0, s32 arg1) {
    struct func_801CCD58_Inner *temp_v0;

    temp_v0 = arg0->unk5C;
    if (D_801BCC25 == 1) {
        func_801DB6B8(arg0, arg1, 0);
        if (temp_v0->unk7C == D_801E4070 && temp_v0->unk80 == 0) {
            D_801E4080->unk4C = D_801E4080->unk4C | 0x8000;
            D_801BCC25 = 0;
            func_800058DC(arg0, func_801CCDE4);
        }
    }
}
#undef D_801E4080
#undef func_801CCDE4


typedef struct func_801CCDE4_S12 {
    s32 a;
    s32 b;
    s32 c;
} func_801CCDE4_S12;
struct func_801CCDE4_Mid {
    u8 pad[0x1C];
    func_801CCDE4_S12 unk1C;
    u8 pad2[0x88 - 0x28];
    func_801CCDE4_S12 unk88;
};
typedef union func_801CCDE4_BF {
    s32 w;
    struct {
        u8 a : 1;
        u8 b : 6;
        u8 c : 1;
        u8 d : 1;
        u8 e : 4;
        u8 f : 3;
    } bf;
} func_801CCDE4_BF;
typedef struct func_801CCDE4_G {
    u8 pad[0x30];
    func_801CCDE4_BF u30;
    func_801CCDE4_BF u34;
    func_801CCDE4_BF w38;
    func_801CCDE4_BF w3C;
    u8 pad3[0x324 - 0x40];
    void *unk324;
} func_801CCDE4_G;
extern void func_8013A28C(void *, func_801CCDE4_S12);

void func_801CCDE4(arg0, arg1)
    struct func_801CBE90_Top *arg0;
    s32 arg1;
{
    struct func_801CCDE4_Mid *t0;
    func_801CCDE4_G *v0;

    t0 = (struct func_801CCDE4_Mid *)arg0->unk5C;
    if (D_801E4080 == 0) {
        if (func_80126944() == 1) {
            if ((void *)arg0 == *(void **)(D_801BBBF0 + 0xDC)) {
                v0 = (func_801CCDE4_G *)D_801BC03C;
            } else {
                v0 = (func_801CCDE4_G *)D_801BC3D8;
            }
            v0->u30 = v0->u34;
            v0->w38 = v0->w3C;
            v0->u30.bf.f = 0;
            v0->u30.bf.a = 0;
            v0->u30.bf.c = 0;
            v0->u30.bf.d = 0;
            func_801CBE90(arg0, (void *)arg1);
            t0->unk1C = t0->unk88;
            func_8013A28C((void *)arg1, t0->unk1C);
            func_800058DC(arg0, v0->unk324);
            return;
        }
        func_801CBE90(arg0, (void *)arg1);
        t0->unk1C = t0->unk88;
        func_8013A28C((void *)arg1, t0->unk1C);
        *(s32 *)((u8 *)arg0 + 0x2C) |= 0x80;
        *(u16 *)(D_801BBBF0 + 0xEF0) &= 0xFFEF;
        func_8001F6FC();
        func_800058DC(arg0, func_801E5010);
    }
}



void func_801CCF88(void *arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    void *temp_v0;

    temp_v0 = func_80005670(arg0, D_801E0CFC);
    if (temp_v0 != NULL) {
        *(f32 *)((u8 *)temp_v0 + 0x6C) = arg1;
        *(f32 *)((u8 *)temp_v0 + 0x70) = arg2;
        *(f32 *)((u8 *)temp_v0 + 0x74) = arg3;
        *(f32 *)((u8 *)temp_v0 + 0x7C) = arg4;
        *(f32 *)((u8 *)temp_v0 + 0x80) = arg5;
        *(f32 *)((u8 *)temp_v0 + 0x84) = arg6;
    }
}

#define func_801CD1CC func_801CD1CC__func_801CCFEC

struct func_801CD1CC_Struct;
void func_801CD1CC(struct func_801CD1CC_Struct *arg0, s32 arg1);
struct func_801CCFEC_Struct { u8 pad[0x4E]; s16 unk4E; u8 pad2[0x1C]; f32 unk6C; f32 unk70; f32 unk74; u8 pad3[4]; f32 unk7C; u8 pad4[4]; f32 unk84; s16 unk88; };
struct func_801CCFEC_Obj { u8 pad[0x98]; s16 unk98; };

void func_801CCFEC(struct func_801CCFEC_Struct *arg0, s32 arg1) {
    u8 padt[4]; f32 sp98; f32 sp94; f32 sp90; u8 pad[12]; s16 sp82;
    struct func_801CCFEC_Obj *o;
    f32 sc;
    f32 ax, az;
    sp98 = arg0->unk6C;
    sp94 = arg0->unk70;
    sp90 = arg0->unk74;
    ax = arg0->unk7C;
    az = arg0->unk84;
    sp82 = D_8001EF38(ax, az);
    sc = 0.0500000007f;
    arg0->unk88 = sp82;
    arg0->unk4E = 0;
    o = func_801CE1C8(arg0, 0x18, *(s32 *)&sp98, *(s32 *)&sp94, sp90, 0xFF, 0xFF, 0xFF, 0xC0, 0x40, 0x40, 0x40, 0x40, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0x18, sc, sc, sc, 5.0f, 1);
    if (o != NULL) o->unk98 = sp82;
    o = func_801CE1C8(arg0, 0x17, *(s32 *)&sp98, *(s32 *)&sp94, sp90, 0xFF, 0xFF, 0, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0, 0, 0, 0, 0, 0, 0, sp82, 1, 0xA, 0.15625f, 0.15625f, 0.15625f, 0.0f, 4);
    if (o != NULL) o->unk98 = sp82;
    func_800058DC(arg0, func_801CD1CC);
}
#undef func_801CD1CC


struct func_801CD1CC_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
};


void func_801CD1CC(struct func_801CD1CC_Struct *arg0, s32 arg1) {
    if ((s32) arg0->unk4C >= (s32) arg0->unk4E) {
        func_800058DC(arg0, func_801CD208);
    }
}

#undef func_801CD208

void func_801CD208(s32 arg0, s32 arg1) {
    s32 *p;
    p = &arg1;
    func_80005700(arg0);
}
#define func_801CD208 func_801CD208__decl


struct func_801CD228_Node {
    u8 pad[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};

struct func_801CD228_Mid {
    u8 pad[0x2C];
    struct func_801CD228_Node *unk2C;
};

struct func_801CD228_Obj {
    u8 pad[0x6C];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 unk7B;
};


void func_801CD228(void *arg0, struct func_801CD228_Mid **arg1) {
    u8 pad[8];
    struct func_801CD228_Node *sp1C;
    struct func_801CD228_Obj *temp_v0;

    sp1C = (*arg1)->unk2C;
    temp_v0 = func_80005670(arg0, D_801E0D10);
    if (temp_v0 != NULL) {
        temp_v0->unk6C = sp1C->unk4;
        temp_v0->unk70 = sp1C->unk8;
        temp_v0->unk74 = sp1C->unkC;
        temp_v0->unk78 = 1;
        temp_v0->unk7A = 0;
        temp_v0->unk7B = 0;
    }
}

struct func_801CD288_Struct {
    u8 pad[0x6C];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 unk78[4];
};


void func_801CD288(struct func_801CD288_Struct *arg0, s32 arg1) {
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    u8 *p;
    u8 sp5F;
    s32 t;

    sp6C = arg0->unk6C;
    sp68 = arg0->unk70;
    sp64 = arg0->unk74;
    t = func_8012C6B4(3) + 1;
    sp5F = t;
    func_801CE330(arg0, 0x14, sp6C, sp68, sp64, 0xFF, 0xFF, 0xFF, 0xFF, 0x40, 0x40, 0x40, 0, t, 0x18, 0.0500000007f, 1);
    p = &arg0->unk78[3];
    t = D_801CE330(arg0, 0x15, sp6C, sp68, sp64, 0xFF, 0xFF, 0xFF, 0xFF, 0x40, 0x40, 0x40, 0, 1, 0x18, 0.0500000007f, 1);
    *p += sp5F;
    if (t) {
    }
    if (*p >= 6) {
        func_800058DC(arg0, func_801CD1CC);
    }
}



void func_801CD3FC(s32 a) {
    func_80005670(a, D_801E0D24);
}

#define func_801CD1CC func_801CD1CC__func_801CD420


extern void func_801CD1CC();

void func_801CD420(void *arg0, s32 arg1) {
    s32 pad;
    f32 sp58;
    f32 sp54;
    f32 sp50;

    sp58 = *(f32 *)((u8 *)*(void **)(*(s32 *)(*(s32 *)((u8 *)arg0 + 0xC) + 0x24) + 0x2C) + 0x4);
    sp54 = *(f32 *)((u8 *)*(void **)(*(s32 *)(*(s32 *)((u8 *)arg0 + 0xC) + 0x24) + 0x2C) + 0x8);
    sp50 = *(f32 *)((u8 *)*(void **)(*(s32 *)(*(s32 *)((u8 *)arg0 + 0xC) + 0x24) + 0x2C) + 0xC);
    func_801CE330(arg0, 0x16, sp58, sp54, sp50, 0xFF, 0xFF, 0xFF, 0xFF, 0x40, 0x40, 0x40, 0, func_8012C6B4(2) + 1, 0x18, 0.00999999978f, 1);
    func_800058DC(arg0, func_801CD1CC);
}
#undef func_801CD1CC

