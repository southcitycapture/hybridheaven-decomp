#include "context.h"

s16 func_801FD284(s16 arg0, s16 arg1, f32 arg2) {
    s16 d;

    arg0 &= 0x1FFF;
    arg1 &= 0x1FFF;
    if (arg0 < arg1) {
        d = arg1 - arg0;
        if (d < 0x1000) {
            return (s16)(s32)((f32)arg0 + (f32)d * arg2) & 0x1FFF;
        }
        return (s16)(s32)((f32)arg0 - (f32)(0x2000 - d) * arg2) & 0x1FFF;
    }
    d = arg0 - arg1;
    if (d < 0x1000) {
        return (s16)(s32)((f32)arg0 - (f32)d * arg2) & 0x1FFF;
    }
    return (s16)(s32)((f32)arg0 + (f32)(0x2000 - d) * arg2) & 0x1FFF;
}
