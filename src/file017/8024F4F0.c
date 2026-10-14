#include "common.h"

extern s16 D_801BBF90[];
extern s32 func_80126944(void);
extern s32 func_8012C97C(s32, s32);
extern s32 func_80133A24(s32);
extern u16 D_80259488[];
extern u8 D_8017AF38[];
extern u8 D_8017AF90[];
extern u8 D_801BBBF0[];
extern u8 D_80259290[];
extern u8 D_80259330[];
extern u8 D_802593D8[];
extern u8 D_80259428[];
extern void func_800058DC(s32, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8001F74C(void *);
extern void func_80020744(s32);
extern void func_801268CC(s32);
extern void func_80126968();
extern void func_8012C89C(void *, s32, s32, u16);
extern void func_8012CF8C(void *, void *, s32, s32);
extern void func_801339D0();
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_801FBB30(void);
extern void func_8024FB5C();
extern void func_8024FC74();
extern void func_80250AE8(s32 arg0);
extern void func_80250B54();
extern void func_8025153C();
extern void func_80251750();


typedef struct { u8 pad0[4]; s32 b; u8 pad1[8]; } func_8024F4F0_V;

typedef struct func_8024F4F0_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad1[0x8];
    u32 unk30;
    u8 pad2[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_8024F4F0_Inner;

typedef struct func_8024F4F0_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_8024F4F0_Inner *unk30;
} func_8024F4F0_Node;

typedef struct func_8024F4F0_Args {
    func_8024F4F0_Node *unk0;
    func_8024F4F0_Node *unk4;
    func_8024F4F0_Node *unk8;
    func_8024F4F0_Node *unkC;
    func_8024F4F0_Node *unk10;
    func_8024F4F0_Node *unk14;
    func_8024F4F0_Node *unk18;
    func_8024F4F0_Node *unk1C;
} func_8024F4F0_Args;

typedef struct func_8024F4F0_Ctx {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x44];
    s32 unk74;
    u8 pad78[0x18];
    u16 unk90;
    u16 unk92;
} func_8024F4F0_Ctx;

extern func_8024F4F0_V D_80164F40;

