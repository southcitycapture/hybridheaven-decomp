#include "context.h"
struct func_80139034_Struct { u8 pad[0x22A]; u16 unk22A; };
extern struct func_80139034_Struct D_801BBBF0;
extern void (*D_8017ACE0[])();

void func_80139034(struct func_80138F60_Struct *arg0) {
    void (*f)();

    if ((u16)(++D_801BBBF0.unk22A) > 0) {
        f = D_8017ACE0[arg0->unk38->unk10 >> 24];
        if (f != NULL) {
            f(arg0);
        }
        func_80005700(arg0);
    }
}
