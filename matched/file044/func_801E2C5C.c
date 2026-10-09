#include "context.h"

typedef struct func_801E2C5C_Struct {
    u8 pad[0x24];
    s32 unk24;
} func_801E2C5C_Struct;

extern f32 D_801EDCDC;
extern f32 D_801EDCE0;
extern f32 D_801EDCE4;
extern f32 D_801EDCE8;

s32 func_801E2C5C(s32 arg0, s32 arg1) {
    func_801E2C5C_Struct *obj;

    obj = (func_801E2C5C_Struct *) func_801BF6B0(4);
    if (obj->unk24 >= 0x33) {
        func_8038BE98(D_801EDCDC);
        func_8038BD50(D_801EDCE0, D_801EDCE4, 0xC2876666);
        D_8038BD88(-130.0f, D_801EDCE8, 0x41C5999A);
        return 0x31;
    }
    return 0x30;
}
