#include "common.h"
extern s32 D_801F362C;
void func_801CC470(s32, s32, s32, s32, f32);
extern s32 func_801D58DC(void);


s32 func_801EDFB4(s32 arg0, s32 arg1) {
    switch (D_801F362C) {
    case 0:
        D_801F362C = 1;
        break;
    case 1:
        D_801F362C = 2;
        break;
    case 2:
        D_801F362C = 3;
        break;
    case 3:
        if (func_801D58DC() == 0) {
            func_801CC470(2, 0x03200051, 0, 0x100, 6.0f);
            return 0x18;
        }
        break;
    }
    return 0x17;
}
