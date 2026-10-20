#include "context.h"

extern f32 D_801EDBEC;
extern f32 D_801EDBF0;
extern f32 D_801EDBF4;
extern f32 D_801EDBF8;
extern f32 D_801EDBFC;
extern f32 D_801EDC00;
extern f32 D_801EDC04;
extern f32 D_801EDC08;

s32 func_801E2384(s32 arg0, s32 arg1) {
    f32 a = D_801EDBEC;
    f32 b = D_801EDBF0;
    f32 c = D_801EDBF4;
    f32 d = D_801EDBF8;
    if (D_8038C17C(0.0f, D_801EDBFC, b, 1.7f,
            a, b, D_801EDC00, a, c, D_801EDC04,
            a, c, D_801EDC08, a, d, d) != 0) {
        return 0x16;
    }
    return 0x15;
}
