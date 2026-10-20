#include "context.h"

extern void func_80005700();

void func_80241AD4(func_802418C4_StructC *arg0, func_802418C4_StructA **arg1) {
    u8 *g;

    arg0->unk94 = arg0->unk94 + 1;
    (*arg1)->unk30->unk48 = ((arg0->unk94 & 1) * 4) + 0xFB;
    (*arg1)->unk30->unk49 = ((arg0->unk94 & 1) * 4) + 0xFB;
    (*arg1)->unk30->unk4A = ((arg0->unk94 & 1) * 4) + 0xFB;
    if (arg0->unk92 == 0) {
        g = (u8 *)&D_801BBBF0;
        g[0xF20] = g[0xF36];
        g[0xF21] = g[0xF37];
        func_80005700();
    }
}
