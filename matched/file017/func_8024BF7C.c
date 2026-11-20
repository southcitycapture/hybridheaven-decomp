#include "common.h"
extern u8 D_801BBBF0[];
extern void func_800058DC(s32, void (*)());
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801C2F0C(s32, s32);
extern void func_801C42DC(s32, s32, s32, u8, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, s32, f32);
typedef struct func_8024A610_Inner {
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
} func_8024A610_Inner;
typedef struct func_8024A610_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_8024A610_Inner *unk30;
} func_8024A610_Node;
typedef struct func_8024A610_Args {
    func_8024A610_Node *unk0;
    func_8024A610_Node *unk4;
    func_8024A610_Node *unk8;
    func_8024A610_Node *unkC;
    func_8024A610_Node *unk10;
    func_8024A610_Node *unk14;
    func_8024A610_Node *unk18;
} func_8024A610_Args;
typedef struct func_8024C3BC_StructArg {
    u8 pad0[0x74];
    s32 state;
} func_8024C3BC_StructArg;
void func_8024C3BC(func_8024C3BC_StructArg *arg0, s32 arg1);


typedef struct func_8024BF7C_StructArg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0xC];
    u16 unk3C;
    u8 pad3E[0x5B];
    u8 unk99;
} func_8024BF7C_StructArg0;

typedef struct func_8024BF7C_StructPos {
    u8 pad0[4];
    f32 x, y, z;
    u8 pad10[2];
    s16 angle;
} func_8024BF7C_StructPos;

typedef struct func_8024BF7C_StructNode {
    u8 pad0[0x2C];
    func_8024BF7C_StructPos *pos;
} func_8024BF7C_StructNode;

typedef struct func_8024BF7C_StructGlobal {
    u8 pad0[0xE0];
    func_8024BF7C_StructNode *node;
    u8 padE4[0x104];
    f32 x1, y1, z1, x2, y2, z2;
    u8 pad200[0xA4];
    f32 unk2A4, unk2A8;
    u8 pad2AC[0xC8A];
    u8 f36, f37, f38, f39, f3A, f3B;
    s8 f3C, f3D, f3E;
    u8 f3F, f40, f41;
    s8 f42, f43, f44;
    u8 f45, f46, f47, f48;
} func_8024BF7C_StructGlobal;

typedef struct func_8024BF7C_StructEffect {
    s16 a;
    s32 b;
    f32 c;
    s16 d;
    u8 padE[0x14];
} func_8024BF7C_StructEffect;

typedef struct func_8024BF7C_StructResult {
    u8 pad0[0x24];
    func_8024A610_Node *node;
    u8 pad28[0x4C];
    s32 unk74;
} func_8024BF7C_StructResult;
extern s32 func_801C3044(void);
extern func_8024BF7C_StructResult *func_801505AC(s32);
extern void func_80126880(s32);
#define BF7C_G ((func_8024BF7C_StructGlobal *) D_801BBBF0)

void func_8024BF7C(func_8024BF7C_StructArg0 *arg0, func_8024A610_Args *arg1) {
    f32 angle;
    func_8024BF7C_StructResult *result;
    func_8024BF7C_StructEffect effect;
    s32 timer;

    timer = arg0->unk3C++;
    if (func_801C3044() == 0) {
        switch (arg0->unk99) {
        case 1:
            effect.a = 0x1100;
            effect.b = 0x01B80026;
            effect.d = 10;
            effect.c = 3.0f;
            func_801C2F0C(5, (s32) &effect);
            break;
        case 2:
            effect.a = 0x1100;
            effect.b = 0x01B80026;
            effect.d = 10;
            effect.c = 3.0f;
            func_801C2F0C(5, (s32) &effect);
            break;
        }
    }
    angle = (f32) ((s16) (arg0->unk3C * 45 + BF7C_G->node->pos->angle) & 0x1FFF);
    BF7C_G->x1 = BF7C_G->node->pos->x - func_8001EAD0(angle) * 15.0;
    BF7C_G->y1 = BF7C_G->node->pos->y;
    BF7C_G->z1 = BF7C_G->node->pos->z - func_8001EB64(angle) * 15.0;
    BF7C_G->x2 = BF7C_G->node->pos->x;
    BF7C_G->y2 = BF7C_G->node->pos->y + 20.0f;
    BF7C_G->z2 = BF7C_G->node->pos->z;
    func_8011AAF4("/hdisk1/u/nu64/rz011_usa/main/game/source/a05_s10icedemo.c", 0x481, arg0, 0, 1, 0.0f, BF7C_G->x1, BF7C_G->y1, BF7C_G->z1, 0.0f, BF7C_G->x2, BF7C_G->y2, BF7C_G->z2, 0.0f, 35.0f, -1, -1);
    func_801C42DC(BF7C_G->f36, BF7C_G->f37, BF7C_G->f38, BF7C_G->f39, BF7C_G->f3A, BF7C_G->f3B, BF7C_G->f3C, BF7C_G->f3D, BF7C_G->f3E, BF7C_G->f3F, BF7C_G->f40, BF7C_G->f41, BF7C_G->f42, BF7C_G->f43, BF7C_G->f44, BF7C_G->f45, BF7C_G->f46, BF7C_G->f47, BF7C_G->f48, BF7C_G->unk2A4, BF7C_G->unk2A8, 2, 6.0f);
    if (timer < 90) {
        arg1->unk0->unk30->unk4B = (u32) (255.0f - (f32) timer * (2.8444445f));
    }
    if (timer >= 150) {
        arg1->unk0->unk22 = 0;
        arg1->unk8->unk22 = 0;
        arg1->unk4->unk22 = 1;
        result = func_801505AC(1);
        result->node->unk22 = 0;
        result->unk74 = 0;
        result = func_801505AC(2);
        result->node->unk22 = 0;
        result->unk74 = 0;
        func_80126880(2);
        arg0->unk2C &= ~0x800;
        func_800058DC((s32) arg0, (void (*)()) func_8024C3BC);
    }
}
