#include "context.h"

extern s32 func_80005670();
extern s32 D_8023E3BC;
extern u8 D_8023E3D8[];

s32 func_80236744(s32 arg0) {
    if (D_8023E3BC == 0) {
        D_8023E3BC = func_80005670(arg0, D_8023E3D8);
        return 1;
    }
    return 0;
}
