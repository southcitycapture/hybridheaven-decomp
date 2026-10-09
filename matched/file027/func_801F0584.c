#include "context.h"

extern s32 D_801CFD40();
extern s32 func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
extern s32 D_801F4CC8;

s32 func_801F0584(s32 arg0, s32 arg1) {
    if (D_801F4CC8 == 0) {
        goto case0;
    }
    if (D_801F4CC8 == 1) {
        goto case1;
    }
    return 9;
case0:
    func_801CC4D8(0, 0x02A80016, 0, 0, 15.0f);
    D_801F4CC8 = 1;
    goto end9;
case1:
    if (D_801CFD40() == 0) {
        func_801CC470(0, 0x02A80016, 0, 0, 3.0f);
        return 0xA;
    }
end9:
    return 9;
}
