#include "context.h"

extern f64 D_801FD0F0;
extern f64 D_801FD0F8;
extern f64 D_801FD100;
extern f64 D_801FD108;
extern f64 D_801FD110;
extern f64 D_801FD118;
extern f64 D_801FD120;
extern f64 D_801FD128;
extern f64 D_801FD130;
extern f64 D_801FD138;

s32 func_801F32B8(s32 arg0, s32 arg1) {
    f32 temp_fa0;
    f64 temp_fv1;
    f64 z;
    u64 temp_ret;

    if (func_801C0B8C(0x04E54155) != 0) {
        return 0x15;
    }
    temp_ret = func_801C0B2C();
    temp_fv1 = (f64) (f32) ((func_80034C24(temp_ret) / D_801FD0F0) - D_801FD0F8) / D_801FD100;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk30 = (f32) ((temp_fv1 * D_801FD108) + -31.0);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk34 = (f32) ((temp_fv1 * D_801FD110) + D_801FD118);
    z = 1.0 - 1.0;
    temp_fa0 = (f32) ((temp_fv1 * D_801FD120) + D_801FD128);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk38 = temp_fa0;
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk3C = (f32) ((temp_fv1 * z) + D_801FD130);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk40 = (f32) ((temp_fv1 * D_801FD138) + 19.0);
    ((struct func_801E1C38_Struct *)D_801BBBF0.unkE8->unk2C)->unk44 = temp_fa0;
    return 0x14;
}
