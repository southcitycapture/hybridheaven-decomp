#include "common.h"

extern void D_8038BD88(f32, f32, s32);
extern void func_8038BD50(f32, f32, s32);
extern void func_8038BED4(void);
extern void func_8038D28C(s32);
extern s32 D_801EB580;
extern f32 D_801EC538;
extern f32 D_801EC53C;
extern f32 D_801EC540;
extern f32 D_801EC544;

s32 func_801E24F8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1CFDE0) != 0) {
        func_8038BD50(D_801EC538, D_801EC53C, 0x42A13333);
        D_8038BD88(D_801EC540, D_801EC544, 0x42746666);
        D_801EB580 = 0;
        func_8038BED4();
        func_8038D28C(0x252);
        return 0x19;
    }
    return 0x18;
}
