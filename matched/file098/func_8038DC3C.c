#include "context.h"

struct func_8038DC3C_Struct1 {
    u8 pad[6];
    s16 unk6;
};

struct func_8038DC3C_Struct2 {
    u8 pad[0xA5];
    u8 unkA5;
};

void func_8038DC3C(struct func_8038DC3C_Struct2 *arg0, struct func_8038DC3C_Struct1 *arg1) {
    if (arg1->unk6 >= 0x64) {
        arg0->unkA5 = 2;
        return;
    }
    arg0->unkA5 = 0;
}
