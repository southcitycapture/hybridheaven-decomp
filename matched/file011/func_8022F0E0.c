#include "context.h"

extern f64 D_8023FAE8;
extern f64 D_8023FAF0;

struct func_8022F0E0_Struct {
    u8 pad0[0x50];
    u16 unk50;
    u8 pad52[0x8E - 0x52];
    u16 unk8E[6];
    u8 pad9A[2];
    u16 unk9C;
    u8 pad9E[0x2DF - 0x9E];
    u8 unk2DF;
    u8 pad2E0[0x2F0 - 0x2E0];
    u8 unk2F0;
};

s32 func_8022F0E0(void *arg) {
    struct func_8022F0E0_Struct *arg0 = arg;
    s16 sum;
    u8 i;
    u16 *p;
    s32 mask;
    s32 j;
    f32 f;

    sum = 0;
    for (i = 0, p = arg0->unk8E, mask = arg0->unk2F0; i < 6; i++, p++) {
        j = i;
        if ((u32)mask & (1 << j)) {
            sum += *p;
        }
    }
    f = ((f64)sum * D_8023FAE8) / (f64)arg0->unk2DF + D_8023FAF0;
    arg0->unk9C = (u32)((f32)arg0->unk50 * f + 0.5);
    return arg0->unk9C;
}
