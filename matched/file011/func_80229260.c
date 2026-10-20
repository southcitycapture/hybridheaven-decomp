#include "context.h"

typedef struct func_80229260_StructB {
    u8 pad0[0x38];
    u32 a : 1;
    u32 pad : 2;
    u32 b : 1;
    u32 c : 2;
} func_80229260_StructB;

s32 func_80229260(arg0, arg1, arg2, arg3)
u8 *arg0;
func_80229260_StructB *arg1;
s16 *arg2;
u8 arg3;
{
    if (arg1->a && arg1->b && arg1->c == 2) {
        if (arg3 < arg0[0xA8]) {
            arg2[2] = 0x10;
            arg0[0xA8] = 0;
        } else {
            arg0[0xA8]++;
        }
        return 1;
    }
    arg0[0xA8] = 0;
    return 0;
}
