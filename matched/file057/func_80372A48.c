#include "common.h"
extern void *D_80005670(void *, void *);
typedef struct func_803709D0_StructGlobal {
    u8 pad[0xDC];
    s32 unkDC;
    u8 padE0[0x1038 - 0xE0];
    f32 unk1038;
    f32 unk103C;
    f32 unk1040;
} func_803709D0_StructGlobal;
extern func_803709D0_StructGlobal D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern s32 D_8038CC10;


typedef struct func_80372A48_StructVec {
    f32 x;
    f32 y;
    f32 z;
} func_80372A48_StructVec;

typedef struct func_80372A48_StructArg {
    u8 pad[0x5C];
    s32 unk5C;
} func_80372A48_StructArg;

typedef struct func_80372A48_StructPos {
    u8 pad[8];
    f32 unk8;
    u8 padC[6];
    s16 unk12;
} func_80372A48_StructPos;

typedef struct func_80372A48_StructSource {
    u8 pad[0x2C];
    func_80372A48_StructPos *unk2C;
} func_80372A48_StructSource;

typedef struct func_80372A48_StructGlobal {
    u8 pad[0xEC];
    s32 unkEC;
} func_80372A48_StructGlobal;

typedef struct func_80372A48_StructData {
    u8 pad[0x2D9];
    u8 unk2D9;
    u8 pad2DA[0x20];
    u8 unk2FA;
} func_80372A48_StructData;

typedef struct func_80372A48_StructResult {
    u8 pad[0x3C];
    u16 unk3C;
    u8 pad3E[2];
    u8 unk40;
    u8 pad41[0x2B];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 pad78[4];
    u8 unk7C;
    u8 pad7D[3];
    f32 unk80;
    f32 unk84;
    f32 unk88;
    func_80372A48_StructArg *unk8C;
    s32 unk90;
} func_80372A48_StructResult;
extern f32 func_8001EAD0(s32);
extern f32 func_8001EB64(s32);
extern s32 func_8035A3D8(u8);
extern s32 D_8013A334(f32 *, s32, s32, s32);
extern u8 D_80387C3C[];

void *func_80372A48(func_80372A48_StructArg *arg0, void **arg1) {
    s32 sp6C;
    s32 sp68;
    void *ret;
    func_80372A48_StructData *sp60;
    func_80372A48_StructPos *sp5C;
    f32 sp58;
    f32 sp54;
    f32 sp50;
    func_80372A48_StructVec sp44;
    func_80372A48_StructVec sp38;
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    u8 idx;
    u8 sp26;

    sp6C = ((s32)arg0 != D_801BBBF0.unkDC) ? D_801BBBF0.unkDC : ((func_80372A48_StructGlobal *)&D_801BBBF0)->unkEC;
    sp68 = arg0->unk5C;
    sp60 = (func_80372A48_StructData *)(((s32)arg0 == D_801BBBF0.unkDC) ? D_801BC03C : D_801BC3D8);
    sp5C = ((func_80372A48_StructSource *)*arg1)->unk2C;
    D_8013A334(&sp44.x, (s32)arg1, sp68, 6);
    D_8013A334(&sp38.x, (s32)arg1, sp68, 0x20);
    sp2C = (sp44.x + sp38.x) / 2;
    sp30 = (sp44.y + sp38.y) / 2;
    sp34 = (sp44.z + sp38.z) / 2;
    sp54 = 3.5 + sp5C->unk8;
    if (sp54 > sp30) {
        sp54 = sp30 - 1.0;
    }
    sp28 = (sp30 - sp54) * 1.5;
    if (sp28 < 20.0) {
        sp28 = 20.0f;
    }
    sp50 = func_8001EAD0((s16)sp5C->unk12) * sp28 + sp2C;
    sp58 = func_8001EB64((s16)sp5C->unk12) * sp28 + sp34;
    idx = sp60->unk2D9;
    sp26 = (u8)func_8035A3D8(idx);
    D_8038CC10 = (s32)D_80005670(arg0, D_80387C3C);
    if (D_8038CC10 != 0) {
        ((func_80372A48_StructResult *)D_8038CC10)->unk40 = sp26;
        ((func_80372A48_StructResult *)D_8038CC10)->unk6C = sp2C;
        ((func_80372A48_StructResult *)D_8038CC10)->unk70 = sp30;
        ((func_80372A48_StructResult *)D_8038CC10)->unk74 = sp34;
        ((func_80372A48_StructResult *)D_8038CC10)->unk80 = sp50;
        ((func_80372A48_StructResult *)D_8038CC10)->unk84 = sp54;
        ((func_80372A48_StructResult *)D_8038CC10)->unk88 = sp58;
        ((func_80372A48_StructResult *)D_8038CC10)->unk8C = arg0;
        ((func_80372A48_StructResult *)D_8038CC10)->unk90 = sp6C;
        ((func_80372A48_StructResult *)D_8038CC10)->unk3C = 0;
        ((func_80372A48_StructResult *)D_8038CC10)->unk7C = 0;
        sp60->unk2FA = 0;
    }
    ret = (void *)D_8038CC10;
    return ret;
}
