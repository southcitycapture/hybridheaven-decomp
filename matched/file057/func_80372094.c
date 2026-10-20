#include "context.h"

typedef struct func_80372094_Struct {
    u8 pad[0x68];
    u8 *unk68;
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 unk7B;
    u8 unk7C;
} func_80372094_Struct;

struct func_80372198_Struct;
void func_80372198(struct func_80372198_Struct *arg0, s32 arg1);

void func_80372094(func_80372094_Struct *arg0, s32 arg1) {
    s32 var_v0;
    s32 var_v1;
    u8 *sub;
    f32 x;
    f32 y;
    f32 z;
    u8 flag;

    sub = arg0->unk68;
    x = arg0->unk6C;
    y = arg0->unk70;
    z = arg0->unk74;
    flag = arg0->unk78;
    if (arg0->unk7A++ < 3) {
    } else {
        if (sub[0x2F8] >= 3) {
            arg0->unk7C = 0;
            if (flag != 0) {
                var_v0 = 0;
                var_v1 = 0xE0;
            } else {
                var_v0 = 0xFF;
                var_v1 = 0x90;
            }
            func_801CE330(z, 0x12, x, (f32) ((f64) y + 1.0), z, var_v0, var_v1, 0, 0xFF, var_v0, var_v1, 0, 0, 1, 0x14, 0.15625f, 4);
        } else {
            arg0->unk7C = 1;
        }
        arg0->unk7A = 0;
        func_800058DC(arg0, func_80372198);
    }
}
