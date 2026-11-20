#include "context.h"

extern void func_80032720(f32);
void func_80130670(u16 arg0) {
    u32 temp_a0;

    temp_a0 = arg0;
    func_80032720((f32) ((f64) ((f32) temp_a0 / 32768.0f) * (3.141592653589793)));
}
