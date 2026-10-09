#include "context.h"

f32 func_8001518C();                                /* extern */
extern f64 D_8004C858;
extern f64 D_8004C860;
extern f64 D_8004C868;
extern f64 D_8004C870;
extern f64 D_8004C878;

f32 func_80015214(f32 arg0) {
    if (((f64) arg0 < D_8004C858) || (D_8004C860 <= (f64) arg0)) {
        if (((f64) arg0 < 0.0) || (D_8004C868 <= (f64) arg0)) {
            arg0 = func_8001518C();
        }
        if (D_8004C870 <= (f64) arg0) {
            arg0 = (f32) ((f64) arg0 - D_8004C878);
        }
    }
    return arg0;
}
