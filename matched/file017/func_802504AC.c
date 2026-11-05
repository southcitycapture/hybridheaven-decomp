#include "common.h"
extern u8 D_801BBBF0[];
extern void D_801C4058(void *, f32, f32, s32);
extern s32 D_8025DE00;
extern void func_800058DC();
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_80020718(s32);
extern void func_801515B0(s32, u8, s32);
extern s32 func_801516CC(s32);
typedef struct func_8024F4F0_Inner {
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
} func_8024F4F0_Inner;
typedef struct func_8024F4F0_Node {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_8024F4F0_Inner *unk30;
} func_8024F4F0_Node;
typedef struct func_8024F4F0_Args {
    func_8024F4F0_Node *unk0;
    func_8024F4F0_Node *unk4;
    func_8024F4F0_Node *unk8;
    func_8024F4F0_Node *unkC;
    func_8024F4F0_Node *unk10;
    func_8024F4F0_Node *unk14;
    func_8024F4F0_Node *unk18;
    func_8024F4F0_Node *unk1C;
} func_8024F4F0_Args;
typedef struct func_8024FB5C_Ctx {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0xC];
    u16 unk3C;
    u8 pad3E[0x36];
    s32 unk74;
    u8 pad78[0x20];
    u8 unk98;
} func_8024FB5C_Ctx;
typedef struct func_8024FEC4_Obj { u8 pad0[0x2C]; func_8024F4F0_Inner *unk2C; } func_8024FEC4_Obj;
struct func_802503CC_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};
typedef struct func_80250730_StructB { u8 pad[0x4B]; u8 unk4B; } func_80250730_StructB;
typedef struct func_80250730_StructA { u8 pad[0x22]; u8 unk22; u8 pad23[0xD]; func_80250730_StructB *unk30; } func_80250730_StructA;
typedef struct func_80250730_StructC { u8 pad[0x1C]; func_80250730_StructA *unk1C; } func_80250730_StructC;
void func_80250730(struct func_802503CC_Struct *arg0, func_80250730_StructC *arg1);
extern void func_80251574();
typedef struct func_80251574_Struct {
    u8 pad[0x96];
    u16 f96;
} func_80251574_Struct;
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);


typedef struct func_802504AC_StructGlobal {
    u8 pad0[0xE0];
    func_8024FEC4_Obj *unkE0;
    u8 padE4[0x1B8];
    f32 unk29C;
    f32 unk2A0;
    u8 pad2A4[0xC7C];
    u8 unkF20;
    u8 unkF21;
    u8 unkF22;
    u8 unkF23;
    u8 unkF24;
    u8 unkF25;
    u8 unkF26;
    u8 unkF27;
    u8 unkF28;
    u8 unkF29;
    u8 unkF2A;
    u8 unkF2B;
    u8 unkF2C;
    s8 unkF2D;
    s8 unkF2E;
    u8 padF2F[3];
    u8 unkF32;
    u8 unkF33;
    u8 unkF34;
    u8 unkF35;
} func_802504AC_StructGlobal;

typedef struct func_802504AC_StructFrame {
    s32 frame;
    s32 pad;
} func_802504AC_StructFrame;

#define G (*(func_802504AC_StructGlobal *)D_801BBBF0)

void func_802504AC(func_8024FB5C_Ctx *arg0, func_8024F4F0_Args *arg1) {
    func_802504AC_StructFrame slot;
    s32 *framep = &slot.frame;
    s32 i;
    s32 old;

    old = arg0->unk3C;
    slot.frame = old;
    arg0->unk3C = old + 1;
    func_80251574((func_80251574_Struct *)arg0, (s32)arg1);
    D_801C4058(arg0, 0.0f, 0.0f, -0x22);
    if (arg0->unk98 < 0xFB) {
        arg0->unk98 += 4;
    }
    i = 0;
    if (func_801516CC(D_8025DE00) > 0) {
        do {
            func_801515B0(D_8025DE00, i, arg0->unk98);
            i++;
        } while (i < func_801516CC(D_8025DE00));
    }
    if (*framep >= 0x34) {
        if (*framep == 0x34) {
            func_80020718(0x186);
        }
        if ((u32)(*framep % 4) < 1U) {
            func_80380F94(125.0f, 0.0f, -142.0f, 0.0f, 0.0f, 0.0f, 0xB);
        }
        arg1->unk1C->unk30->unk4B += 0x10;
        if (arg1->unk1C->unk30->unk4B >= 0xF0) {
            arg1->unk1C->unk30->unk4B = 0xFF;
            arg1->unk18->unk22 = 0;
            arg1->unk10->unk22 = 1;
            arg1->unk14->unk22 = 1;
            arg1->unk8->unk22 = 1;
            G.unkE0->unk2C->unk4 += func_8001EAD0(G.unkE0->unk2C->unk12) * 20.0f;
            G.unkE0->unk2C->unkC += func_8001EB64(G.unkE0->unk2C->unk12) * 20.0f;
            G.unkF20 = 0;
            G.unkF21 = 0;
            G.unkF22 = 1;
            G.unkF23 = 0xA0;
            G.unkF24 = 0xFF;
            G.unkF25 = 0xA0;
            G.unkF26 = 0x1E;
            G.unkF27 = 0x5A;
            G.unkF28 = 0x2D;
            G.unkF29 = 0xFF;
            G.unkF2A = 0xFF;
            G.unkF2B = 0xFF;
            G.unkF2C = 0;
            G.unkF2D = -0x76;
            G.unkF2E = -0x48;
            G.unkF32 = 0;
            G.unkF33 = 0;
            G.unkF34 = 0;
            G.unkF35 = 0xB9;
            G.unk29C = 5.0f;
            G.unk2A0 = 200.0f;
            arg0->unk3C = 0;
            func_800058DC(arg0, func_80250730);
        }
    }
}
