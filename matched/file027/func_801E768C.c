#include "common.h"

extern void func_801BF628(s32 arg0, s32 *arg1);
extern s32 D_801F4000;

s32 func_801E768C(s32 arg0, s32 arg1) {
    u8 sp18[0x1F8];

    func_801BF628(4, sp18);
    if (*(s32 *)&sp18[0xC] >= 2) {
        D_801F4000 = 0;
        return 1;
    }
    return 0;
}
