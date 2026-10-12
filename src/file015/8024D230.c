#include "common.h"

extern void func_800058DC(void *, void *);
extern s32 func_80133A24(s32);
void func_8024D2A4(void *arg0, void *arg1);

/* Forward declarations needed because this function sits before func_8024D2A4 in the file. */
struct func_8024D2A4_Arg;

extern s32 func_80126CC0(void *, void *);
extern void func_80126EAC(void);
extern void func_8024D898();

void func_8024D230(struct func_8024D2A4_Arg *arg0, s32 arg1) {
    if (func_80126CC0(arg0, (void *)func_80126EAC) != 0) {
        if (func_80133A24(0x7E) != 0) {
            func_800058DC(arg0, (void *)func_8024D898);
            return;
        }
        *(s16 *)((u8 *)arg0 + 0x3C) = 0;
        func_800058DC(arg0, (void *)func_8024D2A4);
    }
}


struct func_8024D2A4_Sub {
    u8 pad[0x40];
    f32 unk40;
    u8 pad2[4];
    f32 unk48;
};

struct func_8024D2A4_Top {
    u8 pad[0xDC];
    struct func_8024D2A4_Sub *unkDC;
};

extern s32 func_80005670(void *, void *);
extern void func_800179B0(void *);
extern void func_80133980(s32);
extern void func_801339D0(s32);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern s32 func_801C3D20(f32, f32, f32);
extern void func_801FBB30(void);
extern void func_8024D384(s32 arg0, s32 arg1);
extern struct func_8024D2A4_Top D_801BBBF0;
extern u8 D_802541F4[];
extern u8 D_802542B0[];
extern s32 D_8025A2E0;

void func_8024D2A4(void *arg0, void *arg1) {
    if ((func_801C3D20(540.0f, -60.0f, 25.0f) != 0) || (func_801C3D20(560.0f, -100.0f, 25.0f) != 0)) {
        func_80133980(0x7E);
        func_801339D0(0x73);
        func_801339D0(0x77);
        D_8025A2E0 = func_80005670(arg0, D_802541F4);
        D_801BBBF0.unkDC->unk40 = 0.0f;
        D_801BBBF0.unkDC->unk48 = 0.0f;
        func_801C3B2C(2);
        func_801C3B10(1);
        func_800179B0(D_802542B0);
        *(s16 *)((u8 *)arg0 + 0x3C) = 0;
        func_801FBB30();
        func_800058DC(arg0, func_8024D384);
    }
}


typedef struct func_8024D384_Struct {
    f32 v[3];
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    s16 e;
    u8 pad[4];
} func_8024D384_Struct;

s32 func_800178E8();
void func_801C2F0C(s32, f32 *);
s32 func_801C2FF8();
extern f32 D_80259A68;
extern f32 D_80259A6C;
extern u8 func_8024D424[];

