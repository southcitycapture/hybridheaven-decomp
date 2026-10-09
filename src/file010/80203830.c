#include "common.h"


extern u8 D_801BBBF0[];
extern s8 D_8021B0F0;
extern s8 D_8021B0F1;
extern f32 D_8021B0F4;
extern s16 D_8021B0F8;
extern s32 D_8021B0FC;
extern s32 D_8021B100;
extern s32 D_8021B104;
extern s32 D_8021B108;
extern s32 D_8021B10C;
extern s32 D_8021B110;
extern s32 D_8021B114;
extern s32 D_8021B118;
extern s16 D_8021B120;
extern s16 D_8021B122;
extern f32 D_8021B124;
extern f32 D_8021B128;
extern f32 D_8021B12C;
extern s16 D_8021B130;
extern s16 D_8021B132;
extern f32 D_8021B134;
extern f32 D_8021B138;

struct func_80203830_Struct {
    u8 pad0[0x94];
    s32 unk94;
    u8 unk98;
    u8 unk99;
    u8 unk9A;
    u8 unk9B;
    s16 unk9C;
    u8 pad1[0x2];
    s32 unkA0;
};

s32 func_80203830(void *arg0, s32 arg1)
{
  s32 stride;
  s32 var_v0;
  u8 *temp_a0;
  struct func_80203830_Struct *s = arg0;
  s->unk94 = arg1;
  s->unk98 = 0;
  s->unk9C = 0;
  D_8021B0F0 = 0;
  D_8021B0F1 = 0;
  D_8021B0F4 = 0.0f;
  D_8021B0F8 = 0;
  D_8021B0FC = 0;
  D_8021B100 = (D_8021B104 = (D_8021B108 = (D_8021B10C = (D_8021B110 = (D_8021B114 = (D_8021B118 = 0))))));
  D_8021B120 = 0;
  D_8021B122 = 0;
  D_8021B130 = 0;
  D_8021B132 = 0;
  D_8021B124 = 0.0f;
  D_8021B128 = 0.0f;
  D_8021B12C = 0.0f;
  D_8021B138 = 0.0f;
  D_8021B134 = 0.0f;
  s->unkA0 = 0;
  s->unk9B = 0;
  *((s16 *) (D_801BBBF0 + 0x354)) = 0;
 stride = 0x18; var_v0 = 0; do { temp_a0 = D_801BBBF0 + (var_v0 * stride); arg1 = arg1;
    var_v0 = (var_v0 + 1) & 0xFF;
    *((s8 *) (temp_a0 + 0x1090)) = 0;
    *((s32 *) (temp_a0 + 0x1088)) = 0;
    *((s32 *) (temp_a0 + 0x108C)) = 0;
  }
  while (var_v0 < 5);
  return 1;
}



s32 func_8020394C(void) {
    s32 i;
    u8 *elem;
    u8 *obj;

    for (i = 0; i < 5; i = (i + 1) & 0xFF) {
        elem = D_801BBBF0 + i * 0x18;
        obj = *(u8 **) (elem + 0x1088);
        if (obj != NULL) {
            if (obj[0x63] == 0) {
                return 0;
            }
            *(s32 *) (elem + 0x108C) = *(s32 *) (obj + 0x5C);
        }
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80203830/func_802039B0.s")

