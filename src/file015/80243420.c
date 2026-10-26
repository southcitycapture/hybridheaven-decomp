#include "common.h"

extern s32 func_80005670(void *, void *);
extern s32 func_8000C3B0(void *);
extern s32 func_80010550(s32, s32, s32);
extern s32 func_800178E8();
extern s32 func_8012C97C(u16, s32);
extern s32 func_80133A24(s32);
#define func_80243678 func_80243678__decl
extern u8 func_80243678[];
extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_80133980(s32);
extern void func_801339D0(s32);
extern void func_8013B570(s32, s32, s32, s32, void *);
#define func_802438D8 func_802438D8__decl
extern void func_802438D8(void);
extern void func_80243A78();
extern void func_80243D84();
extern void func_80243FA8(void *arg0, void **arg1);
extern void func_80244138(s32 arg0, s32 arg1);
extern void func_802442A0();
extern void func_8024436C();
extern void func_80244654();

extern u8 D_801BBBF0[];

typedef struct func_80243420_Vec { s32 w[4]; } func_80243420_Vec;
typedef struct func_80243420_Sub {
    u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[2]; s16 unk12;
    u8 pad14[4]; f32 unk18; f32 unk1C; f32 unk20; s32 unk24; u8 pad28[8];
    s32 unk30; u8 pad34[0x18]; u8 unk4C; u8 unk4D; u8 unk4E; u8 unk4F;
} func_80243420_Sub;
typedef struct func_80243420_Mid { u8 pad0[0x30]; func_80243420_Sub *unk30; } func_80243420_Mid;
typedef struct func_80243420_Arg {
    u8 pad0[0x2C]; s32 unk2C; u8 pad30[6]; u16 unk36; u8 pad38[0x3C];
    s32 unk74; f32 unk78; f32 unk7C; f32 unk80; s16 unk84; s16 unk86; s16 unk88;
} func_80243420_Arg;
extern func_80243420_Vec D_80164F40;
extern u8 D_802523C4[], D_802523D8[], D_802523EC[];
extern s32 D_8025A280, D_8025A284, D_8025A288;

void func_80243420(func_80243420_Arg *arg0, func_80243420_Mid **arg1) {
    func_80243420_Vec sp;
    f32 t;
    sp = D_80164F40;
    sp.w[1] = 0x80000600;
    func_80005E44(arg0, &sp);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x294, 0);
    (*arg1)->unk30->unk24 |= 0x13;
    (*arg1)->unk30->unk30 = func_8000C3B0(*arg1);
    (*arg1)->unk30->unk20 = 1.0f;
    t = (*arg1)->unk30->unk20;
    (*arg1)->unk30->unk1C = t;
    (*arg1)->unk30->unk18 = t;
    (*arg1)->unk30->unk4 = -42.0f;
    (*arg1)->unk30->unk8 = 0.0f;
    (*arg1)->unk30->unkC = 272.0f;
    (*arg1)->unk30->unk12 = 0;
    (*arg1)->unk30->unk24 |= 0x400;
    (*arg1)->unk30->unk4C = ((u8 *)&D_801BBBF0)[0xF32];
    (*arg1)->unk30->unk4D = ((u8 *)&D_801BBBF0)[0xF33];
    (*arg1)->unk30->unk4E = ((u8 *)&D_801BBBF0)[0xF34];
    (*arg1)->unk30->unk4F = ((u8 *)&D_801BBBF0)[0xF35];
    arg0->unk2C |= 0x800;
    arg0->unk78 = (*arg1)->unk30->unk4;
    arg0->unk7C = (*arg1)->unk30->unk8;
    arg0->unk80 = (*arg1)->unk30->unkC;
    arg0->unk84 = 0;
    arg0->unk86 = 0;
    arg0->unk88 = 0;
    arg0->unk74 = func_8012C97C(arg0->unk36, 1);
    func_801C3B2C(2);
    func_801C3B10(1);
    func_801339D0(0x73);
    func_801339D0(0x77);
    D_8025A280 = func_80005670(arg0, D_802523C4);
    D_8025A284 = func_80005670(arg0, D_802523D8);
    D_8025A288 = func_80005670(arg0, D_802523EC);
    func_801FBB30();
    func_80020718(0x1AD);
    func_800058DC(arg0, func_80243678);
}

#undef func_80243678


