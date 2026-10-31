#include "common.h"



#define func_80240EBC func_80240EBC__func_802408F0

typedef struct { s32 w[4]; } func_802408F0_V;

typedef struct func_802408F0_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x14];
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_802408F0_Inner;

typedef struct func_802408F0_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_802408F0_Inner *unk30;
} func_802408F0_Node;

typedef struct func_802408F0_Args {
    func_802408F0_Node *unk0;
    func_802408F0_Node *unk4;
    func_802408F0_Node *unk8;
    func_802408F0_Node *unkC;
    func_802408F0_Node *unk10;
    func_802408F0_Node *unk14;
    func_802408F0_Node *unk18;
} func_802408F0_Args;

extern void func_800058DC(void *, void (*)(void));
extern s32 func_80005670(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern s32 func_8015105C(s32);
extern func_802408F0_V D_80164F40;
extern struct func_80246730_Struct D_801BBBF0;
extern u8 D_8017AF38[];
extern u8 D_802467D4[];

extern s32 D_80248800;
extern s32 D_80248804;
extern s32 D_80248808;
extern void func_80240EBC();

#define C(i) (((u8 *) &D_801BBBF0)[i])

extern const f32 D_80248108__load;
void func_802408F0(void *arg0, func_802408F0_Args *arg1) {
    s32 sp38[4];

    *(func_802408F0_V *) sp38 = D_80164F40;
    sp38[1] = 0x80000C00;
    func_80005E44(arg0, sp38);
    sp38[1] = 0x80000C00;
    func_80005E44(arg0, sp38);
    sp38[1] = 0x80000C00;
    func_80005E44(arg0, sp38);
    sp38[1] = 0x80000C00;
    func_80005E44(arg0, sp38);
    sp38[1] = 0x80000C00;
    func_80005E44(arg0, sp38);
    sp38[1] = 0x80000C00;
    func_80005E44(arg0, sp38);
    sp38[1] = 0x80000C00;
    func_80005E44(arg0, sp38);
    sp38[1] = 0x80000C00;
    func_80005E44(arg0, sp38);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x4D8, 0);
    arg1->unk0->unk30->unk24 = arg1->unk0->unk30->unk24 | 0x400;
    arg1->unk0->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unk0->unk30->unk4C = C(0xF32);
    arg1->unk0->unk30->unk4D = C(0xF33);
    arg1->unk0->unk30->unk4E = C(0xF34);
    arg1->unk0->unk30->unk4F = C(0xF35);
    func_8012C89C(arg0, 1, 0x4D8, 1);
    arg1->unk4->unk30->unk24 = arg1->unk4->unk30->unk24 | 0x400;
    arg1->unk4->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unk4->unk30->unk4 = 0.0f;
    arg1->unk4->unk30->unk8 = 0.0f;
    arg1->unk4->unk30->unkC = -177.0f;
    arg1->unk4->unk30->unk4C = C(0xF32);
    arg1->unk4->unk30->unk4D = C(0xF33);
    arg1->unk4->unk30->unk4E = C(0xF34);
    arg1->unk4->unk30->unk4F = C(0xF35);
    func_8012C89C(arg0, 2, 0x4D8, 2);
    arg1->unk8->unk30->unk24 = arg1->unk8->unk30->unk24 | 0x400;
    arg1->unk8->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unk8->unk30->unk4 = 0.0f;
    arg1->unk8->unk30->unk8 = 0.0f;
    arg1->unk8->unk30->unkC = -177.0f;
    arg1->unk8->unk30->unk4C = C(0xF32);
    arg1->unk8->unk30->unk4D = C(0xF33);
    arg1->unk8->unk30->unk4E = C(0xF34);
    arg1->unk8->unk30->unk4F = C(0xF35);
    func_8012C89C(arg0, 3, 0x4D8, 4);
    arg1->unkC->unk30->unk24 = arg1->unkC->unk30->unk24 | 0x400;
    arg1->unkC->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unkC->unk30->unk4 = 47.0f;
    arg1->unkC->unk30->unk8 = 5.0f;
    arg1->unkC->unk30->unkC = 75.0f;
    arg1->unkC->unk30->unk4C = C(0xF32);
    arg1->unkC->unk30->unk4D = C(0xF33);
    arg1->unkC->unk30->unk4E = C(0xF34);
    arg1->unkC->unk30->unk4F = C(0xF35);
    arg1->unkC->unk22 = 0;
    func_8012C89C(arg0, 4, 0x4D8, 4);
    arg1->unk10->unk30->unk24 = arg1->unk10->unk30->unk24 | 0x400;
    arg1->unk10->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unk10->unk30->unk4 = D_80248108__load;
    arg1->unk10->unk30->unk8 = 31.0f;
    arg1->unk10->unk30->unkC = 41.0f;
    arg1->unk10->unk30->unk4C = C(0xF32);
    arg1->unk10->unk30->unk4D = C(0xF33);
    arg1->unk10->unk30->unk4E = C(0xF34);
    arg1->unk10->unk30->unk4F = C(0xF35);
    arg1->unk10->unk22 = 0;
    func_8012C89C(arg0, 5, 0x4D8, 3);
    arg1->unk14->unk30->unk24 = arg1->unk14->unk30->unk24 | 0x400;
    arg1->unk14->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unk14->unk30->unk4 = 0.0f;
    arg1->unk14->unk30->unk8 = 82.0f;
    arg1->unk14->unk30->unkC = 0.0f;
    arg1->unk14->unk30->unk4C = C(0xF32);
    arg1->unk14->unk30->unk4D = C(0xF33);
    arg1->unk14->unk30->unk4E = C(0xF34);
    arg1->unk14->unk30->unk4F = C(0xF35);
    func_8012C89C(arg0, 6, 0x4D8, 3);
    arg1->unk18->unk30->unk24 = arg1->unk18->unk30->unk24 | 0x400;
    arg1->unk18->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unk18->unk30->unk4 = 0.0f;
    arg1->unk18->unk30->unk8 = 82.0f;
    arg1->unk18->unk30->unkC = -50.0f;
    arg1->unk18->unk30->unk4C = C(0xF32);
    arg1->unk18->unk30->unk4D = C(0xF33);
    arg1->unk18->unk30->unk4E = C(0xF34);
    arg1->unk18->unk30->unk4F = C(0xF35);
    D_80248800 = func_8015105C(0x29);
    D_80248804 = func_8015105C(0x11B);
    D_80248808 = func_80005670(arg0, D_802467D4);
    func_800058DC(arg0, func_80240EBC);
}
#undef func_80240EBC

#define func_80241024 func_80241024__func_80240EBC
extern u8 D_802468C4[];
extern s32 func_801517CC(s32);
extern void func_80151430(s32, s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801512CC(s32, f32, f32, f32);
extern void func_8015115C(s32, void *);
extern u8 D_80246810[];
extern u8 D_80247460[];

extern void func_80241024();

extern const f32 D_8024810C__load;
extern const f32 D_80248110__load;
extern const f32 D_80248114__load;
extern const f32 D_80248118__load;
void func_80240EBC(void *arg0, s32 arg1) {
    if (func_801517CC(D_80248800) != 0 && func_801517CC(D_80248804) != 0) {
        f32 z = 0.0f;
        func_801512CC(D_80248800, z, z, -33.0f);
        func_80151430(D_80248800, 0);
        func_8015115C(D_80248800, D_80246810);
        func_801512CC(D_80248804, z, z, 17.0f);
        func_80151430(D_80248804, 0x1000);
        func_8015115C(D_80248804, D_802468C4);
        func_8011AAF4(D_80247460, 0x2CC, arg0, 0, 1, z, (D_8024810C__load), 2.5f, (D_8024810C__load), z, (D_80248110__load), D_80248114__load, D_80248118__load, z, 35.0f, -1, -1);
        *(u16 *)((u8 *)arg0 + 0x3C) = 0;
        func_800058DC(arg0, func_80241024);
    }
}
#undef func_80241024

#define func_802410C8 func_802410C8__func_80241024

extern void func_800179B0(void *);
extern void func_8001E978(void *, s32, s32, s32, s32, s32, s32, s32);
extern void func_800208C4(s32);
struct func_802410C8_Struct;
extern void func_802410C8(struct func_802410C8_Struct *, void *);
extern u8 D_802469F0[];

typedef struct func_80241024_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_80241024_Struct;

void func_80241024(func_80241024_Struct *arg0, s32 arg1) {
    s32 temp;

    temp = arg0->unk3C++;
    if (temp == 0x1E) {
        C(0x164) = 0;
        C(0x15D) = 0;
        func_8001E978(arg0, 0, 0, 0, 0x1E, 0, 2, 0);
        func_800208C4(0x6A);
    }
    if (temp >= 0x3C) {
        func_800179B0(D_802469F0);
        func_800058DC(arg0, (void (*)(void)) func_802410C8);
    }
}
#undef func_802410C8


struct func_802410C8_Struct {
    u8 pad[0x90];
    u8 unk90;
};

extern s32 func_800178E8(void);
extern void func_8015122C(s32, void *, s32);
extern void func_80241128();
extern u8 D_802468D0[];
extern u8 D_80246A30[];

void func_802410C8(struct func_802410C8_Struct *arg0, void *arg1) {
    if (func_800178E8() != 0) {
        func_800179B0(D_80246A30);
        func_8015122C(D_80248804, D_802468D0, 5);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_80241128);
    }
}



#define D_8011AAF4 D_8011AAF4__func_80241128
#define D_802468DC D_802468DC__func_80241128
#define D_80246A84 D_80246A84__func_80241128
#define D_8024749C D_8024749C__func_80241128
#define D_802474D8 D_802474D8__func_80241128
#define D_8024811C D_8024811C__func_80241128
#define D_80248120 D_80248120__func_80241128
#define D_80248124 D_80248124__func_80241128
#define D_80248128 D_80248128__func_80241128
#define D_8024812C D_8024812C__func_80241128
#define D_80248130 D_80248130__func_80241128
#define D_80248134 D_80248134__func_80241128
#define D_80248138 D_80248138__func_80241128
#define D_8024813C D_8024813C__func_80241128
#define D_80248140 D_80248140__func_80241128
#define D_80248144 D_80248144__func_80241128
#define func_80151790 func_80151790__func_80241128
#define func_80241304 func_80241304__func_80241128
#define func_80241974 func_80241974__func_80241128
#define func_80241974_Struct func_80241974_Struct__func_80241128
struct func_80241974_Struct {
    u8 pad[0x90];
    u8 unk90;
};
extern void func_80241974(struct func_80241974_Struct *arg0, s32 arg1);
#define LP(p,l) LQ(p,l)
#define LQ(p,l) p##_##l
#define func_80241974 LP(fA, __LINE__)
extern u8 D_802468DC[];
#define LQ(p, l) p##_##l
#define LP(p, l) LQ(p, l)
extern s32 func_80151790(s32);
#define MYCAT2(a, b) a##b
#define MYCAT(a, b) MYCAT2(a, b)
#define func_80241974 MYCAT(myctx_80241974_, __LINE__)
#undef func_80241974

extern u8 D_8024749C[];
extern u8 D_802474D8[];
extern u8 D_80246A84[];
extern void func_80241304(void);
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern f32 D_8024811C;
extern f32 D_80248120;
extern f32 D_80248124;
extern f32 D_80248128;
extern f32 D_8024812C;
extern f32 D_80248130;
extern f32 D_80248134;
extern f32 D_80248138;
extern f32 D_8024813C;
extern f32 D_80248140;
extern f32 D_80248144;

void func_80241128(u8 *arg0, s32 arg1) {
    f32 k;
    if (func_80151790(D_80248804) == 0) {
        arg0[0x90] = 1;
        func_8015115C(D_80248804, D_802468C4);
    }
    k = D_8024811C;
    if ((D_8011AAF4(D_8024749C, 0x307, arg0, 0, 2, 4294967296.0f, k, 2.5f, k, D_80248120, D_80248124, D_80248128, D_8024812C, 0.0f, 35.0f, -1, -1) == 0) && (func_800178E8() != 0) && (arg0[0x90] != 0)) {
        func_8011AAF4(D_802474D8, 0x30C, arg0, 0, 1, 0.0f, D_80248130, D_80248134, D_80248138, 0.0f, D_8024813C, D_80248140, D_80248144, 0.0f, 35.0f, -1, -1);
        func_800179B0(D_80246A84);
        func_8015122C(D_80248804, D_802468DC, 5);
        arg0[0x90] = 0;
        func_800058DC(arg0, func_80241304);
    }
}
#undef LP
#undef LQ
#undef MYCAT2
#undef MYCAT
#undef D_8011AAF4
#undef D_802468DC
#undef D_80246A84
#undef D_8024749C
#undef D_802474D8
#undef D_8024811C
#undef D_80248120
#undef D_80248124
#undef D_80248128
#undef D_8024812C
#undef D_80248130
#undef D_80248134
#undef D_80248138
#undef D_8024813C
#undef D_80248140
#undef D_80248144
#undef func_80151790
#undef func_80241304
#undef func_80241974
#undef func_80241974_Struct











#define D_8011AAF4 D_8011AAF4__func_80241304
#define D_802468E8 D_802468E8__func_80241304
#define D_80246B28 D_80246B28__func_80241304
#define D_80247514 D_80247514__func_80241304
#define D_80247550 D_80247550__func_80241304
#define func_80151790 func_80151790__func_80241304
#define func_802414E8 func_802414E8__func_80241304
#define LQ(p, l) p##_##l
#define LP(p, l) LQ(p, l)
#define LP(p,l) LQ(p,l)
#define LQ(p,l) p##_##l
extern u8 D_802468E8[];
extern s32 func_80151790(s32);


