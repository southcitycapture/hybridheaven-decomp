#include "context.h"

typedef struct func_80015A64_Struct {
    u8 pad0[0x14];
    s32 unk14;
    u8 pad18[8];
    u16 *unk20;
} func_80015A64_Struct;

void func_80015A64(s32 arg0, func_80015A64_Struct *arg1) {
    s32 r;
    s32 g;
    s32 b;
    s32 a;
    s32 c;
    s32 i;

    for (i = 0; i < arg0; i++) {
        r = func_80016D50(5);
        g = func_80016D50(5);
        b = func_80016D50(5);
        a = func_80016D50(1);
        c = (g << 11) | (r << 6) | (b << 1);
        arg1->unk20[i] = a | c;
        if (arg1->unk14 != 0x80000000 && arg1->unk14 == (arg1->unk20[i] & 0xFFFE)) {
            arg1->unk20[i] &= 0xFFFE;
        }
    }
}
