#include "context.h"
extern u8 D_800CBB20;
typedef struct { u16 a; s16 b; u8 c; u8 p; } func_8002096C_Struct;
extern func_8002096C_Struct D_800CBAF0[];

void func_8002096C(arg0, arg1, arg2)
u16 arg0;
u8 arg1;
s16 arg2;
{
    func_8002096C_Struct *p;
    s32 n = D_800CBB20;
    if (n < 8 && arg0 != 0 && arg1 < 3) {
        p = &D_800CBAF0[n];
        p->a = arg0;
        p->b = arg2;
        p->c = arg1;
        D_800CBB20 = n + 1;
        D_800CBAB1 = 0;
    }
}
