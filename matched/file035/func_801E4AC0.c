#include "context.h"

extern void func_801BF628(s32, void *);
extern s32 D_801E8580;
extern s32 D_801E8584;

s32 func_801E4AC0(s32 arg0, s32 arg1) {
    s32 sp18[0x1F8 / 4];

    func_801BF628(3, sp18);
    if (sp18[3] >= 2) {
        D_801E8580 = 0;
        D_801E8584 = 0;
        return 1;
    }
    return 0;
}
