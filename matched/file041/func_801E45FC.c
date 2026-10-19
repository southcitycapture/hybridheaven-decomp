#include "context.h"

extern f32 D_801E8874;
extern f32 D_801E8878;
extern f32 D_801E887C;

s32 func_801E45FC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x1437C80) != 0) {
        func_801C7D0C(D_801E8874, D_801E8878, 544.0f, 0.0f, 158.0f, 0.0f, 3.0f, 3.0f, 0x14);
        func_801C7D0C(D_801E887C, 804.0f, 544.0f, 0.0f, 158.0f, 0.0f, 3.0f, 3.0f, 0x14);
        return 0x17;
    }
    return 0x16;
}
