#include "context.h"

struct func_802432F8_Struct {
    u8 pad0[0x34];
    u16 *unk34;
    u8 pad38[9];
    u8 unk41;
    u8 unk42;
};

extern void func_8024334C(void);

void func_802432F8(struct func_802432F8_Struct *arg0, s32 arg1) {
    u16 *temp_v0;

    temp_v0 = arg0->unk34;
    if (++arg0->unk42 >= 0x15) {
        arg0->unk42 = 0;
        arg0->unk41 = 0;
        temp_v0[2] = 0x8000;
        func_800058DC((s32)arg0, func_8024334C);
    }
}
