#include "context.h"

s32 func_801EB74C(s32 arg0, s32 arg1) {
    f32 y;
    s32 i;

    y = -420.0f;
    for (i = 0; i < 12; i++) {
        O(i + 6)->unk4 = 0.0f;
        O(i + 6)->unk8 = y;
        y += 70.0f;
        O(i + 6)->unkC = 0.0f;
        O(i + 6)->unk12 = 0;
    }
    return 2;
}
