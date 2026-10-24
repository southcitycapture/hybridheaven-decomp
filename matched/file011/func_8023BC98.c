#include "context.h"

struct func_8023BC98_Node {
    u8 pad0[0x10];
    struct func_8023BC98_Node *unk10;
    u8 pad14[0x30 - 0x14];
    struct func_8023BC98_Sub *unk30;
};
struct func_8023BC98_Sub {
    u8 pad0[0xB];
    u8 unkB;
};
struct func_8023BC98_Obj {
    u8 pad0[0x24];
    struct func_8023BC98_Node *unk24;
    u8 pad28[0x98 - 0x28];
    u8 *unk98;
};
extern void D_8023A9D8(s32, s16, s32, void *);
extern void D_8023B3CC(s32);
extern void D_80147D60(s32, s16, void *, void *);

#define arg0 ((struct func_8023BC98_Obj *)argp)
void func_8023BC98(void *argp, s32 arg1) {
    u8 *a3;
    s16 t;
    struct func_8023BC98_Node *p;

    p = arg0->unk24;
    a3 = arg0->unk98;
    if (arg0->unk24 != NULL) {
        t = arg0->unk24->unk30->unkB;
    }
    t = t - 0x19;
    if (t > 0) {
        arg1 = t * 1;
        D_8023A9D8(t & 0xFF, t, arg1, a3);
        D_8023B3CC(t & 0xFF);
        while (p != NULL) {
            if (t < p->unk30->unkB) {
                p->unk30->unkB = arg1;
            }
            p = p->unk10;
        }
    } else {
        D_80147D60(8, t, arg0, a3);
        *(s16 *)(a3 + 0x44) = 0xA;
        func_800058DC(arg0, func_8023A154);
    }
}
#undef arg0
