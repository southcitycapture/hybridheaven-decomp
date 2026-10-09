#include "context.h"
extern s32 D_801E8D50;
extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
s32 func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

extern s32 func_801CE274();

s32 func_801E4FB0(s32 arg0, s32 arg1) {
    if (D_801E8D50 == 0) {
        goto block_a;
    }
    if (D_801E8D50 == 1) {
        goto block_b;
    }
    return 0x1A;
block_a:
    func_801CC4D8(0, 0x02A80025, 0, 0x1000, 12.0f);
    D_801E8D50 = 1;
    goto done;
block_b:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x02A80025, 0, 0x1000, 1.5f);
        return 0x1B;
    }
done:
    return 0x1A;
}
