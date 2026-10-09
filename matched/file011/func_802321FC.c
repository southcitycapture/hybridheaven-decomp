#include "context.h"

struct func_802321FC_Inner {
    u8 pad0[0xA];
    u8 unkA;
};

struct func_802321FC_Struct {
    u8 pad0[0x2D4];
    struct func_802321FC_Inner *unk2D4;
    u8 unk2D8;
    u8 pad1[0x374 - 0x2D9];
    s8 unk374;
};

void func_802321FC(struct func_802321FC_Struct *arg0) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = arg0->unk2D8;
    if ((temp_v0 == 2) || ((temp_v0 >= 4) && (temp_v0 < 9))) {
        temp_v0 = *(s16 *) ((u8 *) arg0 + arg0->unk2D4->unkA * 6 + 0xAA);
        if (temp_v0 < 0) {
            var_v1 = -temp_v0;
        } else {
            var_v1 = temp_v0;
        }
        arg0->unk374 = (s8) (var_v1 / 50);
        return;
    }
    if (temp_v0 == 0x13) {
        arg0->unk374 = 0;
    }
}