extern u8 D_80246B28[];
extern u8 D_80247514[];
extern u8 D_80247550[];
extern f32 D_80248148__load;
extern f32 D_8024814C__load;
extern f32 D_80248150__load;
extern f32 D_80248154__load;
extern f32 D_80248158__load;
extern f32 D_8024815C__load;
extern f32 D_80248160__load;
extern f32 D_80248164__load;
extern f32 D_80248168__load;
extern f32 D_8024816C__load;
extern void func_802414E8();
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

void func_80241304(u8 *arg0, s32 arg1) {
    if (func_80151790(D_80248804) == 0) {
        arg0[0x90] = 1;
        func_8015115C(D_80248804, D_802468C4);
    }
    if (D_8011AAF4(D_80247514, 0x322, arg0, 0, 2, D_80248148__load, D_8024814C__load, D_80248150__load, 58.0f, 4294967296.0f, -1.0f, D_80248154__load, D_80248158__load, 0.0f, 35.0f, -1, -1) == 0
        && func_800178E8() != 0 && arg0[0x90] != 0) {
        func_8011AAF4(D_80247550, 0x328, arg0, 0, 1, 0.0f, D_8024815C__load, D_80248160__load, D_80248164__load, 0.0f, D_80248168__load, D_8024816C__load, 16.5f, 0.0f, 35.0f, -1, -1);
        func_800179B0(D_80246B28);
        func_8015122C(D_80248804, D_802468E8, 5);
        arg0[0x90] = 0;
        func_800058DC(arg0, (void (*)(void))func_802414E8);
    }
}
#undef LQ
#undef LP
#undef D_8011AAF4
#undef D_802468E8
#undef D_80246B28
#undef D_80247514
#undef D_80247550
#undef func_80151790
#undef func_802414E8


struct func_802414E8_Struct { u8 pad[0x90]; u8 unk90; };
extern s32 func_80151790(s32);
extern u8 D_8024681C[];
extern u8 D_802468B8[];
extern u8 D_80246B98[];
extern u8 D_8024758C[];

#define func_80241638 func_80241638__decl343
extern u8 func_80241638[];

extern const f32 D_80248170__load_func_802414E8;
extern const f32 D_80248174__load_func_802414E8;
extern const f32 D_80248178__load_func_802414E8;
extern const f32 D_8024817C__load_func_802414E8;
extern const f32 D_80248180__load_func_802414E8;
void func_802414E8(struct func_802414E8_Struct *arg0, s32 arg1) {
    if (func_80151790(D_80248804) == 0) {
        arg0->unk90 = 1;
        func_8015115C(D_80248804, D_802468C4);
    }
    if ((func_800178E8() != 0) && (arg0->unk90 != 0)) {
        func_8011AAF4(D_8024758C, 0x33F, arg0, 0, 1, 0.0f, D_80248170__load_func_802414E8, D_80248174__load_func_802414E8, 28.0f, 0.0f, D_80248178__load_func_802414E8, D_8024817C__load_func_802414E8, D_80248180__load_func_802414E8, 0.0f, 35.0f, -1, -1);
        func_800179B0(D_80246B98);
        func_8015122C(D_80248804, D_802468B8, 5);
        func_8015122C(D_80248800, D_8024681C, 0x14);
        arg0->unk90 = 0;
        func_800058DC(arg0, (void (*)(void))func_80241638);
    }
}
#undef func_80241638

#define D_8011AAF4 D_8011AAF4__func_80241638
#define D_80246828 D_80246828__func_80241638
#define D_80246C10 D_80246C10__func_80241638
#define D_802475C8 D_802475C8__func_80241638
#define D_80247604 D_80247604__func_80241638
#define func_80241844 func_80241844__func_80241638
#define func_80241974 func_80241974__func_80241638
#define func_80241974_Struct func_80241974_Struct__func_80241638
struct func_80241974_Struct {
    u8 pad[0x90];
    u8 unk90;
};
extern void func_80241974(struct func_80241974_Struct *arg0, s32 arg1);
#define LP(p,l) LQ(p,l)
#define LQ(p,l) p##_##l
#define func_80241974 LP(fA, __LINE__)
#define func_80241638 func_80241638_ctxdata
#define LQ(p, l) p##_##l
#define LP(p, l) LQ(p, l)
#define MYCAT2(a, b) a##b
#define MYCAT(a, b) MYCAT2(a, b)
#define func_80241974 MYCAT(myctx_80241974_, __LINE__)
#undef func_80241974
#undef func_80241638

extern u8 D_80246828[];
extern u8 D_80246C10[];
extern u8 D_802475C8[];
extern u8 D_80247604[];

extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80241844();

typedef struct func_80241638_Struct {
    u8 pad0[0x90];
    u8 unk90;
} func_80241638_Struct;

extern const f32 D_80248184__load_func_80241638;
extern const f32 D_80248188__load_func_80241638;
extern const f32 D_8024818C__load_func_80241638;
extern const f32 D_80248190__load_func_80241638;
extern const f32 D_80248194__load_func_80241638;
extern const f32 D_80248198__load_func_80241638;
extern const f32 D_8024819C__load_func_80241638;
extern const f32 D_802481A0__load_func_80241638;
extern const f32 D_802481A4__load_func_80241638;
extern const f32 D_802481A8__load_func_80241638;
extern const f32 D_802481AC__load_func_80241638;
extern const f32 D_802481B0__load_func_80241638;
void func_80241638(func_80241638_Struct *arg0, s32 arg1) {
    if (func_80151790(D_80248804) == 0) {
        arg0->unk90 = 1;
        func_8015115C(D_80248804, D_802468C4);
    }
    if (func_80151790(D_80248800) == 0) {
        func_8015122C(D_80248800, D_80246828, 0xF);
    }
    if (D_8011AAF4(D_802475C8, 0x359, arg0, 0, 2, D_80248184__load_func_80241638, D_80248188__load_func_80241638, D_8024818C__load_func_80241638, D_80248190__load_func_80241638, 4294967296.0f, D_80248194__load_func_80241638, D_80248198__load_func_80241638, D_8024819C__load_func_80241638, 0.0f, 35.0f, -1, -1) == 0) {
        if (func_800178E8() != 0) {
            if (arg0->unk90 != 0) {
                func_8011AAF4(D_80247604, 0x35F, arg0, 0, 1, 0.0f, D_802481A0__load_func_80241638, D_802481A4__load_func_80241638, 10.0f, 0.0f, D_802481A8__load_func_80241638, D_802481AC__load_func_80241638, D_802481B0__load_func_80241638, 0.0f, 35.0f, -1, -1);
                func_800179B0(D_80246C10);
                func_8015122C(D_80248804, D_802468D0, 5);
                arg0->unk90 = 0;
                func_800058DC(arg0, (void (*)(void))func_80241844);
            }
        }
    }
}
#undef LP
#undef LQ
#undef MYCAT2
#undef MYCAT
#undef D_8011AAF4
#undef D_80246828
#undef D_80246C10
#undef D_802475C8
#undef D_80247604
#undef func_80241844
#undef func_80241974
#undef func_80241974_Struct

#define func_80241974 func_80241974__func_80241844
extern u8 D_802468E8[];
extern u8 D_80246D10[];
extern u8 D_80247640[];

extern void func_80241974(void);

extern const f32 D_802481B4__load_func_80241844;
extern const f32 D_802481B8__load_func_80241844;
extern const f32 D_802481BC__load_func_80241844;
extern const f32 D_802481C0__load_func_80241844;
extern const f32 D_802481C4__load_func_80241844;
void func_80241844(struct func_802410C8_Struct *arg0, s32 arg1)
{
  int new_var2;
  f32 new_var;
  int new_var3;
  if (func_80151790(D_80248804) == 0)
  {
    func_8015115C(D_80248804, D_802468C4);
    arg0->unk90 = 1;
  }
  new_var2 = 0x376;
  if ((func_800178E8() != (new_var3 = 0)) && (arg0->unk90 != new_var3))
  {
    new_var = (D_802481B4__load_func_80241844);
    if (1)
    {
      func_8011AAF4(D_80247640, new_var2, arg0, new_var3, 1, 0.0f, D_802481B8__load_func_80241844, D_802481BC__load_func_80241844, (D_802481C0__load_func_80241844), 0.0f, new_var, D_802481C4__load_func_80241844, new_var, 0.0f, 35.0f, -1, -1);
      func_800179B0(D_80246D10);
    }
    func_8015122C(D_80248804, D_802468E8, 5);
    (*arg0).unk90 = new_var3;
    func_800058DC(arg0, func_80241974);
  }
}
#undef func_80241974

#define func_80241A88 func_80241A88__func_80241974

extern u8 D_80246DBC[];
extern u8 D_8024767C[];

struct func_80241974_Struct {
    u8 pad[0x90];
    u8 unk90;
};
void func_80241A88(void *arg0, s32 arg1);

extern const f32 D_802481C8__load_func_80241974;
extern const f32 D_802481CC__load_func_80241974;
extern const f32 D_802481D0__load_func_80241974;
extern const f32 D_802481D4__load_func_80241974;
void func_80241974(struct func_80241974_Struct *arg0, s32 arg1) {
    if (func_80151790(D_80248804) == 0) {
        arg0->unk90 = 1;
        func_8015115C(D_80248804, D_802468C4);
    }
    if ((func_800178E8() != 0) && (arg0->unk90 != 0)) {
        func_8011AAF4(D_8024767C, 0x38D, arg0, 0, 1, 0.0f, 10.0f, D_802481C8__load_func_80241974, (D_802481CC__load_func_80241974), 0.0f, -1.0f, D_802481D0__load_func_80241974, (D_802481D4__load_func_80241974), 0.0f, 35.0f, -1, -1);
        func_800179B0(D_80246DBC);
        func_800058DC(arg0, (void (*)(void))func_80241A88);
    }
}
#undef func_80241A88


struct func_80241A88_Struct {
    u8 pad[0x90];
    u8 unk90;
};
extern void func_80241B98();
extern u8 D_802476B8[];
extern u8 D_80246E10[];
extern u8 D_802468F4[];

extern const f32 D_802481D8__load_func_80241A88;
extern const f32 D_802481DC__load_func_80241A88;
extern const f32 D_802481E0__load_func_80241A88;
extern const f32 D_802481E4__load_func_80241A88;
void func_80241A88(void *arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        func_8011AAF4(D_802476B8, 0x39D, arg0, 0, 1, 0.0f, (D_802481D8__load_func_80241A88), 7.5f, D_802481DC__load_func_80241A88, 0.0f, 0.5f, D_802481E0__load_func_80241A88, D_802481E4__load_func_80241A88, 0.0f, 35.0f, -1, -1);
        func_800179B0(D_80246E10);
        func_8015122C(D_80248804, D_802468F4, 5);
        func_801512CC(D_80248804, 1.0f, 0.0f, 17.0f);
        ((struct func_80241A88_Struct *) arg0)->unk90 = 0;
        func_800058DC(arg0, func_80241B98);
    }
}

#define D_8011AAF4 D_8011AAF4__func_80241B98
#define D_80246900 D_80246900__func_80241B98
#define D_8024690C D_8024690C__func_80241B98
#define D_80246E60 D_80246E60__func_80241B98
#define D_802476F4 D_802476F4__func_80241B98
#define func_8013AE20 func_8013AE20__func_80241B98
#define func_80241D14 func_80241D14__func_80241B98
#define LP(p,l) LQ(p,l)
#define LQ(p,l) p##_##l
#define func_80241974 LP(fA, __LINE__)
#define LQ(p, l) p##_##l
#define LP(p, l) LQ(p, l)
extern void func_8013AE20(s32, void *, s32);
#undef func_80241974
extern u8 D_80246900[];
extern u8 D_8024690C[];
extern u8 D_80246E60[];
extern u8 D_802476F4[];
extern void func_80241D14();
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

extern const f32 D_802481E8__load_func_80241B98;
extern const f32 D_802481EC__load_func_80241B98;
extern const f32 D_802481F0__load_func_80241B98;
extern const f32 D_802481F4__load_func_80241B98;
extern const f32 D_802481F8__load_func_80241B98;
extern const f32 D_802481FC__load_func_80241B98;
void func_80241B98(u8 *arg0, void *arg1) {
    if (func_80151790(D_80248804) == 0) {
        arg0[0x90] = 1;
        func_8015115C(D_80248804, D_80246900);
    }
    if ((D_8011AAF4(D_802476F4, 0x3B4, arg0, 0, 2, D_802481E8__load_func_80241B98, (D_802481EC__load_func_80241B98), D_802481F0__load_func_80241B98, D_802481F4__load_func_80241B98, 4294967296.0f, 0.5f, D_802481F8__load_func_80241B98, D_802481FC__load_func_80241B98, 0.0f, 35.0f, -1, -1) == 0) && (func_800178E8() != 0) && (arg0[0x90] != 0)) {
        func_80006214((void *)D_80248804);
        func_8013AE20(D_80248804, arg1, 2);
        func_80006214(arg0);
        func_800179B0(D_80246E60);
        func_8015122C(D_80248804, D_8024690C, 5);
        arg0[0x90] = 0;
        func_800058DC(arg0, (void (*)(void))func_80241D14);
    }
}
#undef LP
#undef LQ
#undef D_8011AAF4
#undef D_80246900
#undef D_8024690C
#undef D_80246E60
#undef D_802476F4
#undef func_8013AE20
#undef func_80241D14

#define func_80241E3C func_80241E3C__func_80241D14
extern u8 D_80246918[];

typedef struct { u8 pad[0x90]; u8 unk90; } func_80241D14_Struct;
extern void func_80241E3C();
extern u8 D_80247730[];
extern u8 D_80246F3C[];
extern u8 D_80246834[];

