#include "common.h"

extern f32 D_80258250;
extern f32 D_80258254;
extern f32 D_80258258;
extern f32 D_8025825C;
extern f32 D_80258260;
extern f32 D_80258264;
extern f32 D_80258268;
extern f32 D_80258550;
extern f32 D_802585CC;
extern f32 D_802585D0;
extern f32 D_802585E8;
extern f32 D_80258600;
extern f32 D_80258604;
extern f32 D_80258608;
extern f32 D_8025860C;
extern f32 D_80258610;
extern f32 D_80258638;
extern f32 D_8025863C;
extern f32 D_80258754;
extern f32 D_80258758;
extern s16 func_801FD284(s16, s32, f32);
extern s32 func_80005670(void *, void *);
extern s32 func_8000C3B0(void *);
extern s32 func_80010550(s32, s32, s32);
extern s32 func_800178E8();
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_80126CC0(s32, void *);
extern s32 func_8012C97C(u16, s32);
extern s32 func_80133A24(s32);
extern s32 func_8013A1B4();
extern s32 func_801C3044(void);
extern s32 func_801C3D20(f32, f32, s32);
extern u8 D_80252014[];
extern u8 D_80252134[];
extern u8 D_80252164[];
extern u8 D_80252244[];
extern u8 D_80252320[];
extern u8 D_80252844[];
extern u8 D_80258140[];
extern u8 D_80258450[];
extern u8 D_80258490[];
extern u8 func_80126EAC[];
extern u8 func_80240930[];
extern u8 func_80242A54[];
extern u8 func_80242C3C[];
extern u8 func_80243678[];
extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_800179B0(void *);
extern void func_80020718(s32);
extern void func_800208C4(s32);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012FE50(s32, s32, s32, s32, s32);
extern void func_80133980(s32);
extern void func_801339D0(s32);
extern void func_8013B570(s32, s32, s32, s32, void *);
extern void func_801C2F0C(s32, s16 *);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_801C3B5C(void);
extern void func_801FBB30(void);
extern void func_80241214(void);
extern void func_802419BC();
extern void func_80241BBC(s32 arg0, s32 arg1);
extern void func_80241C1C(s32 arg0, s32 arg1);
extern void func_80241C88();
extern void func_80241D4C(void);
extern void func_802423E0(s32 arg0, s32 arg1);
extern void func_8024244C(s32 arg0, s32 arg1);
extern void func_802424FC();
extern void func_80242730();
extern void func_802427E8(void *arg0, s32 volatile arg1, s32 arg2);
extern void func_80242874();
extern void func_802428C0();
extern void func_80242DCC();
extern void func_80242FE8();
extern void func_80243020();
extern void func_8024324C(s32 arg0, s32 arg1);
extern void func_80243290();
extern void func_80243348();
extern void func_802433D4();
extern void func_80243414(s32 arg0, s32 arg1);
extern void func_802438D8(void);
extern void func_80243A78();
extern void func_80243D84();
extern void func_80243FA8(void *arg0, void **arg1);
extern void func_80244060(void *arg0, s32 volatile arg1, s32 arg2);
extern void func_802440EC(void *arg0, void *arg1);
extern void func_80244138(s32 arg0, s32 arg1);
extern void func_802441A8();
extern void func_802442A0();
extern void func_8024436C();
extern void func_8024443C(void);
extern void func_80244610(s32 arg0, s32 arg1);
extern void func_80244654();
extern void func_8024470C();



