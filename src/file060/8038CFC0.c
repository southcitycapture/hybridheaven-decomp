#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file060/8038CFC0/func_8038CFC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file060/8038CFC0/func_8038CFF4.s")


struct func_8038D4F4_Arg0 {
    u8 pad[0x92];
    u8 unk92;
    u8 unk93;
    u8 pad2[0x9A - 0x94];
    s16 unk9A;
    u8 pad3[0xA1 - 0x9C];
    u8 unkA1;
    u8 unkA2;
};

struct func_8038D4F4_Arg1 {
    u8 pad[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};

struct func_8038D4F4_Arg2 {
    u8 pad[0x30];
    s32 unk30;
    u8 pad2[0x2D1 - 0x34];
    u8 unk2D1;
    u8 pad3[0x388 - 0x2D2];
    u8 unk388;
};

void func_802294BC(void *);
void func_80229CE0(void *, void *, s32);
s32 func_8022B640(s32);

void func_8038D4F4(struct func_8038D4F4_Arg0 *arg0, struct func_8038D4F4_Arg1 *arg1, struct func_8038D4F4_Arg2 *arg2)
{
  u32 temp_v0;
  s32 temp_t4;
  s32 temp_t5;
  temp_v0 = arg2->unk30;
  temp_t4 = 1;
  temp_t5 = 1;
  if ((((((u32) (temp_v0 << 0xB)) >> 0x1E) != 0) || ((((u32) (temp_v0 * 8)) >> 0x1C) == 2)) && (((s32) arg2->unk2D1) >= 5))
  {
    func_802294BC(arg1);
    arg0->unk9A = (s16) (arg0->unk9A | 8);
  }
  else
    if (arg2->unk388 < 6)
  {
    arg1->unk2D8 = temp_t4;
    func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
  }
  else
  {
    arg1->unk2D8 = temp_t5;
    func_80229CE0(arg0, arg1, func_8022B640(2) & 0xFF);
    arg0->unk93 = (arg0->unk92 = 0);
  }
  arg0->unkA1 = arg1->unk2D8;
  arg0->unkA2 = arg1->unk2D9;
}

extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];

struct func_8038D5D8_Struct {
    u8 pad0[0xC];
    s32 unkC;
};

struct func_8038D660_StructA;
void func_8038D660(struct func_8038D660_StructA *arg0, s32 arg1);
extern void func_80229500();
extern s32 D_801BBCCC;

void func_8038D5D8(struct func_8038D5D8_Struct *arg0, void *arg1) {
    void *var_a1;
    void *var_a2;
    extern void func_800058DC();

    if (D_801BBCCC == arg0->unkC) {
        var_a1 = &D_801BC03C;
    } else {
        var_a1 = &D_801BC3D8;
    }
    if (D_801BBCCC == arg0->unkC) {
        var_a2 = &D_801BC3D8;
    } else {
        var_a2 = &D_801BC03C;
    }
    func_80229500(arg0, var_a1, var_a2);
    func_8038D4F4((void *)arg0, var_a1, var_a2);
    func_800058DC(arg0, func_8038D660);
}

struct func_8038D660_StructA { u8 pad[0xC]; s32 unkC; u8 pad2[0x91-0x10]; u8 unk91; u8 pad3[0xA8-0x92]; u8 unkA8; u8 pad4[0xB0-0xA9]; void *unkB0; };
struct func_8038D660_StructG { u8 pad[0xDC]; s32 unkDC; u8 pad2[0x1031-0xE0]; u8 unk1031; };
struct func_8038D660_StructB { u8 pad[0x30]; union { u32 w; u16 h; } unk30; };
extern struct func_8038D660_StructG D_801BBBF0;
extern u8 func_8022B3E0[];
extern void func_800058DC(void *, void *, void *);
extern s32 func_8022AB58(void *, void *, void *);

void func_8038D660(struct func_8038D660_StructA *arg0, s32 arg1) {
    struct func_8038D660_StructB *a1;
    struct func_8038D660_StructB *a2;
    u32 v;
    s32 t;

    a1 = (D_801BBBF0.unkDC == arg0->unkC) ? &D_801BC03C : &D_801BC3D8;
    a2 = (D_801BBBF0.unkDC == arg0->unkC) ? &D_801BC3D8 : &D_801BC03C;
    if (arg0->unkA8 == 2) {
        func_8038D4F4((void *)arg0, (void *)a1, (void *)a2);
        arg0->unkA8 = 0;
        return;
    }
    if ((a1->unk30.h & 7) || D_801BBBF0.unk1031 == 6) {
        arg0->unkA8 = 1;
        return;
    }
    if (D_801BBBF0.unk1031 == 7) {
        arg0->unkB0 = func_8038D660;
        func_800058DC(arg0, func_8022B3E0, a2);
        return;
    }
    if (func_8022AB58(arg0, a1, a2) != 0) {
        arg0->unk91 = 0;
        func_8038D4F4((void *)arg0, (void *)a1, (void *)a2);
        return;
    }
    v = (a2->unk30.w << 11) >> 30;
    if (v != 0 && !(((struct func_8038D4F4_Arg0 *)arg0)->unk9A & 8)) {
        func_8038D4F4((void *)arg0, (void *)a1, (void *)a2);
        return;
    }
    if (v == 0) {
        t = ((struct func_8038D4F4_Arg0 *)arg0)->unk9A;
        if (t & 8) {
            ((struct func_8038D4F4_Arg0 *)arg0)->unk9A = t ^ 8;
            func_8038D4F4((void *)arg0, (void *)a1, (void *)a2);
        }
    }
}


struct func_8038D7B8_Arg0 {
    u8 pad[0xA5];
    u8 unkA5;
};

struct func_8038D7B8_Arg1 {
    u8 pad[6];
    s16 unk6;
};

void func_8022A834();

void func_8038D7B8(struct func_8038D7B8_Arg0 *arg0, struct func_8038D7B8_Arg1 *arg1) {
    if (arg1->unk6 >= 0x64) {
        arg0->unkA5 = 1;
        return;
    }
    func_8022A834();
}