void func_8024F4F0(func_8024F4F0_Ctx *arg0, func_8024F4F0_Args *arg1) {
    s32 sp30[4];

    *(func_8024F4F0_V *) sp30 = D_80164F40;
    sp30[1] = 0x80000900;
    func_80005E44(arg0, sp30);
    sp30[1] = 0x80000900;
    func_80005E44(arg0, sp30);
    sp30[1] = 0x80000900;
    func_80005E44(arg0, sp30);
    sp30[1] = 0x80000900;
    func_80005E44(arg0, sp30);
    sp30[1] = 0x80000600;
    func_80005E44(arg0, sp30);
    sp30[1] = 0x80000600;
    func_80005E44(arg0, sp30);
    sp30[1] = 0x80000900;
    func_80005E44(arg0, sp30);
    sp30[1] = 0x80000300;
    func_80005E44(arg0, sp30);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x302, 0xA);
    arg1->unk0->unk30->unk24 = arg1->unk0->unk30->unk24 | 0x500;
    arg1->unk0->unk30->unk30 = (s32) D_80259290 | 0x40000000;
    arg1->unk0->unk30->unk4B = 0xFF;
    arg1->unk0->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk0->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk0->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk0->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 1, 0x302, 0x10);
    arg1->unk4->unk30->unk24 = arg1->unk4->unk30->unk24 | 0x400;
    arg1->unk4->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unk4->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk4->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk4->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk4->unk30->unk4F = D_801BBBF0[0xF35];
    arg1->unk4->unk22 = 0;
    func_8012C89C(arg0, 2, 0x302, 0x2B);
    arg1->unk8->unk30->unk24 = arg1->unk8->unk30->unk24 | 0x400;
    arg1->unk8->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unk8->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk8->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk8->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk8->unk30->unk4F = D_801BBBF0[0xF35];
    arg1->unk8->unk22 = 0;
    func_8012C89C(arg0, 3, 0x302, 0x17);
    arg1->unkC->unk30->unk24 = arg1->unkC->unk30->unk24 | 0x400;
    arg1->unkC->unk30->unk30 = (s32) D_8017AF90 | 0x40000000;
    arg1->unkC->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unkC->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unkC->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unkC->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 4, 0x302, 0x13);
    func_8012CF8C(arg0, (u8 *) arg1->unk10->unk30 + 0x40, 0x2F8, 0x13);
    arg1->unk10->unk30->unk24 = arg1->unk10->unk30->unk24 | 0x4100;
    arg1->unk10->unk30->unk30 = (s32) D_80259330 | 0x40000000;
    arg1->unk10->unk30->unk48 = 0x14;
    arg1->unk10->unk30->unk49 = 0x14;
    arg1->unk10->unk30->unk4A = 0xFF;
    arg1->unk10->unk30->unk4B = 0x80;
    arg1->unk10->unk30->unk4C = 0;
    arg1->unk10->unk30->unk4D = 0;
    arg1->unk10->unk30->unk4E = 0xFF;
    arg1->unk10->unk30->unk4F = 0xFF;
    arg1->unk10->unk22 = 0;
    func_8012C89C(arg0, 5, 0x302, 0x19);
    func_8012CF8C(arg0, (u8 *) arg1->unk14->unk30 + 0x40, 0x2F8, 0x11);
    arg1->unk14->unk30->unk24 = arg1->unk14->unk30->unk24 | 0x4100;
    arg1->unk14->unk30->unk30 = (s32) D_80259330 | 0x40000000;
    arg1->unk14->unk30->unk48 = 0xFF;
    arg1->unk14->unk30->unk49 = 0x64;
    arg1->unk14->unk30->unk4A = 0xAA;
    arg1->unk14->unk30->unk4B = 0xCC;
    arg1->unk14->unk30->unk4C = 0;
    arg1->unk14->unk30->unk4D = 0;
    arg1->unk14->unk30->unk4E = 0xFF;
    arg1->unk14->unk30->unk4F = 0xFF;
    arg1->unk14->unk22 = 0;
    func_8012C89C(arg0, 6, 0x302, 0x2D);
    arg1->unk18->unk30->unk24 = arg1->unk18->unk30->unk24 | 0x100;
    arg1->unk18->unk30->unk30 = (s32) D_802593D8 | 0x40000000;
    arg1->unk18->unk30->unk4 = 0.0f;
    arg1->unk18->unk30->unk8 = 0.0f;
    arg1->unk18->unk30->unkC = 0.0f;
    arg1->unk18->unk30->unk48 = 0;
    arg1->unk18->unk30->unk48 = 0;
    arg1->unk18->unk30->unk4A = 0;
    arg1->unk18->unk30->unk4B = 0xFF;
    arg1->unk18->unk30->unk12 = 0;
    arg1->unk18->unk22 = 1;
    func_8012C89C(arg0, 7, 3, 1);
    arg1->unk1C->unk30->unk24 = arg1->unk1C->unk30->unk24 | 0x60100;
    arg1->unk1C->unk30->unk30 = (s32) D_80259428 | 0x40000000;
    arg1->unk1C->unk30->unk18 = 10.0f;
    arg1->unk1C->unk30->unk1C = 10.0f;
    arg1->unk1C->unk30->unk20 = 10.0f;
    arg1->unk1C->unk30->unk48 = 0xFF;
    arg1->unk1C->unk30->unk49 = 0xFF;
    arg1->unk1C->unk30->unk4A = 0xFF;
    arg1->unk1C->unk30->unk4B = 0;
    arg1->unk1C->unk22 = 0;
    arg0->unk90 = 0;
    arg0->unk92 = 0;
    arg0->unk2C = 0x800;
    arg0->unk74 = func_8012C97C(0x302, 0xB);
    func_8001F74C(arg0);
    func_800058DC((s32) arg0, (void *) func_8024FB5C);
}


typedef struct func_8024FB5C_Ctx {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0xC];
    u16 unk3C;
    u8 pad3E[0x36];
    s32 unk74;
    u8 pad78[0x20];
    u8 unk98;
} func_8024FB5C_Ctx;

typedef struct func_8024FB5C_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_8024FB5C_Inner;

typedef struct func_8024FB5C_Node {
    u8 pad0[0x30];
    func_8024FB5C_Inner *unk30;
} func_8024FB5C_Node;

typedef struct func_8024FB5C_Args {
    u8 pad0[0x1C];
    func_8024FB5C_Node *unk1C;
} func_8024FB5C_Args;