void func_802408F0(s32 arg0, s32 arg1) {
    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        func_800058DC(arg0, func_80240930);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80240930.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80240C00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80240E14.s")



void func_80241130(void * volatile arg0, s32 volatile arg1) {
    if (func_8011AAF4(D_80258140, 0x14F, arg0, 0, 2,
        D_80258250, D_80258254, D_80258258, D_8025825C,
        D_80258260, D_80258264, D_80258268, 450.0f, 0.0f, 35.0f,
        -1, -1) == 0) {
        func_800179B0(D_80252014);
        func_800058DC(arg0, (void *)func_80241214);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80241214.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_802412F8.s")

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
extern func_80241928_StructOuter D_801BBBF0;


typedef struct func_8024148C_StructInner {
    u8 pad0[0xC];
    f32 unkC;
    u8 pad1[2];
    u16 unk12;
} func_8024148C_StructInner;

typedef struct func_8024148C_StructNode {
    u8 pad0[0x2C];
    func_8024148C_StructInner *unk2C;
} func_8024148C_StructNode;

typedef struct func_8024148C_StructArg {
    u8 pad0[0x3C];
    u16 unk3C;
} func_8024148C_StructArg;

typedef struct func_8024148C_StructLoc {
    s16 unk0;
    s16 pad;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad2[0x12];
} func_8024148C_StructLoc;

void func_8024148C(func_8024148C_StructArg *arg0, s32 arg1) {
    extern void func_801C2F0C();
    func_8024148C_StructLoc loc;
    u16 var_v1;
    func_8024148C_StructInner *inner;

    var_v1 = arg0->unk3C;
    if (var_v1 == 0) {
        (*(func_8024148C_StructNode **)((u8 *) &D_801BBBF0 + 0xE0))->unk2C->unk12 = 0x1000;
        inner = (*(func_8024148C_StructNode **)((u8 *) &D_801BBBF0 + 0xE0))->unk2C;
        inner->unkC = inner->unkC + 10.0f;
        var_v1 = arg0->unk3C;
    }
    if ((s32) arg0->unk3C++ >= 0x15) {
        loc.unk0 = 0;
        loc.unk4 = 0x01680041;
        loc.unkC = 0xA;
        loc.unk8 = 1.0f;
        func_801C2F0C(3, &loc.unk0, arg0);
        func_800179B0(D_80252014);
        func_800058DC(arg0, (void *) func_80241214);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80241550.s")




typedef struct func_80241928_StructArg {
    u8 pad0[0x3C];
    s16 unk3C;
} func_80241928_StructArg;


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

typedef struct func_80241C1C_Struct {
    s16 sp18;
    s16 pad;
    s32 sp1C;
    f32 sp20;
    s32 pad2[5];
} func_80241C1C_Struct;

void func_80241BBC(s32 arg0, s32 arg1) {
    func_80241C1C_Struct sp;

    if (func_801C3044() == 0) {
        sp.sp18 = 0;
        sp.sp1C = 0x04100045;
        sp.sp20 = 3.0f;
        func_801C2F0C(4, &sp.sp18);
        func_800058DC((void *) arg0, (void *) func_80241C1C);
    }
}




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


typedef struct func_80241C88_StructInner {
    u8 pad[0x4B];
    u8 unk4B;
} func_80241C88_StructInner;

typedef struct func_80241C88_StructNode {
    u8 pad[0x30];
    func_80241C88_StructInner *unk30;
} func_80241C88_StructNode;

typedef struct func_80241C88_StructArg {
    u8 pad[0x3C];
    s16 unk3C;
} func_80241C88_StructArg;

typedef struct func_80241C88_StructLocal {
    s16 unk0;
    s16 pad;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad2[0xA];
} func_80241C88_StructLocal;


void func_80241C88(func_80241C88_StructArg *arg0, func_80241C88_StructNode **arg1) {
    u8 temp_v1;
    func_80241C88_StructInner *temp_v0;
    func_80241C88_StructLocal local;

    temp_v0 = arg1[0]->unk30;
    temp_v1 = temp_v0->unk4B;
    if (temp_v1 >= 0x11) {
        temp_v0->unk4B = temp_v1 - 0x10;
        arg1[1]->unk30->unk4B = arg1[0]->unk30->unk4B;
    } else {
        temp_v0->unk4B = 0;
        arg1[1]->unk30->unk4B = 0;
    }
    if (func_801C3044() == 0) {
        func_80020718(0x1AA);
        local.unk0 = 0x1000;
        local.unk4 = 0x04100044;
        local.unkC = 0xA;
        local.unk8 = 1.0f;
        func_801C2F0C(3, &local.unk0);
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80241D4C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80241D4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80241DD0.s")


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
typedef struct func_80241F20_StructLocal { s16 a; s16 pad; s32 b; f32 c; s16 d; u8 pad2[0xA]; } func_80241F20_StructLocal;
typedef struct func_80241F20_Arg { u8 pad0[0x3C]; u16 unk3C; } func_80241F20_Arg;

struct func_8024236C_Struct;
void func_8024236C(struct func_8024236C_Struct *arg0, void *arg1);
extern u8 D_80258310[], D_80258350[], D_80258390[], D_802583D0[];
extern f32 D_80258578, D_8025857C, D_80258580, D_80258584, D_80258588;
extern f32 D_8025858C, D_80258590, D_80258594, D_80258598, D_8025859C;
extern f32 D_802585A0, D_802585A4, D_802585A8, D_802585AC, D_802585B0;
extern f32 D_802585B4, D_802585B8, D_802585BC, D_802585C0, D_802585C4, D_802585C8;

void func_80241F20(func_80241F20_Arg *arg0, s32 arg1) {
    u16 t;
    f32 z = 0.0f;
    func_80241F20_StructLocal sp;

    t = arg0->unk3C;
    arg0->unk3C = t + 1;
    if (t == 0x3C) {
        func_80020718(0x1AB);
    }
    if (t == 0x5A) {
        G->unk434 = 1;
        G->f1E8 = D_80258578;
        G->f1EC = 13.0f;
        G->f1F0 = D_8025857C;
        G->f1F4 = D_80258580;
        G->f1F8 = D_80258584;
        G->f1FC = D_80258588;
        func_8011AAF4(D_80258310, 0x258, arg0, 0, 1, z, G->f1E8, G->f1EC, G->f1F0, z, G->f1F4, G->f1F8, G->f1FC, z, 35.0f, -1, -1);
        func_80020718(7);
    }
    if (t == 0x66) {
        G->f1E8 = -75.0f;
        G->f1EC = D_8025858C;
        G->f1F0 = D_80258590;
        G->f1F4 = D_80258594;
        G->f1F8 = D_80258598;
        G->f1FC = D_8025859C;
        func_8011AAF4(D_80258350, 0x267, arg0, 0, 1, z, G->f1E8, G->f1EC, G->f1F0, z, G->f1F4, G->f1F8, G->f1FC, z, 35.0f, -1, -1);
        sp.a = 0x1000;
        sp.b = 0x01B8000B;
        sp.d = 0xA;
        sp.c = 1.0f;
        func_801C2F0C(3, &sp.a);
    }
    if (t == 0x84) {
        G->f1E8 = -75.0f;
        G->f1EC = D_802585A0;
        G->f1F0 = D_802585A4;
        G->f1F4 = D_802585A8;
        G->f1F8 = D_802585AC;
        G->f1FC = D_802585B0;
        func_8011AAF4(D_80258390, 0x27C, arg0, 0, 1, z, G->f1E8, G->f1EC, G->f1F0, z, G->f1F4, G->f1F8, G->f1FC, z, 35.0f, -1, -1);
    }
    if (t == 0x8E) {
        G->unkE0->unk2C->unk4 = D_802585B4;
        G->unkE0->unk2C->unkC = D_802585B8;
        G->unkE0->unk2C->unk12 = 0x1000;
        G->f1E8 = -59.5f;
        G->f1EC = D_802585BC;
        G->f1F0 = D_802585C0;
        G->f1F4 = D_802585C4;
        G->f1F8 = 12.0f;
        G->f1FC = D_802585C8;
        func_8011AAF4(D_802583D0, 0x28D, arg0, 0, 1, z, G->f1E8, G->f1EC, G->f1F0, z, G->f1F4, G->f1F8, G->f1FC, z, 35.0f, -1, -1);
        sp.a = 0;
        sp.b = 0x01B8000B;
        sp.c = 3.0f;
        func_801C2F0C(4, &sp.a);
        func_800208C4(0x7C);
        func_800058DC(arg0, func_8024236C);
    }
}


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



typedef struct func_802423E0_Struct {
    s16 unk0;
    s16 pad;
    s32 unk4;
    f32 unk8;
} func_802423E0_Struct;

void func_802423E0(s32 arg0, s32 arg1) {
    s32 pad[5];
    func_802423E0_Struct sp;

    if (func_801C3044() == 0) {
        sp.unk0 = 0x1100;
        sp.unk4 = 0x04100026;
        sp.unk8 = 5.0f;
        func_801C2F0C(4, &sp.unk0);
        func_80133980(0x73);
        func_800058DC((void *) arg0, (void *) func_8024244C);
    }
}



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


typedef struct func_80242638_StructInner {
    u8 pad[0x12];
    s16 unk12;
} func_80242638_StructInner;

typedef struct func_80242638_StructNode {
    u8 pad[0x2C];
    func_80242638_StructInner *unk2C;
} func_80242638_StructNode;

typedef struct func_80242638_StructGlobal {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[0xE0 - 6];
    func_80242638_StructNode *unkE0;
    u8 pad2[0x434 - 0xE4];
    u8 unk434;
} func_80242638_StructGlobal;

typedef struct func_80242638_StructArg {
    u8 pad[0x3C];
    u16 unk3C;
} func_80242638_StructArg;

extern func_80242638_StructNode *D_801BBCD0;

void func_80242638(func_80242638_StructArg *arg0, s32 arg1) {
    s32 count;

    count = arg0->unk3C++;
    ((func_80242638_StructGlobal *)&D_801BBBF0)->unkE0->unk2C->unk12 =
        func_801FD284(D_801BBCD0->unk2C->unk12, 0x1C00, 0.1f);
    if (count == 0x28) {
        ((func_80242638_StructGlobal *)&D_801BBBF0)->unk434 = 4;
        func_80020718(8);
    }
    if (count == 0x46) {
        ((func_80242638_StructGlobal *)&D_801BBBF0)->unk4 = 0x16;
        func_8012FE50(0x1E,
            ((func_80242638_StructGlobal *)&D_801BBBF0)->unk4,
            6, 1, 0);
    }
}


void func_802426EC(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}



void func_802426F8(s32 arg0, s32 arg1) {
    func_8013B570(arg0, 0x30, 0, 4, func_80242730);
}

struct func_80243290_StructTriple {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};

typedef struct func_80242730_StructInner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    u16 unk12;
} func_80242730_StructInner;

typedef struct func_80242730_StructOuter {
    u8 pad0[0x2C];
    func_80242730_StructInner *unk2C;
} func_80242730_StructOuter;

typedef struct func_80242730_StructArg {
    u8 pad0[0x90];
    s16 unk90;
} func_80242730_StructArg;

extern struct func_80243290_StructTriple D_802520BC;

void func_80242730(func_80242730_StructArg *arg0, void **arg1) {
    ((func_80242730_StructOuter *) *arg1)->unk2C->unk4 = -59.5f;
    ((func_80242730_StructOuter *) *arg1)->unk2C->unk8 = 0.0f;
    ((func_80242730_StructOuter *) *arg1)->unk2C->unkC = D_802585E8;
    ((func_80242730_StructOuter *) *arg1)->unk2C->unk12 = 0x1B1C;
    func_8013A1B4(arg1, D_802520BC, 0xFFFFFF);
    arg0->unk90 = 0;
    func_800058DC(arg0, func_802427E8);
}


extern struct func_80243290_StructTriple D_802520C8;

void func_802427E8(void *arg0, s32 volatile arg1, s32 arg2) {
    s32 unk5C;

    unk5C = *(s32 *) ((u8 *) arg0 + 0x5C);
    func_80010550(arg1, unk5C, arg2);
    if (func_80133A24(0x73) != 0) {
        func_801339D0(0x73);
        func_8013A1B4((void **) arg1, D_802520C8, 0xFFFFFF);
        func_800058DC(arg0, (void *) func_80242874);
    }
}


typedef struct func_80242874_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
} func_80242874_Struct;


void func_80242874(func_80242874_Struct *arg0, s32 arg1) {
    s32 temp;

    temp = arg0->unk5C;
    if (func_80010550(arg1, temp, arg1) != 0) {
        func_800179B0(D_80252134);
        func_800058DC(arg0, func_802428C0);
    }
}


typedef struct func_802428C0_Struct {
    u8 pad0[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
} func_802428C0_Struct;
typedef struct func_802428C0_Arg {
    u8 pad0[0x90];
    u16 unk90;
} func_802428C0_Arg;
extern f32 D_802585EC, D_802585F0, D_802585F4, D_802585F8, D_802585FC;
struct func_802429D8_StructArg;
void func_802429D8(struct func_802429D8_StructArg *arg0, s32 arg1);

void func_802428C0(func_802428C0_Arg *arg0, s32 arg1) {
    func_802428C0_Struct *s;
    if (func_800178E8() != 0) {
        s = (func_802428C0_Struct *)&D_801BBBF0;
        s->unk1E8 = D_802585EC;
        s->unk1EC = D_802585F0;
        s->unk1F0 = D_802585F4;
        s->unk1F4 = D_802585F8;
        s->unk1F8 = 16.5f;
        s->unk1FC = D_802585FC;
        func_8011AAF4(D_80258450, 0x376, arg0, 0, 1, 0.0f, s->unk1E8, s->unk1EC, s->unk1F0, 0.0f, s->unk1F4, s->unk1F8, s->unk1FC, 0.0f, 35.0f, -1, -1);
        func_800179B0(D_80252164);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_802429D8);
    }
}


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



typedef struct func_80242B14_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
} func_80242B14_Struct;

typedef struct func_80242B14_StructG {
    u8 pad0[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
} func_80242B14_StructG;

void func_80242B14(func_80242B14_Struct *arg0, s32 arg1) {
    func_80242B14_StructG *g;
    s32 t = arg0->unk5C;

    if (func_80010550(arg1, t, arg1) != 0) {
        if (func_800178E8() != 0) {
            g = (func_80242B14_StructG *)&D_801BBBF0;
            g->unk1E8 = D_80258604;
            g->unk1EC = D_80258608;
            g->unk1F0 = D_8025860C;
            g->unk1F4 = -61.5f;
            g->unk1F8 = 16.5f;
            g->unk1FC = D_80258610;
            func_8011AAF4(D_80258490, 0x3AD, arg0, 0, 1, 0.0f, g->unk1E8, g->unk1EC, g->unk1F0, 0.0f, g->unk1F4, g->unk1F8, g->unk1FC, 0.0f, 35.0f, -1, -1);
            func_800179B0(D_80252244);
            func_800058DC(arg0, func_80242C3C);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80242C3C.s")


typedef struct func_80242D48_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_80242D48_Struct;

extern struct func_80243290_StructTriple D_802520E0;

void func_80242D48(func_80242D48_Struct *arg0, s32 arg1) {
    if (arg0->unk90++ >= 0x1E) {
        func_8013A1B4((void **) arg1, D_802520E0, 0xFFFFFF);
        arg0->unk90 = 0;
        func_800058DC(arg0, &func_80242DCC);
    }
}

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



void func_80242FE8(u64 arg0) {
    if (func_800178E8(arg0) != 0) {
        func_800058DC(*(s32 *)&arg0, &func_80243020);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80243020.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_802430D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_8024315C.s")



void func_80243200(void *arg0, void *arg1) {
    s32 temp;

    temp = *(s32 *)((u8 *)arg0 + 0x5C);
    if (func_80010550((s32)arg1, temp, (s32)arg1) != 0) {
        func_80133980(0x73);
        func_800058DC(arg0, func_8024324C);
    }
}


void func_8024324C(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}



void func_80243258(s32 arg0, s32 arg1) {
    func_8013B570(arg0, 0x57, 0, 4, func_80243290);
}


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


extern struct func_80243290_StructTriple D_8025211C;

void func_80243290(struct func_80243290_StructArg *arg0, void **arg1) {
    ((struct func_80243290_StructOuter *) *arg1)->unk2C->unk4 = D_80258638;
    ((struct func_80243290_StructOuter *) *arg1)->unk2C->unk8 = 0.0f;
    ((struct func_80243290_StructOuter *) *arg1)->unk2C->unkC = D_8025863C;
    ((struct func_80243290_StructOuter *) *arg1)->unk2C->unk12 = 0x1C00;
    func_8013A1B4(arg1, D_8025211C, 0xFFFFFF);
    arg0->unk90 = 0;
    func_800058DC(arg0, func_80243348);
}


extern struct func_80243290_StructTriple D_80252128;

void func_80243348(void *arg0, s32 volatile arg1, s32 arg2) {
    s32 unk5C;

    unk5C = *(s32 *) ((u8 *) arg0 + 0x5C);
    func_80010550(arg1, unk5C, arg2);
    if (func_80133A24(0x77) != 0) {
        func_801339D0(0x77);
        func_8013A1B4((void **) arg1, D_80252128, 0xFFFFFF);
        func_800058DC(arg0, (void *) func_802433D4);
    }
}


struct func_802433D4_Struct {
    u8 pad[0x5C];
    s32 unk5C;
};


void func_802433D4(struct func_802433D4_Struct *arg0, s32 arg1) {
    s32 temp = arg0->unk5C;

    if (func_80010550(arg1, temp, arg1) != 0) {
        func_800058DC(arg0, &func_80243414);
    }
}


void func_80243414(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


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

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80243678.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_80243D84.s")


void func_80243F64(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}



void func_80243F70(s32 arg0, s32 arg1) {
    func_8013B570(arg0, 0x30, 0, 4, func_80243FA8);
}


extern struct func_80243290_StructTriple D_80252400;

void func_80243FA8(void *arg0, void **arg1) {
    ((struct func_80243290_StructOuter *)*arg1)->unk2C->unk4 = -56.5f;
    ((struct func_80243290_StructOuter *)*arg1)->unk2C->unk8 = 0.0f;
    ((struct func_80243290_StructOuter *)*arg1)->unk2C->unkC = 274.0f;
    ((struct func_80243290_StructOuter *)*arg1)->unk2C->unk12 = 0x1C00;
    func_8013A1B4(arg1, D_80252400, 0xFFFFFF);
    ((struct func_80243290_StructArg *)arg0)->unk90 = 0;
    func_800058DC(arg0, (void *)func_80244060);
}

extern struct func_80243290_StructTriple D_80252418;


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



void func_802440EC(void *arg0, void *arg1) {
    s32 temp;

    temp = *(s32 *)((u8 *)arg0 + 0x5C);
    if (func_80010550((s32)arg1, temp, (s32)arg1) != 0) {
        func_80133980(0x73);
        func_800058DC(arg0, func_80244138);
    }
}



void func_80244138(s32 arg0, s32 arg1) {
    if (func_800178E8() != 0) {
        func_8013A1B4((void **)arg1, D_80252400, 0xFFFFFF);
        func_800058DC((void *)arg0, (void *)func_802441A8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_802441A8.s")


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

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_802442A0.s")


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


typedef struct func_8024436C_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x30];
    u16 unk90;
} func_8024436C_Struct;

extern func_80242F38_StructGlobal D_8025243C;

void func_8024436C(func_8024436C_Struct *arg0, void **arg1) {
    s32 sp2C[1];

    sp2C[0] = arg0->unk5C;
    if ((arg0->unk90++ >= 0x14) && func_80011140(arg1, sp2C[0], D_8025243C, 0x14)) {
        func_8013A1B4(arg1, D_8025243C, 0xFFFFFF);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024443C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/802408F0/func_8024443C.s")


void func_8024458C(struct func_802433D4_Struct *arg0, s32 arg1);

typedef struct func_802444F8_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_802444F8_Struct;


void func_802444F8(func_802444F8_Struct *arg0, s32 arg1, s32 arg2) {
    s32 val = arg0->unk5C;

    if ((func_80010550(arg1, val, arg2) != 0) && (func_800178E8() != 0)) {
        func_8013A1B4((void **)arg1, D_80252418, 0xFFFFFF);
        func_800179B0(D_80252844);
        func_800058DC(arg0, (void *)func_8024458C);
    }
}



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


void func_80244610(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}



void func_8024461C(s32 arg0, s32 arg1) {
    func_8013B570(arg0, 0x57, 0, 4, func_80244654);
}


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
    ((func_80244654_StructOuter *) *arg1)->unk2C->unk4 = D_80258754;
    ((func_80244654_StructOuter *) *arg1)->unk2C->unk8 = 0.0f;
    ((func_80244654_StructOuter *) *arg1)->unk2C->unkC = D_80258758;
    ((func_80244654_StructOuter *) *arg1)->unk2C->unk12 = 0x1C00;
    func_8013A1B4(arg1, D_80252448, 0xFFFFFF);
    arg0->unk90 = 0;
    func_800058DC(arg0, func_8024470C);
}


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

