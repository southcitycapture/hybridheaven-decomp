#include "common.h"

extern u8 D_80258DC0[];
extern u8 D_80258E00[];
struct func_8024A434_Sub {
    u8 pad[0x40];
    f32 unk40;
    u8 pad2[4];
    f32 unk48;
};
struct func_8024A434_StructBBF0 {
    u8 pad[0xDC];
    struct func_8024A434_Sub *unkDC;
};
extern struct func_8024A434_StructBBF0 D_801BBBF0;
struct func_802488BC_Struct3 { u8 pad[4]; f32 unk4; f32 unk8; f32 unkC; };
struct func_802488BC_Struct2 { u8 pad[0x2C]; struct func_802488BC_Struct3 *unk2C; };
struct func_802488BC_Struct4 { u8 pad[0xE0]; struct func_802488BC_Struct2 *unkE0; u8 pad2[0x104]; f32 unk1E8, unk1EC, unk1F0, unk1F4, unk1F8, unk1FC; };
#define G ((struct func_802488BC_Struct4 *)&D_801BBBF0)
extern void *D_8025A2B0;
struct func_802488BC_Struct1 { u8 pad[0x24]; struct func_802488BC_Struct2 *unk24; };
#define S ((struct func_802488BC_Struct1 *)D_8025A2B0)
extern void func_800058DC(void *, void *);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
struct func_802487F8_Arg {
    u8 pad[0x3C];
    u16 unk3C;
    u8 pad2[0x50];
    f32 unk90;
};
extern u8 func_80248B7C[];
void func_802488BC(arg0, arg1)
struct func_802487F8_Arg *arg0;
s32 arg1;
{
    f32 a, b, c;
    c = G->unk1F4;
    a = G->unk1F8;
    b = G->unk1FC;
    G->unk1F4 = (f32)((f64)c + (f64)(S->unk24->unk2C->unk4 - c) * 0.2);
    G->unk1F8 = (f32)((f64)a + (f64)((S->unk24->unk2C->unk8 + 15.0f) - a) * 0.2);
    G->unk1FC = (f32)((f64)b + (f64)(S->unk24->unk2C->unkC - b) * 0.2);
    func_8011AAF4(D_80258DC0, 0x196, arg0, 0, 1, 0.0f, G->unk1E8, G->unk1EC, (f32)((f64)arg0->unk90 + ((f64)S->unk24->unk2C->unkC + 30.0)), 0.0f, G->unk1F4, G->unk1F8, G->unk1FC, 0.0f, 35.0f, -1, -1);
    arg0->unk90 = (f32)((f64)arg0->unk90 * 0.9);
    if (S->unk24->unk2C->unkC < -250.0f) {
        G->unk1E8 = 105.300003f;
        G->unk1EC = (-191.899994f);
        G->unk1F0 = 138.399994f;
        G->unk1F4 = 86.1999969f;
        G->unk1F8 = -187.0f;
        G->unk1FC = (-319.5f);
        func_8011AAF4(D_80258E00, 0x1A5, arg0, 0, 1, 0.0f, G->unk1E8, G->unk1EC, G->unk1F0, 0.0f, G->unk1F4, G->unk1F8, G->unk1FC, 0.0f, 35.0f, -1, -1);
        G->unkE0->unk2C->unkC = G->unkE0->unk2C->unkC - 20.0f;
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80248B7C);
    }
}