#define D_80089354 D_80089354__func_80243678
#define D_80258640 D_80258640__func_80243678
#define D_80258700 D_80258700__func_80243678
#define D_80258704 D_80258704__func_80243678
#define D_80258708 D_80258708__func_80243678
#define D_8025870C D_8025870C__func_80243678
#define D_80258710 D_80258710__func_80243678
#define D_80258714 D_80258714__func_80243678
#define D_80258718 D_80258718__func_80243678
#define func_8001E978 func_8001E978__func_80243678
#define func_8011AAF4 func_8011AAF4__func_80243678
#define func_801C2F0C func_801C2F0C__func_80243678
#define func_80242F38_StructGlobal func_80242F38_StructGlobal__func_80243678
#define func_8024381C func_8024381C__func_80243678
#define func_8024381C_StructArg func_8024381C_StructArg__func_80243678
#define func_8024381C_StructLocal func_8024381C_StructLocal__func_80243678
#define func_80242F38_StructGlobal SGP(__LINE__)
#define SGP(l) SGQ(l)
#define SGQ(l) SG##l
#define SG348 struct SGT
#define SG407 SGT
#define SG411 SGtd
#define SG412 struct SGT
#define SG413 struct SGT
#define SG584 struct SGT
#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
typedef struct func_80241F20_Node { u8 pad0[4]; f32 unk4; u8 pad8[4]; f32 unkC; u8 pad10[2]; s16 unk12; } func_80241F20_Node;
typedef struct func_80241F20_Mid { u8 pad0[0x2C]; func_80241F20_Node *unk2C; } func_80241F20_Mid;
typedef struct func_80241F20_Struct {
    u8 pad0[0xE0];
    func_80241F20_Mid *unkE0;
    u8 pad1[0x1E8 - 0xE4];
    f32 f1E8, f1EC, f1F0, f1F4, f1F8, f1FC;
    u8 pad2[0x434 - 0x200];
    u8 unk434;
} func_80241F20_Struct;
#define G ((func_80241F20_Struct *)&D_801BBBF0)
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801C2F0C(s32, s16 *);
typedef struct func_80242F38_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80242F38_StructGlobal;
typedef struct func_8024381C_StructArg {
    u8 pad[0x3C];
    u16 unk3C;
} func_8024381C_StructArg;
void func_8024381C(func_8024381C_StructArg *arg0, s32 arg1);
typedef struct func_8024381C_StructLocal {
    s16 unk0;
    s16 pad;
    s32 unk4;
    f32 unk8;
    u8 padC[0x14];
} func_8024381C_StructLocal;

#undef func_80242F38_StructGlobal
extern void func_8001E978(void *, s32, s32, s32, s32, s32, s32, s32);
extern u8 D_80258640[];
extern s16 D_80089354;
extern f32 D_80258700;
extern f32 D_80258704;
extern f32 D_80258708;
extern f32 D_8025870C;
extern f32 D_80258710;
extern f32 D_80258714;
extern f32 D_80258718;

void func_80243678(func_8024381C_StructArg *arg0, s32 arg1) {
    func_8024381C_StructLocal loc;

    G->unkE0->unk2C->unk4 = D_80258700;
    *(f32 *)((u8 *)G->unkE0->unk2C + 8) = 0.0f;
    G->unkE0->unk2C->unkC = D_80258704;
    G->unkE0->unk2C->unk12 = 0x1C00;
    G->f1E8 = D_80258708;
    G->f1EC = 16.0f;
    G->f1F0 = D_8025870C;
    G->f1F4 = D_80258710;
    G->f1F8 = D_80258714;
    G->f1FC = D_80258718;
    func_8011AAF4(D_80258640, 0x164, arg0, 0, 1, 0.0f, G->f1E8, G->f1EC, G->f1F0, 0.0f, G->f1F4, G->f1F8, G->f1FC, 0.0f, 35.0f, -1, -1);
    loc.unk0 = 0x1000;
    loc.unk4 = 0x04100036;
    loc.unk8 = 10.0f;
    func_801C2F0C(4, &loc.unk0);
    arg0->unk3C = 0;
    D_80089354 = 0;
    func_8001E978(arg0, 0, 0, 0, 0x1E, 0, 2, 0);
    func_800058DC(arg0, func_8024381C);
}
#undef SGP
#undef SGQ
#undef SG348
#undef SG407
#undef SG411
#undef SG412
#undef SG413
#undef SG584
#undef LP
#undef LQ
#undef G
#undef D_80089354
#undef D_80258640
#undef D_80258700
#undef D_80258704
#undef D_80258708
#undef D_8025870C
#undef D_80258710
#undef D_80258714
#undef D_80258718
#undef func_8001E978
#undef func_8011AAF4
#undef func_801C2F0C
#undef func_80242F38_StructGlobal
#undef func_8024381C
#undef func_8024381C_StructArg
#undef func_8024381C_StructLocal
#define func_80243678 func_80243678__decl


typedef struct func_8024381C_StructArg {
    u8 pad[0x3C];
    u16 unk3C;
} func_8024381C_StructArg;

typedef struct func_8024381C_StructLocal {
    s16 unk0;
    s16 pad;
    s32 unk4;
    f32 unk8;
    u8 padC[0x14];
} func_8024381C_StructLocal;


void func_8024381C(func_8024381C_StructArg *arg0, s32 arg1) {
    func_8024381C_StructLocal local;
    s32 temp;

    if (func_801C3044() == 0) {
        temp = arg0->unk3C++ >= 3;
        if (temp) {
            local.unk0 = 0x1000;
            local.unk4 = 0x04100027;
            local.unk8 = 6.0f;
            func_801C2F0C(4, &local.unk0);
            arg0->unk3C = 0;
            func_800058DC(arg0, func_802438D8);
            return;
        }
        local.unk0 = 0x1000;
        local.unk4 = 0x04100036;
        local.unk8 = 10.0f;
        func_801C2F0C(4, &local.unk0);
    }
}


#undef func_802438D8


