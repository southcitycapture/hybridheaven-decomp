#include "common.h"
s32 func_80373BF0(u16 arg0, u16 arg1);


struct func_80373D14_Struct {
    u8 pad0[0x1C];
    u16 unk1C;
    u16 unk1E;
};
struct func_80373D14_Arg {
    u16 unk0;
    u16 unk2;
    u16 unk4;
    u8 pad6[2];
    f32 unk8;
};

f32 func_80373D14(struct func_80373D14_Arg *arg0, f32 *arg1, f32 *arg2, s16 *arg3, u16 *arg4) {
    struct func_80373D14_Struct *v0;
    u32 v1;
    f32 fv1;
    f32 x;
    f32 den;
    f64 k;

    k = 2.0 - 1.0;
    v0 = (struct func_80373D14_Struct *)func_80373BF0(arg0->unk0, arg0->unk2);
    *arg4 = (u32)((f64)((f32)(u32)(u16)(v0->unk1E & 0xFFFF7FFF) * arg0->unk8) * k);
    *arg3 = *arg4 | (v0->unk1E & 0x8000);
    v1 = *arg4;
    if ((s32)v1 > 0) {
        *arg4 = v1 - 1;
        v1 = *arg4;
    }
    fv1 = (f32)((f64)(f32)(u32)v0->unk1C - 1.0);
    if (v1 != 0) {
        den = (f32)v1;
        *arg1 = (f32)(u32)arg0->unk4 * fv1 / den;
        x = *arg1;
        *arg2 = x - (f32)(s32)x;
        if (fv1 <= *arg1) {
            *arg1 = fv1;
            *arg2 = 0.0f;
        }
    } else {
        *arg1 = 0.0f;
        *arg2 = 0.0f;
    }
    return fv1;
}
