#include "common.h"

struct func_802436C0_Struct {
    u8 pad[0x3C];
    s16 unk3C;
};

extern s32 func_80150584(void);
extern s32 func_801C3D20(f32, f32, f32);
extern void func_80133A24(s32);
extern void func_800058DC(void *, void *);
extern f32 D_80246BE8;
extern void func_80243724(void);

void func_802436C0(struct func_802436C0_Struct *arg0, s32 arg1) {
    if (func_80150584() == 0) {
        if (func_801C3D20(-200.0f, D_80246BE8, 40.0f) != 0) {
            func_80133A24(0x170);
            arg0->unk3C = 0;
            func_800058DC(arg0, func_80243724);
        }
    }
}
