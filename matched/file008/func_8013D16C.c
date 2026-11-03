#include "common.h"
typedef struct func_8013CC10_Struct {
    u8 value;
    u8 data[6];
} func_8013CC10_Struct;
extern func_8013CC10_Struct D_8017DF14[];
extern func_8013CC10_Struct D_8017DF2C[];
extern u8 D_801BBBF0[];
u8 *func_8013D140(s32 arg0);


extern u8 D_801BEB20[][6];

u8 *func_8013D16C(u8 arg0, u8 *arg1) {
    u8 *p;
    u8 i;

    if (arg1 == D_801BBBF0 + 0x44C) {
        p = (u8 *)&D_8017DF14[arg0];
    } else {
        p = (u8 *)&D_8017DF2C[arg0];
    }
    for (i = 0; i < *p; i++) {
        D_801BEB20[arg0][i] = *func_8013D140(p[i + 1]);
    }
    D_801BEB20[arg0][i] = 0;
    return D_801BEB20[arg0];
}
