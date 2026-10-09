#include "context.h"

extern s32 func_80133A24(s32 arg0);
extern void func_8012D918(void *, s32, s32, s32, s32);

void func_80242810(void *arg0) {
    if (func_80133A24(0x1A1) != 0) {
        func_8012D918(arg0, 0x500, 1, 0, 0);
    } else {
        func_8012D918(arg0, 0x500, 0, 0, 0);
    }
}
