#include "context.h"

typedef struct func_801BF628_Struct {
    s32 data[126];
} func_801BF628_Struct;

s32 func_801BF628(s32 arg0, func_801BF628_Struct *arg1) {
    if (arg0 >= 9) {
        return 0;
    }
    *arg1 = *(func_801BF628_Struct *)D_801D8D04[arg0];
    return 1;
}
