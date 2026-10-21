#include "context.h"

struct func_8001F76C_Struct {
    u8 pad[0x28];
    u16 unk28;
};

s32 func_8001F76C(struct func_8001F76C_Struct *arg0) {
    s32 result;

    if (arg0->unk28 & 1) {
        result = 1;
    } else {
        result = 0;
    }
    return result;
}
