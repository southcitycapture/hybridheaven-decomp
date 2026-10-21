#include "context.h"

typedef struct func_8035908C_StructArg {
    u8 pad[0x6C];
    f32 x;
    s32 y;
    f32 z;
    s16 angle;
    u16 kind;
} func_8035908C_StructArg;

extern f32 func_8001EB64(s16);
extern f32 func_8001EAD0(s16);
extern f32 D_80389EE0;
extern void func_80359194();
extern void D_801CE330(void *, s32, f32, s32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32);

void func_8035908C(func_8035908C_StructArg *arg0, s32 arg1) {
    f32 x;
    f32 z;

    x = 0.0f;
    z = 0.0f;
    if ((s32)(u16)D_8038CC10->unk4C >= 3) {
        if (arg0->kind == 0x11D) {
            x = func_8001EB64(arg0->angle);
            z = func_8001EAD0(arg0->angle);
        }
        D_801CE330(arg0, 0xC, arg0->x + x, arg0->y, arg0->z + z,
            0x30, 0x80, 0xA0, 0xFF, 0x30, 0x80, 0xA0, 0, 0x14, 0x14,
            D_80389EE0, 9);
        func_800058DC(arg0, func_80359194);
    }
}
