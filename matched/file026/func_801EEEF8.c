#include "context.h"
#define P(x, o) (*(u8 **)((u8 *)(x) + (o)))
#define N5 P(P(P(P(P(*(u8 **)&D_801DAB14, 8), 8), 8), 8), 8)
#define FL ((f32 *)P(P(N5, 0x24), 0x2C))

s32 func_801EEEF8(s32 arg0, s32 arg1) {
    if (P(N5, 0x24) != 0) {
        if (func_801C0B8C(0x01406F40) != 0) {
            FL[1] = -204.0f;
            FL[2] = 0.0f;
            FL[3] = 3.0f;
            *(s16 *)((u8 *)FL + 0x12) = 0x1000;
            func_801CC470(4, 0x01B80013, 0, 0x1001, 1.0f);
            return 2;
        }
        FL[1] = 5120.0f;
        FL[2] = 0.0f;
        FL[3] = 3.0f;
        *(s16 *)((u8 *)FL + 0x12) = 0x800;
    }
    return 1;
}
