#include "context.h"

extern void func_8038D28C(s32);

s32 func_801E6A5C(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 6;
    }
    if (func_801C0B8C(0x1E8480) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0xF, 0, 1);
        func_8038D28C(0xA);
        return 7;
    }
    return 6;
}
