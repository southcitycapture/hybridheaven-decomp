#define LP(p, l) LQ(p, l)
#define LQ(p, l) p##_##l
#define func_80228ABC LP(fA, __LINE__)
#include "context.h"
#undef func_80228ABC
extern void func_801470E8(s32 a, s32 b, s32 c, u8 d);
extern u8 B_801BEC68[];

void func_802281BC(s32 arg0, u8 arg1)
{
    func_801470E8(arg0, B_801BEC68[5], 2, arg1);
    func_801470E8(arg0, B_801BEC68[1], 2, arg1);
    func_801470E8(arg0, B_801BEC68[0x1A], 4, arg1);
    func_801470E8(arg0, B_801BEC68[0x1C], 4, arg1);
    func_801470E8(arg0, B_801BEC68[0x12], 2, arg1);
    func_801470E8(arg0, B_801BEC68[0xE], 2, arg1);
    func_801470E8(arg0, B_801BEC68[0x1B], 4, arg1);
    func_801470E8(arg0, B_801BEC68[0x1D], 4, arg1);
}
