#include "context.h"
extern f32 D_801FC8E0;
extern f32 D_801FC8E4;
#define H(p, o) (*(u8 **)((p) + (o)))
#define N24 H(H(H(H(*(u8 **)&D_801DAB14, 8), 8), 8), 8), 0x24)
#define NODE H(H(H(H(H(*(u8 **)&D_801DAB14, 8), 8), 8), 8), 0x24)
#define F(o) (*(f32 *)(H(NODE, 0x2C) + (o)))

s32 func_801EE38C(s32 arg0, s32 arg1) {
    if (NODE != 0) {
        if (func_801C0B8C(0x01406F40) != 0) {
            F(4) = -190.0f;
            F(8) = 0.0f;
            F(0xC) = D_801FC8E0;
            *(s16 *)(H(NODE, 0x2C) + 0x12) = 0x1182;
            func_801CC470(3, 0x01B80013, 0, 0x1001, 1.0f);
            return 2;
        }
        F(4) = 5120.0f;
        F(8) = 0.0f;
        F(0xC) = D_801FC8E4;
        *(s16 *)(H(NODE, 0x2C) + 0x12) = 0x800;
    }
    return 1;
}
