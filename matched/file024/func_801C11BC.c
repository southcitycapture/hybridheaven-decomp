#include "context.h"

struct func_801C11BC_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
};

extern struct func_801C11BC_Struct D_801CC9D0;
extern s32 D_801BBC2C;
extern s32 D_801CC8A4;
s32 func_8012C4D0(s32, struct func_801C11BC_Struct, s32);

s32 func_801C11BC(arg0)
s8 arg0;
{
    if (D_801CC8A4 == 0) {
        D_801CC8A4 = func_8012C4D0(D_801BBC2C, D_801CC9D0, 3);
        if (D_801CC8A4 != 0) {
            ((s8 *)D_801CC8A4)[0x90] = arg0;
            return 1;
        }
    }
    return 0;
}
