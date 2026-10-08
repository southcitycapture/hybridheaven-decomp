#include "context.h"

extern void func_801E37C8(f32, f32, f32, f32, f32, f32);
extern void func_801E3820(void);
extern void func_801E38A4(s32);

s32 func_801E398C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x03CE04F7) != 0) {
        func_801E37C8(45.5f, 16.0f, 42.0f, 46.5f, 16.5f, 42.0f);
        func_801E38A4(1);
        return 5;
    }
    func_801E3820();
    return 4;
}
