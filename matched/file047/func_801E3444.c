#include "context.h"

extern s32 func_801C1000(s32 arg0, s32 arg1);
extern void func_8038D28C(s32 arg0);
extern u8 *D_8038D8D0;
extern s32 D_801E3D38;
extern s32 D_801E3D3C;
extern s32 D_801E3D40;

s32 func_801E3444(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x602160) != 0) {
        D_801E3D38 = 0;
        D_801E3D3C = 0;
        D_801E3D40 = 0;
        *(*(u8 **)(*(u8 **)(D_8038D8D0 + 0x10) + 0x30) + 0x4B) = 0;
        *(*(u8 **)(D_8038D8D0 + 0x10) + 0x22) = 1;
        func_801C1000(3, 9);
        func_8038D28C(0x261);
        return 2;
    }
    return 1;
}
