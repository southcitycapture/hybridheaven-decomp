#include "common.h"

typedef struct func_80126794_Struct {
    u8 pad[0x181];
    u8 unk181;
    u8 unk182;
    u16 unk184;
    u8 unk186;
    u8 unk187;
    u32 unk188;
} func_80126794_Struct;

extern func_80126794_Struct D_801BBBF0;

void func_80126794(void) {
    D_801BBBF0.unk181 = 0;
    D_801BBBF0.unk182 = 0;
    D_801BBBF0.unk184 = 0;
    D_801BBBF0.unk186 = 0;
    D_801BBBF0.unk187 = 0;
    D_801BBBF0.unk188 = 0;
}
