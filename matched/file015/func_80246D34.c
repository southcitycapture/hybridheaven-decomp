#include "context.h"

struct func_80246D34_Struct {
    u8 pad[0x5C];
    s32 unk5C;
    u8 pad2[0x30];
    u16 unk90;
};

extern struct func_802466A4_Vec D_80252994;
extern s32 func_80011140(s32, s32, struct func_802466A4_Vec, s32);
extern void func_80246E34(void);

void func_80246D34(struct func_80246D34_Struct *arg0, s32 arg1) {
    s32 sp2C;

    sp2C = arg0->unk5C;
    if ((arg0->unk90++ >= 0x1E) && (func_80011140(arg1, sp2C, D_80252994, 0xF) != 0)) {
        func_8013A1B4(arg1, D_80252994, 0xFFFFFF);
        if (D_801BBCD8->unk2C->unk38 < 500.0f) {
            func_80020718(0x1B5);
        }
        arg0->unk90 = 0;
        func_800058DC(arg0, &func_80246E34);
    }
}
