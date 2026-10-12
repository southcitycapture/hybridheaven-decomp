#include "context.h"

extern void func_80253A80();
extern s32 func_80133A24(s32);
extern s32 func_80126944(void);
extern void func_801C3B2C(s32);
extern void func_801C3B10(s32);
extern void func_801FBB30(void);
extern void func_800058DC(void *, void *);
extern void func_80252E78();

void func_80252E0C(s32 arg0) {
    func_80253A80();
    if (func_80133A24(0x136) != 0) {
        if (func_80126944() != 1) {
            func_801C3B2C(2);
            func_801C3B10(1);
            func_801FBB30();
            func_800058DC(arg0, func_80252E78);
        }
    }
}
