#define func_801F5574 func_801F5574_decl
#include "context.h"
#undef func_801F5574

extern void func_80133980(u32);
extern void func_801339D0(u32);

s32 func_801F5574(arg0, arg1)
void *arg0;
u8 arg1;
{
    u32 v;

    v = ((func_801F5490_Struct *)arg0)->unk38->unk14 >> 16;
    if (v != 0) {
        if (arg1 == 1) {
            func_80133980(v * 1);
            return 1;
        }
        if (arg1 == 0) {
            func_801339D0(v * 1);
        }
        return 1;
    }
    return 0;
}
