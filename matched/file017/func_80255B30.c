#include "context.h"

typedef struct func_80255B30_In { u8 pad0[0x4B]; u8 unk4B; } func_80255B30_In;
typedef struct func_80255B30_Node { u8 pad0[0x30]; func_80255B30_In *unk30; } func_80255B30_Node;
typedef struct func_80255B30_A1 { u8 pad0[4]; func_80255B30_Node *unk4; func_80255B30_Node *unk8; } func_80255B30_A1;
typedef struct func_80255B30_Pos { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; } func_80255B30_Pos;
typedef struct func_80255B30_G1 { u8 pad0[0x2C]; func_80255B30_Pos *unk2C; } func_80255B30_G1;
typedef struct func_80255B30_G { u8 pad0[0xE0]; func_80255B30_G1 *unkE0; } func_80255B30_G;
typedef struct func_80255B30_A0 {
    u8 pad0[0x40]; f32 unk40; f32 unk44; f32 unk48;
    u8 pad4C[0x92 - 0x4C]; u16 unk92; u8 pad94[4];
    f32 unk98; f32 unk9C; f32 unkA0;
} func_80255B30_A0;

extern u8 func_80255CA0[];

void func_80255B30(func_80255B30_A0 *arg0, func_80255B30_A1 *arg1) {
    s32 t[1];
    s32 v = arg0->unk92;
    func_80255B30_In *p;
    t[0] = v;
    arg0->unk92 = v + 1;
    func_8025799C(arg0, arg1);
    p = arg1->unk4->unk30;
    if (p->unk4B >= 4) {
        p->unk4B -= 3;
        arg1->unk8->unk30->unk4B -= 3;
    }
    if (t[0] >= 0x78) {
        func_80380F94(arg0->unk98, arg0->unk9C + 45.0f, arg0->unkA0, 0.0f, 0.0f, 0.0f, 7);
        arg0->unk9C = arg0->unk9C + 45.0f;
        arg0->unk40 = (((func_80255B30_G *)D_801BBBF0)->unkE0->unk2C->unk4 - arg0->unk98) / 20.0;
        arg0->unk44 = ((((func_80255B30_G *)D_801BBBF0)->unkE0->unk2C->unk8 + 10.0f) - arg0->unk9C) / 20.0;
        arg0->unk48 = (((func_80255B30_G *)D_801BBBF0)->unkE0->unk2C->unkC - arg0->unkA0) / 20.0;
        arg0->unk92 = 0;
        func_80020718(0x190);
        func_800058DC(arg0, func_80255CA0);
    }
}
