#include "context.h"

struct func_8001F7B0_Struct {
    u8 pad[0x28];
    u16 unk28;
};

s32 func_8001F7B0(struct func_8001F7B0_Struct *arg0) {
    s32 result = 0;

    if (arg0->unk28 & 2) {
        result = 1;
        goto end;
    }
    result = 0;
end:
    return result;
}
