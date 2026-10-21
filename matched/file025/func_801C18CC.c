#include "context.h"

typedef struct func_801C18CC_StructInput {
    s32 x;
    s32 y;
    s32 z;
} func_801C18CC_StructInput;

typedef struct func_801C18CC_StructOut {
    s32 x;
    s32 y;
    s32 z;
    s32 w;
} func_801C18CC_StructOut;

s32 func_801C18CC(s32 arg0, func_801C18CC_StructInput *arg1) {
    s32 i;

    for (i = 0; i < arg0; i++) {
        ((func_801C18CC_StructOut *)D_801DED70)[i].x = arg1[i].x;
        ((func_801C18CC_StructOut *)D_801DED70)[i].y = arg1[i].y;
        ((func_801C18CC_StructOut *)D_801DED70)[i].z = arg1[i].z;
        ((func_801C18CC_StructOut *)D_801DED70)[i].w = 0;
        func_801C1CF0(arg1->x, arg1->y, arg1->z);
    }
    D_801D8DC0 = arg0;
    return 1;
}
