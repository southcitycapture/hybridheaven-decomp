#include "context.h"

typedef struct func_80249DD0_Arg {
    u8 pad[0x5C];
    s32 unk5C;
} func_80249DD0_Arg;
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
extern u8 D_8025902C[];
extern u8 D_80253300[];
extern f32 D_80259198, D_8025919C, D_802591A0, D_802591A4, D_802591A8, D_802591AC;
void func_80249F30(void *arg0, s32 arg1);

void func_80249DD0(arg0, arg1)
func_80249DD0_Arg *arg0;
volatile s32 arg1;
{
    s32 t = arg0->unk5C;
    if (func_80010550(arg1, t) != 0) {
        if (func_800178E8() != 0) {
            G_DD0->unk1E8 = D_80259198;
            G_DD0->unk1EC = D_8025919C;
            G_DD0->unk1F0 = D_802591A0;
            G_DD0->unk1F4 = D_802591A4;
            G_DD0->unk1F8 = D_802591A8;
            G_DD0->unk1FC = D_802591AC;
            func_8011AAF4(D_8025902C, 0x387, arg0, 0, 1, 0.0f, G_DD0->unk1E8, G_DD0->unk1EC, G_DD0->unk1F0, 0.0f, G_DD0->unk1F4, G_DD0->unk1F8, G_DD0->unk1FC, 0.0f, 35.0f, -1, -1);
            func_800179B0(D_80253300);
            func_8013A1B4(arg1, D_80253088, 0xFFFFFF);
            func_800058DC(arg0, func_80249F30);
        }
    }
}
