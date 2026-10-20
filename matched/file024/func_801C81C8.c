#include "context.h"

typedef struct func_801C81C8_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C81C8_Struct;

extern void func_8012FE50(s32, s32, s32, s32, s32);

void func_801C81C8(func_801C81C8_Struct *arg0, s32 arg1) {
    u16 temp_v0;

    temp_v0 = arg0->unk3C;
    if ((s32)temp_v0 > 0) {
        arg0->unk3C = temp_v0 - 1;
    } else {
        func_8012FE50(0x1C, (*(u16 *)((u8 *)&D_801BBBF0 + 4) = 0xBE), 1, 1, 0);
    }
}
