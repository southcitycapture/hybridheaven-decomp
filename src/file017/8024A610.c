#include "common.h"

extern u8 D_801BBBF0[];

typedef struct { u8 pad0[4]; s32 b; u8 pad1[8]; } func_8024A610_V;

typedef struct func_8024A610_Inner {
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
} func_8024A610_Inner;

typedef struct func_8024A610_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_8024A610_Inner *unk30;
} func_8024A610_Node;

typedef struct func_8024A610_Args {
    func_8024A610_Node *unk0;
    func_8024A610_Node *unk4;
    func_8024A610_Node *unk8;
    func_8024A610_Node *unkC;
    func_8024A610_Node *unk10;
    func_8024A610_Node *unk14;
    func_8024A610_Node *unk18;
} func_8024A610_Args;

typedef struct func_8024A610_Ctx {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x44];
    s32 unk74;
    u8 pad78[0x18];
    u16 unk90;
    u16 unk92;
    s16 unk94;
    u16 unk96;
} func_8024A610_Ctx;

extern void func_800058DC(s32, void (*)());
extern void func_8012C89C(void *, s32, s32, u16);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8001F74C(void *);
extern void func_8012CF8C(void *, void *, s32, s32);
extern s32 func_8012C97C(s32, s32);
extern void func_8024ABC0();
extern func_8024A610_V D_80164F40;
extern u8 D_8017AF38[];
extern u8 D_8017AF90[];
extern u8 D_80258DE8[];
extern u8 D_80258E88[];
extern u8 D_80258F30[];
extern u8 D_80258F80[];

void func_8024A610(func_8024A610_Ctx *arg0, func_8024A610_Args *arg1) {
    s32 sp30[4];

    *(func_8024A610_V *) sp30 = D_80164F40;
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
    sp30[1] = 0x80000900;
    func_80005E44(arg0, sp30);
    sp30[1] = 0x80000300;
    func_80005E44(arg0, sp30);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x302, 6);
    arg1->unk0->unk30->unk24 = arg1->unk0->unk30->unk24 | 0x500;
    arg1->unk0->unk30->unk30 = (s32) D_80258DE8 | 0x40000000;
    arg1->unk0->unk30->unk4B = 0xFF;
    arg1->unk0->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk0->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk0->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk0->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 1, 0x302, 0xE);
    arg1->unk4->unk30->unk24 = arg1->unk4->unk30->unk24 | 0x400;
    arg1->unk4->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unk4->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk4->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk4->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk4->unk30->unk4F = D_801BBBF0[0xF35];
    arg1->unk4->unk22 = 0;
    func_8012C89C(arg0, 2, 0x302, 0x2A);
    arg1->unk8->unk30->unk24 = arg1->unk8->unk30->unk24 | 0x400;
    arg1->unk8->unk30->unk30 = (s32) D_8017AF38 | 0x40000000;
    arg1->unk8->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unk8->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unk8->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unk8->unk30->unk4F = D_801BBBF0[0xF35];
    arg1->unk8->unk22 = 0;
    func_8012C89C(arg0, 3, 0x302, 0x16);
    arg1->unkC->unk30->unk24 = arg1->unkC->unk30->unk24 | 0x400;
    arg1->unkC->unk30->unk30 = (s32) D_8017AF90 | 0x40000000;
    arg1->unkC->unk30->unk4C = D_801BBBF0[0xF32];
    arg1->unkC->unk30->unk4D = D_801BBBF0[0xF33];
    arg1->unkC->unk30->unk4E = D_801BBBF0[0xF34];
    arg1->unkC->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 4, 0x302, 0x1E);
    func_8012CF8C(arg0, (u8 *) arg1->unk10->unk30 + 0x40, 0x302, 0x26);
    arg1->unk10->unk30->unk24 = arg1->unk10->unk30->unk24 | 0x4100;
    arg1->unk10->unk30->unk30 = (s32) D_80258E88 | 0x40000000;
    arg1->unk10->unk30->unk4 = -152.0f;
    arg1->unk10->unk30->unk8 = 0.0f;
    arg1->unk10->unk30->unkC = 148.0f;
    arg1->unk10->unk30->unk48 = 0;
    arg1->unk10->unk30->unk49 = 0xB4;
    arg1->unk10->unk30->unk4A = 0xFF;
    arg1->unk10->unk30->unk4B = 0x80;
    arg1->unk10->unk30->unk4C = 0;
    arg1->unk10->unk30->unk4D = 0;
    arg1->unk10->unk30->unk4E = 0xFF;
    arg1->unk10->unk30->unk4F = 0xFF;
    arg1->unk10->unk22 = 0;
    func_8012C89C(arg0, 5, 0x302, 0x2D);
    arg1->unk14->unk30->unk24 = arg1->unk14->unk30->unk24 | 0x100;
    arg1->unk14->unk30->unk30 = (s32) D_80258F30 | 0x40000000;
    arg1->unk14->unk30->unk48 = 0;
    arg1->unk14->unk30->unk49 = 0;
    arg1->unk14->unk30->unk4A = 0;
    arg1->unk14->unk30->unk4B = 0xFF;
    arg1->unk14->unk30->unk12 = 0x1000;
    arg1->unk14->unk22 = 1;
    func_8012C89C(arg0, 6, 3, 1);
    arg1->unk18->unk30->unk24 = arg1->unk18->unk30->unk24 | 0x60100;
    arg1->unk18->unk30->unk30 = (s32) D_80258F80 | 0x40000000;
    arg1->unk18->unk30->unk18 = 10.0f;
    arg1->unk18->unk30->unk1C = 10.0f;
    arg1->unk18->unk30->unk20 = 10.0f;
    arg1->unk18->unk30->unk48 = 0xFF;
    arg1->unk18->unk30->unk49 = 0xFF;
    arg1->unk18->unk30->unk4A = 0xFF;
    arg1->unk18->unk30->unk4B = 0;
    arg1->unk18->unk22 = 0;
    arg0->unk90 = 0;
    arg0->unk92 = 0;
    arg0->unk96 = 0;
    arg0->unk94 = 1;
    arg0->unk2C = 0x800;
    arg0->unk74 = func_8012C97C(0x302, 7);
    func_8001F74C(arg0);
    func_800058DC((s32) arg0, (void *) func_8024ABC0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024ABC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024ACD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024AF30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024B0E0.s")


typedef struct func_8024B2A4_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_8024B2A4_Struct;

extern void func_8024CCC4();
extern void func_80020718(s32);
extern void func_801C4058(void *, u32, f32, s32);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);
extern void func_8024B368();

