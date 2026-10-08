#include "common.h"

extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 func_801D271C(s32 a0);

s32 func_801F8288(s32 arg0, s32 arg1) {
    func_801CC470(3, 0x03200008, 0, 0, 5.0f);
    func_801D271C(1);
    return 8;
}
