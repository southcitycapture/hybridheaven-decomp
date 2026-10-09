#include "context.h"
extern void D_8038BD88(f32, f32, f32);
extern void func_8038BD50(f32, f32, f32);
extern void func_8038BE98(f32);

extern f32 D_801E51BC;
extern f32 D_801E51C0;
extern f32 D_801E51C4;
extern f32 D_801E51C8;
extern f32 D_801E51CC;
extern f32 D_801E51D0;
extern f32 D_801E51D4;
extern void func_801C7A74(void *arg0);

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

s32 func_801E2E4C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x3CE04F7) != 0) {
        D_801E5200.unk4 = 50.0f;
        D_801E5200.unk8 = 50.0f;
        D_801E5200.unk0 = 40.0f;
        D_801E5200.unkC = 0.5f;
        D_801E5200.unk14 = D_801E51BC;
        D_801E5200.unk18 = D_801E51C0;
        func_801C7A74(&D_801E5200);
        return 0x14;
    }
    func_8038BE98(D_801E51C4);
    func_8038BD50(D_801E51C8, D_801E51CC, -59.6f);
    D_8038BD88(D_801E51D0, D_801E51D4, -97.5f);
    return 0x13;
}