void func_8024B2A4(void *arg0)
{
  func_8024B2A4_Struct *s = (func_8024B2A4_Struct *) arg0;
  u16 temp_s1 = s->unk3C;
  s->unk3C = temp_s1 + 1;
  func_8024CCC4();
  if ((!s->unk3C) && (!s->unk3C))
  {
  }
  if (((s32) temp_s1) >= 0x3C)
  {
    if (temp_s1 != 0x3C)
    {
    }
    else
    {
      func_80020718(0x184);
    }
    func_801C4058(arg0, 0x3F19999A, 0.0f, 0x16);
    if ((((s32) temp_s1) % 10) == 0)
    {
      func_80380F94(-128.0f, 0.0f, 150.0f, 0.0f, 0.0f, 0.0f, 0xA);
    }
  }
  if (((s32) temp_s1) >= 0x5A)
  {
    s->unk3C = 0;
    func_800058DC((s32) arg0, func_8024B368);
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024B368.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024B444.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024B524.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024B7A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024B96C.s")


extern void func_80126968();
extern void func_801268CC(s32);
extern void func_80020744(s32);
extern s16 D_801BBF90[];
extern void func_8024BB68(s32 arg0);

void func_8024BB18(s32 arg0, s32 arg1) {
    func_80126968();
    D_801BBF90[2] = 0x133;
    func_801268CC(0);
    func_80020744(0xA);
    func_800058DC(arg0, func_8024BB68);
}


extern void func_8024CEA0();
extern s32 func_80133A24(s32);
extern s32 func_80126944(void);
extern void func_801C3B2C(s32);
extern void func_801C3B10(s32);
extern void func_801FBB30(void);
extern void func_8024BBD4();

void func_8024BB68(s32 arg0) {
    func_8024CEA0();
    if (func_80133A24(0x133) != 0) {
        if (func_80126944() != 1) {
            func_801C3B2C(2);
            func_801C3B10(1);
            func_801FBB30();
            func_800058DC(arg0, func_8024BBD4);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024BBD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024BD1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024BF7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024C3BC.s")


struct func_8024C560_StructInner {
    u8 pad[0x22];
    u8 unk22;
};

struct func_8024C560_Struct {
    s32 pad0;
    struct func_8024C560_StructInner *unk4;
};

extern void func_8024C5A8(s32 arg0, s32 arg1);

void func_8024C560(s32 arg0, struct func_8024C560_Struct *arg1) {
    if (func_80133A24(0x138) != 0) {
        arg1->unk4->unk22 = 0;
        func_800058DC(arg0, func_8024C5A8);
    }
}


void func_8024C5A8(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024C5B4.s")


extern s32 func_8012C6B4(s32, void *);
extern void func_80005700(void *);

struct func_8024C794_Arg {
    u8 pad[0x3C];
    u16 unk3C;
};

struct func_8024C794_Inner {
    u8 pad[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};

struct func_8024C794_Obj {
    u8 pad[0x30];
    struct func_8024C794_Inner *unk30;
};

void func_8024C794(struct func_8024C794_Arg *arg0, struct func_8024C794_Obj **arg1) {
    (*arg1)->unk30->unk48 = D_801BBBF0[0x204];
    (*arg1)->unk30->unk49 = D_801BBBF0[0x205];
    (*arg1)->unk30->unk4A = D_801BBBF0[0x206];
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];

    if (arg0->unk3C == 0) {
        goto case0;
    }
    if (arg0->unk3C == 1) {
        goto case1;
    }
    if (arg0->unk3C != 2) {
        goto end;
    }
    goto case2;

case0:
    (*arg1)->unk30->unk4B = (*arg1)->unk30->unk4B + 2;
    if ((*arg1)->unk30->unk4B >= 0x9F) {
        (*arg1)->unk30->unk4B = 0xC8;
        arg0->unk3C = 1;
    }
    goto end;

case1:
    (*arg1)->unk30->unk4B = func_8012C6B4(0x1E, arg1) + 0xAA;
    if (func_80133A24(0x132) != 0) {
        arg0->unk3C = 2;
    }
    goto end;

case2:
    (*arg1)->unk30->unk4B = (*arg1)->unk30->unk4B - 4;
    if ((*arg1)->unk30->unk4B < 4) {
        func_80005700(arg0);
    }

end:
    return;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024C8F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024CA74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024CCC4.s")


struct func_8024CEA0_StructSub {
    u8 pad0[0x12];
    s16 unk12;
    u8 pad1[0x4B - 0x14];
    u8 unk4B;
};

struct func_8024CEA0_StructMid {
    u8 pad0[0x30];
    struct func_8024CEA0_StructSub *unk30;
};

struct func_8024CEA0_StructArg1 {
    u8 pad0[0x10];
    struct func_8024CEA0_StructMid *unk10;
};

struct func_8024CEA0_StructArg0 {
    u8 pad0[0x90];
    u16 unk90;
    u16 unk92;
    s16 unk94;
};

void func_8024CEA0(struct func_8024CEA0_StructArg0 *arg0, struct func_8024CEA0_StructArg1 *arg1) {
    struct func_8024CEA0_StructSub *temp_v0;
    u8 temp_v1;

    temp_v0 = arg1->unk10->unk30;
    temp_v0->unk12 = (s16) (temp_v0->unk12 - 0x36) & 0x1FFF;
    temp_v0 = arg1->unk10->unk30;
    temp_v0->unk4B = (u8) (temp_v0->unk4B + arg0->unk94);
    temp_v1 = arg1->unk10->unk30->unk4B;
    if (((s32) temp_v1 >= 0x9A) || ((s32) temp_v1 < 0x25)) {
        arg0->unk94 = (s16) -arg0->unk94;
    }
    arg0->unk90 = (u16) (arg0->unk90 + 1);
    arg0->unk92 = (u16) (arg0->unk92 - 1);
}


struct func_8024CF18_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};

struct func_8024CF18_Obj {
    u8 pad[0x90];
    u8 unk90;
    u8 pad2[3];
    s32 unk94;
};

extern struct func_8024CF18_Obj *func_8012C4D0(s32, struct func_8024CF18_Struct, s32);
extern s32 D_801BBC2C;
extern struct func_8024CF18_Struct D_80258DB8;

void func_8024CF18(s32 arg0, u8 arg1) {
    struct func_8024CF18_Obj *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_80258DB8, 3);
    if (temp_v0 != NULL) {
        temp_v0->unk90 = arg1;
        temp_v0->unk94 = arg0;
    }
}


struct func_8024CF9C_Obj {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
};

extern struct func_8024CF18_Struct D_80258DA4;

void func_8024CF9C(f32 arg0, f32 arg1, f32 arg2) {
    struct func_8024CF9C_Obj *temp_v0;

    temp_v0 = (struct func_8024CF9C_Obj *) func_8012C4D0(D_801BBC2C, D_80258DA4, 3);
    if (temp_v0 != NULL) {
        temp_v0->unk90 = arg0;
        temp_v0->unk94 = arg1;
        temp_v0->unk98 = arg2;
    }
}

