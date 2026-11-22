#include "common.h"

extern void func_801C8284(void);
extern void func_801C82A4(f32, f32, s32, s32, f32, f32, f32, s32);
s32 func_801E662C(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x118C2F) != 0) {
        func_801C8284();
        func_801C82A4(42.7999992f, 1.70000005f, 0x427C0000, 0xBF800000, 11.6999998f, 3.0f, 5.0f, 0x1E);
        return 0x11;
    }
    return 0x10;
}
