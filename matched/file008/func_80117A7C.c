#include "context.h"

struct func_80117A7C_S1 {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
};
struct func_80117A7C_S0 {
    u8 pad0[0x2C];
    struct func_80117A7C_S1 *unk2C;
};
struct func_80117A7C_G {
    u8 pad0[0xE0];
    struct func_80117A7C_S0 *unkE0;
    u8 pad1[0x320 - 0xE4];
    f32 unk320;
    u8 pad2[0x374 - 0x324];
    f32 unk374;
    f32 unk378;
    f32 unk37C;
};
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_801084C4(f32, f32, s32, s32, f32, f32);
extern f64 D_80189B30;
extern f64 D_80189B38;

s32 func_80117A7C(s16 arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5, f32 *arg6) {
#define G ((struct func_80117A7C_G *) &D_801BBBF0)
    *arg1 = G->unkE0->unk2C->unk4 - func_8001EB64(arg0) * D_80189B30;
    *arg2 = G->unkE0->unk2C->unk8 + 25.0 + G->unk320;
    *arg3 = G->unkE0->unk2C->unkC - func_8001EAD0(arg0) * D_80189B38;
    *arg4 = G->unkE0->unk2C->unk4;
    *arg5 = G->unkE0->unk2C->unk8 + 15.0;
    *arg6 = G->unkE0->unk2C->unkC;
    if (func_801084C4(*arg4, *arg5, *(s32 *) arg6, *(s32 *) arg1, *arg2, *arg3)) {
        *arg1 = G->unk374;
        *arg2 = G->unk378;
        *arg3 = G->unk37C;
    }
}
