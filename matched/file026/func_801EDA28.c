#include "context.h"

#define P8(p, o) (*(u8 **)((u8 *)(p) + (o)))
#define ND ((u8 *)P8(P8(P8(P8(*(u8 **)&D_801DAB14, 8), 8), 8), 0x24))
#define FL ((f32 *)P8(ND, 0x2C))
extern f32 D_801FC8C8;

s32 func_801EDA28(s32 arg0, s32 arg1) {
    if (P8(P8(P8(P8(*(u8 **)&D_801DAB14, 8), 8), 8), 0x24) != 0) {
        if (func_801C0B8C(0x01406F40) != 0) {
            FL[1] = -197.0f;
            FL[2] = 0.0f;
            FL[3] = D_801FC8C8;
            *(s16 *)((u8 *)FL + 0x12) = 0x1000;
            func_801CC470(2, 0x01B80011, 0, 0x1001, 1.0f);
            return 2;
        }
        FL[1] = 5120.0f;
        FL[2] = 0.0f;
        FL[3] = 0.0f;
        *(s16 *)((u8 *)FL + 0x12) = 0;
    }
    return 1;
}
