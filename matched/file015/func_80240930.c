#include "common.h"
#define SGCAT2(a, b) a##b
#define SGCAT(a, b) SGCAT2(a, b)
#define func_80242F38_StructGlobal SGCAT(SG_, __LINE__)
#define SG_348 struct SGtag
#define SG_407 SGtag
#define SG_411 func_80242F38_StructGlobal
#define SG_412 func_80242F38_StructGlobal
#define SG_413 func_80242F38_StructGlobal
#define SG_584 func_80242F38_StructGlobal
#define F30_7 func_80240930_ctxdummy
#define F54_342 func_80242A54_ctxdummy
#define F54_351 func_80242A54
#define F5C_423 func_8024315C_ctxdummy
#define F5C_433 func_8024315C
#define F3C_585 func_8024443C_ctxdummy
#define F3C_603 func_8024443C
extern u8 D_801BBBF0[];
extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern s32 func_8000C3B0(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern s32 func_80133A24(s32);
extern u8 func_80242A54[];
typedef struct func_80242F38_StructGlobal {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_80242F38_StructGlobal;
void func_8024315C(void);
extern void func_8024443C(void);

#undef func_80242F38_StructGlobal

typedef struct func_80240930_StructSub {
    u8 pad0[4];
    f32 unk4, unk8, unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18, unk1C, unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x18];
    u8 unk4C, unk4D, unk4E, unk4F;
} func_80240930_StructSub;
typedef struct func_80240930_StructNode {
    u8 pad0[0x30];
    func_80240930_StructSub *unk30;
} func_80240930_StructNode;

typedef struct func_80240930_Vec { s32 w[4]; } func_80240930_Vec;
extern func_80240930_Vec B_80164F40;
extern void func_80240C00();

void func_80240930(void *arg0, func_80240930_StructNode **arg1) {
    func_80240930_Vec sp28 = B_80164F40;

    sp28.w[1] = 0x80000C00;
    func_80005E44(arg0, &sp28);
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 0x286, 0);
    arg1[0]->unk30->unk24 = 0x13;
    arg1[0]->unk30->unk30 = func_8000C3B0(arg1[0]);
    arg1[0]->unk30->unk20 = 1.0f;
    arg1[0]->unk30->unk18 = arg1[0]->unk30->unk1C = arg1[0]->unk30->unk20;
    arg1[0]->unk30->unk4 = 50.0f;
    arg1[0]->unk30->unk8 = 5.0f;
    arg1[0]->unk30->unkC = 444.0f;
    arg1[0]->unk30->unk12 = 0;
    arg1[0]->unk30->unk24 |= 0x400;
    arg1[0]->unk30->unk4C = D_801BBBF0[0xF32];
    arg1[0]->unk30->unk4D = D_801BBBF0[0xF33];
    arg1[0]->unk30->unk4E = D_801BBBF0[0xF34];
    arg1[0]->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C89C(arg0, 1, 0x286, 1);
    arg1[1]->unk30->unk24 = 0x13;
    arg1[1]->unk30->unk30 = func_8000C3B0(arg1[1]);
    arg1[1]->unk30->unk20 = 1.0f;
    arg1[1]->unk30->unk18 = arg1[1]->unk30->unk1C = arg1[1]->unk30->unk20;
    arg1[1]->unk30->unk4 = 50.0f;
    arg1[1]->unk30->unk8 = 5.0f;
    arg1[1]->unk30->unkC = 444.0f;
    arg1[1]->unk30->unk12 = 0;
    arg1[1]->unk30->unk24 |= 0x400;
    arg1[1]->unk30->unk4C = D_801BBBF0[0xF32];
    arg1[1]->unk30->unk4D = D_801BBBF0[0xF33];
    arg1[1]->unk30->unk4E = D_801BBBF0[0xF34];
    arg1[1]->unk30->unk4F = D_801BBBF0[0xF35];
    if (func_80133A24(0x6F)) {
        arg1[0]->unk30->unk12 = -0x800;
        arg1[1]->unk30->unk12 = 0x800;
    }
    func_800058DC(arg0, func_80240C00);
}
