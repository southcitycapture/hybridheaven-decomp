#include "common.h"

#define func_80240918 func_80240918__func_802408F0

extern void func_800058DC(void *, void *);
extern void func_80240918(s32 arg0, s32 arg1);

void func_802408F0(s32 arg0, s32 arg1) {
    func_800058DC(arg0, func_80240918);
}
#undef func_80240918


void func_80240918(s32 arg0, s32 arg1) {
    s32 *p0 = &arg0;
    s32 *p1 = &arg1;
    *p0 = arg0;
    *p1 = arg1;
}


struct func_80240924_Copy {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

struct func_80240924_Sub {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x8];
    s32 unk30;
    u8 pad2[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};

struct func_80240924_Obj {
    u8 pad0[0x30];
    struct func_80240924_Sub *unk30;
};

struct func_80240924_Self {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad1[0x52];
    s16 unk90;
    s16 unk92;
    u8 unk94;
    u8 pad2[0x8];
    u8 unk9D;
};

extern s32 func_80126CC0(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8001F74C(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012D918(void *, s32, s32, s32, s32);
extern struct func_80240924_Copy D_80164F40;
extern s32 D_80249708[];
extern void func_80126EAC(void);
extern void func_80240A6C();

void func_80240924(void *arg0, struct func_80240924_Obj **arg1) {
    struct func_80240924_Copy sp28;

    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        sp28 = D_80164F40;
        sp28.unk4 = 0x80000900;
        func_80005E44(arg0, &sp28);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x39D, 3);
        func_8012D918(arg0, 0x398, 0, 0, 0);
        (*arg1)->unk30->unk24 = (*arg1)->unk30->unk24 | 0x4100;
        (*arg1)->unk30->unk30 = (s32) D_80249708 | 0x40000000;
        (*arg1)->unk30->unk4C = 0;
        (*arg1)->unk30->unk4D = 0;
        (*arg1)->unk30->unk4E = 0xFF;
        (*arg1)->unk30->unk4F = 0xFF;
        ((struct func_80240924_Self *) arg0)->unk3C = 0;
        ((struct func_80240924_Self *) arg0)->unk90 = 0xA;
        ((struct func_80240924_Self *) arg0)->unk92 = 0x1E;
        ((struct func_80240924_Self *) arg0)->unk9D = 0;
        ((struct func_80240924_Self *) arg0)->unk94 = 0;
        func_8001F74C(arg0);
        func_800058DC(arg0, func_80240A6C);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802408F0/D_8024EBE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802408F0/func_80240A6C.s")


extern void func_80241164();

void func_8024101C(struct func_80240924_Self *arg0, struct func_80240924_Obj **arg1) {
    struct func_80240924_Copy sp28;

    if (func_80126CC0(arg0, &func_80126EAC) != 0) {
        sp28 = D_80164F40;
        sp28.unk4 = 0x80000900;
        func_80005E44(arg0, &sp28);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x39D, 3);
        func_8012D918(arg0, 0x398, 0, 0, 0);
        (*arg1)->unk30->unk24 |= 0x4100;
        (*arg1)->unk30->unk30 = (s32) ((s32) D_80249708 | 0x40000000);
        (*arg1)->unk30->unk4C = 0;
        (*arg1)->unk30->unk4D = 0;
        (*arg1)->unk30->unk4E = 0xFF;
        (*arg1)->unk30->unk4F = 0xFF;
        arg0->unk3C = 0;
        arg0->unk90 = 0xA;
        arg0->unk92 = 0x1E;
        arg0->unk9D = 0;
        arg0->unk94 = 0;
        func_8001F74C(arg0);
        func_800058DC(arg0, &func_80241164);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802408F0/func_80241164.s")

#define func_8024174C func_8024174C__func_80241714

extern void func_8024174C();

void func_80241714(void *arg0, s16 arg1)
{
  func_8001F74C(arg0);
  *((s16 *) (((u8 *) arg0) + 0x3C)) = 0;
  if (!arg0)
  {
  }
  func_800058DC(arg0, (void *) func_8024174C);
}
#undef func_8024174C


struct func_8024174C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x2];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x44];
    f32 unk90;
    f32 unk94;
    f32 unk98;
};
extern void func_80005700(void *);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4(s32);

void func_8024174C(struct func_8024174C_Struct *arg0, s32 arg1) {
    s32 sp74[1];
    s32 temp_v0;
    s32 sp6C;
    s32 sp68;
    s32 sp64;
    s32 sp60;
    s32 sp5C;

    temp_v0 = arg0->unk3C;
    sp74[0] = temp_v0;
    arg0->unk3C = (u16) (temp_v0 + 1);
    if (!(sp74[0] % 2)) {
        sp5C = func_8012C6B4(0x32);
        sp60 = func_8012C6B4(0x32);
        sp64 = func_8012C6B4(0xC8);
        sp68 = func_8012C6B4(0x64);
        sp6C = func_8012C6B4(0xC8);
        func_80129FB8((f32) (((f64) (sp5C - 0x19) / 10.0) + (f64) arg0->unk90), arg0->unk94, (f32) (((f64) (sp60 - 0x19) / 10.0) + (f64) arg0->unk98), (f32) ((f64) (sp64 - 0x64) / 100.0), (f32) (((f64) sp68 / 100.0) + 3.0), (f32) ((f64) (sp6C - 0x64) / 100.0), -0.5f, 0xFF, 0x82, 0, 0xFF, 0, 0, 0xFF, -8, (f32) (((f64) func_8012C6B4(0x32) / 1000.0) + 0.2), 0xD, 0);
        func_80129FB8(arg0->unk90, arg0->unk94 + 6.0f, arg0->unk98, arg0->unk40, arg0->unk44, arg0->unk48, (-0.699999988f), 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xA0, -4, 0.300000012f, 9, 0);
    }
    if (sp74[0] >= 8) {
        func_80005700(arg0);
    }
}


extern void func_80241A00();

void func_802419C8(void *arg0, s16 arg1)
{
  func_8001F74C(arg0);
  *((s16 *) (((u8 *) arg0) + 0x3C)) = 0;
  if (!arg0)
  {
  }
  func_800058DC(arg0, (void *) func_80241A00);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802408F0/func_80241A00.s")

typedef struct func_80241FD0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_80241FD0_Struct;
void *func_8012C4D0(s32, func_80241FD0_Struct, s32); /* extern */
extern s32 D_801BBC2C;

extern func_80241FD0_Struct D_802496DC;

void *func_80241F1C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5) {
    void *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_802496DC, 3);
    if (temp_v0 != NULL) {
        ((f32 *)temp_v0)[0x90 / 4] = arg0;
        ((f32 *)temp_v0)[0x94 / 4] = arg1;
        ((f32 *)temp_v0)[0x98 / 4] = arg2;
        ((f32 *)temp_v0)[0x40 / 4] = arg3;
        ((f32 *)temp_v0)[0x44 / 4] = arg4;
        ((f32 *)temp_v0)[0x48 / 4] = arg5;
        return temp_v0;
    }
    return NULL;
}



extern func_80241FD0_Struct D_802496F0;

void *func_80241FD0(f32 arg0, f32 arg1, f32 arg2, u8 arg3) {
    void *temp_v0;

    temp_v0 = func_8012C4D0(D_801BBC2C, D_802496F0, 3);
    if (temp_v0 != NULL) {
        ((f32 *)temp_v0)[0x90 / 4] = arg0;
        ((f32 *)temp_v0)[0x94 / 4] = arg1;
        ((f32 *)temp_v0)[0x98 / 4] = arg2;
        ((u8 *)temp_v0)[0x9C] = arg3;
        return temp_v0;
    }
    return NULL;
}

