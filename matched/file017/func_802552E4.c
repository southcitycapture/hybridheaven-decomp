#include "common.h"
extern s32 func_80005670();
extern void func_800058DC(void *, void *);
extern s32 func_800178E8(void);
extern void func_800179B0(void *);
extern void func_80020718(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_80133980(s32);
extern void func_801C2F0C(s32, void *);
typedef struct func_80253C20_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x14];
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
} func_80253C20_Inner;
typedef struct func_80253C20_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_80253C20_Inner *unk30;
} func_80253C20_Node;
typedef struct func_80253C20_Args {
    func_80253C20_Node *unk0;
    func_80253C20_Node *unk4;
    func_80253C20_Node *unk8;
    func_80253C20_Node *unkC;
    func_80253C20_Node *unk10;
    func_80253C20_Node *unk14;
    func_80253C20_Node *unk18;
    func_80253C20_Node *unk1C;
    func_80253C20_Node *unk20;
    func_80253C20_Node *unk24;
} func_80253C20_Args;
typedef struct func_80253C20_Ctx {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x44];
    s32 unk74;
    u8 pad78[0x18];
    u16 unk90;
    u16 unk92;
    u16 unk94;
    u16 unk96;
} func_80253C20_Ctx;
typedef struct func_802556EC_Inner { u8 pad[0x4B]; u8 unk4B; } func_802556EC_Inner;
typedef struct func_802556EC_Node { u8 pad[0x30]; func_802556EC_Inner *unk30; } func_802556EC_Node;
typedef struct func_802556EC_Args { u8 pad[8]; func_802556EC_Node *unk8; } func_802556EC_Args;
typedef struct func_802556EC_Ctx { u8 pad[0x92]; u16 unk92; } func_802556EC_Ctx;
void func_802556EC(func_802556EC_Ctx *arg0, func_802556EC_Args *arg1);
extern void func_8025799C();
typedef struct func_8025799C_A0 { u8 pad0[0x90]; u16 unk90; u8 pad92[6]; f32 unk98; f32 unk9C; f32 unkA0; } func_8025799C_A0;
typedef struct func_8025799C_In { u8 pad0[8]; f32 unk8; } func_8025799C_In;
typedef struct func_8025799C_Nd { u8 pad0[0x30]; func_8025799C_In *unk30; } func_8025799C_Nd;
typedef struct func_8025799C_A1 { u8 pad0[4]; func_8025799C_Nd *unk4; func_8025799C_Nd *unk8; } func_8025799C_A1;


extern u8 D_8025D950[];
extern u8 D_8025D98C[];
extern u8 D_8025D9C8[];
extern u8 D_8025DA04[];
extern u8 D_8025DA40[];
extern u8 D_80259AAC[];
extern u8 D_80259BE4[];
extern u8 D_80259D38[];
extern u8 D_80259EA4[];
extern u8 D_80259FF0[];
extern u8 D_802596F8[];
typedef struct func_802552E4_StructCmd {
    s16 a;
    u8 pad[2];
    s32 b;
    f32 c;
    s16 d;
    u8 padE[0x10];
} func_802552E4_StructCmd;

void func_802552E4(func_80253C20_Ctx *arg0, func_80253C20_Args *arg1)
{
    func_802552E4_StructCmd cmd;
    u32 state;

    func_8025799C((func_8025799C_A0 *)arg0, (func_8025799C_A1 *)arg1);
    if (func_800178E8()) {
        state = arg0->unk92++;
        switch (state) {
        case 0:
            func_8011AAF4(D_8025D950, 0x489, arg0, 0, 1, 0.0f, -44.0f, 41.0f, 0.0f, 0.0f, 3.0f, 28.0f, -1.0f, 0.0f, 55.0f, -1, -1);
            func_800179B0(D_80259AAC);
            return;
        case 1:
            func_8011AAF4(D_8025D98C, 0x493, arg0, 0, 1, 0.0f, -7.0f, 53.0f, 6.0f, 0.0f, 2.0f, 37.0f, -3.0f, 0.0f, 55.0f, -1, -1);
            func_800179B0(D_80259BE4);
            return;
        case 2:
            func_8011AAF4(D_8025D9C8, 0x49D, arg0, 0, 1, 0.0f, 29.0f, 73.0f, 28.0f, 0.0f, 1.0f, 36.0f, 11.0f, 0.0f, 55.0f, -1, -1);
            func_800179B0(D_80259D38);
            return;
        case 3:
            func_8011AAF4(D_8025DA04, 0x4A7, arg0, 0, 1, 0.0f, -100.0f, 6.0f, 10.0f, 0.0f, 3.0f, 22.0f, 10.0f, 0.0f, 55.0f, -1, -1);
            func_800179B0(D_80259EA4);
            return;
        case 4:
            func_8011AAF4(D_8025DA40, 0x4B1, arg0, 0, 1, 0.0f, -15.0f, 44.0f, 0.0f, 0.0f, 2.0f, 42.0f, 0.0f, 0.0f, 55.0f, -1, -1);
            func_800179B0(D_80259FF0);
            return;
        case 5:
            arg0->unk92 = 0;
            arg1->unk8->unk22 = 1;
            func_80005670(arg0, D_802596F8);
            func_80133980(0x139);
            cmd.a = 0x1002;
            cmd.b = 0x3480027;
            cmd.c = 10.0f;
            cmd.d = 20;
            func_801C2F0C(5, &cmd);
            func_80020718(0x18E);
            func_800058DC(arg0, func_802556EC);
            break;
        }
    }
}
