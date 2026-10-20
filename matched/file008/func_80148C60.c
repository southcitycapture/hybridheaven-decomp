#include "context.h"

typedef struct func_80148C60_Struct {
    u8 pad0[0x10];
    struct func_80148C60_Struct *unk10;
    u8 pad14[0xE];
    u8 unk22;
} func_80148C60_Struct;

void func_80148C60(func_80148270_Struct *arg0, func_80148C60_Struct *arg1, u8 arg2) {
    s32 i;
    s32 previous;

    i = 0;
    if (arg2 > 0) {
        previous = 0;
        do {
            i = (i + 1) & 0xFF;
            if (previous == arg0->unk91) {
                arg1->unk22 = 1;
            } else {
                arg1->unk22 = 0;
            }
            previous = i;
            arg1 = arg1->unk10;
        } while (i < arg2);
    }
}
