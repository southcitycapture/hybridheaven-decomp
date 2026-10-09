#include "context.h"

struct func_80005CB0_Struct {
    struct func_80005CB0_Struct *next;
};

extern struct func_80005CB0_Struct *D_8008935C;

s32 func_80005CB0(void) {
    struct func_80005CB0_Struct *var_v0;
    s32 var_v1;

    var_v0 = D_8008935C;
    var_v1 = 0;
    if (var_v0 != NULL) {
        do {
            var_v0 = var_v0->next;
            var_v1 += 1;
        } while (var_v0 != NULL);
    }
    return var_v1 & 0xFFFF;
}
