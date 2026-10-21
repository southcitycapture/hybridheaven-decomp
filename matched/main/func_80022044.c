#include "context.h"

extern void func_80003824(void *, void *, s32);
extern void func_80022128(u16, s32);
extern u8 *D_800479E8[];
extern u8 *D_80047BF4[];
extern u8 D_8008DC18;
extern s8 D_800CBB21;
extern u16 D_800CBB4C;
extern u8 D_800CBB4E;
typedef struct func_80022044_StructBank {
    u8 bank;
    u8 pad[3];
} func_80022044_StructBank;
extern func_80022044_StructBank D_80153072[];
extern u8 D_801B6600[];
extern u8 D_801B8600[];

void func_80022044(void) {
    s32 size;
    u8 *source;
    s32 index;
    s32 bank;

    if (--D_800CBB4E == 0) {
        if (D_8008DC18 != 0) {
            D_800CBB4E = 1;
            return;
        }
        D_800CBB21 = D_800CBB4C;
        index = (u16)(D_800CBB4C - 0x10);
        size = D_80047BF4[index] - D_800479E8[index];
        bank = D_80153072[index].bank;
        if (bank != 0) {
            func_80003824(D_800479E8[index], D_801B8600 + (bank << 12) - 0x1000, size);
        } else {
            func_80003824(D_800479E8[index], D_801B6600, size);
        }
        func_80022128(D_800CBB4C, 5);
        D_800CBB4C = 0;
    }
}
