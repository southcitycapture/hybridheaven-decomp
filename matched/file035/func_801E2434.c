#include "context.h"
extern f32 D_801E89E0;
extern f32 D_801E89E4;
extern f32 D_801E89E8;
extern f32 D_801E89EC;
extern f32 D_801E89F0;
extern f32 D_801E89F4;
extern f32 D_801E89F8;
extern f32 D_801E89FC;
extern f32 D_801E8A00;
extern f32 D_801E8A04;
extern f32 D_801E8A08;

s32 func_801E2434(s32 arg0, s32 arg1) {
    f32 a = D_801E89E0, b = D_801E89E4, c = D_801E89E8;
    if (func_8038BEF8(0.0f, 1.0f, 1.6f, 10.3f, a, D_801E89EC, D_801E89F0, a, D_801E89F4, b, c, D_801E89F8, b, c) != 0) {
        func_8038BE98(D_801E89FC);
        func_8038BD50(-15.5f, D_801E8A00, 34.5f);
        D_8038BD88(D_801E8A04, D_801E8A08, -3.0f);
        func_8038BED4();
        func_801CC470(0, 0x03480057, 0, 1, 1.0f);
        return 0xB;
    }
    return 0xA;
}
