#include "context.h"

extern void func_80246D34();


void func_80246CDC(struct func_80246CDC_Struct *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = arg0->unk5C;
    if (func_80010550(arg1, temp_a1) != 0) {
        arg0->unk90 = 0;
        func_80011198(arg1, temp_a1);
        func_800058DC(arg0, func_80246D34);
    }
}