extern const f32 D_80248200__load_func_80241D14;
extern const f32 D_80248204__load_func_80241D14;
extern const f32 D_80248208__load_func_80241D14;
extern const f32 D_8024820C__load_func_80241D14;
void func_80241D14(func_80241D14_Struct *arg0, s32 arg1) {
    if (func_80151790(D_80248804) == 0) {
        arg0->unk90 = 1;
        func_8015115C(D_80248804, D_80246918);
    }
    if ((func_800178E8() != 0) && (arg0->unk90 != 0)) {
        func_8011AAF4(D_80247730, 0x3D5, arg0, 0, 1, 0.0f, D_80248200__load_func_80241D14, 18.5f, (D_80248204__load_func_80241D14), 0.0f, D_80248208__load_func_80241D14, D_8024820C__load_func_80241D14, -32.0f, 0.0f, 35.0f, -1, -1);
        func_800179B0(D_80246F3C);
        func_8015115C(D_80248800, D_80246834);
        func_800058DC(arg0, func_80241E3C);
    }
}
#undef func_80241E3C

#define func_80241F30 func_80241F30__func_80241E3C
struct func_80241F30_Struct {
    u8 pad[0x90];
    u8 unk90;
};
void func_80241F30(struct func_80241F30_Struct *arg0, s32 arg1);

struct func_80241E3C_Struct {
    u8 pad[0x90];
    u8 unk90;
};

extern u8 D_8024776C[];
extern u8 D_80247034[];
extern u8 D_80246924[];

extern const f32 D_80248210__load_func_80241E3C;
extern const f32 D_80248214__load_func_80241E3C;
extern const f32 D_80248218__load_func_80241E3C;
extern const f32 D_8024821C__load_func_80241E3C;
extern const f32 D_80248220__load_func_80241E3C;
void func_80241E3C(struct func_80241E3C_Struct *arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        func_8011AAF4(D_8024776C, 0x3E6, arg0, 0, 1, 0.0f, (D_80248210__load_func_80241E3C), D_80248214__load_func_80241E3C, 9.5f, 0.0f, 0.5f, D_80248218__load_func_80241E3C, D_8024821C__load_func_80241E3C, 0.0f, D_80248220__load_func_80241E3C, -1, -1);
        func_800179B0(D_80247034);
        func_8015115C(D_80248804, D_80246924);
        arg0->unk90 = 0;
        func_800058DC(arg0, (void (*)(void)) func_80241F30);
    }
}
#undef func_80241F30

#define func_80241FD8 func_80241FD8__func_80241F30

extern u8 D_80246930[];
extern void func_80241FD8();


void func_80241F30(struct func_80241F30_Struct *arg0, s32 arg1) {
    if (func_80151790(D_80248804) == 0) {
        arg0->unk90 = 1;
        func_8015115C(D_80248804, D_80246918);
    }
    if (func_800178E8() != 0 && arg0->unk90 != 0) {
        func_801512CC(D_80248800, -2.0f, 0.0f, -33.0f);
        func_8015122C(D_80248804, D_80246930, 5);
        func_800058DC(arg0, func_80241FD8);
    }
}
#undef func_80241FD8


extern u8 D_802477A8[];
extern u8 D_802477E4[];
extern u8 D_80246840[];

#define func_80242158 func_80242158__decl743
extern u8 func_80242158[];
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

extern const f32 D_80248224__load_func_80241FD8;
extern const f32 D_80248228__load_func_80241FD8;
extern const f32 D_8024822C__load_func_80241FD8;
extern const f32 D_80248230__load_func_80241FD8;
extern const f32 D_80248234__load_func_80241FD8;
extern const f32 D_80248238__load_func_80241FD8;
extern const f32 D_8024823C__load_func_80241FD8;
extern const f32 D_80248240__load_func_80241FD8;
extern const f32 D_80248244__load_func_80241FD8;
extern const f32 D_80248248__load_func_80241FD8;
extern const f32 D_8024824C__load_func_80241FD8;
extern const f32 D_80248250__load_func_80241FD8;
void func_80241FD8(void *arg0, s32 arg1) {
    if (D_8011AAF4(D_802477A8, 0x406, arg0, 0, 2, D_80248224__load_func_80241FD8, 0.0f, D_80248228__load_func_80241FD8, D_8024822C__load_func_80241FD8, 4294967296.0f, 0.5f, D_80248230__load_func_80241FD8, D_80248234__load_func_80241FD8, D_80248238__load_func_80241FD8, D_8024823C__load_func_80241FD8, -1, -1) == 0) {
        D_8011AAF4(D_802477E4, 0x40B, arg0, 0, 1, 0.0f, D_80248240__load_func_80241FD8, D_80248244__load_func_80241FD8, -22.5f, 0.0f, (D_80248248__load_func_80241FD8), D_8024824C__load_func_80241FD8, (D_80248250__load_func_80241FD8), 0.0f, 35.0f, -1, -1);
        func_8015115C(D_80248800, D_80246840);
        func_800058DC(arg0, (void (*)(void))func_80242158);
    }
}
#undef func_80242158


#define D_8024684C D_8024684C__func_80242158
#define D_8024693C D_8024693C__func_80242158
#define D_80247820 D_80247820__func_80242158
#define D_8024785C D_8024785C__func_80242158
#define D_80248254 D_80248254__func_80242158
#define D_80248258 D_80248258__func_80242158
#define D_8024825C D_8024825C__func_80242158
#define func_80020718 func_80020718__func_80242158
#define func_8024231C func_8024231C__func_80242158
extern void func_80020718(s32);
void func_8024231C(void *arg0, s32 arg1);


/* context.h declares func_80242158 as an array, conflicting with this definition. */
extern u8 D_80247820[];
extern u8 D_8024785C[];
extern u8 D_8024684C[];
extern u8 D_8024693C[];
extern f32 D_80248254;
extern f32 D_80248258;
extern f32 D_8024825C;

void func_80242158(void *arg0, s32 arg1) {
    if (func_80151790(D_80248800) == 0) {
        func_8015122C(D_80248800, D_8024684C, 0xF);
    }
    if (D_8011AAF4(D_80247820, 0x41E, arg0, 0, 2, D_80248254, D_80248258, D_8024825C, -25.8f, 4294967296.0f, -0.7f, 15.8f, -31.8f, 0.0f, 35.0f, -1, -1) == 0) {
        func_8011AAF4(D_8024785C, 0x423, arg0, 0, 1, 0.0f, -9.1f, 12.2f, 7.2f, 0.0f, 0.4f, 16.0f, 12.2f, 0.0f, 35.0f, -1, -1);
        func_801512CC(D_80248804, 1.0f, 0.0f, 12.0f);
        func_8015115C(D_80248804, D_8024693C);
        func_80020718(0x215);
        func_800058DC(arg0, (void (*)(void))func_8024231C);
    }
}
#undef D_8024684C
#undef D_8024693C
#undef D_80247820
#undef D_8024785C
#undef D_80248254
#undef D_80248258
#undef D_8024825C
#undef func_80020718
#undef func_8024231C


extern u8 D_80247898[];
extern u8 D_802478D4[];

extern void func_80242488();

extern const f32 D_80248280__load_func_8024231C;
extern const f32 D_80248284__load_func_8024231C;
extern const f32 D_80248288__load_func_8024231C;
extern const f32 D_8024828C__load_func_8024231C;
extern const f32 D_80248290__load_func_8024231C;
extern const f32 D_80248294__load_func_8024231C;
extern const f32 D_80248298__load_func_8024231C;
extern const f32 D_8024829C__load_func_8024231C;
void func_8024231C(void *arg0, s32 arg1) {
    if (D_8011AAF4(D_80247898, 0x435, arg0, 0, 2, (0.08958332985639572f), ((-5.699999809265137f)), 13.0f, -3.0f, 4294967296.0f, (0.4000000059604645f), 16.0f, (12.199999809265137f), 0.0f, 35.0f, -1, -1) == 0) {
        func_8011AAF4(D_802478D4, 0x43A, arg0, 0, 1, 0.0f, ((-3.200000047683716f)), (14.300000190734863f), 27.5f, 0.0f, ((-1.2000000476837158f)), 15.0f, (14.100000381469727f), 0.0f, 35.0f, -1, -1);
        func_800058DC(arg0, func_80242488);
    }
}


#define D_80247910 D_80247910__func_80242488
#define D_8024794C D_8024794C__func_80242488
#define D_802482A0 D_802482A0__func_80242488
#define D_802482A4 D_802482A4__func_80242488
#define D_802482A8 D_802482A8__func_80242488
#define D_802482AC D_802482AC__func_80242488
#define D_802482B0 D_802482B0__func_80242488
#define D_802482B4 D_802482B4__func_80242488
#define D_802482B8 D_802482B8__func_80242488
#define D_802482BC D_802482BC__func_80242488
#define D_802482C0 D_802482C0__func_80242488
#define D_802482C4 D_802482C4__func_80242488
#define D_802482C8 D_802482C8__func_80242488
#define D_802482CC D_802482CC__func_80242488
#define func_8011AAF4 func_8011AAF4__func_80242488
#define func_802425EC func_802425EC__func_80242488
#define ZZC2(a, b) a##b
#define ZZC(a, b) ZZC2(a, b)
void func_802425EC(void *arg0, s32 arg1);
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern f32 D_802482A0;
extern f32 D_802482A4;
extern f32 D_802482A8;
extern f32 D_802482AC;
extern f32 D_802482B0;
extern f32 D_802482B4;
extern f32 D_802482B8;
extern f32 D_802482BC;
extern f32 D_802482C0;
extern f32 D_802482C4;
extern f32 D_802482C8;
extern f32 D_802482CC;
extern u8 D_80247910[];
extern u8 D_8024794C[];

void func_80242488(void *arg0, s32 arg1) {
    if (func_8011AAF4(D_80247910, 0x447, arg0, 0, 2, (0.05691666528582573f), (-3.200000047683716f), (17.700000762939453f), (27.200000762939453f), 4294967296.0f, (-1.2999999523162842f), (15.699999809265137f), (13.899999618530273f), 0.0f, 35.0f, -1, -1) == 0) {
        func_8011AAF4(D_8024794C, 0x44C, arg0, 0, 1, 0.0f, (-6.199999809265137f), 16.399999618530273f, (-11.600000381469727f), 0.0f, (-1.2000000476837158f), (17.700000762939453f), -33.0f, 0.0f, 16.399999618530273f, -1, -1);
        func_800058DC(arg0, (void (*)(void))func_802425EC);
    }
}
#undef ZZC2
#undef ZZC
#undef D_80247910
#undef D_8024794C
#undef D_802482A0
#undef D_802482A4
#undef D_802482A8
#undef D_802482AC
#undef D_802482B0
#undef D_802482B4
#undef D_802482B8
#undef D_802482BC
#undef D_802482C0
#undef D_802482C4
#undef D_802482C8
#undef D_802482CC
#undef func_8011AAF4
#undef func_802425EC


extern u8 D_80247988[];
extern u8 D_802479C4[];

extern void func_80242758();

extern const f32 D_802482D0__load_func_802425EC;
extern const f32 D_802482D4__load_func_802425EC;
extern const f32 D_802482D8__load_func_802425EC;
extern const f32 D_802482DC__load_func_802425EC;
extern const f32 D_802482E0__load_func_802425EC;
extern const f32 D_802482E4__load_func_802425EC;
extern const f32 D_802482E8__load_func_802425EC;
extern const f32 D_802482EC__load_func_802425EC;
extern const f32 D_802482F0__load_func_802425EC;
extern const f32 D_802482F4__load_func_802425EC;
extern const f32 D_802482F8__load_func_802425EC;
extern const f32 D_802482FC__load_func_802425EC;
void func_802425EC(void *arg0, s32 arg1) {
    if (D_8011AAF4(D_80247988, 0x459, arg0, 0, 2, (0.0617000013589859f), ((-6.199999809265137f)), 15.5f, ((-11.699999809265137f)), 4294967296.0f, ((-1.100000023841858f)), (16.799999237060547f), ((-33.099998474121094f)), 0.0f, (16.399999618530273f), -1, -1) == 0) {
        func_8011AAF4(D_802479C4, 0x45E, arg0, 0, 1, 0.0f, -10.5f, (11.300000190734863f), (11.699999809265137f), 0.0f, (1.7999999523162842f), (15.699999809265137f), (12.699999809265137f), 0.0f, 35.0f, -1, -1);
        func_800058DC(arg0, func_80242758);
    }
}



#define D_80247A00 D_80247A00__func_80242758
#define D_80247A3C D_80247A3C__func_80242758
#define D_80248300 D_80248300__func_80242758
#define D_80248304 D_80248304__func_80242758
#define D_80248308 D_80248308__func_80242758
#define D_8024830C D_8024830C__func_80242758
#define D_80248310 D_80248310__func_80242758
#define D_80248314 D_80248314__func_80242758
#define D_80248318 D_80248318__func_80242758
#define D_8024831C D_8024831C__func_80242758
#define D_80248320 D_80248320__func_80242758
#define D_80248324 D_80248324__func_80242758
#define func_802428BC func_802428BC__func_80242758
#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_80241974 LP(fA, __LINE__)
#define LQ(p,l) p##_##l
#define LP(p,l) LQ(p,l)
extern void func_802428BC(void *arg0, s32 arg1);
#undef func_80241974

extern u8 D_80247A00[];
extern u8 D_80247A3C[];
extern f32 D_80248300;
extern f32 D_80248304;
extern f32 D_80248308;
extern f32 D_8024830C;
extern f32 D_80248310;
extern f32 D_80248314;
extern f32 D_80248318;
extern f32 D_8024831C;
extern f32 D_80248320;
extern f32 D_80248324;

