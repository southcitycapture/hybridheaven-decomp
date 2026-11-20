#include "common.h"
extern u8 D_801BBBF0[];
extern void func_800058DC(void *arg0, void *arg1);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801C2F0C(s32, s32);
extern void func_801C42DC(s32, s32, s32, u8, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, s32, f32);
typedef struct func_8024D030_Inner {
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
    u32 unk24;
    u8 pad1[0x8];
    u32 unk30;
    u8 pad2[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_8024D030_Inner;
typedef struct func_8024D030_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_8024D030_Inner *unk30;
} func_8024D030_Node;
typedef struct func_8024D030_Args {
    func_8024D030_Node *unk0;
    func_8024D030_Node *unk4;
    func_8024D030_Node *unk8;
    func_8024D030_Node *unkC;
    func_8024D030_Node *unk10;
    func_8024D030_Node *unk14;
    func_8024D030_Node *unk18;
    func_8024D030_Node *unk1C;
} func_8024D030_Args;
typedef struct func_8024D030_Ctx {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x44];
    s32 unk74;
    u8 pad78[0x18];
    u16 unk90;
    u16 unk92;
} func_8024D030_Ctx;
typedef struct func_8024EE8C_Struct {
    u8 pad[0x74];
    s32 unk74;
} func_8024EE8C_Struct;
void func_8024EE8C(func_8024EE8C_Struct *arg0, s32 arg1);
typedef struct func_8024EE8C_Struct_Cam {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x2];
    s16 unk12;
    u8 pad2[0x1C];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_8024EE8C_Struct_Cam;
typedef struct func_8024EE8C_Struct_Holder {
    u8 pad[0x2C];
    func_8024EE8C_Struct_Cam *unk2C;
} func_8024EE8C_Struct_Holder;
extern void func_8024F294();


typedef struct func_8024EA0C_StructArg {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0xC];
    u16 unk3C;
    u8 pad3E[0x5B];
    u8 unk99;
} func_8024EA0C_StructArg;

typedef struct func_8024EA0C_StructGlobal {
    u8 pad0[0xE0];
    func_8024EE8C_Struct_Holder *unkE0;
    u8 padE4[0x104];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
    u8 pad200[0xA4];
    f32 unk2A4;
    f32 unk2A8;
    u8 pad2AC[0xC8A];
    u8 unkF36;
    u8 unkF37;
    u8 unkF38;
    u8 unkF39;
    u8 unkF3A;
    u8 unkF3B;
    s8 unkF3C;
    s8 unkF3D;
    s8 unkF3E;
    u8 unkF3F;
    u8 unkF40;
    u8 unkF41;
    s8 unkF42;
    s8 unkF43;
    s8 unkF44;
    u8 unkF45;
    u8 unkF46;
    u8 unkF47;
    u8 unkF48;
} func_8024EA0C_StructGlobal;

typedef struct func_8024EA0C_StructEffect {
    s16 unk0;
    u8 pad2[2];
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 padE[0x12];
} func_8024EA0C_StructEffect;

typedef struct func_8024EA0C_StructEntity {
    u8 pad0[0x24];
    func_8024D030_Node *unk24;
    u8 pad28[0x4C];
    s32 unk74;
} func_8024EA0C_StructEntity;
extern s32 func_801C3044(void);
extern func_8024EA0C_StructEntity *func_801505AC(s32);
extern void func_80126880(s32);
extern u8 D_8025D1BC[];
#define EAG ((func_8024EA0C_StructGlobal *)D_801BBBF0)

void func_8024EA0C(func_8024EA0C_StructArg *arg0, func_8024D030_Args *arg1) {
    f32 angle;
    u32 alpha;
    func_8024EA0C_StructEntity *entity;
    func_8024EA0C_StructEffect effect;
    s32 frame;

    frame = arg0->unk3C;
    arg0->unk3C++;
    func_8024F294((func_8024D030_Ctx *)arg0, arg1);
    if (func_801C3044() == 0) {
        switch (arg0->unk99) {
        case 1:
            effect.unk0 = 0x1100;
            effect.unk4 = 0x01B80026;
            effect.unkC = 10;
            effect.unk8 = 3.0f;
            func_801C2F0C(5, (s32)&effect);
            break;
        case 2:
            effect.unk0 = 0x1100;
            effect.unk4 = 0x01B80026;
            effect.unkC = 10;
            effect.unk8 = 3.0f;
            func_801C2F0C(5, (s32)&effect);
            break;
        }
    }
    angle = (f32)(s32)(u16)((u16)(arg0->unk3C * 45 + EAG->unkE0->unk2C->unk12) & 0x1FFF);
    EAG->unk1E8 = (f64)EAG->unkE0->unk2C->unk4 - (f64)func_8001EAD0((s16)angle) * 15.0;
    EAG->unk1EC = EAG->unkE0->unk2C->unk8;
    EAG->unk1F0 = EAG->unkE0->unk2C->unkC - (f64)func_8001EB64((s16)angle) * 15.0;
    EAG->unk1F4 = EAG->unkE0->unk2C->unk4;
    EAG->unk1F8 = EAG->unkE0->unk2C->unk8 + 20.0f;
    EAG->unk1FC = EAG->unkE0->unk2C->unkC;
    func_8011AAF4(D_8025D1BC, 0x455, arg0, 0, 1, 0.0f, EAG->unk1E8, EAG->unk1EC, EAG->unk1F0, 0.0f, EAG->unk1F4, EAG->unk1F8, EAG->unk1FC, 0.0f, 35.0f, -1, -1);
    func_801C42DC(EAG->unkF36, EAG->unkF37, EAG->unkF38, EAG->unkF39, EAG->unkF3A, EAG->unkF3B, EAG->unkF3C, EAG->unkF3D, EAG->unkF3E, EAG->unkF3F, EAG->unkF40, EAG->unkF41, EAG->unkF42, EAG->unkF43, EAG->unkF44, EAG->unkF45, EAG->unkF46, EAG->unkF47, EAG->unkF48, EAG->unk2A4, EAG->unk2A8, 2, 6.0f);
    if (frame < 90) {
        alpha = (u32)(255.0f - (f32)frame * (2.8444445f));
        arg1->unk0->unk30->unk4B = alpha;
        arg1->unk10->unk30->unk4B = alpha;
        arg1->unkC->unk30->unk4B = alpha;
        arg1->unk14->unk30->unk4B = alpha;
    }
    if (frame >= 150) {
        arg1->unk0->unk22 = 0;
        arg1->unk10->unk22 = 0;
        arg1->unkC->unk22 = 0;
        arg1->unk14->unk22 = 0;
        arg1->unk4->unk22 = 1;
        entity = func_801505AC(7);
        entity->unk24->unk22 = 0;
        entity->unk74 = 0;
        entity = func_801505AC(8);
        entity->unk24->unk22 = 0;
        entity->unk74 = 0;
        func_80126880(4);
        arg0->unk2C &= ~0x800;
        func_800058DC(arg0, func_8024EE8C);
    }
}
