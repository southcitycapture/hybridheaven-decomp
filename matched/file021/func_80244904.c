#include "context.h"

extern void func_80020744(s32);
extern f32 D_80257110;
extern void func_8024495C(void);

void func_80244904(void *arg0, void *arg1) {
    if (func_80133A24(0x1A7) != 0) {
        func_80020744(0x1A2);
        func_800058DC((s32) arg0, func_8024495C);
        ((f32 *) arg0)[0x9C / 4] = D_80257110;
    }
}
