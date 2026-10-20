#include "context.h"
extern struct func_801E51CC_A *D_801DAB14;
struct func_801E51CC_E {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801E51CC_D {
    u8 pad0[0x2C];
    struct func_801E51CC_E *unk2C;
};
struct func_801E51CC_C {
    u8 pad0[0x24];
    struct func_801E51CC_D *unk24;
};
struct func_801E51CC_B {
    u8 pad0[8];
    struct func_801E51CC_C *unk8;
};
struct func_801E51CC_A {
    u8 pad0[8];
    struct func_801E51CC_B *unk8;
};
struct func_801E2888_Q { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[2]; s16 unk12; };
struct func_801E2888_S { u8 pad0[8]; struct func_801E2888_S *unk8; u8 pad1[0x18]; struct func_801E2888_S *unk24; u8 pad2[4]; struct func_801E2888_Q *unk2C; };
extern f32 D_801E7150;
extern f32 D_801E7154;
extern f32 D_801E7158;
extern f32 D_801E715C;
#define P ((struct func_801E2888_S *)D_801DAB14)

s32 func_801E2888(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x53EC60) != 0) {
        P->unk8->unk24->unk2C->unk4 = D_801E7150;
        P->unk8->unk24->unk2C->unk8 = 0.0f;
        P->unk8->unk24->unk2C->unkC = D_801E7154;
        P->unk8->unk24->unk2C->unk12 = 0x8CC;
        P->unk8->unk8->unk8->unk24->unk2C->unk4 = -38.5f;
        P->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        P->unk8->unk8->unk8->unk24->unk2C->unkC = D_801E7158;
        P->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x185B;
        func_8038BD50(-43.5f, 5.5f, 0x4255999A);
        D_8038BD88(-47.0f, D_801E715C, 0x4251999A);
        D_8038C158();
        return 0x1A;
    }
    return 0x19;
}
