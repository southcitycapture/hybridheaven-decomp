#include "context.h"
extern void func_801D8ADC(s32 a0);
s32 func_801E67E4(s32 arg0, s32 arg1) {
    f32 q;
    q = (f32)(u32)func_801C1134(4, 2) / 90.0f;
    func_801D8ADC((u32)(-128.0f * q + 255.0f) & 0xFF);
    if (func_801C1088(4, 2, 0x5A) != 0) {
        func_801C10D8(4, 2);
        func_801E66F4();
        func_801C1000(4, 2);
        return 5;
    }
    return 4;
}
