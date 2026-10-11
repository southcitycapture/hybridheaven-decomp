#include "context.h"

extern void func_80032720(f32);
extern f64 D_8018D690;

void func_80130670(u16 arg0) {
    u32 temp_a0;

    temp_a0 = arg0;
    func_80032720((f32) ((f64) ((f32) temp_a0 / 32768.0f) * D_8018D690));
}
