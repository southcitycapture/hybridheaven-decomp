#include "context.h"

extern void func_801D3750(s32);
extern void func_801D3788(f32, f32, s32);

s32 func_801E5D00(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0xF4240) != 0) {
        func_801D3750(0);
        func_801D3788(0.0f, 0.0f, 0x42BE0000);
        return 0xD;
    }
    return 0xC;
}
