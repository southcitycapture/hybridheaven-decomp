#include "context.h"

f32 func_8001518C();                                /* extern */

f32 func_80015214(f32 arg0) {
    if (((f64) arg0 < -180.0) || (180.0 <= (f64) arg0)) {
        if (((f64) arg0 < 0.0) || (360.0 <= (f64) arg0)) {
            arg0 = func_8001518C();
        }
        if (180.0 <= (f64) arg0) {
            arg0 = (f32) ((f64) arg0 - 360.0);
        }
    }
    return arg0;
}
