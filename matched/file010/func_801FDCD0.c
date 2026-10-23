#define func_801FDCD0 func_801FDCD0_ctx
#include "context.h"
#undef func_801FDCD0
struct func_801FDCD0_Struct {
    s16 u24, u26, u28, u2A;
    s8 u2C; u8 u2D, u2E, u2F, u30, u31, u32, u33;
    s16 u34, u36; u8 pad38[4]; u16 u3C; u8 pad3E[2]; s32 u40;
    u8 pad44[8];
    s16 u4C, u4E, u50, u52, u54, u56;
    u8 pad58[8];
};
extern u8 **D_80172578;

void func_801FDCD0(void *arg0, s16 arg1, s16 arg2, u8 arg3, u8 arg4, u8 arg5, u8 arg6, s8 *arg7) {
    struct func_801FDCD0_Struct s;
    s32 pad[2];

    s.u24 = arg1;
    s.u26 = arg2;
    s.u54 = s.u28 = s.u4C = 0x20;
    s.u4E = 0x40;
    s.u56 = s.u2A = 0x40;
    s.u2C = arg3;
    s.u2D = arg4;
    s.u2E = arg5;
    s.u2F = 0xFF;
    s.u30 = s.u31 = s.u32 = 0xFF;
    s.u33 = 0xFF;
    s.u34 = 0x66;
    s.u36 = 0;
    s.u3C = **(u16 **)D_80172578;
    s.u40 = ((s32 *)((void **)D_80172578)[1])[arg6];
    s.u52 = 0;
    s.u50 = 0;
    *(void **)(D_802176C0 + 0xC) = &s;
    func_80146088(arg0, D_802176C0, arg7);
}
