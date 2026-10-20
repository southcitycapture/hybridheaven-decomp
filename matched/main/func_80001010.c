#include "context.h"

typedef struct func_80001010_Struct {
    s32 mask;
    s32 value;
    s32 unused;
} func_80001010_Struct;

void func_80001010(s32 arg0, s32 arg1, func_80001010_Struct *arg2) {
    s32 mask;
    s32 result;

    result = 1;
    mask = arg2->mask;
    if (mask != 0) {
        do {
            if (((mask & arg0) == arg2->value) && (result != 0)) {
                result = 0;
            }
            mask = arg2[1].mask;
            arg2++;
        } while (mask != 0);
    }
}
