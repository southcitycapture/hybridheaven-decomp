#include "context.h"

struct func_801E7F54_Struct {
    u8 pad[0x24];
    s32 unk24;
};

s32 func_801E7F54(s32 arg0, s32 arg1) {
    if (((struct func_801E7F54_Struct *)func_801BF6B0(4))->unk24 >= 0x32) {
        func_801CC470(0, 0x1B80039, 0, 0, 3.0f);
        return 0x36;
    }
    return 0x35;
}
