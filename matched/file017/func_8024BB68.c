#include "context.h"

extern void func_8024CEA0(void);
extern s32 func_80133A24(s32);
extern s32 func_80126944(void);
extern void func_801C3B2C(s32);
extern void func_801C3B10(s32);
extern void func_801FBB30(void);
extern void func_800058DC(s32, void *);
extern void func_8024BBD4(void);

void func_8024BB68(s32 arg0) {
    func_8024CEA0();
    if (func_80133A24(0x133) != 0) {
        if (func_80126944() != 1) {
            func_801C3B2C(2);
            func_801C3B10(1);
            func_801FBB30();
            func_800058DC(arg0, func_8024BBD4);
        }
    }
}
