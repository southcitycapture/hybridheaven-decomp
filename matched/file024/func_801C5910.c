#include "context.h"

extern u8 D_801CC8CC;
extern void func_801C5944();

void func_801C5910(s32 arg0, s32 arg1) {
    if (D_801CC8CC == 0) {
        func_800058DC(arg0, func_801C5944);
    }
}
