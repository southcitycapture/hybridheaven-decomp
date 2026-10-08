#include "context.h"

extern s32 func_80010550(void *, s32, void *);
extern s32 func_800178E8(void);
extern void func_80133980(s32);
extern void func_8024FAD8(void);

void func_8024FA7C(void *arg0, void *arg1) {
    s32 tmp = *(s32 *)((u8 *)arg0 + 0x5C);

    if (func_80010550(arg1, tmp, arg1) != 0) {
        if (func_800178E8() != 0) {
            func_80133980(0x77);
            func_800058DC(arg0, &func_8024FAD8);
        }
    }
}
