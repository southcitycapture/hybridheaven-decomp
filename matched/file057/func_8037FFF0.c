#include "context.h"

extern void func_80005670(s32, void *);
extern u8 D_801BC3D8[];
extern u8 D_803897CC[];
extern s32 D_8038CFB0;

s32 func_8037FFF0(s32 arg0) {
    if (*(u16 *)&D_801BC3D8[0x3B2] == 0) {
        func_80005670(arg0, D_803897CC);
        D_8038CFB0 = arg0;
        *(u16 *)&D_801BC3D8[0x3B2] = 1;
        return 0;
    }
    if (*(u16 *)&D_801BC3D8[0x3B2] == 2) {
        return 1;
    }
    return 0;
}
