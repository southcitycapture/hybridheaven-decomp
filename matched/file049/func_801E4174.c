#include "context.h"
extern s32 D_801E7144;
extern void func_801CC4D8(s32, s32, s32, s32, f32);

s32 func_801E4174(s32 arg0, s32 arg1) {
    if (D_801E7144 >= 0xB) {
        func_801CC4D8(0, 0x01B8001B, 0, 0, 5.0f);
        return 0xD;
    }
    D_801E7144 += 1;
    return 0xC;
}
