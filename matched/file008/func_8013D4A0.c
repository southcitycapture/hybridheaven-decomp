#include "context.h"
typedef struct func_8013D4A0_Struct { u8 pad[0x337]; u8 a[1]; } func_8013D4A0_Struct;
s32 func_80126944(u8, u8);
extern func_8013D4A0_Struct D_801BC03C[];
extern func_8013D4A0_Struct D_801BC3D8[];
extern u8 D_8017E000[];

u8 func_8013D4A0(arg0, arg1)
u8 arg0;
u8 arg1;
{
    func_8013D4A0_Struct *p;
    if (arg1 == 0) {
        p = D_801BC03C;
    } else {
        p = D_801BC3D8;
    }
    if (func_80126944(arg0, arg1) == 1) {
        return p->a[arg0] & 0x7F;
    }
    return D_8017E000[arg0 * 8];
}
