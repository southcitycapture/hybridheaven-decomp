#include "context.h"

u16 func_803796EC(s16 *arg0, u8 arg1, u16 arg2) {
    f32 t = ((f32) *arg0 * (f32) arg1) / 100.0f;
    if (t < (f32) arg2) {
        return arg2;
    }
    return (u32) t;
}
