#include "context.h"
extern s32 D_801F2CD8;
void func_801CC470(s32, s32, s32, s32, f32);
extern void func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 func_801CE274();
extern s32 func_801CE284();

s32 func_801E58B8(s32 arg0, s32 arg1) {
    if (D_801F2CD8 == 1) {
        goto block_1;
    }
    if (D_801F2CD8 == 2) {
        goto block_2;
    }
    if (D_801F2CD8 == 3) {
        goto block_3;
    }
    return 0x16;
block_1:
    func_801CC4D8(0, 0x0348002D, 0, 0, 5.0f);
    D_801F2CD8 = 2;
    goto done;
block_2:
    if (func_801CE274() == 0) {
        func_801CC470(0, 0x0348002D, 0, 0, 4.0f);
        D_801F2CD8 = 3;
    }
    goto done;
block_3:
    if (func_801CE284() != 0) {
        goto ret17;
    }
    goto done;
ret17:
    return 0x17;
done:
    return 0x16;
}
