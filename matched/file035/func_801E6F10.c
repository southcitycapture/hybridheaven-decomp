#include "context.h"

extern f32 D_801E8D4C;
extern s32 D_801E8718;

#define F10_OBJ() ((func_801E64F4_Struct5 *) FN_GET(FN_GET(FN_GET(FN_GET(FN_GET(D_801DAB14, 8), 8), 8), 0x24), 0x2C))

s32 func_801E6F10(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x02DE74D3) != 0) {
        F10_OBJ()->unk4 = 0.0f;
        F10_OBJ()->unk8 = 0.0f;
        F10_OBJ()->unkC = D_801E8D4C;
        F10_OBJ()->unk12 = 0x1800;
        func_801CC470(2, 0x02A80061, 0, 1, 1.0f);
        D_801E8718 = 0;
        return 9;
    }
    return 8;
}