void func_80242758(void *arg0, s32 arg1) {
    if (D_8011AAF4(D_80247A00, 0x46B, arg0, 0, 2, (0.06366666406393051f), (-9.100000381469727f), (11.800000190734863f), (9.899999618530273f), 4294967296.0f, (1.899999976158142f), (15.800000190734863f), (10.800000190734863f), 0.0f, 35.0f, -1, -1) == 0) {
        func_8011AAF4(D_80247A3C, 0x470, arg0, 0, 1, 0.0f, (-4.300000190734863f), (3.5999999046325684f), -48.5f, 0.0f, 0.0f, 19.5f, (12.199999809265137f), 0.0f, 35.0f, -1, -1);
        func_800058DC(arg0, (void (*)(void))func_802428BC);
    }
}
#undef LP
#undef LQ
#undef D_80247A00
#undef D_80247A3C
#undef D_80248300
#undef D_80248304
#undef D_80248308
#undef D_8024830C
#undef D_80248310
#undef D_80248314
#undef D_80248318
#undef D_8024831C
#undef D_80248320
#undef D_80248324
#undef func_802428BC









#define D_80247A78 D_80247A78__func_802428BC
#define D_80247AB4 D_80247AB4__func_802428BC
#define func_80241974 func_80241974__func_802428BC
#define func_80242A28 func_80242A28__func_802428BC
#define func_80246360 func_80246360__func_802428BC
#define HHX2(a, b) a##b
#define HHX(a, b) HHX2(a, b)
#define func_80241974 HHX(hhx_80241974_, __LINE__)
#define func_80246360 HHX(hhx_80246360_, __LINE__)
extern void func_80241974(void);
extern u8 func_80246360[];


extern u8 D_80247A78[];
extern u8 D_80247AB4[];
extern f32 D_80248328__load_func_802428BC;
extern f32 D_8024832C__load_func_802428BC;
extern f32 D_80248330__load_func_802428BC;
extern f32 D_80248334__load_func_802428BC;
extern f32 D_80248338__load_func_802428BC;
extern f32 D_8024833C__load_func_802428BC;
extern f32 D_80248340__load_func_802428BC;
extern f32 D_80248344__load_func_802428BC;
extern f32 D_80248348__load_func_802428BC;
extern void func_80242A28(void);

void func_802428BC(void *arg0, s32 arg1) {
    if (D_8011AAF4(D_80247A78, 0x47D, arg0, 0, 2, (0.11194444447755814f), -4.0f, 5.5f, (-49.099998474121094f), 4294967296.0f, (0.30000001192092896f), (21.600000381469727f), (11.699999809265137f), 0.0f, 35.0f, -1, -1) == 0) {
        func_8011AAF4(D_80247AB4, 0x482, arg0, 0, 1, 0.0f, (-7.800000190734863f), 14.0f, (3.4000000953674316f), 0.0f, (3.9000000953674316f), 16.5f, (7.900000095367432f), 0.0f, 35.0f, -1, -1);
        func_800058DC(arg0, func_80242A28);
    }
}
#undef HHX2
#undef HHX
#undef D_80247A78
#undef D_80247AB4
#undef func_80241974
#undef func_80242A28
#undef func_80246360











#define D_80247AF0 D_80247AF0__func_80242A28
#define D_80247B2C D_80247B2C__func_80242A28
#define func_8011AAF4 func_8011AAF4__func_80242A28
#define func_80242B8C func_80242B8C__func_80242A28
#define func_80242D38_Struct func_80242D38_Struct__func_80242A28
struct func_80242D38_Struct { u8 pad[0x3C]; u16 unk3C; };
void func_80242B8C(struct func_80242D38_Struct *arg0, s32 arg1);
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_80247AF0[];
extern u8 D_80247B2C[];

void func_80242A28(void *arg0, s32 arg1) {
    if (func_8011AAF4(D_80247AF0, 0x48F, arg0, 0, 2, 0.294f, -6.4f, 14.2f, -1.7f, 4294967296.0f, 3.9f, 16.5f, 4.9f,
                      0.0f, 35.0f, -1, -1) == 0) {
        func_8011AAF4(D_80247B2C, 0x494, arg0, 0, 1, 0.0f, -5.3f, 16.4f, -15.7f, 0.0f, -1.2f, 17.5f, -33.1f, 0.0f,
                      16.4f, -1, -1);
        func_800058DC(arg0, (void (*)(void))func_80242B8C);
    }
}
#undef D_80247AF0
#undef D_80247B2C
#undef func_8011AAF4
#undef func_80242B8C
#undef func_80242D38_Struct



#define D_80247B68 D_80247B68__func_80242B8C
#define D_80247BA4 D_80247BA4__func_80242B8C
#define D_80248378 D_80248378__func_80242B8C
#define D_8024837C D_8024837C__func_80242B8C
#define D_80248380 D_80248380__func_80242B8C
#define D_80248384 D_80248384__func_80242B8C
#define D_80248388 D_80248388__func_80242B8C
#define D_8024838C D_8024838C__func_80242B8C
#define D_80248390 D_80248390__func_80242B8C
#define D_80248394 D_80248394__func_80242B8C
#define D_80248398 D_80248398__func_80242B8C
#define D_8024839C D_8024839C__func_80242B8C
#define func_80242D38 func_80242D38__func_80242B8C
#define func_80242D38_Struct func_80242D38_Struct__func_80242B8C
#define MYCAT2(a, b) a##b
#define MYCAT(a, b) MYCAT2(a, b)
#define func_80241974 MYCAT(myctx_80241974_, __LINE__)
#define func_80246360 MYCAT(myctx_80246360_, __LINE__)
#define MYCAT2(a, b) a##b
#define MYCAT(a, b) MYCAT2(a, b)
struct func_80242D38_Struct { u8 pad[0x3C]; u16 unk3C; };
extern void func_80242D38(struct func_80242D38_Struct *arg0, s32 arg1);
#define func_80246360 MYCAT(myctx_80246360_, __LINE__)

extern u8 D_80247B68[];
extern u8 D_80247BA4[];
extern f32 D_80248378;
extern f32 D_8024837C;
extern f32 D_80248380;
extern f32 D_80248384;
extern f32 D_80248388;
extern f32 D_8024838C;
extern f32 D_80248390;
extern f32 D_80248394;
extern f32 D_80248398;
extern f32 D_8024839C;

#define F80242B8C(o) (*(f32 *) ((u8 *) &D_801BBBF0 + (o)))

void func_80242B8C(struct func_80242D38_Struct *arg0, s32 arg1) {
    if (D_8011AAF4(D_80247B68, 0x4A3, arg0, 0, 2, (0.03943999856710434f), (-5.199999809265137f), (15.899999618530273f), -16.0f, 4294967296.0f, (-1.2000000476837158f), (16.899999618530273f), (-33.099998474121094f), 0.0f, 35.0f, -1, -1) == 0) {
        F80242B8C(0x1E8) = (-7.900000095367432f);
        F80242B8C(0x1EC) = (3.0999999046325684f);
        F80242B8C(0x1F0) = (7.300000190734863f);
        F80242B8C(0x1F4) = (1.100000023841858f);
        F80242B8C(0x1F8) = 16.5f;
        F80242B8C(0x1FC) = 13.0f;
        func_8011AAF4(D_80247BA4, 0x4AF, arg0, 0, 1, 0.0f, F80242B8C(0x1E8), F80242B8C(0x1EC), F80242B8C(0x1F0), 0.0f, F80242B8C(0x1F4), F80242B8C(0x1F8), F80242B8C(0x1FC), 0.0f, 35.0f, -1, -1);
        arg0->unk3C = 0;
        func_800058DC(arg0, (void (*)(void))func_80242D38);
    }
}
#undef MYCAT2
#undef MYCAT
#undef func_80241974
#undef func_80246360
#undef F80242B8C
#undef D_80247B68
#undef D_80247BA4
#undef D_80248378
#undef D_8024837C
#undef D_80248380
#undef D_80248384
#undef D_80248388
#undef D_8024838C
#undef D_80248390
#undef D_80248394
#undef D_80248398
#undef D_8024839C
#undef func_80242D38
#undef func_80242D38_Struct


extern u8 D_80246984[];
extern u8 D_80247BE0[];
extern u8 D_80247C1C[];
extern void func_80020718(s32);
#define func_80243018 func_80243018__decl820
extern u8 func_80243018[];

#define G(o) (*(f32 *) ((u8 *) &D_801BBBF0 + (o)))
struct func_80242D38_Struct { u8 pad[0x3C]; u16 unk3C; };

void func_80242D38(struct func_80242D38_Struct *arg0, s32 arg1) {
    s32 v;
    f64 d;

    v = arg0->unk3C++;
    if (v >= 6) {
        if (v == 6) {
            func_8015115C(D_80248804, D_80246984);
            func_80020718(0x19A);
        }
        if (!(v % 2)) {
            d = 0.5;
        } else {
            d = -0.5;
        }
        G(0x1EC) = G(0x1EC) + d;
    }
    func_8011AAF4(D_80247BE0, 0x4C9, arg0, 0, 1, 0.0f, G(0x1E8), G(0x1EC), G(0x1F0), 0.0f, G(0x1F4), G(0x1F8), G(0x1FC), 0.0f, 35.0f, -1, -1);
    G(0x1E8) = G(0x1E8) + (-0.02500000000000001);
    G(0x1EC) = G(0x1EC) + 0.044444444444444446;
    G(0x1F0) = G(0x1F0) + (-0.052777777777777764);
    G(0x1F4) = G(0x1F4) + (-0.011111111111111115);
    G(0x1F8) = G(0x1F8) + 0.0027777777777778173;
    G(0x1FC) = G(0x1FC) + 0.008333333333333352;
    if (v >= 0x24) {
        G(0x1E8) = -14.0f;
        G(0x1EC) = 8.0f;
        G(0x1F0) = -15.0f;
        G(0x1F4) = (-0.600000024f);
        G(0x1F8) = 16.7999992f;
        G(0x1FC) = -32.5f;
        func_8011AAF4(D_80247C1C, 0x4DD, arg0, 0, 1, 0.0f, G(0x1E8), G(0x1EC), G(0x1F0), 0.0f, G(0x1F4), G(0x1F8), G(0x1FC), 0.0f, 35.0f, -1, -1);
        arg0->unk3C = 0;
        func_800058DC(arg0, (void (*)(void)) func_80243018);
    }
}
#undef func_80243018

#undef G
#define D_80246978 D_80246978__func_80243018
#define D_802470B0 D_802470B0__func_80243018
#define D_80247C58 D_80247C58__func_80243018
#define D_80247C94 D_80247C94__func_80243018
#define func_80241024_Struct func_80241024_Struct__func_80243018
#define func_802432D4 func_802432D4__func_80243018
#define func_802432D4_Struct func_802432D4_Struct__func_80243018
#define HZ2(a, b) a##b
#define HZ(a, b) HZ2(a, b)
#define func_80241974 HZ(hz_80241974_, __LINE__)
#define func_80243018 hz_self_80243018
#define G(o) (*(f32 *) ((u8 *) &D_801BBBF0 + (o)))
typedef struct func_80241024_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_80241024_Struct;
typedef struct func_802432D4_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x56];
    f32 unk94;
} func_802432D4_Struct;
void func_802432D4(func_802432D4_Struct *arg0, s32 arg1);
#undef func_80243018

extern u8 D_80247C58[];
extern u8 D_80247C94[];
extern u8 D_80246978[];
extern u8 D_802470B0[];

void func_80243018(func_80241024_Struct *arg0, s32 arg1) {
    s32 t;
    f32 a;

    t = arg0->unk3C++;
    func_8011AAF4(D_80247C58, 0x4F0, arg0, 0, 1, 0.0f, G(0x1E8), G(0x1EC), G(0x1F0), 0.0f, G(0x1F4), G(0x1F8), G(0x1FC), 0.0f, 35.0f, -1, -1);
    G(0x1E8) = G(0x1E8) + 0.0911111111111111;
    G(0x1EC) = G(0x1EC) + (-0.039999999999999994);
    G(0x1F0) = G(0x1F0) + 0.037777777777777764;
    G(0x1F4) = G(0x1F4) + (-0.022222222222222223);
    G(0x1F8) = G(0x1F8) + 0.013333333333333286;
    G(0x1FC) = G(0x1FC) + (-0.002222222222222254);
    G(0x1EC) = (!(t % 2) ? 0.5 : -0.5) + G(0x1EC);
    if (t >= 0x2D) {
        a = 1.70000005f;
        G(0x1E8) = (-3.79999995f);
        G(0x1EC) = a;
        G(0x1F0) = 7.0999999f;
        G(0x1F4) = a;
        G(0x1F8) = 18.1000004f;
        G(0x1FC) = 9.19999981f;
        func_8011AAF4(D_80247C94, 0x506, arg0, 0, 1, 0.0f, G(0x1E8), G(0x1EC), G(0x1F0), 0.0f, G(0x1F4), G(0x1F8), G(0x1FC), 0.0f, 35.0f, -1, -1);
        func_8015115C(D_80248804, D_80246978);
        func_800179B0(D_802470B0);
        arg0->unk3C = 0;
        func_800058DC(arg0, (void (*)(void))func_802432D4);
    }
}
#undef HZ2
#undef HZ
#undef func_80241974
#undef G
#undef D_80246978
#undef D_802470B0
#undef D_80247C58
#undef D_80247C94
#undef func_80241024_Struct
#undef func_802432D4
#undef func_802432D4_Struct
#define G(o) (*(f32 *) ((u8 *) &D_801BBBF0 + (o)))

