#include "common.h"

extern s32 func_801CC4D8(s32, s32, s32, s32, f32);
extern s32 func_801CE488(s32);

s32 func_801E635C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x031F0D48) != 0) {
        func_801CC4D8(0, 0x0348005D, 0, 0, 5.0f);
        func_801CE488(1);
        return 0x21;
    }
    return 0x20;
}
