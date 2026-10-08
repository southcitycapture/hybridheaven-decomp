#include "context.h"

extern void func_8038D660(void);

s32 func_801EA8A0(s32 arg0, s32 arg1) {
    if (func_801D3630() != 0) {
        return 0x30;
    }
    func_8038D660();
    return 0x2F;
}
