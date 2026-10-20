#include "context.h"

extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
extern void D_8038C158(void);
extern f32 D_801E501C,D_801E5020, D_801E5024, D_801E5028, D_801E502C, D_801E5030, D_801E5034, D_801E5038, D_801E503C, D_801E5040, D_801E5044;

s32 func_801E2294(s32 arg0, s32 arg1) {
    f32 a = D_801E501C;
    f32 b = D_801E5020;
    f32 c = D_801E5024;
    f32 d = D_801E5028;
    if (D_8038C17C(0.0f, 4.5f, 58.2f, a, D_801E502C, D_801E5030, a, D_801E5034, b, c, b, D_801E5038, c, D_801E503C, d, d) != 0) {
        D_801E5200.unk0 = 40.0f;
        D_801E5200.unk4 = 50.0f;
        D_801E5200.unk8 = 70.0f;
        D_801E5200.unkC = 1.5f;
        D_801E5200.unk14 = D_801E5040;
        D_801E5200.unk18 = D_801E5044;
        func_801C7A74(&D_801E5200);
        D_8038C158();
        return 8;
    }
    return 7;
}
