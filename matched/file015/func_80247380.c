#include "context.h"


extern struct func_802466A4_Vec D_802529B8;
extern void func_80247498();

void func_80247380(struct func_80247380_Struct *arg0, volatile s32 arg1) {
    u16 temp_v0;
    u16 temp_v0_2;
    s32 value = arg0->unk5C;

    if (func_80010550(arg1, value) != 0) {
        if (arg0->unk92++ >= 2) {
            func_800058DC(arg0, func_80247498);
        } else {
            arg0->unk3C = 0;
            func_8013A1B4(arg1, D_802529B8, 0xFFFFFF);
        }
    }
    if ((arg0->unk3C++ == 0x13) && (D_801BBCD8->unk2C->unk38 < 500.0f)) {
        func_80020718(0x1B6);
    }
    if (func_80133A24(0x77) != 0) {
        func_801339D0(0x77);
        func_800058DC(arg0, func_8024770C);
    }
}
