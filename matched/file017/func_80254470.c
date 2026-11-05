#include "common.h"
extern u8 D_801BBBF0[];
extern void func_800058DC(void *, void *);
extern f32 func_8001EAD0(s16);
extern s32 func_80133A24(s32);
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
typedef struct func_80254808_Struct { u8 pad0[0x90]; u16 unk90; u8 pad92[6]; u16 unk98; } func_80254808_Struct;
typedef struct func_80254808_StructN { u8 pad0[0x22]; u8 unk22; } func_80254808_StructN;
typedef struct func_80254808_StructB { u8 pad0[0x24]; func_80254808_StructN *unk24; } func_80254808_StructB;
void func_80254808(func_80254808_Struct *arg0, func_80254808_StructB *arg1);
extern void func_802577B4(void *, void *);
typedef struct func_802577B4_Arg0 {
    u8 pad0[0x90];
    u16 unk90;
    u8 pad92[2];
    s16 unk94;
} func_802577B4_Arg0;
typedef struct func_802577B4_Inner {
    u8 pad0[0x12];
    s16 unk12;
    u8 pad14[0x8];
    f32 unk1C;
    u8 pad20[0x2B];
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
} func_802577B4_Inner;
typedef struct func_802577B4_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_802577B4_Inner *unk30;
} func_802577B4_Node;
typedef struct func_802577B4_Arg1 {
    u8 pad0[0x10];
    func_802577B4_Node *unk10;
    func_802577B4_Node *unk14;
    func_802577B4_Node *unk18;
    func_802577B4_Node *unk1C;
    func_802577B4_Node *unk20;
    func_802577B4_Node *unk24;
} func_802577B4_Arg1;


void func_80254470(func_80253C20_Ctx *arg0, func_80253C20_Args *arg1) {
    func_80253C20_Node *node;
    func_80253C20_Inner *inner;

    func_802577B4((func_802577B4_Arg0 *) arg0, (func_802577B4_Arg1 *) arg1);
    D_801BBBF0[0x208] = (u32) (func_8001EAD0((s16) ((arg0->unk90 * 0x12C) % 8192)) * 127.0f + 128.0f);
    D_801BBBF0[0x209] = (u32) (func_8001EAD0((s16) ((arg0->unk90 * 0x15E) % 8192)) * 127.0f + 128.0f);
    D_801BBBF0[0x20A] = (u32) (func_8001EAD0((s16) ((arg0->unk90 * 0x190) % 8192)) * 127.0f + 128.0f);
    D_801BBBF0[0x204] = 0xFF;
    D_801BBBF0[0x205] = 0xFF;
    D_801BBBF0[0x206] = 0xFF;
    if (arg0->unk90 == 2) {
        arg1->unk4->unk22 = 0;
    }
    node = arg1->unk18;
    if (node->unk22 != 0) {
        inner = node->unk30;
        inner->unk4B -= 4;
        node = arg1->unk18;
        if (node->unk30->unk4B < 4) {
            node->unk22 = 0;
        }
    }
    if (func_80133A24(0x13D) != 0) {
        arg0->unk90 = 0;
        arg0->unk2C = 0xC00;
        func_800058DC(arg0, (void *) func_80254808);
        return;
    }
    arg0->unk90++;
    arg0->unk92--;
}
