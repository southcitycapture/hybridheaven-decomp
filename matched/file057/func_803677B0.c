#include "context.h"

extern u8 D_80387010;

struct func_80369094_Struct *func_803677B0(arg0)
u16 arg0;
{
    u8 *ptr;

    ptr = &D_80387010;
    while (*ptr != 0x57) {
        if (arg0 == *ptr) {
            return (struct func_80369094_Struct *)ptr;
        }
        ptr += 0x14;
    }
    return (struct func_80369094_Struct *)&D_80387010;
}
