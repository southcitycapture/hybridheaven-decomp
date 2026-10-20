#include "context.h"

struct func_80243CA4_Struct {
    u8 pad0[0x34];
    s16 *unk34;
    u8 pad38[0xA];
    u8 unk42;
};

extern void func_80243CF4(void);

void func_80243CA4(struct func_80243CA4_Struct *arg0, s32 arg1) {
    s16 *temp_v0;

    temp_v0 = arg0->unk34;
    if (++arg0->unk42 >= 0xB) {
        arg0->unk42 = 0;
        temp_v0[6] = 0x100;
        func_800058DC((s32)arg0, func_80243CF4);
    }
}
