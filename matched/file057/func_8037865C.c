#include "context.h"

struct func_8037865C_Struct {
    u8 pad4[4];
    u8 unk4;
    u8 pad5[5];
    u8 unkA;
    u8 pad0B[0x3D];
    u16 unk48;
    u8 pad4A[8];
    u8 unk52;
    u8 unk53;
    u8 unk54;
    u8 unk55;
};
extern struct func_8037865C_Struct D_8017DC40;

void func_8037865C(void) {
    u8 v;

    v = (u32) ((f64) ((f32) (D_8017DC40.unkA + D_8017DC40.unk52 + D_8017DC40.unk53 + D_8017DC40.unk54 + D_8017DC40.unk55 + D_8017DC40.unk4 + 6) / 6.0f) + 0.5);
    if (D_8017DC40.unk48 < v) {
        D_8017DC40.unk48 = v;
    }
}
