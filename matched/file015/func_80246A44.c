#include "context.h"
struct func_80246B38_Struct {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad1[0x30];
    s16 unk90;
};
extern struct func_80246B38_StructA *D_801BBCD8;
void func_80246B38(struct func_80246B38_Struct *arg0, s32 arg1);

extern s32 func_80011140(s32, s32, struct func_802466A4_Vec, s32);

void func_80246A44(func_802469F8_Struct *arg0, s32 arg1) {
    s32 sp24;
    u16 temp_v0;
    s32 condition;

    sp24 = arg0->unk5C;
    condition = arg0->unk90++ >= 0x1E;
    if (condition && (func_80011140(arg1, sp24, D_8025294C, 0x14) != 0)) {
        func_8013A1B4(arg1, D_8025294C, 0xFFFFFF);
        if (D_801BBCD8->unk2C->unk38 < 500.0f) {
            func_80020718(0x1B5);
        }
        func_800058DC(arg0, func_80246B38);
    }
}
