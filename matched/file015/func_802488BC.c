#include "context.h"
struct func_802488BC_Struct3 { u8 pad[4]; f32 unk4; f32 unk8; f32 unkC; };
struct func_802488BC_Struct2 { u8 pad[0x2C]; struct func_802488BC_Struct3 *unk2C; };
struct func_802488BC_Struct1 { u8 pad[0x24]; struct func_802488BC_Struct2 *unk24; };
struct func_802488BC_Struct4 { u8 pad[0xE0]; struct func_802488BC_Struct2 *unkE0; u8 pad2[0x104]; f32 unk1E8, unk1EC, unk1F0, unk1F4, unk1F8, unk1FC; };
extern u8 D_80258DC0[];
extern u8 D_80258E00[];
extern f64 D_802590F0;
extern f64 D_802590F8;
extern f32 D_80259100, D_80259104, D_80259108, D_8025910C, D_80259110;
extern u8 func_80248B7C[];
#define G ((struct func_802488BC_Struct4 *)&D_801BBBF0)
#define S ((struct func_802488BC_Struct1 *)D_8025A2B0)

void func_802488BC(arg0, arg1)
struct func_802487F8_Arg *arg0;
s32 arg1;
{
    f32 a, b, c;
    c = G->unk1F4;
    a = G->unk1F8;
    b = G->unk1FC;
    G->unk1F4 = (f32)((f64)c + (f64)(S->unk24->unk2C->unk4 - c) * D_802590F0);
    G->unk1F8 = (f32)((f64)a + (f64)((S->unk24->unk2C->unk8 + 15.0f) - a) * D_802590F0);
    G->unk1FC = (f32)((f64)b + (f64)(S->unk24->unk2C->unkC - b) * D_802590F0);
    func_8011AAF4(D_80258DC0, 0x196, arg0, 0, 1, 0.0f, G->unk1E8, G->unk1EC, (f32)((f64)arg0->unk90 + ((f64)S->unk24->unk2C->unkC + 30.0)), 0.0f, G->unk1F4, G->unk1F8, G->unk1FC, 0.0f, 35.0f, -1, -1);
    arg0->unk90 = (f32)((f64)arg0->unk90 * D_802590F8);
    if (S->unk24->unk2C->unkC < -250.0f) {
        G->unk1E8 = D_80259100;
        G->unk1EC = D_80259104;
        G->unk1F0 = D_80259108;
        G->unk1F4 = D_8025910C;
        G->unk1F8 = -187.0f;
        G->unk1FC = D_80259110;
        func_8011AAF4(D_80258E00, 0x1A5, arg0, 0, 1, 0.0f, G->unk1E8, G->unk1EC, G->unk1F0, 0.0f, G->unk1F4, G->unk1F8, G->unk1FC, 0.0f, 35.0f, -1, -1);
        G->unkE0->unk2C->unkC = G->unkE0->unk2C->unkC - 20.0f;
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80248B7C);
    }
}
