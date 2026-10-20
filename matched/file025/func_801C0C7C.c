#include "context.h"

typedef struct func_801C0C7C_Struct {
    s32 a0, a4;
    u64 a8;
} func_801C0C7C_Struct;

extern s32 D_801DE830;
extern func_801C0C7C_Struct D_801DE838[];
extern func_801C0C7C_Struct D_801DEA38[];

void func_801C0C7C(void) {
    s32 i;

    for (i = 0; i < 32; i++) {
        D_801DE838[i].a0 = -1;
        D_801DE838[i].a4 = -1;
        D_801DE838[i].a8 = 0;
    }
    D_801DE830 = 0;
}
