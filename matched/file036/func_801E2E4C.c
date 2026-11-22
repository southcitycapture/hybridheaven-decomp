#include "common.h"

typedef struct func_801E2E4C_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[4];
    f32 unk14;
    f32 unk18;
} func_801E2E4C_Struct;
extern func_801E2E4C_Struct D_801E5200;
extern void D_8038BD88(f32, f32, f32);
s32 func_801C0B8C(u64 time);
extern void func_801C7A74(void *arg0);
extern void func_8038BD50(f32, f32, f32);
extern void func_8038BE98(f32);
s32 func_801E2E4C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x3CE04F7) != 0) {
        D_801E5200.unk4 = 50.0f;
        D_801E5200.unk8 = 50.0f;
        D_801E5200.unk0 = 40.0f;
        D_801E5200.unkC = 0.5f;
        D_801E5200.unk14 = 0.0399999991f;
        D_801E5200.unk18 = 0.200000003f;
        func_801C7A74(&D_801E5200);
        return 0x14;
    }
    func_8038BE98(9.19999981f);
    func_8038BD50(46.4000015f, 16.7000008f, -59.6f);
    D_8038BD88(46.4000015f, 16.8999996f, -97.5f);
    return 0x13;
}
