#include "common.h"

extern void func_801CC4D8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);

s32 func_801E4CA0(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02625A00) != 0) {
        func_801CC4D8(0, 0x01B8002A, 0, 0, 5.0f);
        return 0x19;
    }
    return 0x18;
}
