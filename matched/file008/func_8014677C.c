#include "context.h"

typedef struct func_8014677C_StructB {
    u8 pad0[0x2E];
    s16 unk2E;
} func_8014677C_StructB;
typedef struct func_8014677C_StructA {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0x30 - 0x23];
    func_8014677C_StructB *unk30;
} func_8014677C_StructA;

void func_8014677C(func_8014677C_StructA **arg0, u16 arg1, u16 arg2) {
    u8 i;
    s32 pad;
    u8 d[4];
    u8 seen;

    seen = 0;
    for (i = 0; i < 4; i++) {
        d[i] = arg2 % 10;
        arg0[arg1 + i]->unk30->unk2E = d[i] * 8;
        arg2 /= 10;
    }
    for (i = 0; i < 4; i++) {
        if (d[3 - i] == 0 && seen == 0 && i < 3) {
            arg0[arg1 + 3 - i]->unk22 = 0;
        } else {
            seen = 1;
            arg0[arg1 + 3 - i]->unk22 = 1;
        }
    }
}
