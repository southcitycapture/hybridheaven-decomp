#include "context.h"

extern void func_8001F290(void);
extern s32 D_80047940;

void func_8001F334(void) {
    D_80047940 = 0xFFF;
    func_8001F290();
    D_80047940 = 7;
}
