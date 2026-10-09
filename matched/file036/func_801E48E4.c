#include "context.h"
extern s32 D_801E4DB8;
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 func_801D6FB0(void);

s32 func_801E48E4(s32 arg0, s32 arg1) {
    if (func_801D6FB0() == 0) {
        func_801CC470(1, 0x01B80045, 0, 0, 6.0f);
        D_801E4DB8 = 0;
        return 0x27;
    }
    return 0x26;
}
