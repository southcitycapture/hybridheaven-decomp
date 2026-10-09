#include "context.h"
extern void D_8038BD88(f32, f32, f32);
extern void func_8038BD50(f32, f32, f32);
extern void func_8038BE98(f32);

extern void D_8038C158(void);
extern f32 D_801E50B4;
extern f32 D_801E50B8;
extern f32 D_801E50BC;
extern f32 D_801E50C0;

s32 func_801E2684(s32 arg0, s32 arg1) {
    if (func_801C0B8C((u64)0x021DAFE0) != 0) {
        D_8038C158();
        return 0xC;
    }
    func_8038BE98(D_801E50B4);
    func_8038BD50(D_801E50B8, D_801E50BC, 9.5f);
    D_8038BD88(45.5f, D_801E50C0, 46.0f);
    return 0xB;
}
