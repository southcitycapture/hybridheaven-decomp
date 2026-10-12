#include "context.h"

struct func_801E6A78_Struct {
    u8 pad0[0x24];
    s32 unk24;
};

s32 func_801E6A78(s32 arg0, s32 arg1) {
    if (((struct func_801E6A78_Struct *)func_801BF6B0(4))->unk24 >= 0x14) {
        func_801CC470(2, 0x03200018, 0, 0, 2.0f);
        return 0x11;
    }
    return 0x10;
}
