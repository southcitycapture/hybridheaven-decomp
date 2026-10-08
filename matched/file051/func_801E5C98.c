#include "context.h"

extern s32 func_801D3620();

s32 func_801E5C98(s32 arg0, s32 arg1) {
    if (func_801D3620() == 0) {
        func_801CC470(2, 0x0320005C, 0, 0, 4.0f);
        return 0xB;
    }
    return 0xA;
}
