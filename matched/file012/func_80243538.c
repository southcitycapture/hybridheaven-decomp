#include "context.h"

struct func_80243538_Struct {
    u8 pad0[0x34];
    u16 *unk34;
    u8 pad38[0xA];
    u8 unk42;
};

extern u8 func_802436A4[];

void func_80243538(struct func_80243538_Struct *arg0, s32 arg1) {
    u16 *temp_v0;

    temp_v0 = arg0->unk34;
    if (++arg0->unk42 >= 0x15) {
        arg0->unk42 = 0;
        temp_v0[2] = 0x8000;
        func_800058DC((s32)arg0, func_802436A4);
    }
}
