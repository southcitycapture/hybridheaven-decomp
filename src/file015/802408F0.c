#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_802408F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80240930.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80240C00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80240E14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80241130.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80241214.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_802412F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_8024148C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80241550.s")


typedef struct func_80241928_StructInner {
    u8 pad0[0x40];
    f32 unk40;
    u8 pad1[4];
    f32 unk48;
} func_80241928_StructInner;

typedef struct func_80241928_StructOuter {
    u8 pad0[0xDC];
    func_80241928_StructInner *unkDC;
} func_80241928_StructOuter;

typedef struct func_80241928_StructArg {
    u8 pad0[0x3C];
    s16 unk3C;
} func_80241928_StructArg;

extern void func_800058DC(void *, void *);
extern void func_80133980(s32);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_801C3B5C(void);
extern s32 func_801C3D20(f32, f32, s32);
extern void func_801FBB30(void);
extern func_80241928_StructOuter D_801BBBF0;
extern f32 D_80258550;
extern void func_802419BC(void);

void func_80241928(func_80241928_StructArg *arg0, void *arg1) {
    if (func_801C3D20(-65.0f, D_80258550, 0x420C0000) != 0) {
        func_80133980(0x78);
        func_801C3B2C(2);
        func_801C3B10(1);
        D_801BBBF0.unkDC->unk40 = 0.0f;
        D_801BBBF0.unkDC->unk48 = 0.0f;
        func_801FBB30();
        arg0->unk3C = 0;
        func_801C3B5C();
        func_800058DC(arg0, func_802419BC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_802419BC.s")


extern void func_80241BBC(void);
extern s32 func_801C3044(void);
extern void func_801C2F0C(s32, s16 *);

typedef struct func_80241B50_Struct {
    s16 sp18;
    s16 pad;
    s32 sp1C;
    f32 sp20;
    s16 sp24;
    u8 pad2[0x12];
} func_80241B50_Struct;

void func_80241B50(s32 arg0, s32 arg1) {
    func_80241B50_Struct sp;

    if (func_801C3044() == 0) {
        sp.sp18 = 0x1000;
        sp.sp1C = 0x04100045;
        sp.sp24 = 0xA;
        sp.sp20 = 1.0f;
        func_801C2F0C(3, &sp.sp18);
        func_800058DC((void *) arg0, (void *) func_80241BBC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80241BBC.s")


extern void func_80020718(s32);
extern void func_80241C88(void);

typedef struct func_80241C1C_Struct {
    s16 sp18;
    s16 pad;
    s32 sp1C;
    f32 sp20;
    s32 pad2[5];
} func_80241C1C_Struct;

void func_80241C1C(s32 arg0, s32 arg1) {
    func_80241C1C_Struct sp;

    if (func_801C3044() == 0) {
        func_80020718(0x1A9);
        sp.sp18 = 0;
        sp.sp1C = 0x04100046;
        sp.sp20 = 3.0f;
        func_801C2F0C(4, &sp.sp18);
        func_800058DC((void *)arg0, func_80241C88);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80241C88.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80241D4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80241DD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80241F20.s")


typedef struct func_8024236C_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
} func_8024236C_Struct;

typedef struct func_8024236C_StructLocal {
    s16 unk0;
    s16 pad;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad2[0x12];
} func_8024236C_StructLocal;

extern void func_802423E0(void);

void func_8024236C(func_8024236C_Struct *arg0, void *arg1) {
    func_8024236C_StructLocal sp18;

    if (func_801C3044() == 0) {
        sp18.unk0 = 0x1000;
        sp18.unk4 = 0x04100026;
        sp18.unkC = 0xA;
        sp18.unk8 = 1.0f;
        arg0->unk3C = 0;
        func_801C2F0C(3, (s16 *) &sp18);
        func_800058DC(arg0, func_802423E0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_802423E0.s")


extern s32 func_80133A24(s32);
extern s32 func_800178E8(void);
extern void func_801339D0(s32);
extern void func_802424FC(void);
extern f32 D_802585CC;
extern f32 D_802585D0;

typedef struct func_8024244C_Struct {
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s16 unk24;
    s32 unk28;
    f32 unk2C;
    s16 unk30;
    s16 unk32;
} func_8024244C_Struct;

void func_8024244C(s32 arg0, s32 arg1) {
    s32 pad;
    func_8024244C_Struct sp;

    if ((func_80133A24(0x73) != 0) && (func_800178E8() != 0)) {
        func_801339D0(0x73);
        sp.unk18 = D_802585CC;
        sp.unk1C = D_802585D0;
        sp.unk20 = 0.0f;
        sp.unk24 = 0x1100;
        sp.unk28 = 0x01B8001B;
        sp.unk2C = 1.0f;
        sp.unk30 = 0;
        sp.unk32 = 0x96;
        func_801C2F0C(2, (s16 *)&sp);
        func_800058DC((void *)arg0, (void *)func_802424FC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_802424FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80242638.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_802426EC.s")


extern void func_8013B570(s32, s32, s32, s32, void *);
extern void func_80242730(void);

void func_802426F8(s32 arg0, s32 arg1) {
    func_8013B570(arg0, 0x30, 0, 4, func_80242730);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80242730.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_802427E8.s")


typedef struct func_80242874_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
} func_80242874_Struct;

extern void func_800179B0(void *);
extern u8 D_80252134[];
extern void func_802428C0(void);

void func_80242874(func_80242874_Struct *arg0, s32 arg1) {
    s32 temp;

    temp = arg0->unk5C;
    if (func_80010550(arg1, temp, arg1) != 0) {
        func_800179B0(D_80252134);
        func_800058DC(arg0, func_802428C0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_802428C0.s")


struct func_802429D8_StructInner {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad1[0x4];
    f32 unkC;
};

struct func_802429D8_StructNode {
    u8 pad0[0x2C];
    struct func_802429D8_StructInner *unk2C;
};

struct func_802429D8_StructArg {
    u8 pad0[0x90];
    u16 unk90;
};

extern f32 D_80258600;
extern u8 func_80242A54[];


void func_802429D8(struct func_802429D8_StructArg *arg0, s32 arg1) {
    if (arg0->unk90 == 0) {
        ((struct func_802429D8_StructNode *) *(struct func_802429D8_StructNode **)((u8 *) &D_801BBBF0 + 0xE0))->unk2C->unk4 = -61.0f;
        ((struct func_802429D8_StructNode *) *(struct func_802429D8_StructNode **)((u8 *) &D_801BBBF0 + 0xE0))->unk2C->unkC = D_80258600;
        arg0->unk90 = 1;
    }
    if (func_800178E8() != 0) {
        func_800058DC(arg0, func_80242A54);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80242A54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80242B14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80242C3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80242D48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80242DCC.s")


typedef struct func_80242F38_StructInner {
    u8 pad0[0x8];
    f32 unk8;
    u8 pad1[0x6];
    s16 unk12;
} func_80242F38_StructInner;

typedef struct func_80242F38_StructNode {
    u8 pad0[0x2C];
    func_80242F38_StructInner *unk2C;
} func_80242F38_StructNode;

typedef struct func_80242F38_StructArg {
    u8 pad0[0x5C];
    s32 unk5C;
} func_80242F38_StructArg;

typedef struct func_80242F38_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80242F38_StructGlobal;

extern s32 func_80011140(void **, s32, func_80242F38_StructGlobal, s32);
extern func_80242F38_StructGlobal D_802520F8;
extern u8 D_80252320[];
extern void func_80242FE8(void);

void func_80242F38(func_80242F38_StructArg *arg0, void ** volatile arg1) {
    s32 temp;

    temp = arg0->unk5C;
    ((func_80242F38_StructNode *) *arg1)->unk2C->unk8 = 0.0f;
    ((func_80242F38_StructNode *) *arg1)->unk2C->unk12 = 0x1EAA;
    if ((func_80011140(arg1, temp, D_802520F8, 0x1E) != 0) && (func_800178E8() != 0)) {
        func_800179B0(D_80252320);
        func_800058DC(arg0, func_80242FE8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80242FE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80243020.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_802430D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_8024315C.s")


extern void func_8024324C(void);

void func_80243200(void *arg0, void *arg1) {
    s32 temp;

    temp = *(s32 *)((u8 *)arg0 + 0x5C);
    if (func_80010550((s32)arg1, temp, (s32)arg1) != 0) {
        func_80133980(0x73);
        func_800058DC(arg0, func_8024324C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_8024324C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80243258.s")


struct func_80243290_StructInner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};

struct func_80243290_StructOuter {
    u8 pad0[0x2C];
    struct func_80243290_StructInner *unk2C;
};

struct func_80243290_StructArg {
    u8 pad0[0x90];
    s16 unk90;
};

struct func_80243290_StructTriple {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

extern s32 func_8013A1B4(void **arg0, struct func_80243290_StructTriple arg1, s32 arg2);
extern struct func_80243290_StructTriple D_8025211C;
extern f32 D_80258638;
extern f32 D_8025863C;
extern void func_80243348(void);

void func_80243290(struct func_80243290_StructArg *arg0, void **arg1) {
    ((struct func_80243290_StructOuter *) *arg1)->unk2C->unk4 = D_80258638;
    ((struct func_80243290_StructOuter *) *arg1)->unk2C->unk8 = 0.0f;
    ((struct func_80243290_StructOuter *) *arg1)->unk2C->unkC = D_8025863C;
    ((struct func_80243290_StructOuter *) *arg1)->unk2C->unk12 = 0x1C00;
    func_8013A1B4(arg1, D_8025211C, 0xFFFFFF);
    arg0->unk90 = 0;
    func_800058DC(arg0, func_80243348);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80243348.s")


struct func_802433D4_Struct {
    u8 pad[0x5C];
    s32 unk5C;
};

extern s32 func_80010550(s32, s32, s32);
extern void func_80243414(void);

void func_802433D4(struct func_802433D4_Struct *arg0, s32 arg1) {
    s32 temp = arg0->unk5C;

    if (func_80010550(arg1, temp, arg1) != 0) {
        func_800058DC(arg0, &func_80243414);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80243414.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80243420.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80243678.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_8024381C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_802438D8.s")


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

extern void func_80243A78(void);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80243A78.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80243CF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80243D84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80243F64.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80243F70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80243FA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80244060.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_802440EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80244138.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_802441A8.s")


typedef struct func_80244240_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x90 - 0x60];
    s16 unk90;
} func_80244240_Struct;

extern void func_802442A0(void);

void func_80244240(func_80244240_Struct *arg0, s32 arg1) {
    s32 tmp;

    tmp = arg0->unk5C;
    if ((func_80010550(arg1, tmp, arg1) != 0) && (func_800178E8() != 0)) {
        func_80133980(0x77);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_802442A0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_802442A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80244320.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_8024436C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_8024443C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_802444F8.s")


extern void func_8012FE50(s32, s32, s32, s32, s32);
extern void func_80244610(void);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80244610.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_8024461C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80244654.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80244734.s")


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