void func_8024D384(s32 arg0, s32 arg1) {
    func_8024D384_Struct sp18;

    if ((func_801C2FF8() != 0) && (func_800178E8() != 0)) {
        sp18.v[0] = D_80259A68;
        sp18.v[1] = D_80259A6C;
        sp18.v[2] = 0.0f;
        sp18.a = 0x1100;
        sp18.b = 0x0168003F;
        sp18.c = 1.0f;
        sp18.d = 0;
        sp18.e = 0xFA;
        func_801C2F0C(2, (f32 *)&sp18);
        func_800058DC(arg0, func_8024D424);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024D230/func_8024D424.s")


struct func_8024D564_Inner {
    u8 pad[0x12];
    s16 unk12;
};
struct func_8024D564_Struct {
    u8 pad[0x2C];
    struct func_8024D564_Inner *unk2C;
};
extern s16 func_801FD284(s16, s32, s32);
extern void func_8024D5DC();
extern struct func_8024D564_Struct *D_801BBCD0;

void func_8024D564(void *arg0, void *arg1) {
    D_801BBCD0->unk2C->unk12 = func_801FD284(D_801BBCD0->unk2C->unk12, 0, 0x3D4CCCCD);
    if (func_80133A24(0x77) != 0) {
        func_801339D0(0x77);
        func_800058DC(arg0, (void *)func_8024D5DC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024D230/func_8024D5DC.s")


void func_8024D898(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024D230/func_8024D8A4.s")

/* context.h declaration lines this function uses, needed before the file's own declarations. */
extern s32 D_8025A2E4;
extern void func_8015115C(s32, void *);
extern void func_801512CC(s32, s32, s32, s32);
extern void func_8024DA8C();

extern s32 func_801517CC(s32);
extern void func_80151430(s32, s32);
extern u8 D_80254208[];

void func_8024DA04(void *arg0, s32 arg1) {
    if (func_801517CC(D_8025A2E4) != 0) {
        func_801512CC(D_8025A2E4, 0x4413B333, 0x43B90000, 0x42DD6666);
        func_80151430(D_8025A2E4, 0x1000);
        func_8015115C(D_8025A2E4, D_80254208);
        *(s16 *)((u8 *)arg0 + 0x90) = 0;
        func_800058DC(arg0, &func_8024DA8C);
    }
}


struct func_8024DA8C_Struct {
    u8 pad[0x90];
    s16 unk90;
};

extern void func_801511C4(s32, void *, s32);
extern void func_8024DB10();
extern u8 D_80254214[];

void func_8024DA8C(struct func_8024DA8C_Struct *arg0, s32 arg1) {
    if (func_80133A24(0x73) != 0) {
        func_801339D0(0x73);
        func_801511C4(D_8025A2E4, D_80254214, 0x14);
        func_801512CC(D_8025A2E4, 0x4413B333, 0xC3020000, 0x42DD6666);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024DB10);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024D230/func_8024DB10.s")


typedef struct func_8024DD24_Struct {
    u8 pad[0x90];
    u16 unk90;
} func_8024DD24_Struct;

extern void func_8001E978(void *, s32, s32, s32, s32, s32, s32, s32);
extern s16 D_80089354;
extern void func_8024DDA0(void);

void func_8024DD24(func_8024DD24_Struct *arg0, s32 arg1)
{
  s32 temp_v0;
  s32 cond;
  func_8024DD24_Struct *new_var;
  new_var = arg0;
  temp_v0 = new_var->unk90;
  cond = (0, temp_v0 >= 0x17);
  arg0->unk90 = temp_v0 - -1;
  temp_v0 = 0xFF;
  if (cond != 0)
  {
    D_80089354 = 0;
    func_8001E978(arg0, temp_v0, temp_v0, temp_v0, 0x14, 0, 1, 0);
    arg0->unk90 = 0;
    func_800058DC(new_var, func_8024DDA0);
  }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024D230/func_8024DDA0.s")


struct func_8024DF34_Struct {
    u8 pad[0x90];
    u16 unk90;
};

extern void func_8024DFA4();
extern u8 D_802545D4[];
extern u8 D_8025422C[];

void func_8024DF34(struct func_8024DF34_Struct *arg0, s32 arg1) {
    if (arg0->unk90++ >= 0x1C) {
        func_800179B0(D_802545D4);
        func_8015115C(D_8025A2E4, D_8025422C);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024DFA4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024D230/func_8024DFA4.s")


typedef struct func_8024E2BC_Struct {
    u8 pad[0x90];
    s16 unk90;
} func_8024E2BC_Struct;

extern u8 D_80254250[];
extern void func_8024E324();
extern void func_801514B0(s32, s32);
extern s32 func_80151790(s32);

void func_8024E2BC(func_8024E2BC_Struct *arg0, s32 arg1) {
    func_801514B0(D_8025A2E4, 0x71);
    if (func_80151790(D_8025A2E4) == 0) {
        func_8015115C(D_8025A2E4, D_80254250);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024E324);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/8024D230/func_8024E324.s")


void func_8024E3B0(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}

