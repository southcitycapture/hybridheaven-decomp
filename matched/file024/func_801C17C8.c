#include "context.h"

typedef struct func_801C17C8_Struct {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C17C8_Struct;

extern u8 D_801CEB88[];
extern void func_801C184C();
extern void func_801C1A30();

void func_801C17C8(func_801C17C8_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    if (func_801C1334() & 0xB000) {
        func_800058DC((s32) arg0, func_801C1A30);
    }
    temp_v0 = arg0->unk3C;
    arg0->unk3C = temp_v0 - 1;
    if (temp_v0 == 0) {
        arg0->unk3C = 0x384;
        func_8001B204(0, 0x7D0, 0xA2, D_801CEB88);
        func_800058DC((s32) arg0, func_801C184C);
    }
}
