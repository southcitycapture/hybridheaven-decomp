#include "context.h"

struct func_801E4E80_Struct {
    u8 pad[0xC];
    s32 unkC;
};

extern struct func_801E4E80_Struct *func_801BF6B0(s32 a0);
extern s32 D_801E6B48;

s32 func_801E4E80(s32 arg0, s32 arg1) {
    if (func_801BF6B0(0)->unkC >= 0x17) {
        func_801CC4D8(0, 0x03480061, 0, 0, 3.0f);
        D_801E6B48 = 0;
        return 0x19;
    }
    return 0x18;
}
