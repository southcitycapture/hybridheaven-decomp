#include "common.h"
extern u8 D_802407E8[];
typedef struct func_80234450_Struct {
    u8 pad[0x8];
    u8 unk8;
    u8 pad2[0x3];
} func_80234450_Struct;
typedef struct func_80235E00_Struct {
    u8 pad[0xA5];
    s8 unkA5;
} func_80235E00_Struct;
extern void (*D_80216D10[])(void *, s32);


/* Search downward from entry arg1 for one with a nonzero unk8 and select it.
   Keep the loop opening on the function brace's line: IDO's output order depends on it. */
void func_80235E00(func_80235E00_Struct *arg0, s8 arg1)
{   while (1) {
        if (((func_80234450_Struct *)D_802407E8)[arg1].unk8 > 0) {
            arg0->unkA5 = arg1;
            return;
        }
        if (arg1 <= 0) {
            return;
        }
        arg1--;
    }
}
