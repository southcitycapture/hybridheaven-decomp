#include "context.h"

typedef struct func_80241F20_Node { u8 pad0[4]; f32 unk4; u8 pad8[4]; f32 unkC; u8 pad10[2]; s16 unk12; } func_80241F20_Node;
typedef struct func_80241F20_Mid { u8 pad0[0x2C]; func_80241F20_Node *unk2C; } func_80241F20_Mid;
typedef struct func_80241F20_Struct {
    u8 pad0[0xE0];
    func_80241F20_Mid *unkE0;
    u8 pad1[0x1E8 - 0xE4];
    f32 f1E8, f1EC, f1F0, f1F4, f1F8, f1FC;
    u8 pad2[0x434 - 0x200];
    u8 unk434;
} func_80241F20_Struct;
#define G ((func_80241F20_Struct *)&D_801BBBF0)
typedef struct func_80241F20_StructLocal { s16 a; s16 pad; s32 b; f32 c; s16 d; u8 pad2[0xA]; } func_80241F20_StructLocal;
typedef struct func_80241F20_Arg { u8 pad0[0x3C]; u16 unk3C; } func_80241F20_Arg;

struct func_8024236C_Struct;
void func_8024236C(struct func_8024236C_Struct *arg0, void *arg1);
extern void func_80020718(s32);
extern void func_800208C4(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern u8 D_80258310[], D_80258350[], D_80258390[], D_802583D0[];
extern f32 D_80258578, D_8025857C, D_80258580, D_80258584, D_80258588;
extern f32 D_8025858C, D_80258590, D_80258594, D_80258598, D_8025859C;
extern f32 D_802585A0, D_802585A4, D_802585A8, D_802585AC, D_802585B0;
extern f32 D_802585B4, D_802585B8, D_802585BC, D_802585C0, D_802585C4, D_802585C8;

void func_80241F20(func_80241F20_Arg *arg0, s32 arg1) {
    u16 t;
    f32 z = 0.0f;
    func_80241F20_StructLocal sp;

    t = arg0->unk3C;
    arg0->unk3C = t + 1;
    if (t == 0x3C) {
        func_80020718(0x1AB);
    }
    if (t == 0x5A) {
        G->unk434 = 1;
        G->f1E8 = D_80258578;
        G->f1EC = 13.0f;
        G->f1F0 = D_8025857C;
        G->f1F4 = D_80258580;
        G->f1F8 = D_80258584;
        G->f1FC = D_80258588;
        func_8011AAF4(D_80258310, 0x258, arg0, 0, 1, z, G->f1E8, G->f1EC, G->f1F0, z, G->f1F4, G->f1F8, G->f1FC, z, 35.0f, -1, -1);
        func_80020718(7);
    }
    if (t == 0x66) {
        G->f1E8 = -75.0f;
        G->f1EC = D_8025858C;
        G->f1F0 = D_80258590;
        G->f1F4 = D_80258594;
        G->f1F8 = D_80258598;
        G->f1FC = D_8025859C;
        func_8011AAF4(D_80258350, 0x267, arg0, 0, 1, z, G->f1E8, G->f1EC, G->f1F0, z, G->f1F4, G->f1F8, G->f1FC, z, 35.0f, -1, -1);
        sp.a = 0x1000;
        sp.b = 0x01B8000B;
        sp.d = 0xA;
        sp.c = 1.0f;
        func_801C2F0C(3, &sp.a);
    }
    if (t == 0x84) {
        G->f1E8 = -75.0f;
        G->f1EC = D_802585A0;
        G->f1F0 = D_802585A4;
        G->f1F4 = D_802585A8;
        G->f1F8 = D_802585AC;
        G->f1FC = D_802585B0;
        func_8011AAF4(D_80258390, 0x27C, arg0, 0, 1, z, G->f1E8, G->f1EC, G->f1F0, z, G->f1F4, G->f1F8, G->f1FC, z, 35.0f, -1, -1);
    }
    if (t == 0x8E) {
        G->unkE0->unk2C->unk4 = D_802585B4;
        G->unkE0->unk2C->unkC = D_802585B8;
        G->unkE0->unk2C->unk12 = 0x1000;
        G->f1E8 = -59.5f;
        G->f1EC = D_802585BC;
        G->f1F0 = D_802585C0;
        G->f1F4 = D_802585C4;
        G->f1F8 = 12.0f;
        G->f1FC = D_802585C8;
        func_8011AAF4(D_802583D0, 0x28D, arg0, 0, 1, z, G->f1E8, G->f1EC, G->f1F0, z, G->f1F4, G->f1F8, G->f1FC, z, 35.0f, -1, -1);
        sp.a = 0;
        sp.b = 0x01B8000B;
        sp.c = 3.0f;
        func_801C2F0C(4, &sp.a);
        func_800208C4(0x7C);
        func_800058DC(arg0, func_8024236C);
    }
}
