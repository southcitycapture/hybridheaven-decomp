#include "context.h"

struct func_801E3300_Struct {
    u8 pad[0x24];
    s32 unk24;
};

s32 func_801E3300(s32 arg0, s32 arg1) {
    if (((struct func_801E3300_Struct *) func_801BF6B0(4))->unk24 < 6) {
        D_801E57E8 = 0;
        return 2;
    }
    return 3;
}
