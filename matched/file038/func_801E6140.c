#include "context.h"

s32 func_801D5194(void);

s32 func_801E6140(s32 arg0, s32 arg1) {
    if (func_801D5194() == 0) {
        func_801CC470(2, 0x03480075, 0, 0, 2.0f);
        return 0x1D;
    }
    return 0x1C;
}
