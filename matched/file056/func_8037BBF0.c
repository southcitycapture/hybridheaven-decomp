#include "context.h"

typedef struct func_8037BBF0_Struct {
    u8 id;
    u8 pad[3];
    f32 x;
    f32 z;
} func_8037BBF0_Struct;

extern f32 func_8002FC20(f32);
extern func_8037BBF0_Struct D_80388A8C[];
extern func_8037BBF0_Struct D_80388B1C[];
extern f32 D_8038A940;
extern f32 D_8038A948;

extern u16 D_801CBBF0[];
#define G_ID (((u16 *)((u8 *)D_801CBBF0 - 0x10000))[2])

s32 func_8037BBF0(f32 arg0, f32 arg1, u8 arg2) {
    u8 i;
    f32 dx;
    f32 dz;

    i = 0;
    if (arg2) {
        for (; D_80388A8C[i].id < 0xFF; i++) {
            if (G_ID == D_80388A8C[i].id) {
                dx = arg1 - D_80388A8C[i].z;
                dz = arg0 - D_80388A8C[i].x;
                if (func_8002FC20(dx * dx + dz * dz) < 30.0) {
                    D_8038A940 = D_80388A8C[i].x;
                    D_8038A948 = D_80388A8C[i].z;
                    return 1;
                }
            }
        }
        return 0;
    }
    for (; D_80388B1C[i].id < 0xFF; i++) {
        if (G_ID == D_80388B1C[i].id) {
            dx = arg1 - D_80388B1C[i].z;
            dz = arg0 - D_80388B1C[i].x;
            if (func_8002FC20(dx * dx + dz * dz) < 30.0) {
                D_8038A940 = D_80388B1C[i].x;
                D_8038A948 = D_80388B1C[i].z;
                return 1;
            }
        }
    }
    return 0;
}
