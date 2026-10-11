#include "context.h"
void func_80247284(void *arg0, s32 arg1);

extern s32 func_80133A24(s32);
extern void func_801339D0(s32);

void func_8024723C(void *arg0, s32 arg1) {
    if (func_80133A24(0x77) != 0) {
        func_801339D0(0x77);
        func_800058DC(arg0, func_80247284);
    }
}
