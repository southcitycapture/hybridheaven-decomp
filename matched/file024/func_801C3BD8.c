#include "context.h"
extern s32 func_8013E794(void);
extern void func_801C3C14();

void func_801C3BD8(s32 arg0, s32 arg1) {
    if (func_8013E794() == 1) {
        func_800058DC(arg0, (void *) func_801C3C14);
    }
}
