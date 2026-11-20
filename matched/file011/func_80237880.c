#include "common.h"
struct func_80237834_Part {
    u8 pad[0xB];
    u8 unkB;
};
struct func_80237834_Node {
    u8 pad[0x30];
    struct func_80237834_Part *unk30;
};
struct func_80237834_Arg {
    u8 pad[0x24];
    struct func_80237834_Node *unk24;
};
extern void (*D_80216D10[])(void *, s32);

extern s32 func_80005700();
extern s32 D_8023E3C0;

void func_80237880(struct func_80237834_Arg *arg0, s32 arg1) {
    s16 value;

    value = arg0->unk24->unk30->unkB - 0x14;
    if (value < 0) {
        D_8023E3C0 = 0;
        func_80005700();
    } else {
        arg0->unk24->unk30->unkB = value;
    }
}
