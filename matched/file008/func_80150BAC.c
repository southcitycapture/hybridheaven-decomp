#include "context.h"

typedef struct func_80150BAC_StructB {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad1[0x4];
    f32 unkC;
    u8 pad2[0x2];
    s16 unk12;
} func_80150BAC_StructB;

typedef struct func_80150BAC_StructA {
    u8 pad0[0x2C];
    func_80150BAC_StructB *unk2C;
} func_80150BAC_StructA;

typedef struct func_80150BAC_StructC {
    f32 unk0;
    f32 unk4;
    f32 unk8;
    s16 unkC;
    s32 unk10;
    f32 unk14;
    s16 unk18;
    s16 unk1A;
    u8 pad1C[0x4];
} func_80150BAC_StructC;

f32 func_8001EAD0(s16);
f32 func_8001EB64(s16);
extern f32 D_801906F0;
extern void *D_801BBCD0;
extern void func_80150C8C(void);

void func_80150BAC(s32 arg0, s32 arg1) {
    func_80150BAC_StructC sp20;

    sp20.unk0 = ((func_80150BAC_StructA *)D_801BBCD0)->unk2C->unk4 - (func_8001EAD0(((func_80150BAC_StructA *)D_801BBCD0)->unk2C->unk12) * 8.0f);
    sp20.unk4 = ((func_80150BAC_StructA *)D_801BBCD0)->unk2C->unkC - (func_8001EB64(((func_80150BAC_StructA *)D_801BBCD0)->unk2C->unk12) * 8.0f);
    sp20.unkC = 0x1102;
    sp20.unk10 = 0x01680003;
    sp20.unk18 = 0x1000;
    sp20.unk1A = 0x5A;
    sp20.unk8 = D_801906F0;
    sp20.unk14 = 1.0f;
    func_801C2F0C(2, (struct func_80150970_Struct *)&sp20);
    func_800058DC(arg0, (void *)func_80150C8C);
}
