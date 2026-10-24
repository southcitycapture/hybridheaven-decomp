#include "context.h"

struct func_8038CFC0_S2 {
    u8 pad[0x5C];
    u8 *unk5C;
};
struct func_8038CFC0_G {
    u8 pad[0xDC];
    struct func_8038CFC0_S2 *unkDC;
    u8 padE0[0xC];
    struct func_8038CFC0_S2 *unkEC;
};
struct func_8038CFC0_Struct {
    u8 pad0[0xC];
    struct func_8038CFC0_Struct *unkC;
    u8 pad10[0x86];
    s16 unk96;
};
extern struct func_8038CFC0_G D_801BBBF0;
extern u8 func_8038D048[];
extern s32 D_80229500(void *, void *, void *);

void func_8038CFC0(struct func_8038CFC0_Struct *arg0, s32 arg1) {
    struct func_8038CFC0_S2 *t;
    u8 *v1;

    t = D_801BBBF0.unkDC;
    v1 = (u8 *)arg0->unkC->unkC;
    if ((u8 *)t == v1) {
        v1 = t->unk5C;
    } else {
        v1 = D_801BBBF0.unkEC->unk5C;
    }
    D_80229500((void *)((s32)arg0 * 1), &D_801BBBF0, arg0);
    v1[0x9C] = 1;
    arg0->unk96 = func_8022B640(8) << 10;
    func_800058DC(arg0, func_8038D048);
}
