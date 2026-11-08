#include "common.h"
extern u8 D_801BBBF0[];
extern void func_800058DC(s32, void *);
void func_80135320(s32 arg0, s32 arg1);
typedef struct func_8013532C_Inner {
    u8 pad0[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[0x4C - 0x16];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_8013532C_Inner;
typedef struct func_8013532C_Mid {
    u8 pad0[0x30];
    func_8013532C_Inner *unk30;
} func_8013532C_Mid;
typedef struct func_8013532C_Arg0 {
    u8 pad0[0x24];
    func_8013532C_Mid *unk24;
    u8 pad28[0x90 - 0x28];
    s32 unk90;
    s32 unk94;
    s32 unk98;
} func_8013532C_Arg0;
void func_8013532C(func_8013532C_Arg0 *arg0, func_8013532C_Mid **arg1);
typedef struct func_801353C0_StructData {
    u8 pad[0x14];
    s32 unk14;
} func_801353C0_StructData;
typedef struct func_801353C0_StructInner {
    u8 pad[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
} func_801353C0_StructInner;
typedef struct func_801353C0_StructMid {
    u8 pad[0x2C];
    func_801353C0_StructInner *unk2C;
} func_801353C0_StructMid;
typedef struct func_801353C0_StructObj {
    u8 pad[0x24];
    func_801353C0_StructMid *unk24;
    u8 pad28[0x10];
    func_801353C0_StructData *unk38;
    u8 pad3C[0x20];
    s32 unk5C;
} func_801353C0_StructObj;
void func_801353C0(func_801353C0_StructObj *arg0, s32 arg1);
typedef struct func_80135420_Inner {
    u8 pad0[0x10];
    u32 unk10;
} func_80135420_Inner;
typedef struct func_80135420_Sub {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_80135420_Sub;
typedef struct func_80135420_Mid {
    u8 pad0[0x30];
    func_80135420_Sub *unk30;
} func_80135420_Mid;
typedef struct func_80135420_Obj {
    u8 pad0[0x24];
    func_80135420_Mid *unk24;
    u8 pad28[0x38 - 0x28];
    func_80135420_Inner *unk38;
} func_80135420_Obj;
void func_80135420(func_80135420_Obj *arg0, s32 arg1);
typedef struct func_801354CC_Inner {
    u8 pad0[0x14];
    u32 unk14;
} func_801354CC_Inner;
typedef struct func_801354CC_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x38 - 0x30];
    func_801354CC_Inner *unk38;
} func_801354CC_Struct;
void func_801354CC(func_801354CC_Struct *arg0, s32 arg1);
typedef struct func_80135520_Struct {
    u8 pad0[0x10];
    s16 unk10;
} func_80135520_Struct;
typedef struct func_80135520_Obj {
    u8 pad0[0x24];
    struct {
        u8 pad0[0x30];
        func_80135520_Struct *unk30;
    } *unk24;
} func_80135520_Obj;
void func_80135520(func_80135520_Obj *arg0, s32 arg1);
typedef struct func_801355D8_Struct {
    u8 pad0[0x14];
    u32 unk14;
} func_801355D8_Struct;
typedef struct func_801355D8_Obj {
    u8 pad0[0x36];
    u16 unk36;
    func_801355D8_Struct *unk38;
    u8 pad3c[0x74 - 0x3C];
    s32 unk74;
} func_801355D8_Obj;
void func_801355D8(func_801355D8_Obj *arg0, s32 arg1);
typedef struct func_80135678_StructB { u8 pad0[0x10]; u32 unk10; u32 unk14; } func_80135678_StructB;
typedef struct func_80135678_StructA { u8 pad0[0x38]; func_80135678_StructB *unk38; u8 pad3C[0x5C-0x3C]; s16 unk5C; u16 unk5E; } func_80135678_StructA;
typedef struct func_80135678_StructC { u8 pad0[0x30]; u8 *unk30; } func_80135678_StructC;
void func_80135678(func_80135678_StructA *arg0, func_80135678_StructC **arg1);
typedef struct func_8013581C_Sub {
    u8 pad0[0x8];
    f32 unk8;
} func_8013581C_Sub;
typedef struct func_8013581C_Mid {
    u8 pad0[0x30];
    func_8013581C_Sub *unk30;
} func_8013581C_Mid;
typedef struct func_8013581C_Inner {
    u8 pad0[0x8];
    s16 unk8;
    u8 padA[0x18 - 0xA];
    u32 unk18;
} func_8013581C_Inner;
typedef struct func_8013581C_Obj {
    u8 pad0[0x38];
    func_8013581C_Inner *unk38;
    u8 pad3C[0x5C - 0x3C];
    s16 unk5C;
} func_8013581C_Obj;
void func_8013581C(func_8013581C_Obj *arg0, func_8013581C_Mid **arg1);
typedef struct func_801358FC_Sub {
    u8 pad0[0x12];
    s16 unk12;
} func_801358FC_Sub;
typedef struct func_801358FC_Node {
    u8 pad0[0x30];
    func_801358FC_Sub *unk30;
} func_801358FC_Node;
typedef struct func_801358FC_Inner {
    u8 pad0[0x18];
    u32 unk18;
} func_801358FC_Inner;
typedef struct func_801358FC_Obj {
    u8 pad0[0x38];
    func_801358FC_Inner *unk38;
} func_801358FC_Obj;
void func_801358FC(func_801358FC_Obj *arg0, func_801358FC_Node **arg1);

#undef func_80133B00

typedef struct func_80133B00_StructPair {
    s32 unk0, unk4, unk8, unkC;
} func_80133B00_StructPair;

typedef struct func_80133B00_StructSub {
    s16 unk0;
    u8 pad2[2];
    f32 unk4, unk8, unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18, unk1C, unk20;
    s32 unk24;
    void *unk28;
    u8 pad2C[4];
    s32 unk30;
    u8 pad34[0x48 - 0x34];
    u8 unk48, unk49, unk4A, unk4B, unk4C, unk4D, unk4E, unk4F;
} func_80133B00_StructSub;

typedef struct func_80133B00_StructMid {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[4];
    func_80133B00_StructSub *unk2C;
    func_80133B00_StructSub *unk30;
} func_80133B00_StructMid;

typedef struct func_80133B00_StructData {
    u8 pad0[2];
    u16 unk2;
    u8 pad4[0xC];
    u32 unk10, unk14, unk18;
} func_80133B00_StructData;

typedef struct func_80133B00_StructObj {
    u8 pad0[0x18];
    void *unk18;
    u8 pad1C[4];
    void *unk20;
    func_80133B00_StructMid *unk24;
    u8 pad28[4];
    s32 unk2C;
    u8 pad30[6];
    u16 unk36;
    func_80133B00_StructData *unk38;
    u8 pad3C[0x74 - 0x3C];
    s32 unk74;
    f32 unk78, unk7C, unk80;
    s16 unk84, unk86, unk88;
    u8 pad8A[2];
    void *unk8C;
    s32 unk90, unk94, unk98;
} func_80133B00_StructObj;

typedef struct func_80133B00_StructTbl {
    u16 *unk0;
    s32 *unk4;
} func_80133B00_StructTbl;

typedef struct func_80133B00_StructGlob {
    u8 pad0[0x11E];
    s16 unk11E[9];
    s16 unk130[9];
    s16 unk142[9];
    u8 pad154[0xF32 - 0x154];
    u8 unkF32, unkF33, unkF34, unkF35;
    u8 padF36[0x1044 - 0xF36];
    void *unk1044;
} func_80133B00_StructGlob;

#define G ((func_80133B00_StructGlob *)D_801BBBF0)
extern void func_8001F74C(void);
extern void func_80005F6C(s32, func_80133B00_StructPair *);
extern void func_80006214(s32);
extern void func_8012636C(s32, s32);
extern void func_8012C784(s32, s32, s32);
extern void func_8013B570(s32, u16, s32, s32, void *);
extern s32 func_8000C3B0(func_80133B00_StructMid *);
extern s32 func_8000522C(u16, s32);
extern func_80133B00_StructPair D_80164F30;
extern func_80133B00_StructPair D_80164F40;
extern f32 D_8018DA80;
extern func_80133B00_StructTbl *D_80171CEC[];
extern u8 D_3000210[];
extern u8 D_8017AAB8[];
extern u8 D_8017AB18[];
extern u8 D_8017AB68[];
extern u8 D_8017ABB8[];
extern u8 D_8017AE98[];
extern u8 D_8017AF38[];
extern u8 D_8017B0F8[];
extern u8 D_8017B148[];
extern u8 D_8017B1A0[];
extern u8 D_8017B5A8[];
extern u8 D_8017B668[];
extern u8 D_8017B6C0[];
extern u8 D_8017B710[];
extern u8 func_80127014[];
extern u8 func_8012E5B0[];
extern u8 func_8012E6BC[];

void func_80133B00(func_80133B00_StructObj *arg0, func_80133B00_StructMid **arg1) {
    func_80133B00_StructPair sp48;
    func_80133B00_StructPair sp38;

    func_8001F74C();
    sp48 = D_80164F30;
    sp38 = D_80164F40;
    switch (arg0->unk38->unk10 >> 0x18) {
    case 0:
        sp38.unk4 = 0x80000C00;
        func_80005F6C((s32)arg0, &sp38);
        func_80006214((s32)arg0);
        func_8012636C((s32)arg0, 0);
        func_8012C784((s32)arg0, 0, (arg0->unk38->unk14 >> 0x10) & 0xFF);
        (*arg1)->unk30->unk30 = (s32)D_8017AE98;
        break;
    case 1:
        sp38.unk4 = 0x80000B00;
        func_80005F6C((s32)arg0, &sp38);
        func_80006214((s32)arg0);
        func_8012636C((s32)arg0, 0);
        (*arg1)->unk30->unk30 = (s32) ((s32) D_8017B0F8 | 0x40000000);
        func_8012C784((s32)arg0, 0, (arg0->unk38->unk10 >> 0x10) & 0xFF);
        break;
    case 2:
        sp38.unk4 = 0x80000A00;
        func_80005F6C((s32)arg0, &sp38);
        func_80006214((s32)arg0);
        func_8012636C((s32)arg0, 0);
        (*arg1)->unk30->unk24 |= 0x100;
        (*arg1)->unk30->unk30 = (s32) ((s32) D_8017B710 | 0x40000000);
        (*arg1)->unk30->unk4B = (arg0->unk38->unk10 >> 8) & 0xFF;
        (*arg1)->unk30->unk48 = arg0->unk38->unk10 & 0xFF;
        (*arg1)->unk30->unk49 = arg0->unk38->unk14 >> 0x18;
        (*arg1)->unk30->unk4A = (arg0->unk38->unk14 >> 0x10) & 0xFF;
        (*arg1)->unk30->unk24 |= 0x400;
        (*arg1)->unk30->unk4C = (u8) G->unkF32;
        (*arg1)->unk30->unk4D = (u8) G->unkF33;
        (*arg1)->unk30->unk4E = (u8) G->unkF34;
        (*arg1)->unk30->unk4F = (u8) G->unkF35;
        func_8012C784((s32)arg0, 0, (arg0->unk38->unk10 >> 0x10) & 0xFF);
        break;
    case 3:
        G->unk1044 = arg0;
        sp38.unk4 = 0x80000400;
        func_80005F6C((s32)arg0, &sp38);
        func_80006214((s32)arg0);
        func_8012636C((s32)arg0, 0);
        (*arg1)->unk30->unk24 |= 0x100;
        (*arg1)->unk30->unk30 = (s32) ((s32) D_8017B668 | 0x40000000);
        (*arg1)->unk30->unk4B = (arg0->unk38->unk10 >> 8) & 0xFF;
        (*arg1)->unk30->unk48 = arg0->unk38->unk10 & 0xFF;
        (*arg1)->unk30->unk49 = arg0->unk38->unk14 >> 0x18;
        (*arg1)->unk30->unk4A = (arg0->unk38->unk14 >> 0x10) & 0xFF;
        (*arg1)->unk30->unk24 |= 0x400;
        (*arg1)->unk30->unk4C = (u8) G->unkF32;
        (*arg1)->unk30->unk4D = (u8) G->unkF33;
        (*arg1)->unk30->unk4E = (u8) G->unkF34;
        (*arg1)->unk30->unk4F = (u8) G->unkF35;
        func_8012C784((s32)arg0, 0, (arg0->unk38->unk10 >> 0x10) & 0xFF);
        break;
    case 4:
        sp38.unk4 = 0x80000A00;
        func_80005F6C((s32)arg0, &sp38);
        func_80006214((s32)arg0);
        func_8012636C((s32)arg0, 0);
        (*arg1)->unk30->unk24 = 0x13;
        (*arg1)->unk30->unk30 = (s32) ((s32) D_8017B148 | 0x40000000);
        func_8012C784((s32)arg0, 0, (arg0->unk38->unk10 >> 0x10) & 0xFF);
        (*arg1)->unk30->unk4C = (u8) G->unkF32;
        (*arg1)->unk30->unk4D = (u8) G->unkF33;
        (*arg1)->unk30->unk4E = (u8) G->unkF34;
        (*arg1)->unk30->unk4F = (u8) G->unkF35;
        break;
    case 5:
        sp38.unk4 = 0x80000C00;
        func_80005F6C((s32)arg0, &sp38);
        func_80006214((s32)arg0);
        func_8012636C((s32)arg0, 0);
        (*arg1)->unk30->unk30 = (s32)D_8017AE98;
        if (((arg0->unk38->unk10 >> 8) & 0xFF) == 1) {
            (*arg1)->unk30->unk24 = 0x13;
            (*arg1)->unk30->unk30 = func_8000C3B0(*arg1);
            (*arg1)->unk30->unk4C = (u8) G->unkF32;
            (*arg1)->unk30->unk4D = (u8) G->unkF33;
            (*arg1)->unk30->unk4E = (u8) G->unkF34;
            (*arg1)->unk30->unk4F = (u8) G->unkF35;
        }
        arg0->unk90 = (s32) (s16) (arg0->unk38->unk14 >> 0x10);
        arg0->unk94 = (s16) (arg0->unk38->unk14 & 0xFFFF);
        arg0->unk98 = (s32) (s16) (arg0->unk38->unk18 >> 0x10);
        func_8012C784((s32)arg0, 0, (arg0->unk38->unk10 >> 0x10) & 0xFF);
        (*arg1)->unk30->unk20 = 1.0f;
        (*arg1)->unk30->unk18 = (*arg1)->unk30->unk1C = (*arg1)->unk30->unk20;
        func_800058DC((s32)arg0, func_8013532C);
        return;
    case 6:
        arg0->unk18 = func_8012E5B0;
        arg0->unk20 = func_8012E6BC;
        arg0->unk8C = func_80127014;
        func_8013B570((s32)arg0, arg0->unk38->unk2, 2, 4, func_801353C0);
        return;
    case 7:
        sp38.unk4 = 0x80000C00;
        func_80005F6C((s32)arg0, &sp38);
        func_80006214((s32)arg0);
        func_8012636C((s32)arg0, 0);
        (*arg1)->unk30->unk30 = (s32)D_8017AE98;
        if (((arg0->unk38->unk10 >> 8) & 0xFF) == 1) {
            (*arg1)->unk30->unk24 = 0x13;
            (*arg1)->unk30->unk30 = func_8000C3B0(*arg1);
            (*arg1)->unk30->unk4C = (u8) G->unkF32;
            (*arg1)->unk30->unk4D = (u8) G->unkF33;
            (*arg1)->unk30->unk4E = (u8) G->unkF34;
            (*arg1)->unk30->unk4F = (u8) G->unkF35;
        }
        func_8012C784((s32)arg0, 0, (arg0->unk38->unk10 >> 0x10) & 0xFF);
        if ((arg0->unk38->unk10 & 0xFF) == 0) {
            (*arg1)->unk30->unk20 = 1.0f;
            (*arg1)->unk30->unk18 = (*arg1)->unk30->unk1C = (*arg1)->unk30->unk20;
        } else {
            (*arg1)->unk30->unk18 = (*arg1)->unk30->unk1C = (*arg1)->unk30->unk20 = (f32) ((f64) (f32) (arg0->unk38->unk10 & 0xFF) / 100.0);
        }
        break;
    case 8: {
        f32 scale;
        sp38.unk4 = 0x80000C00;
        func_80005F6C((s32)arg0, &sp38);
        func_80006214((s32)arg0);
        scale = D_8018DA80;
        arg0->unk24->unk30->unk0 = 0x73;
        arg0->unk24->unk30->unk28 = D_3000210;
        arg0->unk24->unk2C->unk4 = G->unk11E[(arg0->unk38->unk10 >> 0x10) & 0xFF];
        arg0->unk24->unk2C->unk8 = G->unk130[(arg0->unk38->unk10 >> 0x10) & 0xFF];
        arg0->unk24->unk2C->unkC = G->unk142[(arg0->unk38->unk10 >> 0x10) & 0xFF];
        (*arg1)->unk30->unk18 = scale;
        (*arg1)->unk30->unk1C = scale;
        (*arg1)->unk30->unk20 = scale;
        func_800058DC((s32)arg0, func_80135420);
        return;
    }
    case 9:
        func_80005F6C((s32)arg0, &D_80164F40);
        func_80006214((s32)arg0);
        func_8012636C((s32)arg0, 0);
        arg0->unk74 = func_8000522C(*D_80171CEC[arg0->unk36]->unk0, D_80171CEC[arg0->unk36]->unk4[(arg0->unk38->unk10 >> 0x10) & 0xFF]);
        arg0->unk78 = (f32) arg0->unk24->unk2C->unk4;
        arg0->unk7C = (f32) arg0->unk24->unk2C->unk8;
        arg0->unk80 = (f32) arg0->unk24->unk2C->unkC;
        arg0->unk84 = 0;
        arg0->unk86 = (s16) arg0->unk24->unk2C->unk12;
        arg0->unk88 = 0;
        func_800058DC((s32)arg0, func_801354CC);
        return;
    case 10:
        sp38.unk4 = 0x80000400;
        func_80005F6C((s32)arg0, &sp38);
        func_80006214((s32)arg0);
        func_8012636C((s32)arg0, 0);
        (*arg1)->unk24 = 0x80000600;
        (*arg1)->unk30->unk24 |= 0x100;
        (*arg1)->unk30->unk30 = (s32) ((s32) D_8017B5A8 | 0x40000000);
        (*arg1)->unk30->unk4B = (arg0->unk38->unk10 >> 8) & 0xFF;
        (*arg1)->unk30->unk48 = arg0->unk38->unk10 & 0xFF;
        (*arg1)->unk30->unk49 = arg0->unk38->unk14 >> 0x18;
        (*arg1)->unk30->unk4A = (arg0->unk38->unk14 >> 0x10) & 0xFF;
        func_8012C784((s32)arg0, 0, (arg0->unk38->unk10 >> 0x10) & 0xFF);
        arg0->unk90 = (s8) ((arg0->unk38->unk14 >> 8) & 0xFF);
        arg0->unk94 = (s8) (arg0->unk38->unk14 & 0xFF);
        arg0->unk98 = (s32) (s8) (arg0->unk38->unk18 >> 0x18);
        func_8012C784((s32)arg0, 0, (arg0->unk38->unk10 >> 0x10) & 0xFF);
        (*arg1)->unk30->unk20 = 1.0f;
        (*arg1)->unk30->unk18 = (*arg1)->unk30->unk1C = (*arg1)->unk30->unk20;
        func_800058DC((s32)arg0, func_8013532C);
        return;
    case 11:
        func_80005F6C((s32)arg0, &D_80164F40);
        func_80006214((s32)arg0);
        func_8012636C((s32)arg0, 0);
        arg0->unk74 = func_8000522C(*D_80171CEC[arg0->unk36]->unk0, D_80171CEC[arg0->unk36]->unk4[(arg0->unk38->unk10 >> 0x10) & 0xFF]);
        arg0->unk2C = (s32) (arg0->unk2C | 0x800);
        arg0->unk78 = (f32) arg0->unk24->unk30->unk4;
        arg0->unk7C = (f32) arg0->unk24->unk30->unk8;
        arg0->unk80 = (f32) arg0->unk24->unk30->unkC;
        arg0->unk84 = 0;
        arg0->unk86 = (s16) arg0->unk24->unk30->unk12;
        arg0->unk88 = 0;
        break;
    case 12:
        sp38.unk4 = 0x80000A00;
        func_80005F6C((s32)arg0, &sp38);
        func_80006214((s32)arg0);
        func_8012636C((s32)arg0, 0);
        (*arg1)->unk30->unk24 = 0x13;
        (*arg1)->unk30->unk30 = (s32) ((s32) D_8017B1A0 | 0x40000000);
        func_8012C784((s32)arg0, 0, (arg0->unk38->unk10 >> 0x10) & 0xFF);
        (*arg1)->unk30->unk4C = (u8) G->unkF32;
        (*arg1)->unk30->unk4D = (u8) G->unkF33;
        (*arg1)->unk30->unk4E = (u8) G->unkF34;
        (*arg1)->unk30->unk4F = (u8) G->unkF35;
        break;
    case 13:
        sp38.unk4 = 0x80000A00;
        func_80005F6C((s32)arg0, &sp38);
        func_80006214((s32)arg0);
        func_8012636C((s32)arg0, 0);
        (*arg1)->unk30->unk24 |= 0x100;
        (*arg1)->unk30->unk30 = (s32) ((s32) D_8017B6C0 | 0x40000000);
        (*arg1)->unk30->unk4B = (arg0->unk38->unk10 >> 8) & 0xFF;
        (*arg1)->unk30->unk48 = arg0->unk38->unk10 & 0xFF;
        (*arg1)->unk30->unk49 = arg0->unk38->unk14 >> 0x18;
        (*arg1)->unk30->unk4A = (arg0->unk38->unk14 >> 0x10) & 0xFF;
        (*arg1)->unk30->unk24 |= 0x400;
        (*arg1)->unk30->unk4C = (u8) G->unkF32;
        (*arg1)->unk30->unk4D = (u8) G->unkF33;
        (*arg1)->unk30->unk4E = (u8) G->unkF34;
        (*arg1)->unk30->unk4F = (u8) G->unkF35;
        func_8012C784((s32)arg0, 0, (arg0->unk38->unk10 >> 0x10) & 0xFF);
        break;
    case 14:
        sp38.unk4 = 0x80000C00;
        func_80005F6C((s32)arg0, &sp38);
        func_80006214((s32)arg0);
        func_8012636C((s32)arg0, 0);
        (*arg1)->unk30->unk30 = (s32)D_8017AE98;
        (*arg1)->unk30->unk24 = 0x13;
        (*arg1)->unk30->unk30 = func_8000C3B0(*arg1);
        (*arg1)->unk30->unk4C = (u8) G->unkF32;
        (*arg1)->unk30->unk4D = (u8) G->unkF33;
        (*arg1)->unk30->unk4E = (u8) G->unkF34;
        (*arg1)->unk30->unk4F = (u8) G->unkF35;
        func_8012C784((s32)arg0, 0, 4);
        (*arg1)->unk30->unk20 = 1.0f;
        (*arg1)->unk30->unk18 = (*arg1)->unk30->unk1C = (*arg1)->unk30->unk20;
        func_800058DC((s32)arg0, func_80135520);
        return;
    case 16:
        sp38.unk4 = 0x80000400;
        func_80005F6C((s32)arg0, &sp38);
        func_80006214((s32)arg0);
        func_8012636C((s32)arg0, 0);
        (*arg1)->unk30->unk24 |= 0x300;
        (*arg1)->unk30->unk30 = (s32) ((s32) D_8017AAB8 | 0x40000000);
        (*arg1)->unk30->unk4B = (arg0->unk38->unk10 >> 8) & 0xFF;
        (*arg1)->unk30->unk48 = arg0->unk38->unk10 & 0xFF;
        (*arg1)->unk30->unk49 = arg0->unk38->unk14 >> 0x18;
        (*arg1)->unk30->unk4A = (arg0->unk38->unk14 >> 0x10) & 0xFF;
        (*arg1)->unk30->unk4C = (arg0->unk38->unk14 >> 8) & 0xFF;
        (*arg1)->unk30->unk4D = arg0->unk38->unk14 & 0xFF;
        (*arg1)->unk30->unk4E = arg0->unk38->unk18 >> 0x18;
        func_8012C784((s32)arg0, 0, (arg0->unk38->unk10 >> 0x10) & 0xFF);
        break;
    case 17:
        sp38.unk4 = 0x80000400;
        func_80005F6C((s32)arg0, &sp38);
        func_80006214((s32)arg0);
        func_8012636C((s32)arg0, 0);
        (*arg1)->unk30->unk24 |= 0x100;
        (*arg1)->unk30->unk30 = (s32) ((s32) D_8017AB18 | 0x40000000);
        (*arg1)->unk30->unk4B = (arg0->unk38->unk10 >> 8) & 0xFF;
        func_8012C784((s32)arg0, 0, (arg0->unk38->unk10 >> 0x10) & 0xFF);
        break;
    case 18:
        sp38.unk4 = 0x80000400;
        func_80005F6C((s32)arg0, &sp38);
        func_80006214((s32)arg0);
        func_8012636C((s32)arg0, 0);
        (*arg1)->unk30->unk24 |= 0x100;
        (*arg1)->unk30->unk30 = (s32) ((s32) D_8017AB68 | 0x40000000);
        (*arg1)->unk30->unk4B = (arg0->unk38->unk10 >> 8) & 0xFF;
        func_8012C784((s32)arg0, 0, (arg0->unk38->unk10 >> 0x10) & 0xFF);
        break;
    case 19:
        func_80005F6C((s32)arg0, &D_80164F40);
        func_80006214((s32)arg0);
        func_8012636C((s32)arg0, 0);
        arg0->unk74 = func_8000522C(*D_80171CEC[arg0->unk36]->unk0, D_80171CEC[arg0->unk36]->unk4[(arg0->unk38->unk10 >> 0x10) & 0xFF]);
        arg0->unk2C = (s32) (arg0->unk2C | 0x800);
        arg0->unk78 = (f32) arg0->unk24->unk30->unk4;
        arg0->unk7C = (f32) arg0->unk24->unk30->unk8;
        arg0->unk80 = (f32) arg0->unk24->unk30->unkC;
        arg0->unk84 = 0;
        arg0->unk86 = (s16) arg0->unk24->unk30->unk12;
        arg0->unk88 = 0;
        func_800058DC((s32)arg0, func_801355D8);
        return;
    case 25:
        sp38.unk4 = 0x80000C00;
        func_80005F6C((s32)arg0, &sp38);
        func_80006214((s32)arg0);
        func_8012636C((s32)arg0, 0);
        func_8012C784((s32)arg0, 0, (arg0->unk38->unk10 >> 0x10) & 0xFF);
        (*arg1)->unk30->unk30 = (s32)D_8017AF38;
        (*arg1)->unk30->unk24 |= 0x400;
        (*arg1)->unk30->unk4C = (u8) G->unkF32;
        (*arg1)->unk30->unk4D = (u8) G->unkF33;
        (*arg1)->unk30->unk4E = (u8) G->unkF34;
        (*arg1)->unk30->unk4F = (u8) G->unkF35;
        break;
    case 20:
        sp38.unk4 = 0x80000400;
        func_80005F6C((s32)arg0, &sp38);
        func_80006214((s32)arg0);
        func_8012636C((s32)arg0, 0);
        (*arg1)->unk30->unk24 |= 0x100;
        (*arg1)->unk30->unk30 = (s32) ((s32) D_8017ABB8 | 0x40000000);
        (*arg1)->unk30->unk4B = (arg0->unk38->unk10 >> 8) & 0xFF;
        (*arg1)->unk30->unk48 = 0xFF;
        (*arg1)->unk30->unk49 = 0xFF;
        (*arg1)->unk30->unk4A = 0xFF;
        func_8012C784((s32)arg0, 0, (arg0->unk38->unk10 >> 0x10) & 0xFF);
        func_800058DC((s32)arg0, func_80135678);
        return;
    case 21:
        sp38.unk4 = 0x80000A00;
        func_80005F6C((s32)arg0, &sp38);
        func_80006214((s32)arg0);
        func_8012636C((s32)arg0, 0);
        (*arg1)->unk30->unk24 |= 0x100;
        (*arg1)->unk30->unk30 = (s32) ((s32) D_8017B710 | 0x40000000);
        (*arg1)->unk30->unk4B = (arg0->unk38->unk10 >> 8) & 0xFF;
        (*arg1)->unk30->unk48 = 0xFF;
        (*arg1)->unk30->unk49 = 0xFF;
        (*arg1)->unk30->unk4A = 0xFF;
        (*arg1)->unk30->unk24 |= 0x400;
        (*arg1)->unk30->unk4C = (u8) G->unkF32;
        (*arg1)->unk30->unk4D = (u8) G->unkF33;
        (*arg1)->unk30->unk4E = (u8) G->unkF34;
        (*arg1)->unk30->unk4F = (u8) G->unkF35;
        func_8012C784((s32)arg0, 0, (arg0->unk38->unk10 >> 0x10) & 0xFF);
        func_800058DC((s32)arg0, func_80135678);
        return;
    case 22:
        sp38.unk4 = 0x80000400;
        func_80005F6C((s32)arg0, &sp38);
        func_80006214((s32)arg0);
        func_8012636C((s32)arg0, 0);
        (*arg1)->unk30->unk24 |= 0x300;
        (*arg1)->unk30->unk30 = (s32) ((s32) D_8017AAB8 | 0x40000000);
        (*arg1)->unk30->unk4B = (arg0->unk38->unk10 >> 8) & 0xFF;
        (*arg1)->unk30->unk48 = arg0->unk38->unk10 & 0xFF;
        (*arg1)->unk30->unk49 = arg0->unk38->unk14 >> 0x18;
        (*arg1)->unk30->unk4A = (arg0->unk38->unk14 >> 0x10) & 0xFF;
        (*arg1)->unk30->unk4C = (arg0->unk38->unk14 >> 8) & 0xFF;
        (*arg1)->unk30->unk4D = arg0->unk38->unk14 & 0xFF;
        (*arg1)->unk30->unk4E = arg0->unk38->unk18 >> 0x18;
        func_8012C784((s32)arg0, 0, (arg0->unk38->unk10 >> 0x10) & 0xFF);
        func_800058DC((s32)arg0, func_8013581C);
        return;
    case 23:
        sp38.unk4 = 0x80000500;
        func_80005F6C((s32)arg0, &sp38);
        func_80006214((s32)arg0);
        func_8012636C((s32)arg0, 0);
        (*arg1)->unk30->unk24 |= 0x300;
        (*arg1)->unk30->unk30 = (s32) ((s32) D_8017AAB8 | 0x40000000);
        (*arg1)->unk30->unk4B = (arg0->unk38->unk10 >> 8) & 0xFF;
        (*arg1)->unk30->unk48 = (arg0->unk38->unk14 >> 0x10) & 0xFF;
        (*arg1)->unk30->unk49 = (arg0->unk38->unk14 >> 8) & 0xFF;
        (*arg1)->unk30->unk4A = arg0->unk38->unk14 & 0xFF;
        (*arg1)->unk30->unk4C = arg0->unk38->unk18 >> 0x18;
        (*arg1)->unk30->unk4D = (arg0->unk38->unk18 >> 0x10) & 0xFF;
        (*arg1)->unk30->unk4E = (arg0->unk38->unk18 >> 8) & 0xFF;
        func_8012C784((s32)arg0, 0, (arg0->unk38->unk10 >> 0x10) & 0xFF);
        func_800058DC((s32)arg0, func_80135678);
        return;
    case 24:
        sp38.unk4 = 0x80000600;
        func_80005F6C((s32)arg0, &sp38);
        func_80006214((s32)arg0);
        func_8012636C((s32)arg0, 0);
        (*arg1)->unk30->unk24 |= 0x300;
        (*arg1)->unk30->unk30 = (s32) ((s32) D_8017AAB8 | 0x40000000);
        (*arg1)->unk30->unk4B = (arg0->unk38->unk10 >> 8) & 0xFF;
        (*arg1)->unk30->unk48 = arg0->unk38->unk10 & 0xFF;
        (*arg1)->unk30->unk49 = arg0->unk38->unk14 >> 0x18;
        (*arg1)->unk30->unk4A = (arg0->unk38->unk14 >> 0x10) & 0xFF;
        (*arg1)->unk30->unk4C = (arg0->unk38->unk14 >> 8) & 0xFF;
        (*arg1)->unk30->unk4D = arg0->unk38->unk14 & 0xFF;
        (*arg1)->unk30->unk4E = arg0->unk38->unk18 >> 0x18;
        func_8012C784((s32)arg0, 0, (arg0->unk38->unk10 >> 0x10) & 0xFF);
        func_800058DC((s32)arg0, func_801358FC);
        return;
    }
    func_800058DC((s32)arg0, func_80135320);
}
