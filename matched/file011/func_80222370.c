#include "context.h"

extern void func_80011258();
extern void func_800113D0();
extern void func_80222B08();

void func_80222370(s32 arg0, s32 arg1) {
    s32 data;
    struct func_8021F9C8_Struct *player;

    data = ((struct func_8021F9C8_Actor *)arg0)->unk5C;
    if (arg0 == D_801BBBF0.unkDC) {
        player = &D_801BC03C;
    } else {
        player = &D_801BC3D8;
    }
    player->unk392 = 0;
    if (D_801BBBF0.unk1031 != 0xF) {
        func_80011258(arg1, data + 0x22);
        func_800113D0(arg1, data + 0x22);
        if (func_80010550(arg1, data) != 0) {
            if (player->unk2 <= 0 || ((*(u32 *)&player->unk30 << 1) >> 30) != 0) {
                func_800058DC(arg0, func_80222B08);
                return;
            }
            func_800058DC(arg0, func_80222708);
        }
    }
}
