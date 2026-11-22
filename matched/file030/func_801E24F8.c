#include "common.h"

extern s32 D_801EB580;
extern void D_8038BD88(f32, f32, s32);
extern s32 func_801C0B8C(u64);
extern void func_8038BD50(f32, f32, s32);
extern void func_8038BED4(void);
extern void func_8038D28C(s32);
s32 func_801E24F8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1CFDE0) != 0) {
        func_8038BD50((-43.5999985f), 29.8999996f, 0x42A13333);
        D_8038BD88((-59.7000008f), 14.6000004f, 0x42746666);
        D_801EB580 = 0;
        func_8038BED4();
        func_8038D28C(0x252);
        return 0x19;
    }
    return 0x18;
}
