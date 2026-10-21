#include "context.h"

extern f32 D_80130670(u16);

f32 func_801306D0(s32 arg0, f32 *arg1) {
    u16 a;
    *(*(f32 **)(&arg0 + 1)) = D_80130670((a = ((u16 *)&arg0)[1], *(f32 **)(&arg0 + 1) = arg1, a));
    func_80130610(((u16 *)&arg0)[1]);
}