void func_8024FB5C(func_8024FB5C_Ctx *arg0, func_8024FB5C_Args *arg1) {
    if (func_80126944() == 0) {
        arg0->unk2C = arg0->unk2C | 0x800;
    } else {
        arg0->unk2C = arg0->unk2C & ~0x800;
    }
    if (func_80133A24(0x12F) != 0) {
        func_801339D0(0x12F);
        func_801FBB30();
        func_801C3B2C(2);
        func_801C3B10(1);
        arg1->unk1C->unk30->unk4 = 125.0f;
        arg1->unk1C->unk30->unk8 = 0.0f;
        arg1->unk1C->unk30->unkC = -142.0f;
        D_801BBBF0[0x204] = 0xFF;
        D_801BBBF0[0x205] = 0xFF;
        D_801BBBF0[0x206] = 0xFF;
        D_801BBBF0[0x207] = 0xFF;
        D_801BBBF0[0x208] = 0xFF;
        D_801BBBF0[0x209] = 0xC8;
        D_801BBBF0[0x20A] = 0;
        arg0->unk74 = 0;
        arg0->unk3C = 0;
        arg0->unk98 = 0;
        func_801339D0(0x131, arg1);
        func_801339D0(0x132);
        func_800058DC(arg0, &func_8024FC74);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_8024FC74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_8024FEC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_8025006C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_8025022C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_802502F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_802503CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_802504AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_80250730.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_802508F0.s")



void func_80250A98(s32 arg0, s32 arg1) {
    func_80126968();
    D_801BBF90[2] = 0x135;
    func_801268CC(0);
    func_80020744(0xA);
    func_800058DC(arg0, func_80250AE8);
}



void func_80250AE8(s32 arg0) {
    func_80251750();
    if (func_80133A24(0x135) != 0) {
        if (func_80126944() != 1) {
            func_801C3B2C(2);
            func_801C3B10(1);
            func_801FBB30();
            func_800058DC(arg0, func_80250B54);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_80250B54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_80250C9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_80250F04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_80251350.s")


struct func_802514F4_StructInner {
    u8 pad[0x22];
    u8 unk22;
};

struct func_802514F4_Struct {
    s32 pad0;
    struct func_802514F4_StructInner *unk4;
};


void func_802514F4(s32 arg0, struct func_802514F4_Struct *arg1) {
    if (func_80133A24(0x138) != 0) {
        arg1->unk4->unk22 = 0;
        func_800058DC(arg0, func_8025153C);
    }
}


typedef struct func_8025153C_StructInner {
    u8 pad[0x22];
    u8 unk22;
} func_8025153C_StructInner;

typedef struct func_8025153C_Struct {
    u8 pad[4];
    func_8025153C_StructInner *unk4;
} func_8025153C_Struct;


void func_8025153C(s32 arg0, func_8025153C_Struct *arg1) {
    if (func_80133A24(0x138) != 0) {
        arg1->unk4->unk22 = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024F4F0/func_80251574.s")


typedef struct func_80251750_StructA {
    u8 pad[0x90];
    u16 unk90;
    u16 unk92;
} func_80251750_StructA;

typedef struct func_80251750_StructB {
    u8 pad[0x22];
    u8 unk22;
} func_80251750_StructB;

typedef struct func_80251750_StructC {
    u8 pad[0x4C];
    u8 unk4C;
} func_80251750_StructC;

typedef struct func_80251750_StructD {
    u8 pad[0x30];
    func_80251750_StructC *unk30;
} func_80251750_StructD;

typedef struct func_80251750_StructE {
    u8 pad[0x10];
    func_80251750_StructD *unk10;
    func_80251750_StructB *unk14;
} func_80251750_StructE;


void func_80251750(func_80251750_StructA *arg0, func_80251750_StructE *arg1) {
    s32 temp_hi;
    func_80251750_StructC *temp_v0;

    func_8012C89C(arg0, 5, 0x302, D_80259488[(s32) ((s32) arg0->unk90 / 15) % 5]);
    temp_hi = (s32) arg0->unk90 % 15;
    if (temp_hi == 0) {
        arg1->unk14->unk22 = 1;
    } else if (temp_hi == 1) {
        arg1->unk14->unk22 = 0;
    }
    temp_v0 = arg1->unk10->unk30;
    temp_v0->unk4C = (u8) (temp_v0->unk4C + 2);
    arg0->unk90 = (u16) (arg0->unk90 + 1);
    arg0->unk92 = (u16) (arg0->unk92 - 1);
}

