#include "common.h"

extern void D_8038BD88(f32, f32, s32);
extern s32 func_801C0B8C(u64);
extern void func_8038BD50(f32, f32, s32);
extern void func_8038BED4(void);
s32 func_801EA8FC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x30D40) != 0) {
        func_8038BED4();
        return 1;
    }
    func_8038BD50((-9.69999981f), (-41.5999985f), 0x41F26666);
    D_8038BD88(1.0f, 21.7000008f, 0xC0133333);
    return 0;
}
