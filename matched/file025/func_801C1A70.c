#include "context.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
} func_801C1A70_Struct;

void func_801C1A70(s32 arg0, s32 arg1) {
    s32 i;

    i = 0;
loop:
    if (arg0 == ((func_801C1A70_Struct *)D_801DED70)[i].a && arg1 == ((func_801C1A70_Struct *)D_801DED70)[i].b) {
        ((func_801C1A70_Struct *)D_801DED70)[i].d = 0;
        return;
    }
    i++;
    if (i != 32) {
        goto loop;
    }
}
