#include "context.h"

struct func_801E5080_Struct {
    u8 pad[0xC];
    s32 unkC;
};

extern struct func_801E5080_Struct *func_801BF6B0(s32);

s32 func_801E5080(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)->unkC >= 0x1A) {
        func_801CC4D8(0, 0x03480074, 0, 0, 3.0f);
        return 0x1C;
    }
    return 0x1B;
}