#define func_802434E0 func_802434E0__func_802432D4

typedef struct func_802432D4_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x56];
    f32 unk94;
} func_802432D4_Struct;
extern u8 D_80247CD0[];

void func_802434E0();
void func_802432D4(func_802432D4_Struct *arg0, s32 arg1);

#define F802432D4(o) (*(f32 *) ((u8 *) &D_801BBBF0 + (o)))

void func_802432D4(func_802432D4_Struct *arg0, s32 arg1) {
    s32 t;
    f64 v;

    t = arg0->unk3C;
    arg0->unk3C++;
    D_8011AAF4(D_80247CD0, 0x51A, arg0, 0, 1, 0.0f, F802432D4(0x1E8), F802432D4(0x1EC), F802432D4(0x1F0), 0.0f, F802432D4(0x1F4), F802432D4(0x1F8), F802432D4(0x1FC), 0.0f, 58.5f, -1, -1);
    if (t < 0x3C) {
        F802432D4(0x1E8) = F802432D4(0x1E8) + (-0.020000000000000004);
        F802432D4(0x1EC) = F802432D4(0x1EC) + 0.034999999999999996;
        F802432D4(0x1F0) = F802432D4(0x1F0) + 0.0016666666666666754;
        F802432D4(0x1F4) = F802432D4(0x1F4) + (-0.05333333333333334);
        F802432D4(0x1F8) = F802432D4(0x1F8) + 0.014999999999999977;
        F802432D4(0x1FC) = F802432D4(0x1FC) + (-0.02166666666666665);
    }
    if (!(t % 2)) {
        v = 0.05;
    } else {
        v = (-0.05);
    }
    F802432D4(0x1E8) = F802432D4(0x1E8) + v;
    if (t >= 0x1000) {
        arg0->unk3C = arg0->unk3C - 0x10;
    }
    if ((t >= 0x3C) && (func_800178E8() != 0)) {
        arg0->unk3C = 0;
        arg0->unk94 = 0.0f;
        func_80020718(0x19B);
        func_800058DC(arg0, (void (*)(void))func_802434E0);
    }
}
#undef func_802434E0


typedef struct func_802434E0_Struct_In { u8 pad[8]; f32 unk8; } func_802434E0_Struct_In;
typedef struct func_802434E0_Struct_N { u8 pad[0x30]; func_802434E0_Struct_In *unk30; } func_802434E0_Struct_N;
typedef struct func_802434E0_Struct_A1 { u8 pad[0x14]; func_802434E0_Struct_N *unk14; } func_802434E0_Struct_A1;
typedef struct func_802434E0_Struct_A0 {
    u8 pad[0x3C];
    u16 unk3C;
    u8 pad3E[0x94 - 0x3E];
    f32 unk94;
    u8 pad98[8];
    f32 unkA0;
} func_802434E0_Struct_A0;

extern u8 D_80247D0C[];

#define func_8024372C func_8024372C__decl1005
extern u8 func_8024372C[];
#define FF(o) (*(f32 *) ((u8 *) &D_801BBBF0 + (o)))

void func_802434E0(func_802434E0_Struct_A0 *arg0, func_802434E0_Struct_A1 *arg1) {
    s32 t;
    f64 v;

    t = arg0->unk3C++;
    arg1->unk14->unk30->unk8 = arg1->unk14->unk30->unk8 + arg0->unk94;
    arg0->unk94 = (f32) ((f64) arg0->unk94 - 0.0388);
    func_8011AAF4(D_80247D0C, 0x543, arg0, 0, 1, 0.0f, FF(0x1E8), FF(0x1EC), FF(0x1F0), 0.0f, FF(0x1F4), FF(0x1F8), FF(0x1FC), 0.0f, 58.5f, -1, -1);
    if (!(t % 2)) {
        v = 0.05;
    } else {
        v = (-0.05);
    }
    FF(0x1EC) = (f32) ((f64) FF(0x1EC) + v);
    if (t >= 0x2D) {
        C(0xF20) = 0x39;
        C(0xF21) = 2;
        C(0xF22) = 3;
        C(0xF23) = 0xFD;
        C(0xF24) = 0x61;
        C(0xF25) = 0xE;
        C(0xF26) = 1;
        C(0xF27) = 1;
        C(0xF28) = 0x7F;
        C(0xF29) = 0xFE;
        C(0xF2A) = 0x8A;
        C(0xF2B) = 0xF;
        C(0xF2C) = 0x21;
        *(s8 *) &C(0xF2D) = -0x5A;
        *(s8 *) &C(0xF2E) = -0xC;
        C(0xF32) = 0;
        C(0xF33) = 0;
        C(0xF34) = 0;
        C(0xF35) = 0xA0;
        FF(0x29C) = 5.0f;
        FF(0x2A0) = 700.0f;
        FF(0x1E8) = 8.5f;
        FF(0x1EC) = 2.0f;
        FF(0x1F0) = (-44.7999992f);
        FF(0x1F4) = (-0.200000003f);
        FF(0x1F8) = 24.8999996f;
        FF(0x1FC) = 5.4000001f;
        arg0->unk3C = 0;
        arg0->unkA0 = (-6.5999999f);
        func_800058DC(arg0, (void (*)(void)) func_8024372C);
    }
}
#undef func_8024372C

#define D_801BBBF0 D_801BBBF0__func_8024372C
#define D_80246864 D_80246864__func_8024372C
#define D_80247D48 D_80247D48__func_8024372C
#define func_80243A8C func_80243A8C__func_8024372C
#define func_80243A8C_Arg1 func_80243A8C_Arg1__func_8024372C
#define func_80243A8C_Struct func_80243A8C_Struct__func_8024372C
#define func_802465F8 func_802465F8__func_8024372C
#define func_80246730_Struct func_80246730_Struct__func_8024372C
#define F(o) (*(f32 *) ((u8 *) &D_801BBBF0 + (o)))
#define MYCAT2(a, b) a##b
#define MYCAT(a, b) MYCAT2(a, b)
#define HZC2(a, b) a##b
#define HZC(a, b) HZC2(a, b)
#define func_80241974 HZC(hz80241974_, __LINE__)
struct func_80246730_Struct {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[0x34D - 6];
    u8 unk34D;
    u8 pad34E[0x3A6 - 0x34E];
    u8 unk3A6;
    u8 unk3A7;
};
extern struct func_80246730_Struct D_801BBBF0;
#define F(o) (*(f32 *) ((u8 *) &D_801BBBF0 + (o)))
#define MYCAT2(a, b) a##b
#define MYCAT(a, b) MYCAT2(a, b)
#define func_80241974 MYCAT(myctx_80241974_, __LINE__)
struct func_80243A8C_Arg1 {
    u8 pad[0x14];
    u8 *unk14;
};
struct func_80243A8C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x52];
    u8 unk90;
    u8 pad91[0xF];
    f32 unkA0;
};
void func_80243A8C(struct func_80243A8C_Struct *arg0, struct func_80243A8C_Arg1 *arg1);
void func_802465F8(f32 arg0, f32 arg1, f32 arg2, f32 arg3);


struct func_8024372C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x52];
    u8 unk90;
    u8 pad91[3];
    f32 unk94;
    u8 pad98[8];
    f32 unkA0;
};
struct func_8024372C_Inner {
    u8 pad0[8];
    f32 unk8;
};
struct func_8024372C_Node {
    u8 pad0[0x30];
    struct func_8024372C_Inner *unk30;
};
struct func_8024372C_Args {
    u8 pad0[0x14];
    struct func_8024372C_Node *unk14;
};

extern u8 D_80247D48[];
extern u8 D_80246864[];

void func_8024372C(struct func_8024372C_Struct *arg0, struct func_8024372C_Args *arg1) {
    s32 v;

    v = arg0->unk3C++;
    if (v < 0xF) {
        arg1->unk14->unk30->unk8 = arg1->unk14->unk30->unk8 + arg0->unk94;
        arg0->unk94 = arg0->unk94 - 0.0388;
    }
    if (v != 0xF) {
        if (v != 0x10) {
            if (v != 0x11) goto done;
            goto c17;
        }
        goto c16;
    }
    func_802465F8(0.0f, 7.0f, -12.0f, 0.2f);
    func_80020718(0x19C);
    goto done;
c16:
    func_802465F8(5.0f, 13.0f, -13.0f, 0.2f);
    goto done;
c17:
    func_802465F8(0.0f, 11.0f, -13.0f, 0.2f);
done:
    func_8011AAF4(D_80247D48, 0x596, arg0, 0, 1, 0.0f, F(0x1E8), F(0x1EC), F(0x1F0), 0.0f, F(0x1F4), F(0x1F8), F(0x1FC), 0.0f, 58.5f, 0, (s32) arg0->unkA0);
    F(0x1E8) = F(0x1E8) + (-0.15833333333333333);
    F(0x1EC) = F(0x1EC) + 0.525;
    F(0x1F0) = F(0x1F0) + 0.8333333333333331;
    F(0x1F4) = F(0x1F4) + (-0.09999999999999999);
    F(0x1F8) = F(0x1F8) + (-0.09999999999999994);
    F(0x1FC) = F(0x1FC) + (-0.01250000000000003);
    arg0->unkA0 = arg0->unkA0 + (-20.349999999999998);
    F(0x1EC) = (!(v % 2) ? 0.5 : -0.5) + F(0x1EC);
    if (v >= 0x18) {
        F(0x1E8) = 7.5999999f;
        F(0x1EC) = 3.79999995f;
        F(0x1F0) = (-95.9000015f);
        F(0x1F4) = (-1.39999998f);
        F(0x1F8) = 9.30000019f;
        F(0x1FC) = (-117.199997f);
        func_801512CC(D_80248800, 0, 0, -110.0f);
        func_8015115C(D_80248800, D_80246864);
        arg0->unk3C = 0;
        arg0->unk90 = 0;
        arg0->unkA0 = 759.0f;
        func_800058DC(arg0, (void (*)(void)) func_80243A8C);
    }
}
#undef F
#undef MYCAT2
#undef MYCAT
#undef HZC2
#undef HZC
#undef func_80241974
#undef D_801BBBF0
#undef D_80246864
#undef D_80247D48
#undef func_80243A8C
#undef func_80243A8C_Arg1
#undef func_80243A8C_Struct
#undef func_802465F8
#undef func_80246730_Struct

#define func_80243CD4 func_80243CD4__func_80243A8C

struct func_80243A8C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x52];
    u8 unk90;
    u8 pad91[0xF];
    f32 unkA0;
};
struct func_80243A8C_Arg1 {
    u8 pad[0x14];
    u8 *unk14;
};
extern s32 func_801511C4(s32, void *, s32);
extern u8 D_80246870[];
extern u8 D_80247D84[];

extern void func_80243CD4();
#define F80243A8C(o) (*(f32 *) ((u8 *) &D_801BBBF0 + (o)))

void func_80243A8C(struct func_80243A8C_Struct *arg0, struct func_80243A8C_Arg1 *arg1) {
    s32 sp5C;

    sp5C = arg0->unk3C++;
    if (func_80151790(D_80248800) == 0) {
        arg0->unk90 = 1;
        func_801511C4(D_80248800, D_80246870, 10);
    }
    D_8011AAF4(D_80247D84, 0x5C4, arg0, 0, 1, 0.0f, F80243A8C(0x1E8), F80243A8C(0x1EC), F80243A8C(0x1F0), 0.0f, F80243A8C(0x1F4), F80243A8C(0x1F8), F80243A8C(0x1FC), 0.0f, 40.0f, 0, (s32) arg0->unkA0);
    F80243A8C(0x1E8) = F80243A8C(0x1E8) + (-0.225);
    F80243A8C(0x1EC) = F80243A8C(0x1EC) + 0.06500000000000002;
    F80243A8C(0x1F0) = F80243A8C(0x1F0) + (-0.7174999999999997);
    F80243A8C(0x1F4) = F80243A8C(0x1F4) + (-0.0125);
    F80243A8C(0x1F8) = F80243A8C(0x1F8) + (-0.09250000000000003);
    F80243A8C(0x1FC) = F80243A8C(0x1FC) + (-0.45500000000000007);
    arg0->unkA0 = arg0->unkA0 + (-14.794999999999998);
    if (sp5C >= 0x28) {
        F80243A8C(0x1E8) = (-3.79999995f);
        F80243A8C(0x1EC) = 2.0f;
        F80243A8C(0x1F0) = (-147.800003f);
        F80243A8C(0x1F4) = (-2.29999995f);
        F80243A8C(0x1F8) = 6.30000019f;
        F80243A8C(0x1FC) = (-135.600006f);
        func_8015115C(D_80248800, D_80246870);
        arg1->unk14[0x22] = 0;
        arg0->unk3C = 0;
        arg0->unk90 = 0;
        func_800058DC(arg0, func_80243CD4);
    }
}
#undef func_80243CD4

#define func_80244014 func_80244014__func_80243CD4
#define func_802465F8 func_802465F8__func_80243CD4

extern u8 D_8024687C[];
extern u8 D_80247DC0[];

void func_802465F8(f32 arg0, f32 arg1, f32 arg2, f32 arg3);
extern void func_80244014();
extern void func_80246730(void);
typedef struct func_80243CD4_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x90 - 0x3E];
    u8 unk90;
} func_80243CD4_Struct;
#define F80243CD4(o) (*(f32 *) ((u8 *) &D_801BBBF0 + (o)))

