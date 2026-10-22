#include "context.h"

typedef struct func_801C1BDC_Struct {
    s32 a;
    s32 b;
    u8 pad[8];
} func_801C1BDC_Struct;

s32 func_801C1BDC(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < 32; i++) {
        if (arg0 == ((func_801C1BDC_Struct *)D_801DED70)[i].a && arg1 == ((func_801C1BDC_Struct *)D_801DED70)[i].b) {
            return 1;
        }
    }
    return 0;
}
