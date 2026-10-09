#include "context.h"

extern s32 func_801D58DC(void);

s32 func_801E76AC(s32 arg0, s32 arg1) {
    if (func_801D58DC() == 0) {
        func_801CC470(2, 0x03200048, 0, 0x100, 7.0f);
        return 0x38;
    }
    return 0x37;
}
