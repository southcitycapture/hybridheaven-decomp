#include "common.h"
extern void D_8038C158(void);
extern s32 D_8038C17C(f32 a0, f32 a1, f32 a2, f32 a3, f32 a4, f32 a5, f32 a6, f32 a7, f32 a8, f32 a9, f32 a10, f32 a11, f32 a12, f32 a13, f32 a14, f32 a15);
typedef struct func_801E2540_StructC { u8 pad0[4]; f32 f4; f32 f8; f32 fC; u8 pad10[2]; s16 h12; } func_801E2540_StructC;
typedef struct func_801E2540_StructB { u8 pad[0x2C]; func_801E2540_StructC *p2C; } func_801E2540_StructB;
typedef struct func_801E2540_StructA { u8 pad[0x24]; func_801E2540_StructB *p24; } func_801E2540_StructA;
typedef struct func_801E2540_StructR { u8 pad[8]; func_801E2540_StructA *p8; } func_801E2540_StructR;
#define ROOT (*(func_801E2540_StructR **)D_801DAB14)

extern u8 D_801DAB14[];

extern f32 D_801E6BD0;
extern f32 D_801E6BD4;
extern f32 D_801E6BD8;
extern f32 D_801E6BDC;
extern f32 D_801E6BE0;
extern f32 D_801E6BE4;
extern f32 D_801E6BE8;
extern f32 D_801E6BEC;
extern f32 D_801E6BF0;

struct func_801E1FA8_StructData {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801E1FA8_StructObj {
    u8 pad[0x2C];
    struct func_801E1FA8_StructData *unk2C;
};
struct func_801E1FA8_StructMid {
    u8 pad[0x24];
    struct func_801E1FA8_StructObj *unk24;
};
struct func_801E1FA8_StructNode {
    u8 pad[8];
    struct func_801E1FA8_StructMid *unk8;
};

#define ROOT (*(struct func_801E1FA8_StructNode **)D_801DAB14)

s32 func_801E1FA8(s32 arg0, s32 arg1) {
    f32 temp = D_801E6BD0;
    if (D_8038C17C(0.0f, D_801E6BD4, -16.4f, 110.7f,
        D_801E6BD8, D_801E6BDC, D_801E6BE0, -9.5f,
        D_801E6BE4, 59.5f, -29.0f, D_801E6BE8,
        D_801E6BEC, D_801E6BF0, temp, temp) != 0) {
        ROOT->unk8->unk24->unk2C->unk4 = 9.0f;
        ROOT->unk8->unk24->unk2C->unk8 = 0.0f;
        ROOT->unk8->unk24->unk2C->unkC = -2.0f;
        ROOT->unk8->unk24->unk2C->unk12 = 0x13D2;
        D_8038C158();
        return 6;
    }
    return 5;
}
