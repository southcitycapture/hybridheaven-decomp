#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_802408F0.s")


struct func_80240AA8_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};

extern s32 func_80133A24(u16);
extern s32 func_80126944(void);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_800058DC(void *, void *);
extern void func_80240B10(void);

void func_80240AA8(struct func_80240AA8_Struct *arg0, void *arg1) {
    if (func_80133A24(*(u16 *)((u8 *)arg0 + 0xA2)) != 0) {
        if (func_80126944() != 1) {
            arg0->unk3C = 0;
            func_801C3B2C(2);
            func_801C3B10(1);
            func_800058DC(arg0, func_80240B10);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80240B10.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80240C00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80240C58.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80240DEC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80240F50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_8024102C.s")


struct func_80241094_StructB {
    u8 pad[0x12];
    s16 unk12;
};

struct func_80241094_StructA {
    u8 pad[0x2C];
    struct func_80241094_StructB *unk2C;
};

struct func_80241094_StructC {
    u8 pad[0x9C];
    u16 unk9C;
};

struct func_80241094_StructD {
    s16 unk0;
    s32 unk4;
    f32 unk8;
};

extern struct func_80241094_StructA *D_801BBCD0;
extern s16 func_801FD284(s16, s16, s32);
extern s32 func_801C3044(void);
extern void func_801C2F0C(s32, void *);
extern void func_80241144(void);

void func_80241094(struct func_80241094_StructC *arg0, void *arg1) {
    u8 pad[0x14];
    struct func_80241094_StructD sp18;

    D_801BBCD0->unk2C->unk12 = func_801FD284(D_801BBCD0->unk2C->unk12, (s16) ((s16) (arg0->unk9C + 0x1000) & 0x1FFF), 0x3DCCCCCD);
    if (func_801C3044() == 0) {
        sp18.unk0 = 0x1000;
        sp18.unk4 = 0x0168002D;
        sp18.unk8 = 3.0f;
        func_801C2F0C(4, &sp18);
        func_800058DC(arg0, &func_80241144);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80241144.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_802411EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_802411F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80241358.s")


typedef struct func_802414B0_Struct {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    s16 unk9C;
} func_802414B0_Struct;

typedef struct func_802414B0_StructLocal {
    f32 pos[3];
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    s16 e;
} func_802414B0_StructLocal;

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_801C2FF8(void);
extern void func_80241574(void);

void func_802414B0(void *arg0, void *arg1) {
    register func_802414B0_Struct *obj;
    func_802414B0_StructLocal loc;

    obj = arg0;
    if (func_801C2FF8() != 0) {
        loc.pos[0] = (func_8001EAD0(obj->unk9C) * 8.0f) + obj->unk90;
        loc.pos[1] = (func_8001EB64(obj->unk9C) * 8.0f) + obj->unk98;
        loc.a = 0x1100;
        loc.b = 0x0168003E;
        loc.d = 0;
        loc.e = 0x5A;
        loc.pos[2] = 0.0f;
        loc.c = 1.5f;
        func_801C2F0C(2, loc.pos);
        func_800058DC(obj, &func_80241574);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80241574.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_802415DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_8024168C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80241784.s")


struct func_80241790_Struct {
    u8 pad[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    u16 unk9C;
    u16 unk9E;
    u16 unkA0;
    u16 unkA2;
    u16 unkA4;
};

struct func_80241790_Vals {
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    s32 v4;
};

void *func_8012C4D0(s32, struct func_80241790_Vals, s32);
extern s32 D_801BBC2C;
extern struct func_80241790_Vals D_80258590;

void *func_80241790(f32 arg0, f32 arg1, f32 arg2, u16 arg3, u16 arg4, u16 arg5, u16 arg6, u16 arg7) {
    struct func_80241790_Struct *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_80258590, 2);
    if (temp_v0 != NULL) {
        temp_v0->unk90 = arg0;
        temp_v0->unk94 = arg1;
        temp_v0->unk98 = arg2;
        temp_v0->unk9C = arg3;
        temp_v0->unk9E = arg4;
        temp_v0->unkA0 = arg5;
        temp_v0->unkA2 = arg6;
        temp_v0->unkA4 = arg7;
        return temp_v0;
    }
    return NULL;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80241854.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80241910.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80241A60.s")


extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern s32 func_8012C97C(s32, s32);
extern u8 D_80164F40[];
extern void func_80241C28(void);

void func_80241BC4(void *arg0, void *arg1) {
    func_80005E44(arg0, D_80164F40);
    func_80006214(arg0);
    *(s32 *)((u8 *)arg0 + 0x2C) = 0xC00;
    *(s32 *)((u8 *)arg0 + 0x74) = func_8012C97C(0x2FA, 8);
    func_800058DC(arg0, func_80241C28);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80241C28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80241C34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_8024245C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_802425DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_8024278C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_802428B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80242A5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80242C3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80242D80.s")


struct func_80242EEC_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

extern void func_80020718(s32);
extern void func_80243CC0(void *, s32);
extern void func_80242F50(void);

void func_80242EEC(struct func_80242EEC_Struct *arg0, s32 arg1)
{
  s32 temp_v0;
  s32 temp_v1;
  struct func_80242EEC_Struct *temp_a2;
  temp_a2 = arg0;
  temp_v0 = arg0->unk3C;
  arg0->unk3C = temp_v0 + 1;
  temp_v1 = (temp_v0 < 0x1E) ^ 1;
  if (temp_v1 != (temp_v1 * 0))
  {
    func_80020718(0x197);
    func_800058DC(temp_a2, func_80242F50);
  }
  func_80243CC0(temp_a2, arg1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80242F50.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80242FD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80243290.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80243588.s")

extern struct func_802441AC_Struct D_801BBBF0;

extern void func_8012C89C(void *, s32, s32, s32);
extern void func_80243828(void);
extern u8 D_8017AD28[];

struct func_802436EC_Struct2 {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x14];
    s32 unk24;
    u8 pad2[0x8];
    s32 unk30;
    u8 pad3[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};

struct func_802436EC_Struct1 {
    u8 pad0[0x30];
    struct func_802436EC_Struct2 *unk30;
};

struct func_802436EC_Struct3 {
    u8 pad0[0x90];
    f32 unk90;
    f32 unk94;
    f32 unk98;
};

struct func_802436EC_Struct0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

void func_802436EC(struct func_802436EC_Struct3 *arg0, struct func_802436EC_Struct1 **arg1) {
    struct func_802436EC_Struct0 sp20;

    sp20 = *(struct func_802436EC_Struct0 *) D_80164F40;
    sp20.unk4 = 0x80000900;
    func_80005E44(arg0, &sp20);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x2FA, 7);
    (*arg1)->unk30->unk24 = (*arg1)->unk30->unk24 | 0x400;
    (*arg1)->unk30->unk30 = (s32) D_8017AD28 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk90;
    (*arg1)->unk30->unk8 = arg0->unk94;
    (*arg1)->unk30->unkC = arg0->unk98;
    (*arg1)->unk30->unk4C = *(u8 *) ((u8 *) &D_801BBBF0 + 0xF32);
    (*arg1)->unk30->unk4D = *(u8 *) ((u8 *) &D_801BBBF0 + 0xF33);
    (*arg1)->unk30->unk4E = *(u8 *) ((u8 *) &D_801BBBF0 + 0xF34);
    (*arg1)->unk30->unk4F = *(u8 *) ((u8 *) &D_801BBBF0 + 0xF35);
    func_800058DC(arg0, (void *) func_80243828);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80243828.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80243988.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80243C30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80243CC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/802408F0/func_80243E48.s")


struct func_802441AC_Struct {
    u8 pad0[0x29C];
    f32 unk29C;
    f32 unk2A0;
    u8 pad1[0xC7C];
    u8 unkF20;
    u8 unkF21;
    u8 unkF22;
    u8 unkF23;
    u8 unkF24;
    u8 unkF25;
    s8 unkF26;
    s8 unkF27;
    s8 unkF28;
    u8 unkF29;
    u8 unkF2A;
    u8 unkF2B;
    u8 unkF2C;
    u8 unkF2D;
    s8 unkF2E;
    u8 pad2[3];
    u8 unkF32;
    u8 unkF33;
    u8 unkF34;
    u8 unkF35;
};

extern f32 D_8025C79C;

void func_802441AC(void) {
    D_801BBBF0.unk29C = 5.0f;
    D_801BBBF0.unkF23 = 0xFF;
    D_801BBBF0.unkF20 = 0;
    D_801BBBF0.unkF21 = 0;
    D_801BBBF0.unkF22 = 0;
    D_801BBBF0.unkF24 = 0xB4;
    D_801BBBF0.unkF25 = 0xDC;
    D_801BBBF0.unkF26 = 0x14;
    D_801BBBF0.unkF27 = 0x1E;
    D_801BBBF0.unkF28 = -0x1E;
    D_801BBBF0.unkF29 = 0x14;
    D_801BBBF0.unkF2A = 0xFA;
    D_801BBBF0.unkF2B = 0x14;
    D_801BBBF0.unkF2C = 0x6E;
    D_801BBBF0.unkF2D = 0x50;
    D_801BBBF0.unkF2E = -0x46;
    D_801BBBF0.unkF32 = 0;
    D_801BBBF0.unkF33 = 0;
    D_801BBBF0.unkF34 = 0;
    D_801BBBF0.unkF35 = 0xB9;
    D_801BBBF0.unk2A0 = D_8025C79C;
}

