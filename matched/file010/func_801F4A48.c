#include "common.h"

typedef struct func_801F4A48_Struct {
    u8 pad[0x92];
    u8 unk92;
    u8 unk93;
} func_801F4A48_Struct;

s32 func_801F48C8();

void func_801F4A48(func_801F4A48_Struct *arg0) {
    u8 temp_v0;

    arg0->unk93 = 1;
    if (func_801F48C8(arg0, 0xA) != 0) {
        arg0->unk92 = 0x3C;
        return;
    }
    temp_v0 = arg0->unk92;
    if ((s32) temp_v0 > 0) {
        arg0->unk92 = temp_v0 - 1;
        return;
    }
    arg0->unk93 = 0;
}