#define D_80252454 D_80252454__func_802438D8
#define func_800179B0 func_800179B0__func_802438D8
#define func_801C2F0C func_801C2F0C__func_802438D8
#define func_801C3044 func_801C3044__func_802438D8
#define func_80242A54 func_80242A54__func_802438D8
#define func_80242F38_StructGlobal func_80242F38_StructGlobal__func_802438D8
#define func_8024315C func_8024315C__func_802438D8
#define func_802439EC func_802439EC__func_802438D8
#define func_802439EC_Struct func_802439EC_Struct__func_802438D8
#define func_8024443C func_8024443C__func_802438D8
#define SGP2(a, b) a##b
#define SGP(a, b) SGP2(a, b)
#define func_80242F38_StructGlobal SGP(SG_, __LINE__)
#define SG_348 struct SG_407
#define SG_412 struct SG_407
#define SG_413 struct SG_407
#define SG_584 struct SG_407
#define func_80242A54 SGP(FA_, __LINE__)
#define func_8024315C SGP(FB_, __LINE__)
#define func_8024443C SGP(FC_, __LINE__)
extern void func_800179B0(void *);
extern void func_801C2F0C(s32, s16 *);
extern s32 func_801C3044(void);
extern u8 func_80242A54[];
typedef struct func_80242F38_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80242F38_StructGlobal;
void func_8024315C(void);
typedef struct func_802439EC_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
} func_802439EC_Struct;
void func_802439EC(func_802439EC_Struct *arg0, s32 arg1);
extern void func_8024443C(void);


extern u8 D_80252454[];

typedef struct func_802438D8_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_802438D8_Struct;

typedef struct func_802438D8_StructLocal {
    s16 unk0;
    s16 pad;
    s32 unk4;
    f32 unk8;
    u8 padC[0x14];
} func_802438D8_StructLocal;

void func_802438D8(func_802438D8_Struct *arg0, s32 arg1) {
    func_802438D8_StructLocal sp20;
#define temp_v0 arg1

    if (func_801C3044() == 0) {
        temp_v0 = arg0->unk3C++;
        if (temp_v0 == 0) goto c0;
        if (temp_v0 == 1) goto c1;
        if (temp_v0 != 2) goto end;
        goto c2;
    c0:
        sp20.unk0 = 0x1000;
        sp20.unk4 = 0x04100036;
        sp20.unk8 = 10.0f;
        func_801C2F0C(4, &sp20.unk0);
        return;
    c1:
        sp20.unk0 = 0x1000;
        sp20.unk4 = 0x04100027;
        sp20.unk8 = 6.0f;
        func_801C2F0C(4, &sp20.unk0);
        return;
    c2:
        sp20.unk0 = 0x1000;
        sp20.unk4 = 0x04100036;
        sp20.unk8 = 10.0f;
        func_801C2F0C(4, &sp20.unk0);
        arg0->unk3C = 0;
        func_800179B0(D_80252454);
        func_80133980(0x73);
        func_800058DC(arg0, func_802439EC);
    }
end:;
}
#undef SGP2
#undef SGP
#undef SG_348
#undef SG_412
#undef SG_413
#undef SG_584
#undef temp_v0
#undef D_80252454
#undef func_800179B0
#undef func_801C2F0C
#undef func_801C3044
#undef func_80242A54
#undef func_80242F38_StructGlobal
#undef func_8024315C
#undef func_802439EC
#undef func_802439EC_Struct
#undef func_8024443C
#define func_802438D8 func_802438D8__decl


typedef struct func_802439EC_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
} func_802439EC_Struct;

typedef struct func_802439EC_StackLocals {
    s16 sp18;
    s16 pad;
    s32 sp1C;
    f32 sp20;
    s16 sp24;
    u8 pad2[0x12];
} func_802439EC_StackLocals;


void func_802439EC(func_802439EC_Struct *arg0, s32 arg1) {
    func_802439EC_StackLocals loc;

    if ((func_800178E8() != 0) && (func_80133A24(0x73) != 0)) {
        func_801339D0(0x73);
        loc.sp18 = 0x1010;
        loc.sp1C = 0x04100028;
        loc.sp24 = 0xA;
        loc.sp20 = 6.0f;
        func_801C2F0C(5, &loc.sp18);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80243A78);
    }
}


