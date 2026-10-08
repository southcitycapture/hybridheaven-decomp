#include "context.h"

struct func_8022F558_Struct {
    u8 pad0[0x8];
    s16 unk8;
    s16 unkA;
    u8 pad1[0x2D8 - 0xC];
    u8 unk2D8;
    u8 pad2[0x2DB - 0x2D9];
    u8 unk2DB;
    u8 pad3[0x2F8 - 0x2DC];
    u8 unk2F8;
    u8 pad4[0x312 - 0x2F9];
    s16 unk312;
};

void func_8022F558(struct func_8022F558_Struct *arg0) {
    u8 *var_v0;
    s32 temp_v1;

    if (arg0 == (struct func_8022F558_Struct *) (D_801BBBF0 + 0x44C)) {
        var_v0 = D_801BC3D8;
    } else {
        var_v0 = D_801BC03C;
    }
    temp_v1 = var_v0[0x2D8];
    if ((temp_v1 >= 4 && temp_v1 < 8) || temp_v1 == 8 || arg0->unk2DB != 0) {
        arg0->unk312 = 0;
        return;
    }
    if (temp_v1 == 2 || arg0->unk2F8 == 3 || arg0->unk2F8 == 4) {
        arg0->unk312 = (s16) ((s32) ((arg0->unk8 - arg0->unkA) * 0x64) / arg0->unk8);
    }
}
