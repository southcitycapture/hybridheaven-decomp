#include "context.h"
extern s32 func_8001B204();
extern u16 D_80089474[];
extern s32 D_801D8D94;
extern s32 D_801D8D98;
extern u8 D_801DCE70[];
extern u8 D_801DCE90[];

s32 func_801C1284() {
    if (D_801D8D90 != 0) {
        D_801D8D94 = D_801D8D98;
        if (D_80089474[1] & 0x1000) {
            D_801D8D98 = 1;
            func_8001B204(7, 0x14, 0x28, D_801DCE70);
        } else {
            D_801D8D98 = 0;
            func_8001B204(7, 0x14, 0x28, D_801DCE90);
        }
        return (D_801D8D98 == 1) && (D_801D8D94 == 0);
    }
    return 0;
}
