#include "common.h"

extern void func_801BF628(s32, s32 *);
extern void func_801C839C(void);

s32 func_801E62F0(s32 arg0, s32 arg1) {
    s32 sp18[126];

    func_801BF628(3, sp18);
    if (sp18[3] >= 2) {
        return 1;
    }
    func_801C839C();
    return 0;
}
