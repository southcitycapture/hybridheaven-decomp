#include "context.h"
extern void func_801C7A74(void *arg0);
typedef struct func_801E2904_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[4];
    f32 unk14;
    f32 unk18;
} func_801E2904_Struct;
extern f32 D_801E5104;
extern f32 D_801E5108;
extern f32 D_801E510C;
extern f32 D_801E5110;
extern f32 D_801E5114;
extern f32 D_801E5118;
extern f32 D_801E511C;
extern f32 D_801E5120;
extern f32 D_801E5124;

s32 func_801E2904(s32 arg0, s32 arg1) {
    f32 a = D_801E5104;
    f32 b = D_801E5108;
    f32 c = D_801E510C;
    if (D_8038C17C(0.0f, 3.0f, 44.9f, 12.5f, a, D_801E5110, 14.5f, a, D_801E5114, D_801E5118, b, 40.0f, D_801E511C, b, c, c) != 0) {
        ((func_801E2904_Struct *)&D_801E5200)->unk0 = 30.0f;
        ((func_801E2904_Struct *)&D_801E5200)->unk4 = 50.0f;
        ((func_801E2904_Struct *)&D_801E5200)->unk8 = -40.0f;
        ((func_801E2904_Struct *)&D_801E5200)->unkC = 2.0f;
        ((func_801E2904_Struct *)&D_801E5200)->unk14 = D_801E5120;
        ((func_801E2904_Struct *)&D_801E5200)->unk18 = D_801E5124;
        func_801C7A74(&D_801E5200);
        D_8038C158();
        return 0xF;
    }
    return 0xE;
}
