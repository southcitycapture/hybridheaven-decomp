#include "context.h"

typedef struct func_801CD5C8_Struct {
    s32 f[3];
    s8 b0;
    u8 pad0[3];
    s32 v0;
    s8 b1;
    u8 pad1[3];
    s32 v1;
    s8 b2;
    u8 pad2[3];
    s32 v2;
} func_801CD5C8_Struct;
extern func_801CD5C8_Struct D_801E0C40[];
extern s8 D_801E0BD0[][16];
extern s8 D_801E0BD1[][16];
extern s8 D_801E0BD2[][16];
s32 func_801CD5C8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg1 != 0) {
        if (arg2 & 1) {
            D_801E0C40[arg0].f[0] = 1;
            D_801E0C40[arg0].b0 = D_801E0BD0[arg0][0];
            D_801E0C40[arg0].v0 = arg3;
            goto end;
        }
        if (arg2 & 2) {
            D_801E0C40[arg0].f[1] = 1;
            D_801E0C40[arg0].b1 = D_801E0BD1[arg0][0];
            D_801E0C40[arg0].v1 = arg3;
            goto end;
        }
        if (arg2 & 4) {
            D_801E0C40[arg0].f[2] = 1;
            D_801E0C40[arg0].b2 = D_801E0BD2[arg0][0];
            D_801E0C40[arg0].v2 = arg3;
            goto end;
        }
        goto end;
    }
    if (arg2 & 1) {
        D_801E0C40[arg0].f[0] = 0;
    } else if (arg2 & 2) {
        D_801E0C40[arg0].f[1] = 0;
    } else if (arg2 & 4) {
        D_801E0C40[arg0].f[2] = 0;
    }
end:
    return 1;
}