void func_80243CD4(func_80243CD4_Struct *arg0, s32 arg1) {
    s32 sp54;
    s32 m;
    extern s32 func_80151790();

    sp54 = arg0->unk3C++;
    if (func_80151790(D_80248804, arg0) == 0) {
        arg0->unk90 = 1;
        func_801511C4(D_80248800, D_8024687C, 10);
    }
    m = sp54 % 16;
    if (m == 0) goto c0;
    if (m == 4) goto c4;
    if (m == 8) goto c8;
    if (m != 12) goto end;
    if (1) goto c12;
c0:
    func_802465F8(23.0f, 13.0f, -13.0f, 0.5f);
    if (1) goto end;
c4:
    func_802465F8(-13.0f, 13.0f, -13.0f, 0.5f);
    if (1) goto end;
c8:
    func_802465F8(21.0f, 52.0f, -16.0f, 0.4f);
    if (1) goto end;
c12:
    func_802465F8(0.0f, 56.0f, 10.0f, 0.5f);
end:
    D_8011AAF4(D_80247DC0, 0x60E, arg0, 0, 1, 0.0f, F80243CD4(0x1E8), F80243CD4(0x1EC), F80243CD4(0x1F0), 0.0f, F80243CD4(0x1F4), F80243CD4(0x1F8), F80243CD4(0x1FC), 0.0f, 35.0f, -1, -1);
    F80243CD4(0x1E8) = F80243CD4(0x1E8) + 0.13111111111111112;
    F80243CD4(0x1EC) = F80243CD4(0x1EC) + 0.03111111111111111;
    F80243CD4(0x1F0) = F80243CD4(0x1F0) + 0.05333333333333346;
    F80243CD4(0x1F4) = F80243CD4(0x1F4) + 0.08222222222222221;
    F80243CD4(0x1F8) = F80243CD4(0x1F8) + 0.011111111111111112;
    F80243CD4(0x1FC) = F80243CD4(0x1FC) + 0.002222222222222096;
    F80243CD4(0x1EC) = (!(sp54 % 2) ? 0.5 : -0.5) + F80243CD4(0x1EC);
    if (sp54 >= 0x2D) {
        F80243CD4(0x1E8) = (-12.3000002f);
        F80243CD4(0x1EC) = (-1.70000005f);
        F80243CD4(0x1F0) = -126.0f;
        F80243CD4(0x1F4) = (-2.4000001f);
        F80243CD4(0x1F8) = 6.80000019f;
        F80243CD4(0x1FC) = (-134.199997f);
        func_8015115C(D_80248800, D_8024687C);
        arg0->unk3C = 0;
        func_800058DC(arg0, (void (*)(void))func_80244014);
    }
}
#undef func_80244014
#undef func_802465F8

#define func_8024421C func_8024421C__func_80244014
typedef struct { u8 pad[0x3C]; u16 unk3C; u8 pad3E[0x56]; f32 unk94; } func_80244014_Struct;
extern u8 D_80247DFC[];

struct func_8024421C_Arg0;
struct func_8024421C_Arg1;
void func_8024421C(struct func_8024421C_Arg0 *arg0, struct func_8024421C_Arg1 *arg1);
#define F80244014(o) (*(f32 *) ((u8 *) &D_801BBBF0 + (o)))
void func_80244014(func_80244014_Struct *arg0, s32 arg1) {
    s32 v;
    f64 k;
    v = arg0->unk3C++;
    func_8011AAF4(D_80247DFC, 0x632, arg0, 0, 1, 0.0f, F80244014(0x1E8), F80244014(0x1EC), F80244014(0x1F0), 0.0f, F80244014(0x1F4), F80244014(0x1F8), F80244014(0x1FC), 0.0f, 35.0f, -1, -1);
    F80244014(0x1E8) = F80244014(0x1E8) + (-0.060000000000000026);
    F80244014(0x1EC) = F80244014(0x1EC) + (-0.006666666666666665);
    F80244014(0x1F0) = F80244014(0x1F0);
    F80244014(0x1F4) = F80244014(0x1F4) + 0.07;
    F80244014(0x1F8) = F80244014(0x1F8) + (-0.02666666666666666);
    F80244014(0x1FC) = F80244014(0x1FC) + 0.05333333333333409;
    if (!(v % 2)) {
        k = 0.05;
    } else {
        k = (-0.05);
    }
    F80244014(0x1EC) = F80244014(0x1EC) + k;
    if (v >= 0x1E) {
        F80244014(0x1E8) = 77.0999985f;
        F80244014(0x1EC) = 1.70000005f;
        F80244014(0x1F0) = (-79.4000015f);
        F80244014(0x1F4) = 4.19999981f;
        F80244014(0x1F8) = 55.7999992f;
        F80244014(0x1FC) = (-44.9000015f);
        arg0->unk3C = 0;
        arg0->unk94 = 0.0f;
        func_800058DC(arg0, (void (*)(void))func_8024421C);
    }
}
#undef func_8024421C

#define func_802445C8 func_802445C8__func_8024421C
#define func_802465F8 func_802465F8__func_8024421C
extern u8 D_80246888[];

struct func_8024421C_Inner { u8 pad0[8]; f32 unk8; };
struct func_8024421C_Node { u8 pad0[0x22]; u8 unk22; u8 pad23[0xD]; struct func_8024421C_Inner *unk30; };
struct func_8024421C_Arg1 { u8 pad0[0x18]; struct func_8024421C_Node *unk18; };
struct func_8024421C_Arg0 { u8 pad0[0x3C]; u16 unk3C; u8 pad3E[0x56]; f32 unk94; };
#undef F
#define F(o) (*(f32 *) ((u8 *) &D_801BBBF0 + (o)))
void func_802465F8(f32 arg0, f32 arg1, f32 arg2, f32 arg3);
extern u8 D_80247E38[];

extern void func_802445C8();

void func_8024421C(struct func_8024421C_Arg0 *arg0, struct func_8024421C_Arg1 *arg1) {
    s32 v;
    f64 d;
    struct func_8024421C_Arg0 **pp = &arg0;

    v = arg0->unk3C++;
    if (v < 0x3C) {
        arg1->unk18->unk30->unk8 += (*pp)->unk94;
        (*pp)->unk94 = (*pp)->unk94 - 0.0388;
    }
    if (v == 0x3C) {
        func_802465F8(17.0f, 82.0f, -43.0f, 0.4f);
    }
    if (v == 0x40) {
        arg1->unk18->unk22 = 0;
    }
    if (v % 16 == 0) goto l0;
    if (v % 16 == 4) goto l4;
    if (v % 16 == 8) goto l8;
    if (v % 16 != 12) goto done;
    goto l12;
l0:
    func_802465F8(23.0f, 13.0f, -13.0f, 0.5f);
    goto done;
l4:
    func_802465F8(-13.0f, 13.0f, -13.0f, 0.5f);
    goto done;
l8:
    func_802465F8(21.0f, 52.0f, -16.0f, 0.4f);
    goto done;
l12:
    func_802465F8(0.0f, 56.0f, 10.0f, 0.5f);
done:
    func_8011AAF4(D_80247E38, 0x678, *pp, 0, 1, 0.0f, F(0x1E8), F(0x1EC), F(0x1F0), 0.0f, F(0x1F4), F(0x1F8), F(0x1FC), 0.0f, 35.0f, -1, -1);
    F(0x1E8) = F(0x1E8) + (-0.9422222222222221);
    F(0x1EC) = F(0x1EC) + 0.19555555555555557;
    F(0x1F0) = F(0x1F0) + (-0.6133333333333332);
    F(0x1F4) = F(0x1F4) + (-0.19333333333333333);
    F(0x1F8) = F(0x1F8) + (-0.03777777777777768);
    F(0x1FC) = F(0x1FC) + (-0.22888888888888897);
    if (!(v % 2)) {
        d = 0.05;
    } else {
        d = (-0.05);
    }
    F(0x1EC) = F(0x1EC) + d;
    if (v >= 0x2D) {
        F(0x1E8) = 19.2000008f;
        F(0x1EC) = 1.89999998f;
        F(0x1F0) = (-122.400002f);
        F(0x1F4) = 5.9000001f;
        F(0x1F8) = 18.3999996f;
        F(0x1FC) = (-140.600006f);
        func_801512CC(D_80248800, 8.0f, 0.0f, -138.0f);
        func_80151430(D_80248800, 0xF49);
        func_8015115C(D_80248800, D_80246888);
        (*pp)->unk3C = 0;
        func_800058DC(*pp, func_802445C8);
    }
}
#undef func_802445C8
#undef func_802465F8

#define func_80244874 func_80244874__func_802445C8
#define func_80246694 func_80246694__func_802445C8
extern u8 D_80246894[];
extern u8 D_802468A0[];
extern u8 D_8024712C[];
extern u8 D_80247E74[];

void func_80246694(f32 arg0, f32 arg1, f32 arg2, f32 arg3);
void func_80244874();

void func_802445C8(struct func_8024421C_Arg0 *arg0, s32 arg1) {
    s32 sp5C;
    f64 k1;
    f64 k2;

    sp5C = arg0->unk3C++;
    func_8011AAF4(D_80247E74, 0x69E, arg0, 0, 1, 0.0f, F(0x1E8), F(0x1EC), F(0x1F0), 0.0f, F(0x1F4), F(0x1F8), F(0x1FC), 0.0f, 35.0f, -1, -1);
    k1 = (-0.023076923076923078);
    k2 = (-0.046153846153846156);
    F(0x1E8) = F(0x1E8) + 0.035384615384615396;
    F(0x1EC) = F(0x1EC) + k1;
    F(0x1F0) = F(0x1F0) + k2;
    F(0x1F4) = F(0x1F4) + 0.03538461538461537;
    F(0x1F8) = F(0x1F8) + k1;
    F(0x1FC) = F(0x1FC) + k2;
    if (sp5C == 0x1E) {
        func_8015115C(D_80248800, D_802468A0);
    }
    if (sp5C == 0x41) {
        F(0x1E8) = 17.8999996f;
        F(0x1EC) = 11.8999996f;
        F(0x1F0) = (-133.699997f);
        F(0x1F4) = 7.19999981f;
        F(0x1F8) = 17.5f;
        F(0x1FC) = (-142.199997f);
        func_800179B0(D_8024712C);
        func_8015115C(D_80248800, D_80246894);
        func_80246694(3.0f, 19.0f, 85.0f, 0.4f);
        func_80246694(-18.0f, 21.0f, 86.0f, 0.4f);
        func_80246694(1.0f, 31.0f, 88.0f, 0.4f);
        func_80246694(23.0f, 23.0f, 89.0f, 0.4f);
        func_80246694(-10.0f, 46.0f, 90.0f, 0.4f);
        ((u8 *)arg0)[0x90] = 0;
        arg0->unk3C = 0;
        func_800058DC(arg0, (void (*)(void)) func_80244874);
    }
}
#undef func_80244874
#undef func_80246694

#define func_80244E08 func_80244E08__func_80244874
#define func_80246694 func_80246694__func_80244874

typedef struct func_80244874_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    s16 unk14;
} func_80244874_Inner;

typedef struct func_80244874_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_80244874_Inner *unk30;
} func_80244874_Node;

typedef struct func_80244874_Args {
    u8 pad0[0xC];
    func_80244874_Node *unkC;
    func_80244874_Node *unk10;
} func_80244874_Args;

typedef struct func_80244874_Obj {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x90 - 0x3E];
    u8 unk90;
} func_80244874_Obj;

void func_80246694(f32 arg0, f32 arg1, f32 arg2, f32 arg3);
extern s32 func_80130264(void);
extern void func_8013AE20(s32, void *, s32);
extern void func_80244E08();
extern u8 D_80247EB0[];

#define F(o) (*(f32 *) ((u8 *) &D_801BBBF0 + (o)))

void func_80244874(func_80244874_Obj *arg0, func_80244874_Args *arg1) {
    s32 cnt;
    f64 d;
    extern s32 func_800178E8();

    cnt = arg0->unk3C;
    arg0->unk3C++;
    if (arg0->unk3C > 0x1000) {
        arg0->unk3C -= 0x100;
    }
    if (func_80151790(D_80248800) == 0) {
        arg0->unk90 = 1;
        func_8015115C(D_80248800, D_80246888);
    }
    func_8011AAF4(D_80247EB0, 0x6DC, arg0, 0, 1, 0.0f, F(0x1E8), F(0x1EC), F(0x1F0), 0.0f, F(0x1F4), F(0x1F8), F(0x1FC), 0.0f, 35.0f, -1, -1);
    if (cnt < 0x1E) {
        F(0x1E8) = F(0x1E8) + (-0.2133333333333333);
        F(0x1EC) = (f64) F(0x1EC);
        F(0x1F0) = F(0x1F0) + 0.11999999999999982;
        F(0x1F4) = F(0x1F4) + (-0.06333333333333334);
        F(0x1F8) = F(0x1F8) + 0.003333333333333381;
        F(0x1FC) = F(0x1FC) + 0.05;
    }
    if (!(cnt % 2)) {
        d = 0.05;
    } else {
        d = (-0.05);
    }
    F(0x1EC) = F(0x1EC) + d;
    if (func_800178E8(cnt) != 0 && arg0->unk90 != 0) {
        F(0x1E8) = 4.0f;
        F(0x1EC) = (-6.5999999f);
        F(0x1F0) = (-61.4000015f);
        F(0x1F4) = (-1.60000002f);
        F(0x1F8) = 23.7999992f;
        F(0x1FC) = 48.2000008f;
        func_801512CC(D_80248804, -5.0f, 0.0f, 53.0f);
        func_8015115C(D_80248804, D_802468C4);
        if (func_80130264() == 0) {
            func_80246694(3.0f, 19.0f, 85.0f, 0.4f);
            func_80246694(-18.0f, 21.0f, 86.0f, 0.4f);
            func_80246694(1.0f, 31.0f, 88.0f, 0.4f);
            func_80246694(23.0f, 23.0f, 89.0f, 0.4f);
            func_80246694(-10.0f, 46.0f, 90.0f, 0.4f);
        }
        func_80246694(-7.0f, 5.5f, 47.0f, 0.1f);
        func_80246694(-1.0f, -1.5f, 11.0f, 0.1f);
        func_80246694(-7.0f, 0.5f, 8.0f, 0.1f);
        func_80246694(2.0f, -1.5f, 5.0f, 0.1f);
        func_80246694(18.0f, 2.5f, 5.0f, 0.1f);
        func_80246694(-19.0f, 0.5f, 4.0f, 0.2f);
        func_80246694(20.0f, -1.5f, 2.0f, 0.1f);
        func_80246694(12.0f, -0.5f, 2.0f, 0.1f);
        func_80246694(-6.0f, -4.5f, -12.0f, 0.1f);
        func_80246694(7.0f, -3.5f, -14.0f, 0.1f);
        arg1->unkC->unk22 = 1;
        arg1->unkC->unk30->unk4 = 47.0f;
        arg1->unkC->unk30->unk8 = 5.0f;
        arg1->unkC->unk30->unkC = 75.0f;
        arg1->unkC->unk30->unk10 = 0;
        arg1->unkC->unk30->unk12 = 0;
        arg1->unkC->unk30->unk14 = 0x1CE3;
        arg1->unk10->unk22 = 1;
        arg1->unk10->unk30->unk4 = 99.0f;
        arg1->unk10->unk30->unk8 = 31.0f;
        arg1->unk10->unk30->unkC = 41.0f;
        arg1->unk10->unk30->unk10 = 0;
        arg1->unk10->unk30->unk12 = 0;
        arg1->unk10->unk30->unk14 = 0x182;
        func_80006214((void *) D_80248804);
        func_8013AE20(D_80248804, arg1, 0);
        func_80006214(arg0);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80244E08);
    }
}
#undef func_80244E08
#undef func_80246694

