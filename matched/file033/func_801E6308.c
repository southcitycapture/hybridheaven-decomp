#include "common.h"

extern void func_801CC4D8(s32, s32, s32, s32, f32);
extern void func_801D5938(s32);
extern s32 D_801F2DB4;

s32 func_801E6308(s32 arg0, s32 arg1) {
    func_801CC4D8(2, 0x0320003E, 0, 0, 30.0f);
    D_801F2DB4 = 0;
    func_801D5938(1);
    return 0xB;
}
