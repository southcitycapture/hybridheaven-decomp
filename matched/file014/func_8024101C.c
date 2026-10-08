#include "context.h"

extern s32 func_8012A564(s32, s32);
extern void func_801268F4(s32);
extern void func_80241064(void);

void func_8024101C(s32 arg0, s32 arg1) {
    if (func_8012A564(arg0, 0x430C0000) != 0) {
        func_801268F4(0);
        func_800058DC((void *) arg0, (void *) func_80241064);
    }
}