#define func_8024506C func_8024506C__func_80244E08
extern u8 D_802468DC[];

extern u8 D_80247EEC[];
extern u8 D_80247188[];

void func_8024506C(func_80244874_Obj *arg0, s32 arg1);

void func_80244E08(func_80244874_Obj *arg0, s32 arg1) {
    s32 t;
    f64 d;

    t = arg0->unk3C++;
    func_8011AAF4(D_80247EEC, 0x72A, arg0, 0, 1, 0.0f, F(0x1E8), F(0x1EC), F(0x1F0), 0.0f, F(0x1F4), F(0x1F8), F(0x1FC), 0.0f, 29.5f, -1, -1);
    F(0x1E8) = F(0x1E8) + (-0.006666666666666663);
    F(0x1EC) = F(0x1EC) + 0.04666666666666666;
    F(0x1F0) = F(0x1F0) + 0.16444444444444442;
    F(0x1F4) = (f64) F(0x1F4);
    F(0x1F8) = (f64) F(0x1F8);
    F(0x1FC) = (f64) F(0x1FC);
    if (t % 2 == 0) {
        d = 0.5;
    } else {
        d = -0.5;
    }
    F(0x1EC) = F(0x1EC) + d;
    if (t % 2 == 0) {
        d = 0.5;
    } else {
        d = -0.5;
    }
    F(0x1F8) = F(0x1F8) + d;
    if (t >= 0x2D) {
        F(0x1E8) = -2.5f;
        F(0x1EC) = 9.89999962f;
        F(0x1F0) = 15.8000002f;
        F(0x1F4) = (-1.10000002f);
        F(0x1F8) = 13.8999996f;
        F(0x1FC) = 50.7000008f;
        func_800179B0(D_80247188);
        func_8015115C(D_80248804, D_802468DC);
        arg0->unk90 = 0;
        arg0->unk3C = 0;
        func_800058DC(arg0, (void (*)(void)) func_8024506C);
    }
}
#undef func_8024506C

#define func_80245250 func_80245250__func_8024506C
extern u8 D_80247F28[];
extern u8 D_80247208[];

extern void func_80245250();

void func_8024506C(func_80244874_Obj *arg0, s32 arg1) {
    s32 sp5C;
    f64 k;

    sp5C = arg0->unk3C++;
    if (func_80151790(D_80248804) == 0) {
        arg0->unk90 = 1;
        func_8015122C(D_80248804, D_802468C4, 0x14);
    }
    func_8011AAF4(D_80247F28, 0x757, arg0, 0, 1, 0.0f, F(0x1E8), F(0x1EC), F(0x1F0), 0.0f, F(0x1F4), F(0x1F8), F(0x1FC), 0.0f, 25.5f, -1, -1);
    if (!(sp5C % 2)) {
        k = 0.5;
    } else {
        k = -0.5;
    }
    F(0x1EC) = F(0x1EC) + k;
    if ((func_800178E8() != 0) && (arg0->unk90 != 0)) {
        F(0x1E8) = (-3.79999995f);
        F(0x1EC) = 14.1000004f;
        F(0x1F0) = 41.2000008f;
        F(0x1F4) = (-3.9000001f);
        F(0x1F8) = 16.2000008f;
        F(0x1FC) = 50.0999985f;
        func_800179B0(D_80247208);
        func_8015115C(D_80248804, D_802468DC);
        arg0->unk90 = 0;
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80245250);
    }
}
#undef func_80245250

#define func_8024541C func_8024541C__func_80245250

extern u8 D_80247F64[];
extern u8 D_80247244[];

void func_8024541C(func_80244874_Obj *arg0, s32 arg1);
typedef struct func_80245250_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x90 - 0x3E];
    u8 unk90;
} func_80245250_Struct;

void func_80245250(func_80245250_Struct *arg0, s32 arg1) {
    s32 sp5C;
    f64 d;

    sp5C = arg0->unk3C++;
    if (func_80151790(D_80248804) == 0) {
        arg0->unk90 = 1;
        func_8015122C(D_80248804, D_802468C4, 0x14);
    }
    func_8011AAF4(D_80247F64, 0x77C, arg0, 0, 1, 0.0f, FF(0x1E8), FF(0x1EC), FF(0x1F0), 0.0f, FF(0x1F4), FF(0x1F8), FF(0x1FC), 0.0f, 25.5f, -1, -1);
    if (!(sp5C % 2)) {
        d = 0.5;
    } else {
        d = -0.5;
    }
    FF(0x1EC) = FF(0x1EC) + d;
    if ((func_800178E8() != 0) && (arg0->unk90 != 0)) {
        FF(0x1E8) = 11.5f;
        FF(0x1EC) = 11.8999996f;
        FF(0x1F0) = (-130.100006f);
        FF(0x1F4) = 5.30000019f;
        FF(0x1F8) = 17.6000004f;
        FF(0x1FC) = (-140.699997f);
        func_800179B0(D_80247244);
        arg0->unk3C = 0;
        func_800058DC(arg0, (void (*)(void))func_8024541C);
    }
}
#undef func_8024541C

extern u8 D_80247FA0[];
extern u8 D_802472D4[];
extern u8 D_80246960[];

extern void func_80245564();

void func_8024541C(func_80244874_Obj *arg0, s32 arg1) {
    arg0->unk3C = arg0->unk3C + 1;
    func_8011AAF4(D_80247FA0, 0x799, arg0, 0, 1, 0.0f, F(0x1E8), F(0x1EC), F(0x1F0), 0.0f, F(0x1F4), F(0x1F8), F(0x1FC), 0.0f, 35.0f, -1, -1);
    if (func_800178E8() != 0) {
        F(0x1E8) = (-13.6000004f);
        F(0x1EC) = 4.5999999f;
        F(0x1F0) = 40.0f;
        F(0x1F4) = (-4.30000019f);
        F(0x1F8) = 15.6999998f;
        F(0x1FC) = 52.5f;
        func_800179B0(D_802472D4);
        func_8015115C(D_80248804, D_80246960);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80245564);
    }
}

#define D_8024696C D_8024696C__func_80245564
#define D_8024737C D_8024737C__func_80245564
#define D_80247FDC D_80247FDC__func_80245564
#define func_802456C8 func_802456C8__func_80245564
#define MYCAT2(a, b) a##b
#define MYCAT(a, b) MYCAT2(a, b)
#define func_80241974 MYCAT(myctx_80241974_, __LINE__)
#define func_80246360 MYCAT(myctx_80246360_, __LINE__)
#define MYCAT2(a, b) a##b
#define MYCAT(a, b) MYCAT2(a, b)
#define func_80246360 MYCAT(myctx_80246360_, __LINE__)

typedef struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_80245564_Struct;

extern u8 D_8024696C[];
extern u8 D_8024737C[];
extern u8 D_80247FDC[];
extern void func_802456C8(void);

#define FL(off) (*(f32 *)((u8 *)&D_801BBBF0 + (off)))

void func_80245564(func_80245564_Struct *arg0, s32 arg1) {
    s32 cnt;
    f64 d;

    cnt = arg0->unk3C++;
    D_8011AAF4(D_80247FDC, 0x7B7, arg0, 0, 1, 0.0f, FL(0x1E8), FL(0x1EC), FL(0x1F0), 0.0f, FL(0x1F4), FL(0x1F8), FL(0x1FC), 0.0f, 25.5f, -1, -1);
    if (!(cnt % 2)) {
        d = 0.5;
    } else {
        d = -0.5;
    }
    FL(0x1EC) += d;
    if (func_800178E8() != 0 && func_80151790(D_80248804) == 0) {
        func_800179B0(D_8024737C);
        func_8015115C(D_80248804, D_8024696C);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_802456C8);
    }
}
#undef MYCAT2
#undef MYCAT
#undef func_80241974
#undef func_80246360
#undef FL
#undef D_8024696C
#undef D_8024737C
#undef D_80247FDC
#undef func_802456C8

