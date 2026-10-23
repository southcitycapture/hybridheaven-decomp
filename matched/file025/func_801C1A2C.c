#include "context.h"

typedef struct func_801C1A2C_Struct {
    s32 first;
    s32 second;
    s32 unused;
    s32 active;
} func_801C1A2C_Struct;

void func_801C1A2C(s32 arg0, s32 arg1) {
    s32 i;

    i = 0;
loop:
    if (arg0 == ((func_801C1A2C_Struct *)D_801DED70)[i].first && arg1 == ((func_801C1A2C_Struct *)D_801DED70)[i].second) {
        ((func_801C1A2C_Struct *)D_801DED70)[i].active = 1;
        return;
    }
    i++;
    if (i != 32) {
        goto loop;
    }
}
