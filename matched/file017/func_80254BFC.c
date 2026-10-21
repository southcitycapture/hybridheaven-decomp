#include "context.h"
extern u8 D_8025D914[];
extern void func_8012FE50(s32, s32, s32, s32, s32);

void func_80254BFC(func_80251820_Ctx *arg0, u16 arg1) {
    arg1 = arg0->unk90;
    arg0->unk90 = arg1 + 1;
    if (arg1 < 0x1E) {
        *(f32 *)(D_801BBBF0 + 0x1EC) += -23.0f;
    } else if (arg1 < 0x96) {
        *(f32 *)(D_801BBBF0 + 0x1EC) += -5.0f;
    }
    func_8011AAF4(D_8025D914, 0x3A7, arg0, 0, 1, 0.0f, 120.0f, *(f32 *)(D_801BBBF0 + 0x1EC), 174.0f, 0.0f, -35.0f, -9.0f, -39.0f, 0.0f, 55.0f, -1, -1);
    if (arg1 == 0x96) {
        D_801BBBF0[0x3A6] = 0;
        *(u16 *)(D_801BBBF0 + 4) = 0x29;
        func_8012FE50(9, *(u16 *)(D_801BBBF0 + 4), 1, 1, 1);
    }
}
