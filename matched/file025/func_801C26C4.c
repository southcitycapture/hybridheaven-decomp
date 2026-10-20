#include "context.h"

typedef struct func_801C26C4_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801C26C4_Struct;

void func_801C26C4(s32 arg0, func_801C26C4_Struct *arg1) {
    s32 i;

    for (i = 0; i < arg0; i++) {
        arg1[i].unk0 = -1;
        arg1[i].unk4 = 0;
        arg1[i].unk8 = 0;
    }
}
