#include "common.h"

typedef struct func_8024AA38_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8024AA38_Struct;
extern func_8024AA38_Struct D_80253088;
extern u8 D_80253300[];
extern u8 D_8025902C[];
struct func_8024A434_Sub {
    u8 pad[0x40];
    f32 unk40;
    u8 pad2[4];
    f32 unk48;
};
struct func_8024A434_StructBBF0 {
    u8 pad[0xDC];
    struct func_8024A434_Sub *unkDC;
};
extern struct func_8024A434_StructBBF0 D_801BBBF0;
typedef struct func_80249DD0_G {
    u8 pad[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
} func_80249DD0_G;
#define G_DD0 ((func_80249DD0_G *)&D_801BBBF0)
extern void func_800058DC(void *, void *);
extern s32 func_80010550(s32, s32);
extern s32 func_800178E8(void);
extern void func_800179B0(void *);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8013A1B4();
typedef struct func_80249DD0_Arg {
    u8 pad[0x5C];
    s32 unk5C;
} func_80249DD0_Arg;
void func_80249F30(void *arg0, s32 arg1);
void func_80249DD0(arg0, arg1)
func_80249DD0_Arg *arg0;
volatile s32 arg1;
{
    s32 t = arg0->unk5C;
    if (func_80010550(arg1, t) != 0) {
        if (func_800178E8() != 0) {
            G_DD0->unk1E8 = 87.1999969f;
            G_DD0->unk1EC = (-185.600006f);
            G_DD0->unk1F0 = (-404.799988f);
            G_DD0->unk1F4 = 111.199997f;
            G_DD0->unk1F8 = (-189.100006f);
            G_DD0->unk1FC = (-429.200012f);
            func_8011AAF4(D_8025902C, 0x387, arg0, 0, 1, 0.0f, G_DD0->unk1E8, G_DD0->unk1EC, G_DD0->unk1F0, 0.0f, G_DD0->unk1F4, G_DD0->unk1F8, G_DD0->unk1FC, 0.0f, 35.0f, -1, -1);
            func_800179B0(D_80253300);
            func_8013A1B4(arg1, D_80253088, 0xFFFFFF);
            func_800058DC(arg0, func_80249F30);
        }
    }
}
