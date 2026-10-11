#include "context.h"

typedef struct func_801C2608_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
} func_801C2608_Struct;

void func_801C2608(s32 arg0, func_801C2608_Struct *arg1) {
    s32 i;

    for (i = 0; i < arg0; i++) {
        arg1[i].unk0 = -1;
        arg1[i].unk4 = -1;
        arg1[i].unkC = 0;
        arg1[i].unk10 = 0;
    }
}
