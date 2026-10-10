#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802408F0/func_802408F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802408F0/func_80240918.s")


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
extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8001F74C(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern void func_8012D918(void *, s32, s32, s32, s32);
extern struct func_80240924_Copy D_80164F40;
extern s32 D_80249708[];
extern void func_80126EAC(void);
extern void func_80240A6C(void);

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

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802408F0/func_80240A6C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802408F0/func_8024101C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802408F0/func_80241164.s")


extern void func_8024174C(void);

void func_80241714(void *arg0, s16 arg1)
{
  func_8001F74C(arg0);
  *((s16 *) (((u8 *) arg0) + 0x3C)) = 0;
  if (!arg0)
  {
  }
  func_800058DC(arg0, (void *) func_8024174C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802408F0/func_8024174C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802408F0/func_802419C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802408F0/func_80241A00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file016/802408F0/func_80241F1C.s")


typedef struct func_80241FD0_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
} func_80241FD0_Struct;

void *func_8012C4D0(s32, func_80241FD0_Struct, s32); /* extern */
extern s32 D_801BBC2C;
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