/* hh-block asm/nonmatchings/file015/80243420/_mrg_keep_2cf95baaf760df22.s {"functions":["func_80243A78"],"rodata":[[".rodata","asm/nonmatchings/file015/80243420/func_80243678.s","D_80258640"],[".late_rodata","asm/nonmatchings/file015/80243420/func_80243678.s","D_80258700"],[".late_rodata","asm/nonmatchings/file015/80243420/func_80243678.s","D_80258704"],[".late_rodata","asm/nonmatchings/file015/80243420/func_80243678.s","D_80258708"],[".late_rodata","asm/nonmatchings/file015/80243420/func_80243678.s","D_8025870C"],[".late_rodata","asm/nonmatchings/file015/80243420/func_80243678.s","D_80258710"],[".late_rodata","asm/nonmatchings/file015/80243420/func_80243678.s","D_80258714"],[".late_rodata","asm/nonmatchings/file015/80243420/func_80243678.s","D_80258718"],[".rodata","asm/nonmatchings/file015/80243420/func_80243A78.s","D_80258680"],[".late_rodata","asm/nonmatchings/file015/80243420/func_80243A78.s","jtbl_8025871C"],[".late_rodata","asm/nonmatchings/file015/80243420/func_80243A78.s","D_80258730"],[".late_rodata","asm/nonmatchings/file015/80243420/func_80243A78.s","D_80258734"],[".late_rodata","asm/nonmatchings/file015/80243420/func_80243A78.s","D_80258738"],[".late_rodata","asm/nonmatchings/file015/80243420/func_80243A78.s","D_8025873C"],[".late_rodata","asm/nonmatchings/file015/80243420/func_80243A78.s","D_80258740"]]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file015/80243420/_mrg_keep_2cf95baaf760df22.s")


typedef struct func_80243CF8_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
} func_80243CF8_Struct;

typedef struct func_80243CF8_StructLocal {
    s16 sp20;
    s16 pad;
    s32 sp24;
    f32 sp28;
    s16 sp2C;
    u8 pad2[0x12];
} func_80243CF8_StructLocal;


void func_80243CF8(func_80243CF8_Struct *arg0, s32 arg1) {
    func_80243CF8_StructLocal sp;
    if (arg0->unk3C++ >= 0x32) {
        func_80020718(0x1AE);
        sp.sp20 = 0x1000;
        sp.sp24 = 0x04100044;
        sp.sp2C = 0x14;
        sp.sp28 = 1.0f;
        func_801C2F0C(3, &sp.sp20);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80243D84);
    }
}

#define func_8011AAF4 func_8011AAF4__func_80243D84
#define func_801C2F0C func_801C2F0C__func_80243D84
#define func_801C3044 func_801C3044__func_80243D84
#define func_80243F64 func_80243F64__func_80243D84
extern void func_80243F64(s32 arg0, s32 arg1);

extern s32 func_801C3044(void);
extern void func_801C2F0C(s32, void *);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

typedef struct func_80243D84_StructG {
    u8 pad0[0x1E8];
    f32 f1E8;
    f32 f1EC;
    f32 f1F0;
    f32 f1F4;
    f32 f1F8;
    f32 f1FC;
} func_80243D84_StructG;
#define G ((func_80243D84_StructG *)D_801BBBF0)

void func_80243D84(func_80243CF8_Struct *arg0, s32 arg1) {
    func_80243CF8_StructLocal sp;
    s32 t;

    if (func_801C3044() != 0) {
        return;
    }
    t = arg0->unk3C++;
    if (t == 0) goto L0;
    if (t == 1) goto L1;
    if (t == 2) goto L2;
    if (t != 3) goto end;
    goto L3;
L0:
    sp.sp20 = 0x1000;
    sp.sp24 = 0x04100044;
    sp.sp28 = 6.0f;
    func_801C2F0C(4, &sp.sp20);
    return;
L1:
    sp.sp20 = 0x1000;
    sp.sp24 = 0x04100026;
    sp.sp2C = 0xA;
    sp.sp28 = 1.0f;
    func_801C2F0C(3, &sp.sp20);
    return;
L2:
    sp.sp20 = 0x1000;
    sp.sp24 = 0x04100026;
    sp.sp28 = 6.0f;
    func_801C2F0C(4, &sp.sp20);
    return;
L3:
    G->f1E8 = -64.5f;
    G->f1EC = 19.2000008f;
    G->f1F0 = 285.799988f;
    G->f1F4 = (-54.4000015f);
    G->f1F8 = 15.5f;
    G->f1FC = 273.799988f;
    func_8011AAF4((void *)"/hdisk1/u/nu64/rz011_usa/main/game/source/a03_s03elevatordemo.c", 0x26D, arg0, 0, 1, 0.0f, G->f1E8, G->f1EC, G->f1F0, 0.0f, G->f1F4, G->f1F8, G->f1FC, 0.0f, 35.0f, -1, -1);
    func_80133980(0x73);
    func_800058DC(arg0, (void *)func_80243F64);
end:;
}
#undef G
#undef func_8011AAF4
#undef func_801C2F0C
#undef func_801C3044
#undef func_80243F64


void func_80243F64(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}



void func_80243F70(s32 arg0, s32 arg1) {
    func_8013B570(arg0, 0x30, 0, 4, func_80243FA8);
}

#define D_80252400 D_80252400__func_80243FA8
#define func_8013A1B4 func_8013A1B4__func_80243FA8
#define func_8024148C_StructArg func_8024148C_StructArg__func_80243FA8
#define func_80242F38_StructGlobal func_80242F38_StructGlobal__func_80243FA8
#define func_80243290_StructTriple func_80243290_StructTriple__func_80243FA8
#define func_80244060 func_80244060__func_80243FA8
#define func_80244654_StructArg func_80244654_StructArg__func_80243FA8
#define func_80244654_StructInner func_80244654_StructInner__func_80243FA8
#define func_80244654_StructOuter func_80244654_StructOuter__func_80243FA8
typedef struct func_8024148C_StructArg { unsigned char pad[0x3C]; unsigned short unk3C; } func_8024148C_StructArg;
typedef struct func_80242F38_StructGlobal func_80242F38_StructGlobal;
#define func_8024148C_StructArg void
#define func_80242F38_StructGlobal struct func_80243290_StructTriple
extern struct func_80243290_StructTriple D_80252400;
extern s32 func_8013A1B4();
void func_80244060(void *arg0, s32 volatile arg1, s32 arg2);
typedef struct func_80244654_StructArg {
    u8 pad0[0x90];
    s16 unk90;
} func_80244654_StructArg;
typedef struct func_80244654_StructInner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    u16 unk12;
} func_80244654_StructInner;
typedef struct func_80244654_StructOuter {
    u8 pad0[0x2C];
    func_80244654_StructInner *unk2C;
} func_80244654_StructOuter;
#undef func_8024148C_StructArg
#undef func_80242F38_StructGlobal

struct func_80243290_StructTriple { s32 a; s32 b; s32 c; };

void func_80243FA8(void *arg0, void **arg1) {
    ((func_80244654_StructOuter *)*arg1)->unk2C->unk4 = -56.5f;
    ((func_80244654_StructOuter *)*arg1)->unk2C->unk8 = 0.0f;
    ((func_80244654_StructOuter *)*arg1)->unk2C->unkC = 274.0f;
    ((func_80244654_StructOuter *)*arg1)->unk2C->unk12 = 0x1C00;
    func_8013A1B4(arg1, D_80252400, 0xFFFFFF);
    ((func_80244654_StructArg *)arg0)->unk90 = 0;
    func_800058DC(arg0, (void *)func_80244060);
}
#undef D_80252400
#undef func_8013A1B4
#undef func_8024148C_StructArg
#undef func_80242F38_StructGlobal
#undef func_80243290_StructTriple
#undef func_80244060
#undef func_80244654_StructArg
#undef func_80244654_StructInner
#undef func_80244654_StructOuter

#define D_80252418 D_80252418__func_80244060
#define func_8013A1B4 func_8013A1B4__func_80244060
#define func_8024148C_StructArg func_8024148C_StructArg__func_80244060
#define func_80242F38_StructGlobal func_80242F38_StructGlobal__func_80244060
#define func_80243290_StructTriple func_80243290_StructTriple__func_80244060
#define func_802440EC func_802440EC__func_80244060
extern struct func_80243290_StructTriple D_80252418;
extern void func_802440EC(void *arg0, void *arg1);
typedef struct func_8024148C_StructArg func_8024148C_StructArg;
typedef struct func_80242F38_StructGlobal func_80242F38_StructGlobal;
struct func_80243290_StructTriple { int a; int b; int c; };
extern s32 func_8013A1B4();

void func_80244060(void *arg0, s32 volatile arg1, s32 arg2) {
    s32 unk5C;

    unk5C = *(s32 *) ((u8 *) arg0 + 0x5C);
    func_80010550(arg1, unk5C, arg2);
    if (func_80133A24(0x73) != 0) {
        func_801339D0(0x73);
        func_8013A1B4((void **) arg1, D_80252418, 0xFFFFFF);
        func_800058DC(arg0, (void *) func_802440EC);
    }
}
#undef D_80252418
#undef func_8013A1B4
#undef func_8024148C_StructArg
#undef func_80242F38_StructGlobal
#undef func_80243290_StructTriple
#undef func_802440EC



void func_802440EC(void *arg0, void *arg1) {
    s32 temp;

    temp = *(s32 *)((u8 *)arg0 + 0x5C);
    if (func_80010550((s32)arg1, temp, (s32)arg1) != 0) {
        func_80133980(0x73);
        func_800058DC(arg0, func_80244138);
    }
}

#define D_80252400 D_80252400__func_80244138
#define func_8013A1B4 func_8013A1B4__func_80244138
#define func_8024148C_StructArg func_8024148C_StructArg__func_80244138
#define func_80242F38_StructGlobal func_80242F38_StructGlobal__func_80244138
#define func_80243290_StructTriple func_80243290_StructTriple__func_80244138
#define func_802441A8 func_802441A8__func_80244138
typedef struct func_8024148C_StructArg func_8024148C_StructArg;
typedef struct func_80242F38_StructGlobal func_80242F38_StructGlobal;
struct func_80243290_StructTriple { int a, b, c; };
extern struct func_80243290_StructTriple D_80252400;
extern s32 func_8013A1B4();
void func_802441A8(void *arg0, s32 volatile arg1);

void func_80244138(s32 arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        func_8013A1B4((void **)arg1, D_80252400, 0xFFFFFF);
        func_800058DC((void *)arg0, (void *)func_802441A8);
    }
}
#undef D_80252400
#undef func_8013A1B4
#undef func_8024148C_StructArg
#undef func_80242F38_StructGlobal
#undef func_80243290_StructTriple
#undef func_802441A8

#define D_80010550 D_80010550__func_802441A8
#define D_80252418 D_80252418__func_802441A8
#define D_80252510 D_80252510__func_802441A8
#define func_800179B0 func_800179B0__func_802441A8
#define func_8013A1B4 func_8013A1B4__func_802441A8
#define func_8024148C_StructArg func_8024148C_StructArg__func_802441A8
#define func_80242F38_StructGlobal func_80242F38_StructGlobal__func_802441A8
#define func_80243290_StructTriple func_80243290_StructTriple__func_802441A8
#define func_80244240 func_80244240__func_802441A8
#define func_80244240_Struct func_80244240_Struct__func_802441A8
extern struct func_80243290_StructTriple D_80252418;
extern void func_800179B0(void *);
extern s32 func_8013A1B4();
typedef struct func_80244240_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x90 - 0x60];
    s16 unk90;
} func_80244240_Struct;
extern void func_80244240(func_80244240_Struct *arg0, s32 arg1);
typedef struct func_8024148C_StructArg func_8024148C_StructArg;
struct func_80243290_StructTriple { int a; int b; int c; };
typedef struct func_80242F38_SG { int a; } func_80242F38_StructGlobal;

extern u8 D_80252510[];
extern s32 D_80010550(s32, s32);

void func_802441A8(void *arg0, s32 volatile arg1) {
    s32 t = *(s32 *)((u8 *)arg0 + 0x5C);
    D_80010550(arg1, t);
    if (func_80133A24(0x73) != 0) {
        func_801339D0(0x73);
        func_8013A1B4(arg1, D_80252418, 0xFFFFFF);
        func_800179B0(D_80252510);
        func_800058DC(arg0, (void *) func_80244240);
    }
}
#undef D_80010550
#undef D_80252418
#undef D_80252510
#undef func_800179B0
#undef func_8013A1B4
#undef func_8024148C_StructArg
#undef func_80242F38_StructGlobal
#undef func_80243290_StructTriple
#undef func_80244240
#undef func_80244240_Struct


typedef struct func_80244240_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x90 - 0x60];
    s16 unk90;
} func_80244240_Struct;


void func_80244240(func_80244240_Struct *arg0, s32 arg1) {
    s32 tmp;

    tmp = arg0->unk5C;
    if ((func_80010550(arg1, tmp, arg1) != 0) && (func_800178E8() != 0)) {
        func_80133980(0x77);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_802442A0);
    }
}

#define D_80252424 D_80252424__func_802442A0
#define func_8013A1B4 func_8013A1B4__func_802442A0
#define func_80244320 func_80244320__func_802442A0
#define func_80244320_Struct func_80244320_Struct__func_802442A0
extern s32 func_8013A1B4();
typedef struct func_80244320_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x30];
    u16 unk90;
} func_80244320_Struct;
extern void func_80244320(func_80244320_Struct *arg0, s32 arg1);

typedef struct func_802442A0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_802442A0_Struct;

extern func_802442A0_Struct D_80252424;

void func_802442A0(s32 arg0, s32 arg1) {
    if (func_80133A24(0x73) != 0) {
        func_801339D0(0x73);
        func_8013A1B4(arg1, D_80252424, 0xFFFFFF);
        func_800058DC((void *) arg0, (void *) func_80244320);
    }
}
#undef D_80252424
#undef func_8013A1B4
#undef func_80244320
#undef func_80244320_Struct


typedef struct func_80244320_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x30];
    u16 unk90;
} func_80244320_Struct;


void func_80244320(func_80244320_Struct *arg0, s32 arg1) {
    s32 val;

    val = arg0->unk5C;
    if (func_80010550(arg1, val, arg0) != 0) {
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024436C);
    }
}

#define D_8025243C D_8025243C__func_8024436C
#define func_80011140 func_80011140__func_8024436C
#define func_8013A1B4 func_8013A1B4__func_8024436C
#define func_8024148C_StructArg func_8024148C_StructArg__func_8024436C
#define func_80244320_Struct func_80244320_Struct__func_8024436C
#define func_8024443C func_8024443C__func_8024436C
extern s32 func_8013A1B4();
typedef struct func_80244320_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x30];
    u16 unk90;
} func_80244320_Struct;
typedef struct func_8024443C_StructArg {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x30];
    u16 unk90;
} func_8024443C_StructArg;
typedef struct func_8024443C_StructInner {
    u8 pad[0x12];
    s16 unk12;
} func_8024443C_StructInner;
typedef struct func_8024443C_StructNode {
    u8 pad[0x2C];
    func_8024443C_StructInner *unk2C;
} func_8024443C_StructNode;
extern void func_8024443C(func_8024443C_StructArg *arg0, func_8024443C_StructNode ** volatile arg1);
typedef struct func_8024148C_StructArg func_8024148C_StructArg;

typedef struct func_8024436C_StructG { s32 w[3]; } func_8024436C_StructG;
extern func_8024436C_StructG D_8025243C;
extern s32 func_80011140();

void func_8024436C(func_80244320_Struct *arg0, void **arg1) {
    s32 sp2C[1];

    sp2C[0] = arg0->unk5C;
    if ((arg0->unk90++ >= 0x14) && func_80011140(arg1, sp2C[0], D_8025243C, 0x14)) {
        func_8013A1B4(arg1, D_8025243C, 0xFFFFFF);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024443C);
    }
}
#undef D_8025243C
#undef func_80011140
#undef func_8013A1B4
#undef func_8024148C_StructArg
#undef func_80244320_Struct
#undef func_8024443C

#define D_8025240C D_8025240C__func_8024443C
#define D_80252618 D_80252618__func_8024443C
#define func_800179B0 func_800179B0__func_8024443C
#define func_8013A1B4 func_8013A1B4__func_8024443C
#define func_8024148C_StructArg func_8024148C_StructArg__func_8024443C
#define func_80242F38_StructGlobal func_80242F38_StructGlobal__func_8024443C
#define func_80243290_StructTriple func_80243290_StructTriple__func_8024443C
#define func_8024443C_StructArg func_8024443C_StructArg__func_8024443C
#define func_8024443C_StructInner func_8024443C_StructInner__func_8024443C
#define func_8024443C_StructNode func_8024443C_StructNode__func_8024443C
#define func_802444F8 func_802444F8__func_8024443C
extern s32 func_8013A1B4();
typedef struct func_802444F8_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_802444F8_Struct;
extern void func_802444F8(func_802444F8_Struct *arg0, s32 arg1, s32 arg2);
typedef struct func_80242F38_StructGlobal func_80242F38_StructGlobal;
typedef struct func_8024148C_StructArg func_8024148C_StructArg;
#define func_8024443C func_8024443C__ctx
#undef func_8024443C

typedef struct func_8024443C_StructArg {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x30];
    u16 unk90;
} func_8024443C_StructArg;

typedef struct func_8024443C_StructInner {
    u8 pad[0x12];
    s16 unk12;
} func_8024443C_StructInner;

typedef struct func_8024443C_StructNode {
    u8 pad[0x2C];
    func_8024443C_StructInner *unk2C;
} func_8024443C_StructNode;

struct func_80243290_StructTriple { s32 a; s32 b; s32 c; };
extern struct func_80243290_StructTriple D_8025240C;
extern u8 D_80252618[];
extern void func_800179B0(void *);

void func_8024443C(func_8024443C_StructArg *arg0, func_8024443C_StructNode ** volatile arg1)
{
  s32 temp;
  func_8024443C_StructInner *inner;
  temp = arg0->unk5C;
  if ((arg0->unk90++) >= 30)
  {
    inner = (*arg1)->unk2C;
    inner->unk12 += 0x3A;
    if (func_80010550((s32) arg1, temp ^ 0, temp))
    {
      func_8013A1B4(arg1, D_8025240C, 0xFFFFFF);
      func_800179B0(D_80252618);
      func_800058DC(arg0, func_802444F8);
    }
  }
}
#undef D_8025240C
#undef D_80252618
#undef func_800179B0
#undef func_8013A1B4
#undef func_8024148C_StructArg
#undef func_80242F38_StructGlobal
#undef func_80243290_StructTriple
#undef func_8024443C_StructArg
#undef func_8024443C_StructInner
#undef func_8024443C_StructNode
#undef func_802444F8

#define D_80252418 D_80252418__func_802444F8
#define D_80252844 D_80252844__func_802444F8
#define func_800179B0 func_800179B0__func_802444F8
#define func_8013A1B4 func_8013A1B4__func_802444F8
#define func_80243290_StructTriple func_80243290_StructTriple__func_802444F8
#define func_802433D4_Struct func_802433D4_Struct__func_802444F8
#define func_802444F8_Struct func_802444F8_Struct__func_802444F8
#define func_8024458C func_8024458C__func_802444F8
extern void func_800179B0(void *);
extern s32 func_8013A1B4();
struct func_80243290_StructTriple { int a; int b; int c; };
struct func_802433D4_Struct {
    unsigned char pad[0x5C];
    int unk5C;
};

void func_8024458C(struct func_802433D4_Struct *arg0, s32 arg1);

typedef struct func_802444F8_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_802444F8_Struct;

extern struct func_80243290_StructTriple D_80252418;
extern u8 D_80252844[];

void func_802444F8(func_802444F8_Struct *arg0, s32 arg1, s32 arg2) {
    s32 val = arg0->unk5C;

    if ((func_80010550(arg1, val, arg2) != 0) && (func_800178E8() != 0)) {
        func_8013A1B4((void **)arg1, D_80252418, 0xFFFFFF);
        func_800179B0(D_80252844);
        func_800058DC(arg0, (void *)func_8024458C);
    }
}
#undef D_80252418
#undef D_80252844
#undef func_800179B0
#undef func_8013A1B4
#undef func_80243290_StructTriple
#undef func_802433D4_Struct
#undef func_802444F8_Struct
#undef func_8024458C

#define func_80020718 func_80020718__func_8024458C
#define func_8012FE50 func_8012FE50__func_8024458C
#define func_8024148C_StructArg func_8024148C_StructArg__func_8024458C
#define func_80244610 func_80244610__func_8024458C
typedef struct func_8024148C_StructArg { unsigned char pad[0x3C]; unsigned short unk3C; } func_8024148C_StructArg;
extern void func_80244610(s32 arg0, s32 arg1);
#define func_8024148C_StructArg void
struct func_802433D4_Struct {
    unsigned char pad[0x5C];
    int unk5C;
};

extern void func_8012FE50(s32, s32, s32, s32, s32);
extern void func_80020718(s32);

void func_8024458C(struct func_802433D4_Struct *arg0, s32 arg1) {
    s32 temp;
    s16 *p;

    temp = arg0->unk5C;
    if ((func_80010550(arg1, temp, arg1) != 0) && (func_800178E8() != 0)) {
        func_80020718(0x666);
        p = (s16 *)&D_801BBBF0;
        p[2] = 0x10C;
        func_8012FE50(0x10, (u16)p[2], 6, 1, 0);
        func_800058DC(arg0, &func_80244610);
    }
}
#undef func_80020718
#undef func_8012FE50
#undef func_8024148C_StructArg
#undef func_80244610


void func_80244610(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}



void func_8024461C(s32 arg0, s32 arg1) {
    func_8013B570(arg0, 0x57, 0, 4, func_80244654);
}

#define func_8024470C func_8024470C__func_80244654
#define func_8024470C_Struct func_8024470C_Struct__func_80244654
struct func_8024470C_Struct {
    u8 pad[0x5C];
    s32 unk5C;
};
extern void func_8024470C(struct func_8024470C_Struct *arg0, s32 arg1, s32 arg2);
typedef struct func_8024148C_StructArg { unsigned char pad[0x3C]; unsigned short unk3C; } func_8024148C_StructArg;
typedef struct func_8024148C_StructLoc { short unk0; short pad; int unk4; float unk8; unsigned char padC[0x14]; } func_8024148C_StructLoc;
struct func_80243290_StructTriple { int a; int b; int c; };
typedef struct func_80242F38_StructGlobal func_80242F38_StructGlobal;

typedef struct func_80244654_StructInner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    u16 unk12;
} func_80244654_StructInner;

typedef struct func_80244654_StructOuter {
    u8 pad0[0x2C];
    func_80244654_StructInner *unk2C;
} func_80244654_StructOuter;

typedef struct func_80244654_StructArg {
    u8 pad0[0x90];
    s16 unk90;
} func_80244654_StructArg;

extern struct func_80243290_StructTriple D_80252448;

void func_80244654(func_80244654_StructArg *arg0, void **arg1) {
    ((func_80244654_StructOuter *) *arg1)->unk2C->unk4 = (-32.7000008f);
    ((func_80244654_StructOuter *) *arg1)->unk2C->unk8 = 0.0f;
    ((func_80244654_StructOuter *) *arg1)->unk2C->unkC = 279.100006f;
    ((func_80244654_StructOuter *) *arg1)->unk2C->unk12 = 0x1C00;
    func_8013A1B4(arg1, D_80252448, 0xFFFFFF);
    arg0->unk90 = 0;
    func_800058DC(arg0, func_8024470C);
}
#undef func_8024470C
#undef func_8024470C_Struct


struct func_8024470C_Struct {
    u8 pad[0x5C];
    s32 unk5C;
};


void func_8024470C(struct func_8024470C_Struct *arg0, s32 arg1, s32 arg2)
{
  s32 temp;
  if (!arg0->unk5C)
  {
  }
  temp = arg0->unk5C;
  func_80010550(arg1, temp, arg2);
}

#define D_800058DC D_800058DC__func_80244734
#define func_80243420_Sub func_80243420_Sub__func_80244734
#define func_802448CC func_802448CC__func_80244734
#define func_802448CC_StructArg func_802448CC_StructArg__func_80244734
#define func_802448CC_StructInner func_802448CC_StructInner__func_80244734
#define func_802448CC_StructNode func_802448CC_StructNode__func_80244734
typedef struct func_80243420_Sub {
    u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[2]; s16 unk12;
    u8 pad14[4]; f32 unk18; f32 unk1C; f32 unk20; s32 unk24; u8 pad28[8];
    s32 unk30; u8 pad34[0x18]; u8 unk4C; u8 unk4D; u8 unk4E; u8 unk4F;
} func_80243420_Sub;
typedef struct func_802448CC_StructArg {
    u8 pad0[0x94];
    f32 unk94;
} func_802448CC_StructArg;
typedef struct func_802448CC_StructInner {
    u8 pad0[0x8];
    f32 unk8;
} func_802448CC_StructInner;
typedef struct func_802448CC_StructNode {
    u8 pad0[0x30];
    func_802448CC_StructInner *unk30;
} func_802448CC_StructNode;
extern void func_802448CC(func_802448CC_StructArg *arg0, func_802448CC_StructNode **arg1);

extern void D_800058DC(void *, void *, void *);
typedef struct func_80244734_StructArg { u8 pad0[0x94]; f32 unk94; } func_80244734_StructArg;

void func_80244734(func_80244734_StructArg *arg0, func_80243420_Mid **arg1) {
    func_80243420_Vec sp28;
    func_80243420_Sub *t;

    sp28 = D_80164F40;
    sp28.w[1] = 0x80000600;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x294, 2);
    t = (*arg1)->unk30;
    t->unk24 |= 0x13;
    (*arg1)->unk30->unk30 = func_8000C3B0(*arg1);
    (*arg1)->unk30->unk20 = 1.0f;
    t = (*arg1)->unk30;
    t->unk1C = t->unk20;
    (*arg1)->unk30->unk18 = t->unk20;
    (*arg1)->unk30->unk4 = -42.0f;
    (*arg1)->unk30->unk8 = 0.0f;
    (*arg1)->unk30->unkC = 272.0f;
    (*arg1)->unk30->unk12 = 0;
    t = (*arg1)->unk30;
    t->unk24 |= 0x400;
    (*arg1)->unk30->unk4C = ((u8 *)&D_801BBBF0)[0xF32];
    (*arg1)->unk30->unk4D = ((u8 *)&D_801BBBF0)[0xF33];
    (*arg1)->unk30->unk4E = ((u8 *)&D_801BBBF0)[0xF34];
    (*arg1)->unk30->unk4F = ((u8 *)&D_801BBBF0)[0xF35];
    arg0->unk94 = 0.5f;
    D_800058DC(arg0, func_802448CC, &D_801BBBF0);
}
#undef D_800058DC
#undef func_80243420_Sub
#undef func_802448CC
#undef func_802448CC_StructArg
#undef func_802448CC_StructInner
#undef func_802448CC_StructNode


typedef struct func_802448CC_StructInner {
    u8 pad0[0x8];
    f32 unk8;
} func_802448CC_StructInner;

typedef struct func_802448CC_StructNode {
    u8 pad0[0x30];
    func_802448CC_StructInner *unk30;
} func_802448CC_StructNode;

typedef struct func_802448CC_StructArg {
    u8 pad0[0x94];
    f32 unk94;
} func_802448CC_StructArg;

void func_802448CC(func_802448CC_StructArg *arg0, func_802448CC_StructNode **arg1) {
    f64 temp_fv0;

    (*arg1)->unk30->unk8 = (f32) ((*arg1)->unk30->unk8 + arg0->unk94);
    temp_fv0 = (f64) (*arg1)->unk30->unk8;
    if (temp_fv0 >= 20.0) {
        (*arg1)->unk30->unk8 = (f32) (temp_fv0 - 20.0);
    }
}

