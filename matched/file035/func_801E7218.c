#include "context.h"

extern f32 D_801E8D50;

#define F7218_OBJ() FN_GET(FN_GET(FN_GET(FN_GET(FN_GET(D_801DAB14, 8), 8), 8), 8), 0x24)
#define F7218_SEC() ((func_801E64F4_Struct5 *)FN_GET(F7218_OBJ(), 0x2C))

s32 func_801E7218(s32 arg0, s32 arg1) {
    u8 *temp_v0;

    temp_v0 = F7218_OBJ();
    if (temp_v0 != NULL) {
        ((func_801E64F4_Struct5 *)FN_GET(temp_v0, 0x2C))->unk4 = 0.0f;
        F7218_SEC()->unk8 = 0.0f;
        F7218_SEC()->unkC = D_801E8D50;
        F7218_SEC()->unk12 = 0;
        func_801CC470(3, 0x01B80016, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}
