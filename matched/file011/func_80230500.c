#include "context.h"

extern s32 func_80378EBC();

u16 func_80230500(s32 arg0, u8 arg1) {
    u16 sum;
    u8 i;
    s32 r;
    s32 t;
    f32 q;
    u16 n;

    sum = 0;
    r = func_80378EBC(arg0);
    n = r;
    i = 0;
    if (r > 0) {
        do {
            t = func_8022B640((u16)(200 / n + 0.5));
            i++;
            sum = sum + t;
        } while (i < n);
    }
    sum = (f32)sum / (f32)arg1 + 0.5;
    return sum;
}
