#include "context.h"

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
