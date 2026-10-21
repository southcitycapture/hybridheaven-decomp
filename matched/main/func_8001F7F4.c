#include "context.h"

struct func_8001F7F4_Struct {
    u8 pad[0x28];
    u16 unk28;
};

s32 func_8001F7F4(struct func_8001F7F4_Struct *arg0) {
    s32 result;

    if (arg0->unk28 & 4) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}
