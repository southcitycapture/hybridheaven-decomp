#define func_8037B758 func_8037B758__ctx
#include "context.h"
#undef func_8037B758

extern u8 D_803896A0[];

void func_8037B758(func_8037B86C_Struct *arg0, s32 arg1) {
    s32 t;

    t = (s32)arg0->unk5C;
    func_80010550(arg1, t, arg1);
    if (FUNC_8037B86C_G->unk4 != 0x38) {
        func_8011AAF4(D_803896A0, 0x381, arg0, 0, 1, 10.0f, FUNC_8037B86C_G->unkE8->unk2C->unk30, FUNC_8037B86C_G->unkE8->unk2C->unk34, FUNC_8037B86C_G->unkE8->unk2C->unk38, 10.0f, arg0->x + FUNC_8037B86C_G->unkE0->unk2C->unk4, arg0->y + FUNC_8037B86C_G->unkE0->unk2C->unk8, arg0->z + FUNC_8037B86C_G->unkE0->unk2C->unkC, 0.0f, 35.0f, -1, -1);
    }
    D_8038A93C = 0;
    func_80020744(0xA);
    func_800058DC(arg0, func_8037B86C);
}
