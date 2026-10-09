#include "context.h"

extern s32 func_801D3620();
extern void func_801CC470(s32, s32, s32, s32, f32);
extern void func_8038D660(void);

s32 func_801EA840(s32 arg0, s32 arg1) {
    if (func_801D3620() == 0) {
        func_801CC470(2, 0x03200065, 0, 0, 3.0f);
        return 0x2F;
    }
    func_8038D660();
    return 0x2E;
}
