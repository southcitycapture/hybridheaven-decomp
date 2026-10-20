#include "context.h"

typedef struct func_801E31C0_Struct2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_801E31C0_Struct2;

typedef struct func_801E31C0_Struct1 {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_801E31C0_Struct2 *unk30;
} func_801E31C0_Struct1;

typedef struct func_801E31C0_Struct0 {
    func_801E31C0_Struct1 *unk0[16];
} func_801E31C0_Struct0;

extern void func_80005E44(s32, void *);
extern void func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern void func_8038D28C(s32);
extern s32 D_8038D8CC;
extern u8 D_8038D88C[];
extern u8 D_801D9040[];
extern struct func_801E3A34_Struct0 *D_8038D8D0;

#define P ((func_801E31C0_Struct0 *)D_8038D8D0)

s32 func_801E31C0(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < 4; i++) {
        func_80005E44(D_8038D8CC, D_8038D88C);
    }
    for (i = 0; i < 12; i++) {
        func_80005E44(D_8038D8CC, D_8038D88C);
    }
    func_80006214(D_8038D8CC);
    func_8012C89C(D_8038D8CC, 0, 0x263, 0);
    func_8012C89C(D_8038D8CC, 1, 0x267, 0);
    func_8012C89C(D_8038D8CC, 2, 0x263, 0);
    func_8012C89C(D_8038D8CC, 3, 0x267, 0);
    for (i = 0; i < 12; i++) {
        func_8012C89C(D_8038D8CC, i + 4, 0x445, 0);
    }
    P->unk0[0]->unk30->unk4 = -49.0f;
    P->unk0[0]->unk30->unk8 = 0.0f;
    P->unk0[0]->unk30->unkC = 49.0f;
    P->unk0[0]->unk30->unk12 = 0x1000;
    P->unk0[0]->unk30->unk18 = 1.0f;
    P->unk0[0]->unk30->unk1C = 1.0f;
    P->unk0[0]->unk30->unk20 = 1.0f;
    P->unk0[1]->unk30->unk4 = -49.0f;
    P->unk0[1]->unk30->unk8 = 0.0f;
    P->unk0[1]->unk30->unkC = 49.0f;
    P->unk0[1]->unk30->unk12 = 0x1000;
    P->unk0[1]->unk30->unk30 = (s32)D_801D9040 | 0x40000000;
    P->unk0[1]->unk30->unk24 = 0x100;
    P->unk0[1]->unk30->unk48 = 0;
    P->unk0[1]->unk30->unk49 = 0;
    P->unk0[1]->unk30->unk4A = 0;
    P->unk0[1]->unk30->unk4B = 0xFF;
    P->unk0[2]->unk30->unk4 = -49.0f;
    P->unk0[2]->unk30->unk8 = 97.0f;
    P->unk0[2]->unk30->unkC = -49.0f;
    P->unk0[2]->unk30->unk12 = 0x800;
    P->unk0[2]->unk30->unk18 = 1.0f;
    P->unk0[2]->unk30->unk1C = 1.0f;
    P->unk0[2]->unk30->unk20 = 1.0f;
    P->unk0[2]->unk22 = 0;
    P->unk0[3]->unk30->unk4 = -49.0f;
    P->unk0[3]->unk30->unk8 = 97.0f;
    P->unk0[3]->unk30->unkC = -49.0f;
    P->unk0[3]->unk30->unk12 = 0x800;
    P->unk0[3]->unk30->unk30 = (s32)D_801D9040 | 0x40000000;
    P->unk0[3]->unk30->unk24 = 0x100;
    P->unk0[3]->unk30->unk48 = 0;
    P->unk0[3]->unk30->unk49 = 0;
    P->unk0[3]->unk30->unk4A = 0;
    P->unk0[3]->unk30->unk4B = 0xFF;
    P->unk0[3]->unk22 = 0;
    for (i = 0; i < 12; i++) {
        P->unk0[i + 4]->unk30->unk4 = 0.0f;
        P->unk0[i + 4]->unk30->unk8 = 0.0f;
        P->unk0[i + 4]->unk30->unkC = 0.0f;
        P->unk0[i + 4]->unk30->unk12 = 0;
    }
    func_8038D28C(0x23D);
    return 2;
}
