#include "context.h"

struct func_8038480C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x56];
    f32 unk94;
    f32 unk98;
    f32 unk9C;
};
extern f32 D_80389C00;
extern f32 D_80389C04;
extern f64 D_80389C08;
extern f64 D_80389C10;
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);

void func_8038480C(struct func_8038480C_Struct *arg0, s32 arg1) {
    s32 cnt;
    s32 a, b, c, d, p, q;
    s32 i;
    f32 k1, k0;

    k1 = 0.0f;
    i = 0;
    cnt = arg0->unk3C++;
    if (cnt == 0) {
        k0 = D_80389C00;
        k1 = D_80389C04;
        for (; i != 16; i++) {
            a = func_8012C6B4(300);
            b = func_8012C6B4(300);
            c = func_8012C6B4(100);
            d = func_8012C6B4(191);
            func_80129FB8(arg0->unk94, arg0->unk98, arg0->unk9C,
                          (a - 150) / 100.0, (b - 150) / 100.0, -((c + 30) / 100.0), k1,
                          255, d + 64, 0, func_8012C6B4(112), 0, 0, 180, -18, k0, 21, 0);
        }
    }
    p = func_8012C6B4(300);
    q = func_8012C6B4(300);
    a = func_8012C6B4(300);
    b = func_8012C6B4(191);
    c = func_8012C6B4(112);
    d = func_8012C6B4(80);
    func_80129FB8((p - 150) / 100.0 + arg0->unk94, (q - 150) / 100.0 + arg0->unk98, (a - 150) / 100.0 + arg0->unk9C,
                  0.0f, 0.0f, 0.0f, 0.0f,
                  255, b + 64, 0, c, 0, 0, 120, -4, d / D_80389C08 + D_80389C10, func_8012C6B4(1), 0);
    if (cnt >= 6) {
        func_80005700(arg0);
    }
}
