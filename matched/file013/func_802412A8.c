#include "context.h"

struct func_802412A8_Struct {
    u8 pad[0x90];
    s16 unk90;
};

extern void func_802412FC();

void func_802412A8(struct func_802412A8_Struct *arg0, s32 arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk90;
    arg0->unk90 = temp_v0 - 1;
    if (temp_v0 == 0) {
        arg0->unk90 = 0x3F;
        func_80020744(0x1C4);
        func_800058DC(arg0, func_802412FC);
    }
}
