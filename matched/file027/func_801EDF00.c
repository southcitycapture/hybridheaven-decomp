#include "context.h"

struct func_801EDF00_Struct {
    u8 pad[0x3C];
    s32 unk3C;
};

s32 func_801EDF00(s32 arg0, s32 arg1) {
    if (((struct func_801EDF00_Struct *) func_801BF6B0(4))->unk3C >= 8) {
        func_801CC4D8(3, 0x02A80004, 0, 0x1001, 20.0f);
        return 5;
    }
    return 4;
}
