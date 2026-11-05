#include "common.h"
struct func_801D85D0_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    u8 pad0C[4];
    f32 unk10;
    f32 unk14;
    f32 unk18;
    u8 pad1C[0xC];
    f32 unk28;
};
void func_801D85D0(u16 *arg0, u16 *arg1, u16 *arg2, f32 arg3, struct func_801D85D0_Struct *arg4);

extern f32 func_8002FC20(f32);

struct func_801D83DC_Struct {
    f32 m[4][4];
};

struct func_801D83DC_StructScratch {
    u8 pad0[4];
    u16 saved[3];
    u8 pad1[0x24];
};

void func_801D83DC(f32 *arg0, f32 *arg1, f32 *arg2, u16 *arg3,
                   u16 *arg4, u16 *arg5, f32 *arg6, f32 *arg7,
                   f32 *arg8, struct func_801D83DC_Struct *arg9) {
    struct func_801D83DC_StructScratch scratch;
    f32 x, y, z, z0;

    scratch.saved[0] = *arg3;
    scratch.saved[1] = *arg4;
    scratch.saved[2] = *arg5;
    *arg3 = 0x200;
    *arg0 = arg9->m[3][0];
    *arg1 = arg9->m[3][1];
    *arg2 = arg9->m[3][2];
    x = arg9->m[0][0];
    y = arg9->m[0][1];
    z0 = arg9->m[0][2];
    *arg6 = func_8002FC20((z0 * z0) + ((x * x) + (y * y)));
    y = arg9->m[1][0];
    z = arg9->m[1][1];
    x = arg9->m[1][2];
    *arg7 = func_8002FC20((x * x) + ((y * y) + (z * z)));
    y = arg9->m[2][0];
    z = arg9->m[2][1];
    x = arg9->m[2][2];
    *arg8 = func_8002FC20((x * x) + ((y * y) + (z * z)));
    if (*arg6 != 0.0f) {
        arg9->m[0][0] = arg9->m[0][0] / *arg6;
        arg9->m[0][1] = arg9->m[0][1] / *arg6;
        arg9->m[0][2] = arg9->m[0][2] / *arg6;
    }
    if (*arg7 != 0.0f) {
        arg9->m[1][0] = arg9->m[1][0] / *arg7;
        arg9->m[1][1] = arg9->m[1][1] / *arg7;
        arg9->m[1][2] = arg9->m[1][2] / *arg7;
    }
    if (*arg8 != 0.0f) {
        arg9->m[2][0] = arg9->m[2][0] / *arg8;
        arg9->m[2][1] = arg9->m[2][1] / *arg8;
        arg9->m[2][2] = arg9->m[2][2] / *arg8;
    }
    y = arg9->m[0][1];
    x = arg9->m[0][0];
    func_801D85D0(arg3, arg4, arg5, func_8002FC20((y * y) + (x * x)),
                  (struct func_801D85D0_Struct *)arg9);
}
