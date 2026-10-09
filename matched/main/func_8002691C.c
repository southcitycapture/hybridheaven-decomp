#include "context.h"

extern void func_8002C1D0(void);
extern s32 D_800498F0;

void func_8002691C(s32 arg0) {
    if (D_800498F0 == 0) {
        D_800498F0 = arg0;
        func_8002C1D0();
    }
}
