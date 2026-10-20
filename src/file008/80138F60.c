#include "common.h"


struct func_80138F60_Inner { u8 pad[0x10]; u32 unk10; };
struct func_80138F60_Struct { u8 pad[0x38]; struct func_80138F60_Inner *unk38; };

extern void func_80005700();
extern void func_800058DC();
extern s32 func_8012FF4C();
extern s16 D_801BBE1A;
extern u8 D_801BBF96;
extern void func_80139034();

void func_80138F60(struct func_80138F60_Struct *arg0, void *arg1)
{
  u32 temp_v0;
  char new_var;
  if ((((arg0->unk38->unk10 >> 16) & 0xFFFF) & 1) && ((func_8012FF4C(arg0) == 9) || (func_8012FF4C(arg0) == 0x18)))
  {
    func_80005700(arg0);
    return;
  }
  temp_v0 = arg0->unk38->unk10;
  new_var = temp_v0 >> 16;
  if ((new_var & 2) && ((temp_v0 & 0xFF) != D_801BBF96))
  {
    func_80005700(arg0);
    return;
  }
  if ((temp_v0 >> 24) >= 4)
  {
    func_80005700(arg0);
 if (0) { }
    return;
  }
  D_801BBE1A = 0;
  func_800058DC(arg0, func_80139034);
}

struct func_80139034_Struct { u8 pad[0x22A]; u16 unk22A; };
extern struct func_80139034_Struct D_801BBBF0;
extern void (*D_8017ACE0[])();

void func_80139034(struct func_80138F60_Struct *arg0) {
    void (*f)();

    if ((u16)(++D_801BBBF0.unk22A) > 0) {
        f = D_8017ACE0[arg0->unk38->unk10 >> 24];
        if (f != NULL) {
            f(arg0);
        }
        func_80005700(arg0);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80138F60/func_801390A0.s")


typedef struct func_8013910C_Struct {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    u8 pad1[6];
    u32 unk14;
    u32 unk18;
} func_8013910C_Struct;

extern void func_8014ADB4(f32, f32, f32, s16, u32, s32, u32);

void func_8013910C(void *arg0, s32 arg1) {
    u32 temp_v1;
    func_8013910C_Struct *temp_v0;

    temp_v0 = *(func_8013910C_Struct **) ((u8 *) arg0 + 0x38);
    temp_v1 = temp_v0->unk14;
    func_8014ADB4((f32) ((f64) (f32) temp_v0->unk6 / 10.0), (f32) ((f64) (f32) temp_v0->unk8 / 10.0), (f32) ((f64) (f32) temp_v0->unkA / 10.0), temp_v0->unkC, temp_v1 >> 0x10, temp_v1 & 0xFFFF, temp_v0->unk18 >> 0x10);
}


typedef struct func_801391B0_Struct {
    u8 pad0[6];
    s16 unk6;
    s16 unk8;
    s16 unkA;
    s16 unkC;
    u8 pad1[6];
    u32 unk14;
    u32 unk18;
} func_801391B0_Struct;

extern void func_8014AEF4(f32, f32, f32, s16, u32, s32, u32);

void func_801391B0(void *arg0, s32 arg1) {
    u32 temp_v1;
    func_801391B0_Struct *temp_v0;

    temp_v0 = *(func_801391B0_Struct **) ((u8 *) arg0 + 0x38);
    temp_v1 = temp_v0->unk14;
    func_8014AEF4((f32) ((f64) (f32) temp_v0->unk6 / 10.0), (f32) ((f64) (f32) temp_v0->unk8 / 10.0), (f32) ((f64) (f32) temp_v0->unkA / 10.0), temp_v0->unkC, temp_v1 >> 0x10, temp_v1 & 0xFFFF, temp_v0->unk18 >> 0x10);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80138F60/func_80139254.s")