/* hh-block asm/nonmatchings/file054/802408F0/_mrg_keep_tail_3e7c70d3037c5ec4.s {"functions":["func_802456C8"],"rodata":[],"rodata_bytes":[2149877544,8246920,40]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/_mrg_keep_tail_3e7c70d3037c5ec4.s")


extern u8 D_80248054[];

extern void func_80245AF4();

void func_802458F0(func_80244874_Obj *arg0, s32 arg1) {
    s32 t;

    t = arg0->unk3C++;
    func_8011AAF4(D_80248054, 0x7F6, arg0, 0, 1, 0.0f, F(0x1E8), F(0x1EC), F(0x1F0), 0.0f, F(0x1F4), F(0x1F8), F(0x1FC), 0.0f, 35.0f, -1, -1);
    F(0x1E8) = F(0x1E8) + 0.13333333333333333;
    F(0x1EC) = F(0x1EC) + 0.2800000000000001;
    F(0x1F0) = F(0x1F0) + (-0.7533333333333332);
    F(0x1F4) = F(0x1F4) + (-0.04666666666666662);
    F(0x1F8) = F(0x1F8) + 0.013333333333333286;
    F(0x1FC) = F(0x1FC) + 0.01333333333333447;
    if (t >= 0xF) {
        F(0x1E8) = 3.5f;
        F(0x1EC) = (-6.19999981f);
        F(0x1F0) = -55.5f;
        F(0x1F4) = (-1.89999998f);
        F(0x1F8) = 22.7000008f;
        F(0x1FC) = 48.5f;
        func_8015115C(D_80248804, D_802468C4);
        *(f32 *)((u8 *)arg0 + 0x98) = 7395.0f;
        *(f32 *)((u8 *)arg0 + 0x9C) = 0.0f;
        arg0->unk3C = 0;
        func_80020718(0x19E);
        func_800058DC(arg0, func_80245AF4);
    }
}

/* hh-block asm/nonmatchings/file054/802408F0/_mrg_keep_tail_9f8237e6270c8203.s {"functions":["func_80245AF4"],"rodata":[],"rodata_bytes":[2149877648,8247024,56]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file054/802408F0/_mrg_keep_tail_9f8237e6270c8203.s")

#define func_802460D0 func_802460D0__func_80245E94

extern u8 D_802480CC[];

void func_802460D0(s32 arg0, s32 arg1);

#define P(a, o) (*(f32 **)(*(u8 **)((a) + (o)) + 0x30))

void func_80245E94(u8 *arg0, u8 *arg1) {
    s32 t;

    t = (*(u16 *)(arg0 + 0x3C))++;
    if (t >= 0x1E) {
        if (t == 0x1E) {
            func_80020718(0x67);
        }
        P(arg1, 4)[1] = P(arg1, 4)[1] + 0.7666666666666667;
        P(arg1, 8)[1] = P(arg1, 8)[1] + (-0.7666666666666667);
    }
    func_8011AAF4(D_802480CC, 0x872, arg0, 0, 1, 0.0f, F(0x1E8), F(0x1EC), F(0x1F0), 0.0f, F(0x1F4), F(0x1F8), F(0x1FC), 0.0f, 35.0f, -1, -1);
    F(0x1E8) = F(0x1E8) + (-0.17833333333333334);
    F(0x1EC) = F(0x1EC) + 0.09666666666666668;
    F(0x1F0) = F(0x1F0) + (-0.08666666666666671);
    F(0x1F4) = (f64) F(0x1F4);
    F(0x1F8) = F(0x1F8) + (-0.008333333333333333);
    F(0x1FC) = F(0x1FC) + (-0.009999999999999905);
    if (t == 0x24) {
        func_8001E978(arg0, 0, 0, 0, 0x18, 0, 1, 0);
    }
    if (t >= 0x5A) {
        func_80246730();
        func_80020718(0xA);
        func_800058DC(arg0, (void (*)(void))func_802460D0);
    }
}
#undef func_802460D0


void func_802460D0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#define func_80246160 func_80246160__func_802460DC

extern s32 func_80130078(void);
extern void func_80246160();
extern u16 D_80089474[];

void func_802460DC(void *arg0, s32 arg1) {
    if (func_80130078() == 0) {
        if (D_80089474[2] & 0x1000) {
            func_8001E978(arg0, 0, 0, 0, 0x18, 0, 1, 0);
            func_80020718(0xA);
            *(s16 *)((u8 *)arg0 + 0x3C) = 0;
            func_800058DC(arg0, func_80246160);
        }
    }
}
#undef func_80246160

#define func_802461AC func_802461AC__func_80246160

extern void func_802461AC(s32, s32);

void func_80246160(func_80244874_Obj *arg0, s32 arg1) {
    if (arg0->unk3C++ >= 0x2D) {
        func_80246730();
        func_800058DC(arg0, (void (*)(void)) func_802461AC);
    }
}
#undef func_802461AC


void func_802461AC(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


typedef struct func_802461B8_StructI {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
} func_802461B8_StructI;
typedef struct func_802461B8_StructN {
    u8 pad0[0x30];
    func_802461B8_StructI *unk30;
} func_802461B8_StructN;
typedef struct func_802461B8_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad3E[0x52];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
} func_802461B8_Struct;

extern s32 func_8012D918(void *, s32, s16, s32, s32);
extern u8 D_80246990[];
#define func_80246360 func_80246360__decl1964
extern u8 func_80246360[];

void func_802461B8(func_802461B8_Struct *arg0, func_802461B8_StructN **arg1) {
    func_802408F0_V sp28;

    sp28 = D_80164F40;
    sp28.w[1] = 0x80000600;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 2);
    func_8012D918(arg0, 0x2DD, 0, 0, 0);
    (*arg1)->unk30->unk24 = 0x60300;
    (*arg1)->unk30->unk30 = (u32)D_80246990 | 0x40000000;
    (*arg1)->unk30->unk18 = arg0->unk9C;
    (*arg1)->unk30->unk1C = arg0->unk9C;
    (*arg1)->unk30->unk20 = 1.0f;
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xC;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk4C = 0xD8;
    (*arg1)->unk30->unk4D = 0x20;
    (*arg1)->unk30->unk4E = 0;
    arg0->unk3C = 0;
    func_800058DC(arg0, (void (*)(void))func_80246360);
}
#undef func_80246360

#define D_802473C4 D_802473C4__func_80246360
#define func_80005700 func_80005700__func_80246360
#define HHCAT2(a, b) a##b
#define HHCAT(a, b) HHCAT2(a, b)

extern s16 D_802473C4[];
extern void func_80005700(void *);
typedef struct func_80246360_Struct { u8 pad[0x3C]; u16 unk3C; } func_80246360_Struct;
void func_80246360(func_80246360_Struct *arg0, s32 arg1) {
    s32 t = arg0->unk3C;
    s16 v;
    arg0->unk3C++;
    if (t % 2) {
        return;
    }
    v = D_802473C4[t / 2];
    if (v >= 0) {
        func_8012D918(arg0, 0x2DD, v, 0, 0);
    } else {
        func_80005700(arg0);
    }
}
#undef HHCAT2
#undef HHCAT
#undef D_802473C4
#undef func_80005700

#define func_80246598 func_80246598__func_802463F0
struct func_802463F0_StructI {
    u8 pad0[4];
    f32 unk4, unk8, unkC;
    u8 pad10[8];
    f32 unk18, unk1C, unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x14];
    u8 unk48, unk49, unk4A, unk4B, unk4C, unk4D, unk4E;
};
struct func_802463F0_StructN {
    u8 pad0[0x30];
    struct func_802463F0_StructI *unk30;
};
struct func_802463F0_StructO {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad3E[0x52];
    f32 unk90, unk94, unk98, unk9C;
};
struct func_802463F0_StructL { func_802408F0_V v; s32 w; };
void func_80246598(void *arg0, s32 arg1);

void func_802463F0(struct func_802463F0_StructO *arg0, struct func_802463F0_StructN **arg1) {
    s32 l[4];
    *(func_802408F0_V *)l = D_80164F40;
    l[1] =0x80000600;
    func_80005E44(arg0, l);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 2);
    func_8012D918(arg0, 0x2DD, 0x14, 0, 0);
    (*arg1)->unk30->unk24 = 0x60300;
    (*arg1)->unk30->unk30 = (u32)D_80246990 | 0x40000000;
    (*arg1)->unk30->unk18 = arg0->unk9C;
    (*arg1)->unk30->unk1C = arg0->unk9C;
    (*arg1)->unk30->unk20 = 1.0f;
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xC;
    (*arg1)->unk30->unk4B = 0xFF;
    (*arg1)->unk30->unk4C = 0xD8;
    (*arg1)->unk30->unk4D = 0x20;
    (*arg1)->unk30->unk4E = 0;
    arg0->unk3C = 0;
    func_800058DC(arg0, (void (*)(void))func_80246598);
}
#undef func_80246598


struct func_80246598_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

extern s16 D_802473F0[];

void func_80246598(void *arg0, s32 arg1) {
    struct func_80246598_Struct *s;
    s32 temp_v1;

    s = arg0;
    temp_v1 = s->unk3C++;
    func_8012D918(arg0, 0x2DD, D_802473F0[temp_v1 % 8], 0, 0);
}


struct func_802465F8_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};

struct func_802465F8_Obj {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

void *func_8012C4D0(s32, struct func_802465F8_Struct, s32); /* extern */
extern s32 D_801BBC2C;
extern struct func_802465F8_Struct D_802467E8;

void func_802465F8(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    struct func_802465F8_Obj *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_802467E8, 4);
    if (temp_v0 != NULL) {
        temp_v0->unk90 = arg0;
        temp_v0->unk94 = arg1;
        temp_v0->unk98 = arg2;
        temp_v0->unk9C = arg3;
    }
}


struct func_80246694_Obj {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};

extern struct func_802465F8_Struct D_802467FC;

void func_80246694(f32 arg0, f32 arg1, f32 arg2, f32 arg3) {
    struct func_80246694_Obj *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_802467FC, 4);
    if (temp_v0 != NULL) {
        temp_v0->unk90 = arg0;
        temp_v0->unk94 = arg1;
        temp_v0->unk98 = arg2;
        temp_v0->unk9C = arg3;
    }
}


struct func_80246730_Struct {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[0x34D - 6];
    u8 unk34D;
    u8 pad34E[0x3A6 - 0x34E];
    u8 unk3A6;
    u8 unk3A7;
};

extern s32 func_8012FE50();

void func_80246730(void) {
    u16 var;
    s32 five;

    five = 2;
    if (D_801BBBF0.unk34D == 0) {
        D_801BBBF0.unk3A6 = 0xF;
        D_801BBBF0.unk3A7 = 2;
        D_801BBBF0.unk4 = 0x4B;
        func_8012FE50(0xF, D_801BBBF0.unk4, 1, 6, five);
        return;
    }
    D_801BBBF0.unk4 = 0xC2;
    func_8012FE50(0xF, D_801BBBF0.unk4, 1, 6, 0);
}


/* C-owned readonly prefix; private load aliases retain IDO scheduling. */

/* C-owned readonly prefix; private load aliases retain IDO scheduling. */













































static const unsigned char rodata_802408F0[] = {
    0x6D, 0x6F, 0x2E, 0x63, 0x00, 0x00, 0x00, 0x00, 0x44, 0x2E, 0xC0, 0x00, 0xC0, 0x33, 0x33, 0x33,
    0xBF, 0x66, 0x66, 0x66, 0x40, 0x8C, 0xCC, 0xCD, 0x41, 0x1C, 0xCC, 0xCD, 0xC0, 0x33, 0x33, 0x33,
    0x3D, 0xA3, 0xD7, 0x0A, 0xBF, 0x66, 0x66, 0x66, 0x41, 0x26, 0x66, 0x66, 0x41, 0x1C, 0xCC, 0xCD,
    0x42, 0x19, 0x33, 0x33, 0x41, 0x66, 0x66, 0x66, 0x42, 0xCE, 0x99, 0x9A, 0x3F, 0xCC, 0xCC, 0xCD,
    0x41, 0xAA, 0x66, 0x66, 0x41, 0x1B, 0x33, 0x33, 0x3E, 0xCC, 0xCC, 0xCD, 0x41, 0x84, 0xCC, 0xCD,
    0x40, 0xD6, 0x66, 0x66, 0x41, 0x5B, 0x33, 0x33, 0x41, 0x23, 0x33, 0x33, 0x40, 0xC9, 0x99, 0x9A,
    0x41, 0x0E, 0x66, 0x66, 0x41, 0x21, 0x99, 0x9A, 0x3E, 0xCC, 0xCC, 0xCD, 0x41, 0x7C, 0xCC, 0xCD,
    0x40, 0x53, 0x33, 0x33, 0x41, 0xAB, 0x33, 0x33, 0x3F, 0x33, 0x33, 0x33, 0x41, 0x8A, 0x66, 0x66,
    0x41, 0x7E, 0x66, 0x66, 0x3C, 0xA3, 0xD7, 0x0A, 0x40, 0x89, 0x99, 0x9A, 0x41, 0x91, 0x99, 0x9A,
    0x41, 0xE8, 0xCC, 0xCD, 0x3F, 0xD9, 0x99, 0x9A, 0x41, 0x74, 0xCC, 0xCD, 0x41, 0x85, 0x99, 0x9A,
    0x40, 0x96, 0x66, 0x66, 0x41, 0x44, 0xCC, 0xCD, 0x3E, 0x99, 0x99, 0x9A, 0x41, 0x80, 0xCC, 0xCD,
    0x41, 0x89, 0x99, 0x9A, 0xC0, 0x2C, 0xCC, 0xCD, 0x40, 0xD3, 0x33, 0x33, 0x40, 0xB6, 0x66, 0x66,
    0xC2, 0x4D, 0x99, 0x9A, 0x41, 0x5B, 0x33, 0x33, 0x41, 0x03, 0x33, 0x33, 0xC1, 0xC2, 0x66, 0x66,
    0x41, 0x8B, 0x33, 0x33, 0xC2, 0x00, 0x66, 0x66, 0xBF, 0x19, 0x99, 0x9A, 0x40, 0xE9, 0x99, 0x9A,
    0x41, 0x82, 0x66, 0x66, 0x41, 0x88, 0xCC, 0xCD, 0x3D, 0xCC, 0xCC, 0xCD, 0xBE, 0xCC, 0xCC, 0xCD,
    0x41, 0x8F, 0x33, 0x33, 0x40, 0xFC, 0xCC, 0xCD, 0x41, 0x81, 0x99, 0x9A, 0x41, 0x88, 0xCC, 0xCD,
    0x40, 0x46, 0x66, 0x66, 0xC1, 0x8B, 0x33, 0x33, 0x3E, 0xCC, 0xCC, 0xCD, 0x41, 0x6E, 0x66, 0x66,
    0xBF, 0xD9, 0x99, 0x9A, 0x41, 0xAA, 0x66, 0x66, 0x41, 0x81, 0x99, 0x9A, 0x41, 0x88, 0xCC, 0xCD,
    0x42, 0x26, 0x27, 0xF0, 0x3E, 0x0D, 0x4F, 0xDF, 0x41, 0x54, 0xCC, 0xCD, 0x41, 0x03, 0x33, 0x33,
    0x41, 0x81, 0x99, 0x9A, 0x41, 0x88, 0xCC, 0xCD, 0x3F, 0x43, 0x14, 0x9E, 0x42, 0x80, 0xCC, 0xCD,
    0x40, 0x73, 0x33, 0x33, 0x40, 0xE9, 0x99, 0x9A, 0xBF, 0x33, 0x33, 0x33, 0x41, 0x7C, 0xCC, 0xCD,
    0xC1, 0xFE, 0x66, 0x66, 0x3D, 0x90, 0x3F, 0x5A, 0xC0, 0x9C, 0xCC, 0xCD, 0x41, 0x1B, 0x33, 0x33,
};
/* hh-owned-pool func_80242158 80248260 80248280 */
/* hh-owned-pool func_8024231C 80248280 802482A0 */
/* hh-owned-pool func_80242488 802482A0 802482D0 */
/* hh-owned-pool func_802425EC 802482D0 80248300 */
/* hh-owned-pool func_80242758 80248300 80248328 */
/* hh-owned-pool func_802428BC 80248328 8024834C */
/* hh-owned-pool func_80242A28 8024834C 80248378 */
/* hh-owned-pool func_80242B8C 80248378 802483A0 */
/* hh-owned-pool func_80242D38 802483A0 802483D8 */
/* hh-owned-pool func_80243018 802483D8 8024841C */
/* hh-owned-pool func_802432D4 80248420 80248460 */
/* hh-owned-pool func_802434E0 80248460 8024848C */
/* hh-owned-pool func_8024372C 80248490 802484EC */
/* hh-owned-pool func_80243A8C 802484F0 8024853C */
/* hh-owned-pool func_80243CD4 80248540 80248584 */
/* hh-owned-pool func_80244014 80248588 802485D8 */
/* hh-owned-pool func_8024421C 802485D8 80248638 */
/* hh-owned-pool func_802445C8 80248638 8024866C */
/* hh-owned-pool func_80244874 80248670 802486BC */
/* hh-owned-pool func_80244E08 802486C0 802486EC */
/* hh-owned-pool func_8024506C 802486EC 80248704 */
/* hh-owned-pool func_80245250 80248704 80248718 */
/* hh-owned-pool func_8024541C 80248718 80248728 */
/* hh-owned-pool func_802458F0 80248750 80248790 */
/* hh-owned-pool func_80245E94 802487C8 80248800 */
