#include "context.h"

typedef struct func_80023BF4_Struct {
    u8 pad0[6];
    u8 unk6;
    u8 pad7[0x28 - 7];
    s32 unk28;
    u8 pad2C[0x36 - 0x2C];
    s16 unk36;
    u16 unk38;
    u8 pad3A[0xA8 - 0x3A];
    s16 unkA8;
    u8 padAA[0xB0 - 0xAA];
    f32 unkB0;
    u8 padB4[0xC6 - 0xB4];
    s16 unkC6;
} func_80023BF4_Struct;

extern f32 D_80047FD8[];
extern void func_8002AB10(s32, void *, f32);

#define Q ((func_80023BF4_Struct *) D_800CBDA4)

void func_80023BF4(void) {
    f32 *tbl;
    f32 v;
    f32 lo;
    u32 frac;
    s32 x;

    Q->unk6 &= 0xFD;
    x = Q->unkA8 + Q->unk28 + Q->unk38 + Q->unk36;
    x += Q->unkC6;
    if (x < 0) {
        x = 0;
    } else if (x > 0x4800) {
        x = 0x4800;
    }
    frac = x & 0xFF;
    x >>= 8;
    tbl = &D_80047FD8[x];
    v = tbl[1] - tbl[0];
    v = (frac * v) / (f32)0x100;
    v += tbl[0];
    if (v != Q->unkB0) {
        Q->unkB0 = v;
        func_8002AB10(D_800498F0, &D_800CBBE0[D_800CBAB4 * 0x1C], v);
    }
}
