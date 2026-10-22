#include "context.h"

struct func_8022F248_StructA {
    u16 a[3];
};
struct func_8022F248_Struct {
    u8 pad0[0x8E];
    u16 unk8E[6];
    u8 pad1[0x2B8 - 0x9A];
    s16 unk2B8[6];
    u8 pad2[0x2F0 - 0x2C4];
    u8 unk2F0;
};
extern struct func_8022F248_StructA D_8023E31C;

void func_8022F248(struct func_8022F248_Struct *arg0, u16 arg1) {
    struct func_8022F248_StructA sp38;
    f32 sum;
    f32 max;
    u16 *p;
    f32 sp14[6];
    u8 i;
    s16 k;
    s16 *r;

    sp38 = D_8023E31C;
    sum = 0.0f;
    max = 0.0f;
    if (arg0->unk2F0 != 0) {
        for (i = 0, p = arg0->unk8E; i < 6; i++, p++) {
            sp14[i] = *p;
            if (sp14[i] < 1.0) {
                sp14[i] = 1.0f;
            }
            if (arg0->unk2F0 & (1 << i)) {
                if (max < sp14[i]) {
                    max = sp14[i];
                }
            }
        }
        for (k = 0; k < 6; k++) {
            sp14[k] = max / sp14[k];
            if (arg0->unk2F0 & (1 << k)) {
                sum += sp14[k];
            }
        }
        if (sum == 0.0f) {
            sum = 1.0f;
        }
        max = (f32)arg1 / sum;
        for (i = 0, r = arg0->unk2B8; i < 6; i++, r++) {
            if (arg0->unk2F0 & (1 << i)) {
                k = sp14[i] * max;
                *r -= k;
            }
        }
    }
}
