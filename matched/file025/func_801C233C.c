#include "context.h"

typedef struct func_801C233C_Struct {
    u8 pad[0xC];
    s32 unkC;
    u8 pad2[0x8];
} func_801C233C_Struct;

void func_801C233C(s32 arg0, s32 arg1, func_801C233C_Struct **arg2) {
    s32 i;
    s32 j;
    s32 *p;

    if (((func_801C20C4_Struct *)((s32 **)D_801D8DF0[arg0])[arg1])[D_801DEF70].value != -1 &&
        ((func_801C20C4_Struct *)((s32 **)D_801D8DF0[arg0])[arg1])[D_801DEF70].lists != NULL) {
        for (i = 0; i < 9; i++) {
            p = ((func_801C20C4_Struct *)((s32 **)D_801D8DF0[arg0])[arg1])[D_801DEF70].lists[i];
            if (p != NULL) {
                for (j = 0; p[j] != -1; j++) {
                    arg2[i][j].unkC = p[j];
                }
            }
        }
    }
}
