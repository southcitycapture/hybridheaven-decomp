#include "common.h"

void func_801DB74C(f32 arg0, f32 *arg1, f32 *arg2) {
    if (*arg1 < arg0) {
        *arg1 = arg0;
        return;
    }
    if (arg0 < *arg2) {
        *arg2 = arg0;
    }
}
