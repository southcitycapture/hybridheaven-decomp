#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024D030.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024D650.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024D768.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024D9B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024DB60.s")

extern void func_800058DC(void *arg0, void *arg1);
extern void func_80020718(s32 arg0);
extern void func_801C4058(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_8024F0B0(void);
struct func_8024DDE4_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};
void func_8024DDE4(struct func_8024DDE4_Struct *arg0);

extern void func_80380F94(f32, f32, s32, f32, f32, f32, s32);

void func_8024DD20(struct func_8024DDE4_Struct *arg0)
{
  u16 temp_s1;
  temp_s1 = arg0->unk3C;
  arg0->unk3C = (u16) (temp_s1 + 1);
  func_8024F0B0();
  if (((s32) temp_s1) >= 0x3C)
  {
    if (temp_s1 == 0x3C)
    {
      if (!arg0)
      {
      }
      func_80020718(0x184);
    }
    func_801C4058(arg0, 0xBE4CCCCD, 0xBECCCCCD, 0);
    if ((temp_s1 % 10) == 0)
    {
      func_80380F94(-143.0f, 0.0f, 0xC3020000, 0.0f, 0.0f, 0.0f, 10);
    }
  }
  if (((s32) temp_s1) >= 0x5A)
  {
    arg0->unk3C = 0;
    func_800058DC(arg0, func_8024DDE4);
  }
}


extern void func_80133980(s32 arg0);
extern void func_8015115C(s32 arg0, void *arg1);
extern s32 func_801516CC(s32 arg0);
extern void func_8024CF18(s32 arg0, s32 arg1);
extern void func_8024DEC4();
extern s32 D_8025DDF0;
extern s32 D_80259054;


void func_8024DDE4(struct func_8024DDE4_Struct *arg0) {
    s32 var_s0;
    u16 temp_s0;

    temp_s0 = arg0->unk3C;
    arg0->unk3C = (u16) (temp_s0 + 1);
    func_8024F0B0();
    func_801C4058(arg0, 0xBE4CCCCD, 0xBECCCCCD, 0);
    if ((s32) temp_s0 >= 0x2D) {
        func_80133980(0x131);
        arg0->unk3C = 0U;
        for (var_s0 = 1; var_s0 < func_801516CC(D_8025DDF0); var_s0++) {
            func_8024CF18(D_8025DDF0, var_s0 & 0xFF);
        }
        func_8015115C(D_8025DDF0, &D_80259054);
        func_80020718(0x185);
        func_800058DC(arg0, &func_8024DEC4);
    }
}


struct func_8024DEC4_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

struct func_8024DEC4_Sub {
    u8 pad[0x22];
    u8 unk22;
};

struct func_8024DEC4_Arg1 {
    u8 pad[0x1C];
    struct func_8024DEC4_Sub *unk1C;
};

extern void func_80151700(s32, s32, void *);
extern u8 D_8017BAD8[];
extern void func_8024DFA8();

void func_8024DEC4(struct func_8024DEC4_Struct *arg0, struct func_8024DEC4_Arg1 *arg1) {
    s32 var_s0;

    func_8024F0B0();
    func_801C4058(arg0, 0x3ECCCCCD, 0x3DCCCCCD, -0x16);
    if (arg0->unk3C++ >= 0x5A) {
        func_80133980(0x132);
        arg0->unk3C = 0;
        arg1->unk1C->unk22 = 1;
        for (var_s0 = 0; var_s0 < func_801516CC(D_8025DDF0); var_s0++) {
            func_80151700(D_8025DDF0, var_s0 & 0xFF, D_8017BAD8);
        }
        func_800058DC(arg0, func_8024DFA8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024DFA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024E230.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024E3F0.s")


extern void func_80126968();
extern void func_801268CC(s32);
extern void func_80020744(s32);
extern s16 D_801BBF90[];
extern void func_8024E5E8(s32 arg0);

void func_8024E598(s32 arg0, s32 arg1) {
    func_80126968();
    D_801BBF90[2] = 0x134;
    func_801268CC(0);
    func_80020744(0xA);
    func_800058DC(arg0, func_8024E5E8);
}

extern s32 func_80133A24(s32);

extern void func_8024F294();
extern s32 func_80126944(void);
extern void func_801C3B2C(s32);
extern void func_801C3B10(s32);
extern void func_801FBB30(void);
extern void func_8024E654();

void func_8024E5E8(s32 arg0) {
    func_8024F294();
    if (func_80133A24(0x134) != 0) {
        if (func_80126944() != 1) {
            func_801C3B2C(2);
            func_801C3B10(1);
            func_801FBB30();
            func_800058DC(arg0, func_8024E654);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024E654.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024E79C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024EA0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024EE8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024F030.s")


typedef struct func_8024F078_StructInner {
    u8 pad[0x22];
    u8 unk22;
} func_8024F078_StructInner;

typedef struct func_8024F078_Struct {
    u8 pad[4];
    func_8024F078_StructInner *unk4;
} func_8024F078_Struct;


void func_8024F078(s32 arg0, func_8024F078_Struct *arg1) {
    if (func_80133A24(0x138) != 0) {
        arg1->unk4->unk22 = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024F0B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024F294.s")

