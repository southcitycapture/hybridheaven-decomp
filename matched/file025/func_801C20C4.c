#include "context.h"

typedef struct func_801C20C4_Struct {
    s32 **lists;
    s32 value;
    u8 pad[24];
} func_801C20C4_Struct;

s32 func_801C20C4(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    func_801C20C4_Struct *base;
    func_801C20C4_Struct *entry;
    s32 *values;
    s32 *p;

    base = ((func_801C20C4_Struct **)D_801D8DF0[arg1])[arg2];
    if (base == NULL) {
        return 0;
    }
    entry = (func_801C20C4_Struct *)((s32)base + (D_801DEF70 << 5));
    if (entry->lists == NULL) {
        return 0;
    }
    values = entry->lists[arg3];
    if (values != NULL) {
        p = values;
        arg1 = 0;
        while (*p != -1) {
            p++;
            arg1++;
        }
        if (arg4 < arg1) {
        }
        if (arg5 == values[arg4]) {
            *arg0 = entry->value;
            return 1;
        }
    }
    return 0;
}
