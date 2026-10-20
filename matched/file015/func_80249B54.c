#include "context.h"
extern func_8024AA38_Struct D_80253088;
struct func_80249CF8_Obj;
void func_80249CF8(struct func_80249CF8_Obj *arg0, s32 arg1);
extern u8 D_80253164[];
extern u8 D_80258FEC[];
extern f32 D_80259180;
extern f32 D_80259184;
extern f32 D_80259188;
extern f32 D_8025918C;
extern f32 D_80259190;
extern f32 D_80259194;

void func_80249B54(func_80249A84_Struct *arg0, func_80249854_Inner **arg1) {
    s32 t = arg0->unk5C;
    u16 *p = (u16 *)&arg0->unk9C;
    s32 first = (*p)++ == 0;
    if (first) {
        (*arg1)->unk2C->unk12 = 0;
    }
    if (func_80010550((s32)arg1, t) != 0 && func_800178E8() != 0) {
        struct func_802486B4_Struct *g = (struct func_802486B4_Struct *)&D_801BBBF0;
        g->unk1E8 = D_80259180;
        g->unk1EC = D_80259184;
        g->unk1F0 = D_80259188;
        g->unk1F4 = D_8025918C;
        g->unk1F8 = D_80259190;
        g->unk1FC = D_80259194;
        func_8011AAF4(D_80258FEC, 0x359, arg0, 0, 1, 0.0f, g->unk1E8, g->unk1EC, g->unk1F0, 0.0f, g->unk1F4, g->unk1F8, g->unk1FC, 0.0f, 35.0f, -1, -1);
        func_800179B0(D_80253164);
        func_8013A1B4(arg1, D_80253088, 0xFFFFFF);
        func_800058DC(arg0, func_80249CF8);
        return;
    }
    func_801C3C60(arg0, 0x40A00000);
}
