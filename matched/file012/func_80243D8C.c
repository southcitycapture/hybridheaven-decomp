#include "context.h"

extern void func_80243E2C(s32 arg0, s32 arg1);
struct func_80243D8C_Struct {
    u8 pad0[0x34];
    u16 *unk34;
    u8 pad38[0xA];
    u8 unk42;
};

void func_80243D8C(struct func_80243D8C_Struct *arg0, s32 arg1) {
    u16 *temp_v0;

    temp_v0 = arg0->unk34;
    if (++arg0->unk42 >= 0x15) {
        arg0->unk42 = 0;
        temp_v0[2] = 0x4000;
        func_800058DC((s32)arg0, func_80243E2C);
    }
}
