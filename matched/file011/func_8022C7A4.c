#include "common.h"
struct func_80232278_Struct {
    u8 pad0[0xE];
    u16 unkE;
    u8 pad1[0x48 - 0x10];
    u16 unk48;
};
extern struct func_80232278_Struct D_8017DC40;
extern u8 D_8017DD92;
extern u8 D_801BBBF0[];
struct func_8022C314_Struct {
    u8 pad0[0x30];
    u32 pad30 : 9;
    u32 unk30 : 2;
    u32 pad30b : 21;
    u8 pad1[0x75 - 0x34];
    u8 unk75;
    u8 pad2[0x8A - 0x76];
    u16 unk8A;
    s16 unk8C;
    u8 pad3[2];
    u16 unk90;
    u16 unk92;
    u16 unk94;
    u8 pad4[0x308 - 0x96];
    f32 unk308;
};
void func_8022C314(struct func_8022C314_Struct *arg0);
typedef struct func_8022C478_StructEntry {
    u8 unk0;
    u8 unk1;
    s16 unk2;
    u8 unk4;
    u8 unk5;
} func_8022C478_StructEntry;
typedef struct func_8022C478_StructObj {
    u8 pad0[0xA8];
    func_8022C478_StructEntry entries[0x56];
    u8 pad2AC[0x385 - 0x2AC];
    u8 unk385;
    u8 pad386[2];
    u8 unk388;
    u8 pad389[2];
    u8 unk38B;
    u8 pad38C[2];
    u8 unk38E;
    u8 unk38F;
} func_8022C478_StructObj;
void func_8022C478(func_8022C478_StructObj *obj);
struct func_8022C5AC_Struct {
    u8 b[12];
};
struct func_8022C5AC_Obj {
    s16 unk0;
    u8 pad2[0x2AC - 2];
    struct func_8022C5AC_Struct unk2AC;
    s16 unk2B8[6];
    s16 unk2C4[6];
    u8 unk2D0;
};
void func_8022C5AC(struct func_8022C5AC_Obj *arg0);
extern void func_80379410(u8 *, s32, void *);


typedef struct func_8022C7A4_StructVec { u8 bytes[12]; } Vec12;
typedef struct func_8022C7A4_StructSrc {
    u16 unk0, unk2; u8 pad4[4]; s16 unk8; u8 padA[4]; u16 unkE;
    Vec12 unk10, unk1C, unk28, unk34;
    u16 unk40, unk42, unk44, unk46, unk48; u8 pad4A[12]; Vec12 unk56;
    u8 attrs[4], pad66[0x26], unk8C;
} Src;
typedef struct func_8022C7A4_StructDst {
    u16 unk0; s16 unk2, unk4, unk6, unk8, unkA; u8 padC[4];
    f32 unk10, unk14, unk18, unk1C, unk20; u8 pad24[8]; u16 unk2C; u8 pad2E[0x12];
    u16 unk40; s16 unk42, unk44, unk46, unk48, unk4A, unk4C;
    u16 unk4E, unk50, unk52, unk54; u8 pad56[2]; u16 unk58, unk5A, unk5C, unk5E, unk60;
    s16 unk62, unk64; u16 unk66, unk68; Vec12 unk6A, unk76, unk82, unk8E;
    u8 pad9A[4]; u16 unk9E, unkA0; u8 attrs[4], unkA6;
    u8 padA7[0x2C4-0xA7]; Vec12 unk2C4; u8 pad2D0, unk2D1, pad2D2[0x26];
    u8 unk2F8, unk2F9, pad2FA, clear[5];
    u16 unk300; s16 unk302; u8 pad304[8], unk30C, pad30D; s16 unk30E; u16 unk310;
    u8 pad312[0x72], unk384, unk385, unk386, unk387, unk388, unk389, unk38A, unk38B, unk38C, unk38D;
    u8 pad38E[11], unk399, pad39A[0x44C-0x39A];
} Dst;
typedef struct func_8022C7A4_StructPair { s32 a, b; } Pair;
extern u16 D_8017DCDE[];
extern Pair D_8023E30C;

void func_8022C7A4(Dst *self) {
extern void func_8022C5AC();
extern void func_80379410();
    Src *src;
    s32 ent;
    struct { u8 head[16]; Pair tbl; } sp28;
    s32 stage;
    ent = (s32)self - 0x44C;
    if (ent == (s32)D_801BBBF0) src = (Src *)&D_8017DC40;
    else src = (Src *)D_8017DCDE;
    sp28.tbl = D_8023E30C;
    self->unk0 = src->unk0;
    if (((Dst *)D_801BBBF0)->unk2C == 10U || ((Dst *)D_801BBBF0)->unk2C == 11U) {
        self->unk2 = self->unk46 = src->unk0;
    } else {
        self->unk2 = self->unk46 = src->unk2;
    }
    self->unk40 = self->unk300 = 0;
    self->unk4 = src->unkE * 100;
    self->unk4C = 0;
    self->unk6 = 0;
    self->unk44 = self->unk4C;
    self->unk8 = self->unkA = src->unk8;
    self->unk302 = 0;
    self->unk42 = self->unk48 = self->unk302;
    self->unk4E = self->unk58 = src->unk40;
    self->unk50 = self->unk5A = src->unk42;
    self->unk54 = self->unk5C = src->unk46;
    self->unk52 = src->unk44;
    self->unk2D1 = src->unk48;
    self->unk5E = self->unk60 = 0;
    self->unk62 = 10;
    self->unk64 = 10;
    self->unk66 = 0;
    self->unk68 = 0;
    self->unk9E = 0;
    self->unkA0 = 0;
    self->unk384 = 100;
    self->unk82 = src->unk10;
    self->unk8E = src->unk1C;
    self->unk6A = src->unk28;
    self->unk76 = src->unk34;
    self->unk2F8 = 0;
    self->unk1C = 1.0f;
    self->unk18 = 1.0f;
    self->unk14 = 1.0f;
    self->unk10 = 1.0f;
    self->unk20 = 1.0f;
    self->unk2F9 = src->unk8C;
    for (stage = 0; stage < 4; stage++) self->clear[(u8)(3 - stage)] = 0;
    self->clear[4] = 0;
    self->unkA6 = 0;
    self->unk385 = 0;
    self->unk388 = 0;
    self->unk38B = 0;
    self->unk386 = 0;
    self->unk389 = 0;
    self->unk38C = 0;
    self->unk387 = 0;
    self->unk38A = 0;
    self->unk38D = 0;
    self->unk2C4 = src->unk56;
    func_8022C5AC((struct func_8022C5AC_Obj *)self, ent, D_801BBBF0);
    self->unk4A = self->unk8;
    self->unk310 = 0x1000;
    self->unk30C = 0;
    self->unk30E = 0;
    self->attrs[0] = src->attrs[0];
    self->attrs[1] = src->attrs[1];
    self->attrs[2] = src->attrs[2];
    self->attrs[3] = src->attrs[3];
    self->unk399 = 100;
    func_8022C314((struct func_8022C314_Struct *)self);
    func_8022C478((func_8022C478_StructObj *)self);
    if (D_8017DD92 == 0) func_80379410((u8 *)self, 1);
}
