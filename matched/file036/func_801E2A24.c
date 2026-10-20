#include "context.h"

extern f32 D_801E5128;
extern f32 D_801E512C;
extern f32 D_801E5130;
extern f32 D_801E5134;
extern f32 D_801E5138;
extern f32 D_801E513C;
extern f32 D_801E5140;
extern f32 D_801E5144;
extern f32 D_801E5148;
extern f32 D_801E514C;
extern f32 D_801E5150;
extern f32 D_801E5154;
extern f32 D_801E5158;
extern f32 D_801E515C;

s32 func_801E2A24(s32 arg0, s32 arg1) {
    f32 k = D_801E5128;
    if (D_8038C17C(0.0f, 5.0f, 62.0f, -0.3f, D_801E512C, D_801E5130, D_801E5134, D_801E5138, D_801E513C, D_801E5140, D_801E5144, D_801E5148, D_801E514C, D_801E5150, k, k) != 0) {
        D_801E5200.unk0 = 30.0f;
        D_801E5200.unk4 = 50.0f;
        D_801E5200.unk8 = -130.0f;
        D_801E5200.unkC = D_801E5154;
        D_801E5200.unk14 = D_801E5158;
        D_801E5200.unk18 = D_801E515C;
        func_801C7A74(&D_801E5200);
        D_8038C158();
        return 0x10;
    }
    return 0xF;
}
