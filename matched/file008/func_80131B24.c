#include "common.h"
#define CAT_(a, b) a##b
#define CAT(a, b) CAT_(a, b)
#define arg0_
#define func_8013173C_Struct CAT(SA_, __LINE__)
#define SA_134 func_8013173C_Struct
#define SA_142 *x0)(int
#define SA_144 *x1)(int
typedef struct func_8013173C_Struct { u16 unk0; u16 unk2; u16 unk4; } func_8013173C_Struct;
#define arg0 ((func_8013173C_Struct *)arg0_)
void func_80131CC4(u16 *arg0, u16 *arg1, u16 *arg2);

#undef arg0
#undef arg0_
#undef func_8013173C_Struct

#define ADIFF(a, b) ((((a) - (b)) & 0x200) ? ((b) - (a)) : ((a) - (b)))

void func_80131B24(u16 *arg0, u16 *arg1, u16 *arg2, u16 arg3, u16 arg4, u16 arg5) {
    u16 sum;
    u16 sum2;
    u16 d;
    u16 x;
    u16 y;
    u16 z;

    sum = ADIFF(*arg0, arg3) & 0x3FF;
    sum += (u16)ADIFF(*arg1, arg4) & 0x3FF;
    sum += (u16)ADIFF(*arg2, arg5) & 0x3FF;
    x = *arg0;
    y = *arg1;
    z = *arg2;
    func_80131CC4((void *)&x, &y, &z);
    d = ADIFF(x, arg3) & 0x3FF;
    sum2 = d;
    sum2 += (u16)ADIFF(y, arg4) & 0x3FF;
    sum2 += (u16)ADIFF(z, arg5) & 0x3FF;
    if (sum >= sum2) {
        *arg0 = x;
        *arg1 = y;
        *arg2 = z;
    }
}
