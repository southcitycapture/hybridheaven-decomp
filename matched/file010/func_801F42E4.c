#include "context.h"

typedef struct func_801F42E4_Inner {
    u8 pad0[6];
    s16 unk6;
    u8 pad1[2];
    s16 unkA;
} func_801F42E4_Inner;
typedef struct func_801F42E4_Struct {
    u8 pad0[0x38];
    func_801F42E4_Inner *unk38;
    u8 pad1[0x94 - 0x3C];
    s16 unk94;
    s16 unk96;
    s16 unk98;
} func_801F42E4_Struct;

void func_801F42E4(func_801F42E4_Struct *arg0, u16 arg1) {
    s16 sp26;
    s16 y;

    arg0->unk98 = arg0->unk98 + 1;
    if ((arg0->unk98 % 100) == 0) {
        sp26 = (f64)func_8012C6B4(arg1) - arg1 * 0.5;
        y = (f64)func_8012C6B4(arg1) - arg1 * 0.5;
        arg0->unk94 = (f64)arg0->unk38->unk6 / 10.0 + (f64)sp26;
        arg0->unk96 = (f64)arg0->unk38->unkA / 10.0 + (f64)y;
    }
}
