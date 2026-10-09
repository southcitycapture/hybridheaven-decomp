#include "context.h"

extern void func_80133980(s32 arg0);
extern s32 func_80133A24(s32 arg0);

void func_801DA800(s32 arg0, s32 arg1) {
    if (func_80133A24(5) == 0) {
        func_80133980(5);
        return;
    }
    if (func_80133A24(6) == 0) {
        func_80133980(6);
    }
}
