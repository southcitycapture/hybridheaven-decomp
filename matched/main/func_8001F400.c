#include "context.h"

extern s32 func_8001F364();
extern s32 D_80047940;

void func_8001F400(void) {
    D_80047940 = 0xFFF;
    func_8001F364();
    D_80047940 = 7;
}
