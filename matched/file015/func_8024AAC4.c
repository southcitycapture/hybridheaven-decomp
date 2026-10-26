#include "common.h"
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


struct func_8024AAC4_Vec { s32 a, b, c; };
extern struct func_8024AAC4_Vec D_802534AC;
extern u8 D_8025360C[];
extern u8 D_80259268[];
extern u8 D_8024AC24[];
extern f32 D_802592FC, D_80259300, D_80259304, D_80259308, D_8025930C;

void func_8024AAC4(arg0, arg1)
func_80249DD0_Arg *arg0;
volatile s32 arg1;
{
    s32 t = arg0->unk5C;
    if (func_80010550(arg1, t) != 0) {
        if (func_800178E8() != 0) {
            func_8013A1B4(arg1, D_802534AC, 0xFFFFFF);
            func_800179B0(D_8025360C);
            G_DD0->unk1E8 = -110.5f;
            G_DD0->unk1EC = D_802592FC;
            G_DD0->unk1F0 = D_80259300;
            G_DD0->unk1F4 = D_80259304;
            G_DD0->unk1F8 = D_80259308;
            G_DD0->unk1FC = D_8025930C;
            func_8011AAF4(D_80259268, 0x1B8, arg0, 0, 1, 0.0f, G_DD0->unk1E8, G_DD0->unk1EC, G_DD0->unk1F0, 0.0f, G_DD0->unk1F4, G_DD0->unk1F8, G_DD0->unk1FC, 0.0f, 35.0f, -1, -1);
            func_800058DC(arg0, D_8024AC24);
        }
    }
}
