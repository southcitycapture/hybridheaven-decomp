#include "context.h"

struct func_80256EA8_Inner {
    u8 pad[0x4B];
    u8 unk4B;
};

struct func_80256EA8_Outer {
    u8 pad[0x30];
    struct func_80256EA8_Inner *unk30;
};

void func_80256EA8(s32 arg0, void **arg1) {
    struct func_80256EA8_Inner *temp;
    extern void func_80005700();

    if (func_80133A24(0x13C) != 0) {
        temp = ((struct func_80256EA8_Outer *) *arg1)->unk30;
        temp->unk4B = (u8) (temp->unk4B - 0x28);
        if ((s32) ((struct func_80256EA8_Outer *) *arg1)->unk30->unk4B < 0x28) {
            func_80005700(arg0);
        }
    }
}
