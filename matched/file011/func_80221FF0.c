#include "context.h"

struct func_80221FF0_Tbl {
    s32 w[8];
};
extern struct func_80221FF0_Tbl D_8023C29C;
void func_80222210(s32 arg0, s32 arg1);
extern struct func_8021E52C_Struct D_80225664(s32, s32);

void func_80221FF0(s32 arg0, s32 arg1) {
    u8 *v1;
    u8 *v0;
    s32 sp64;
    s32 pad60;
    f32 f;
    struct func_80221FF0_Tbl sp3C;

    if (arg0 == DEV_8021DC6C.unkDC) {
        v1 = (u8 *)&D_801BC03C;
    } else {
        v1 = (u8 *)&D_801BC3D8;
    }
    if (arg0 != DEV_8021DC6C.unkDC) {
        v0 = (u8 *)&D_801BC03C;
    } else {
        v0 = (u8 *)&D_801BC3D8;
    }
    sp64 = ((struct func_80221720_Actor *)arg0)->unk5C;
    f = *(f32 *)(v1 + 0x10);
    sp3C = D_8023C29C;
    v1[0x392] = 0;
    if (DEV_8021DC6C.unk1031 != 0xF) {
        if (!(v0[0x30] & 1)) {
            func_800058DC(arg0, (void *)func_80222370);
            return;
        }
        v0 = *(u8 **)(*(s32 *)(arg1 + 4) + 0x2C);
        if (3.0f * f <= *(f32 *)(v0 + 0x50)) {
            v1[0x2F1] = 1;
        }
        if (func_80011140(arg1, sp64, D_80225664(arg0, sp3C.w[v1[0x2D9]]), (u32)(7.0f * f))) {
            func_800058DC(arg0, (void *)func_80222210);
        }
    }
}
