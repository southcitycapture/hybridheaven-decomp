#include "common.h"
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void func_80005700(s32 arg0, s32 arg1);


typedef struct func_80373634_StructC { u8 pad0[0x4]; f32 unk4; u8 pad8[4]; f32 unkC; } func_80373634_StructC;
typedef struct func_80373634_StructB { u8 pad0[0xC8]; f32 unkC8; u8 padCC[4]; f32 unkD0; f32 unkD4; u8 padD8[4]; f32 unkDC; } func_80373634_StructB;
typedef struct func_80373634_StructD { u8 pad0[0x2C]; func_80373634_StructC *unk2C; } func_80373634_StructD;
typedef struct func_80373634_StructA { u8 pad0[0x24]; func_80373634_StructD *unk24; u8 pad28[0x34]; func_80373634_StructB *unk5C; } func_80373634_StructA;
typedef struct func_80373634_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x30];
    u8 unk40;
    u8 pad41[3];
    f32 unk44;
    u8 pad48[4];
    u16 unk4C;
    u16 unk4E;
    u8 pad50[0x1C];
    f32 unk6C;
    u8 pad70[4];
    f32 unk74;
    u8 pad78[4];
    u8 unk7C;
    u8 pad7D[3];
    f32 unk80;
    u8 pad84[4];
    f32 unk88;
    u8 pad8C[4];
    func_80373634_StructA *unk90;
} func_80373634_Struct;
extern s16 func_8001EF38(f32, f32);
extern f32 func_8002FC20(f32);
extern s32 func_8035AFEC(s32, u8);
extern void func_8035C638(void *, void *);
extern void func_80372D9C(void *, f32, f32, f32);
extern s32 D_8038CC10;

#define FABS(x) (((x) < 0.0f) ? -(x) : (x))
#define ANGD(a, b) ANG1((s16)((a) - (b)))
#define ANG1(a) (((a) & 0x1000) ? (((a) & 0x1FFF) - 0x2000) : ((a) & 0x1FFF))
#define ABS(x) (((x) < 0) ? -(x) : (x))

void func_80373634(func_80373634_Struct *arg0, s32 arg1) {
    u8 *spA4;
    s32 pad;
    func_80373634_StructC *sp9C;
    func_80373634_StructB *sp98;
    f32 sp94, sp90, sp8C, sp88;
    f32 fa;

    if (D_801BBCCC == arg0->unkC) {
        spA4 = D_801BC03C;
    } else {
        spA4 = D_801BC3D8;
    }
    sp98 = arg0->unk90->unk5C;
    sp9C = arg0->unk90->unk24->unk2C;
    if ((s32) arg0->unk4C < (arg0->unk4E - 1)) {
        func_80372D9C(arg0, arg0->unk80, arg0->unk88, arg0->unk44);
        if (arg0->unk7C == 0) {
            fa = FABS(sp98->unkC8);
            if (fa < FABS(sp98->unkD4)) {
                fa = FABS(sp98->unkD4);
            }
            if (fa < FABS(sp98->unkD0)) {
                fa = FABS(sp98->unkD0);
            }
            if (fa < FABS(sp98->unkDC)) {
                fa = FABS(sp98->unkDC);
            }
            sp8C = arg0->unk80 - arg0->unk6C;
            sp88 = arg0->unk88 - arg0->unk74;
            sp94 = sp9C->unk4 - arg0->unk6C;
            sp90 = sp9C->unkC - arg0->unk74;
            if ((((sp94 * sp94) + (sp90 * sp90)) < ((sp8C * sp8C) + (sp88 * sp88) + fa)))
            if (((pad = ABS(ANGD(func_8001EF38(sp94, sp90), func_8001EF38(sp8C, sp88)))) <
                    ABS(ANG1(func_8001EF38(arg0->unk44, func_8002FC20((sp8C * sp8C) + (sp88 * sp88))))))) {
                func_8035AFEC(arg0->unkC, arg0->unk40);
                spA4[0x2FA] = 1;
                spA4[0x2DA] = 1;
                arg0->unk7C = 1;
                func_8035C638(arg0, spA4);
            }
        }
    }
    if ((s32) arg0->unk4C >= (s32) arg0->unk4E) {
extern void func_80005700();
        D_8038CC10 = 0;
        func_80005700(arg0);
    }
}
