#include "context.h"

#define func_80017064 D_80017064
extern void D_80017064(u16);

s32 func_8012CF8C(arg0, arg1, arg2, arg3)
s32 arg0;
s32 *arg1;
u16 arg2;
s32 arg3;
{
    s32 pad;
    s32 sp20;
    u16 sp1E;
    func_8012C97C_Struct *t;

    t = D_80171CEC[arg2];
    sp20 = t->unk4[arg3];
    if ((sp20 & 0x0F000000) == 0x0D000000) {
        sp1E = t->unk0[1];
        func_80017064(sp1E);
        *arg1 = (func_80005204(sp1E) + sp20 + 0x80000000) & 0xFFFFFF;
    } else {
        sp1E = t->unk0[0];
        func_80017064(sp1E);
        *arg1 = (func_80005204(sp1E) + sp20 + 0x80000000) & 0xFFFFFF;
    }
}
#undef func_80017064
