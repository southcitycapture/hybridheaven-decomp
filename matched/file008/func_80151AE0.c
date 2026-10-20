#include "context.h"

void func_80151AE0(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < 2; i = (i + 1) & 0xFF) {
        func_80151990(i);
    }
}
