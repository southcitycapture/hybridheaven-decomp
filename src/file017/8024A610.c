#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024A610.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024ABC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024ACD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024AF30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024B0E0.s")

extern void func_800058DC(s32, void (*)());

typedef struct func_8024B2A4_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_8024B2A4_Struct;

extern void func_8024CCC4(void);
extern void func_80020718(s32);
extern void func_801C4058(void *, u32, f32, s32);
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);
extern void func_8024B368(void);

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
extern u8 D_801BBBF0[];

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

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024CF9C.s")

