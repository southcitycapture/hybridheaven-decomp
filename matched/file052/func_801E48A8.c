#include "context.h"
s32 func_801D89B8(void);

s32 func_801E48A8(s32 arg0, s32 arg1) {
    if (func_801D89B8() == 0) {
        func_801CC470(2, 0x01900016, 0, 0x100, 1.0f);
        return 0x8;
    }
    return 0x7;
}
