#include "context.h"

s32 func_8014150C(u8 arg0, u8 *arg1);

typedef struct func_8013E620_Struct {
    u8 pad[4];
    u8 unk4, unk5, unk6, unk7;
    u16 unk8;
    u8 unkA, unkB;
} func_8013E620_Struct;

#define F8013E620_Q ((func_8013E620_Struct *)(D_801BEBD8 + i * 8))

s32 func_8013E620(void) {
    s32 i;
    s32 v;

    v = 0;
    if (func_8014150C(1, D_801BEBDC) == 0) {
        for (i = 0; i < 4; i++) {
            if ((F8013E620_Q->unk4 == 1) && (F8013E620_Q->unk6 == 0xFF)) {
                if (F8013E620_Q->unkB == 0) v |= 1;
                if (F8013E620_Q->unkB == 1) v |= 2;
                if (F8013E620_Q->unkB == 2) v |= 4;
            }
        }
    }
    return v;
}
