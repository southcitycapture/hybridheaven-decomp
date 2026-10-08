#include "context.h"

typedef struct func_801E31B8_Struct30 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
    u8 pad2[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801E31B8_Struct30;

typedef struct func_801E31B8_StructQ {
    u8 pad0[0x30];
    func_801E31B8_Struct30 *unk30;
} func_801E31B8_StructQ;

extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern f32 D_801E51E8;
extern f32 D_801E51EC;
extern s32 D_8038D850;
extern s32 D_8038D854;
extern u8 D_8038D88C[];

s32 func_801E31B8(s32 arg0, s32 arg1) {
    func_801E31B8_StructQ ***pp;

    func_80005E44(D_8038D850, D_8038D88C);
    func_80006214(D_8038D850);
    func_8012C89C(D_8038D850, 0, 0xA1, 0);
    pp = (func_801E31B8_StructQ ***)&D_8038D854;
    (**pp)->unk30->unk4 = 0.0f;
    (**pp)->unk30->unk8 = D_801E51E8;
    (**pp)->unk30->unkC = D_801E51EC;
    (**pp)->unk30->unk18 = 1.0f;
    (**pp)->unk30->unk1C = 1.0f;
    (**pp)->unk30->unk20 = 1.0f;
    (**pp)->unk30->unk12 = 0;
    return 2;
}
