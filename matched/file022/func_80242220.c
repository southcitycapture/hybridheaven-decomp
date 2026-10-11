#include "context.h"
extern void func_800058DC(void *, void *);
extern s32 func_80133A24(s32);
void func_8024225C(void *arg0, void *arg1);


void func_80242220(s32 arg0, s32 arg1) {
    if (func_80133A24(0x1ED) == 0) {
        func_800058DC(arg0, func_8024225C);
    }
}
