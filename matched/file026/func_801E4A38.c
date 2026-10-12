#include "context.h"
void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

s32 func_801E4A38(s32 arg0, s32 arg1) {
    if ((*(u8 **)((u8 *)*(u8 **)((u8 *)D_801DAB14 + 0x8) + 0x24) != NULL) && (func_801C0B8C(0x3567E0) != 0)) {
        func_801CC470(0, 0x01B80001, 0, 0x100, 1.0f);
        return 3;
    }
    return 2;
}
