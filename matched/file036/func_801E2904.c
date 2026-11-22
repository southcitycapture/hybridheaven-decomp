#include "common.h"

typedef struct func_801E2E4C_Struct {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[4];
    f32 unk14;
    f32 unk18;
} func_801E2E4C_Struct;
extern func_801E2E4C_Struct D_801E5200;
extern void D_8038C158(void);
extern s32 D_8038C17C(f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32);
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
s32 func_801E2904(s32 arg0, s32 arg1) {
    f32 a = 23.7000008f;
    f32 b = (-103.900002f);
    f32 c = 24.2999992f;
    if (D_8038C17C(0.0f, 3.0f, 44.9f, 12.5f, a, 44.7000008f, 14.5f, a, 40.2000008f, 13.6999998f, b, 40.0f, 15.6999998f, b, c, c) != 0) {
        ((func_801E2904_Struct *)&D_801E5200)->unk0 = 30.0f;
        ((func_801E2904_Struct *)&D_801E5200)->unk4 = 50.0f;
        ((func_801E2904_Struct *)&D_801E5200)->unk8 = -40.0f;
        ((func_801E2904_Struct *)&D_801E5200)->unkC = 2.0f;
        ((func_801E2904_Struct *)&D_801E5200)->unk14 = 0.100000001f;
        ((func_801E2904_Struct *)&D_801E5200)->unk18 = 0.200000003f;
        func_801C7A74(&D_801E5200);
        D_8038C158();
        return 0xF;
    }
    return 0xE;
}
