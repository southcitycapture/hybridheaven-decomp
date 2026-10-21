#include "context.h"
extern u64 D_801D8DA0;

s32 func_801C133C(void) {
    u64 t = func_801C0C08();
    u64 r = func_80026F58(t - D_801D8DA0, 0x40);
    s32 a;
    r = func_80026E58(r, 0xBB8);
    a = r >= 0x989680;
    if (a) {
    }
    return a;
}
