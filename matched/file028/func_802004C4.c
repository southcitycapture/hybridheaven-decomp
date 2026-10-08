#include "common.h"

extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);

s32 func_802004C4(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x010058FF) != 0) {
        func_801CC470(2, 0x03480017, 0, 0, 2.5f);
        return 7;
    }
    return 6;
}
