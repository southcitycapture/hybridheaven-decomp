#include "context.h"

extern void func_8022A824(s32 arg0);
extern void func_8022A834(s32 arg0);

void func_8038DC2C(s32 arg0, s16 *arg1) {
    if (arg1[3] >= 0x64) {
        func_8022A824(arg0);
        return;
    }
    func_8022A834(arg0);
}
