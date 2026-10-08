#include "context.h"

struct func_8037F58C_Struct {
    u8 pad0[6];
    s16 unk6;
    u8 pad8[0x375 - 8];
    u8 unk375;
};

void func_8037F58C(struct func_8037F58C_Struct *arg0) {
    s16 temp_v0;

    temp_v0 = arg0->unk6;
    if (temp_v0 == 0x1F4) {
        arg0->unk375 = 4;
        return;
    }
    if (temp_v0 >= 0x190) {
        arg0->unk375 = 3;
        return;
    }
    if (temp_v0 >= 0x12C) {
        arg0->unk375 = 2;
        return;
    }
    if (temp_v0 >= 0xC8) {
        arg0->unk375 = 1;
        return;
    }
    arg0->unk375 = 0;
}
