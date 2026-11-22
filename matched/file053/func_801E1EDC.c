#include "common.h"

extern void D_8038BD88(f32, f32, s32);
struct func_801E5188_Struct4 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
};
struct func_801E5188_Struct3 {
    u8 pad0[0x2C];
    struct func_801E5188_Struct4 *unk2C;
};
struct func_801E5188_Struct2 {
    u8 pad0[0x24];
    struct func_801E5188_Struct3 *unk24;
};
struct func_801E5188_Struct1 {
    u8 pad0[8];
    struct func_801E5188_Struct2 *unk8;
};
struct func_801E5188_Struct0 {
    u8 pad0[8];
    struct func_801E5188_Struct1 *unk8;
};
extern struct func_801E5188_Struct0 *D_801DAB14;
struct func_801E1EDC_S4 { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[2]; s16 unk12; };
struct func_801E1EDC_S3 { u8 pad0[0x2C]; struct func_801E1EDC_S4 *unk2C; };
struct func_801E1EDC_S2 { u8 pad0[8]; struct func_801E1EDC_S2 *unk8; u8 pad0c[0x18]; struct func_801E1EDC_S3 *unk24; };
struct func_801E1EDC_S1 { u8 pad0[8]; struct func_801E1EDC_S2 *unk8; };
#define G ((struct func_801E1EDC_S1 *)D_801DAB14)
typedef struct func_801E442C_Struct {
    u8 pad[0xC];
    s32 unkC;
} func_801E442C_Struct;
extern struct func_801E442C_Struct *func_801BF6B0(s32 arg0);
extern void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
struct func_801E1EDC_R { u8 pad[0x24]; s32 unk24; };
extern void func_8038BD50(f32, f32, s32);
extern void func_8038BE98(f32);
s32 func_801E1EDC(s32 arg0, s32 arg1) {
    if (((struct func_801E1EDC_R *)func_801BF6B0(4))->unk24 >= 0xA) {
        func_8038BE98(33.2999992f);
        func_8038BD50(1.89999998f, 13.8000002f, 0xC3D9B333);
        D_8038BD88((-2.0999999f), 13.6999998f, 0xC3E86666);
        G->unk8->unk24->unk2C->unk4 = (-4.9000001f);
        G->unk8->unk24->unk2C->unk8 = 0.0f;
        G->unk8->unk24->unk2C->unkC = (-434.799988f);
        G->unk8->unk24->unk2C->unk12 = 0x1000;
        G->unk8->unk8->unk24->unk2C->unk4 = 5.5999999f;
        G->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        G->unk8->unk8->unk24->unk2C->unkC = (-472.799988f);
        G->unk8->unk8->unk24->unk2C->unk12 = 0x1E38;
        func_801CC470(1, 0x02A80045, 0, 0, 3.0f);
        return 5;
    }
    return 4;
}
