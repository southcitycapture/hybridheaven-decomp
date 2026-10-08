#include "context.h"

extern f64 D_8018D688;
extern void func_80029280(f32);

void func_80130610(u16 arg0) {
    func_80029280((f32) ((f64) ((f32) arg0 / 32768.0f) * D_8018D688));
}
