#include "context.h"

struct func_803795D8_Struct {
    u8 pad[0x30];
    u8 unk30;
    u8 pad31[0x396 - 0x31];
    u8 unk396;
};

void func_803795D8(struct func_803795D8_Struct *arg0, u8 arg1, u8 arg2, f32 arg3) {
    arg0->unk396 = (f32) (s32) (arg1 * 0x50 * arg2 / 100) * arg3;
    if (arg0->unk396) {
        arg0->unk30 = (arg0->unk30 & 0xFFE1) | 8;
    }
}
