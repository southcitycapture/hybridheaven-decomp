#include "context.h"

extern u16 D_801BBC20;
extern void func_801FE840();

void func_801FE790(struct func_801FE790_Struct *arg0, struct func_801FE790_StructObj **arg1) {
    s16 *temp;
    s16 old;
    s32 index;
    s32 i;

    if (arg0->unkB0++ < 8) {
        i = 2;
        index = 2;
        if ((s32)D_801BBC20 % 3 == 0) {
            do {
                i = (i + 1) & 0xFF;
                temp = (arg1 + arg0->unkAB)[index]->unk30;
                index = i;
                *temp += 1;
            } while (i < 10);
        }
    } else {
        arg0->unkB0 = 0xF8;
        func_800058DC(arg0, func_801FE840);
    }
}
