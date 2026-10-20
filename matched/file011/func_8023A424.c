#include "context.h"

extern s32 func_802333FC(s32, u8);
extern u8 D_8024089B;

struct func_8023A424_Struct {
    u8 pad[0x98];
    s32 unk98;
};

s32 func_8023A424(struct func_8023A424_Struct *arg0, u8 arg1) {
    s32 temp;
    u8 value;

    temp = arg0->unk98;
    value = 2;
    if (D_8024089B == 1) {
        value = 4;
    }
    if ((arg1 == 0) || (arg1 == 2)) {
        return 0;
    }
    if (arg1 == 3) {
        value++;
    }
    if (func_802333FC(temp, value) != 0) {
        return 1;
    }
    return 0;
}
