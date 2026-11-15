#include "common.h"
typedef struct func_8000E980_Struct6 {
    s16 v[3];
} func_8000E980_Struct6;
typedef struct func_8000E980_StructC {
    func_8000E980_Struct6 *unk0;
    u8 pad4[8];
    u8 unkC;
} func_8000E980_StructC;
extern struct func_8000E980_StructC D_800631E0;
void func_8000E5D4(s32 arg0);
#include "ctx_probe.h"

typedef struct func_8000E748_Struct {
    s32 unk0;
    u16 unk4;
    u16 unk6;
    f32 unk8;
} func_8000E748_Struct;

typedef struct func_8000E748_StructD {
    u8 pad0[8];
    u16 unk8;
    u16 unkA;
} func_8000E748_StructD;

f32 func_8000E748(func_8000E748_Struct *arg0, f32 *arg1, f32 *arg2, s16 *arg3, u16 *arg4) {
    f32 max;
    u32 t;
    s32 v;
    f64 scale;

    func_8000E5D4(arg0->unk0);
    *arg4 = (u32)((f32)(u32)(((func_8000E748_StructD *)&D_800631E0)->unkA & 0xFFFF7FFF & 0xFFFF) * arg0->unk8 * 1.00000000000000000001 + 0.5);
    *arg3 = *arg4 | (((func_8000E748_StructD *)&D_800631E0)->unkA & 0x8000);
    v = *arg4;
    if (v > 0) {
        *arg4 = v - 1;
        v = *arg4;
    }
    max = (f32)(u32)((func_8000E748_StructD *)&D_800631E0)->unk8 - 1.0;
    if (v != 0) {
        *arg1 = (f32)(u32)arg0->unk4 * max / (f32)(u32)v;
        *arg2 = *arg1 - (s32)*arg1;
        if (max <= *arg1) {
            *arg1 = max;
            *arg2 = 0.0f;
        }
    } else {
        *arg1 = 0.0f;
        *arg2 = 0.0f;
    }
    return max;
}
