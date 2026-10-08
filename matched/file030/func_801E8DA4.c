#include "context.h"

struct func_801E8DA4_Struct {
    u8 pad[0xC];
    s32 unkC;
};

s32 func_801E8DA4(s32 arg0, s32 arg1) {
    if (((struct func_801E8DA4_Struct *) func_801BF6B0(0))->unkC >= 0xA) {
        return 4;
    }
    return 3;
}
