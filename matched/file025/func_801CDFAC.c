#include "context.h"

typedef struct { s32 x; s32 y; f32 z; } func_801CDFAC_V;
typedef struct { s32 x; s32 y; s32 z; } func_801CDFAC_W;
struct func_801CDFAC_Struct { u8 pad[0x5C]; s32 unk5C; s32 unk60; s32 unk64; };
struct func_801CDFAC_Obj2 { u8 pad[0x76]; u8 unk76; };
struct func_801CDFAC_Obj { u8 pad[0x5C]; struct func_801CDFAC_Obj2 *unk5C; };
struct func_801CDFAC_B { u8 pad[0x2C]; struct func_801CDFAC_Struct *unk2C; };
struct func_801CDFAC_A { u8 pad[4]; struct func_801CDFAC_B *unk4; };
struct func_801CDFAC_I { u16 unk0; u16 unk2; };
struct func_801CDFAC_J { struct func_801CDFAC_I *unk0; s32 *unk4; };
struct func_801CDFAC_H { u8 pad[0xD8]; struct func_801CDFAC_J *unkD8; };
struct func_801CDFAC_K { u16 unk0; u8 pad[0x26]; s32 unk28; u16 unk2C; };
struct func_801CDFAC_L { u8 pad[0x2C]; struct func_801CDFAC_K *unk2C; };
struct func_801CDFAC_G { u8 pad[0x30]; struct func_801CDFAC_L *unk30; };
extern s32 func_801CC540();
extern s32 D_80006214(void *);
extern u8 D_801CDFAC[];
extern u8 D_801E11A0;
extern struct func_801CE2D0_Struct D_801E11B0;
extern void func_80006214();
extern s32 D_801DAC54;
extern u8 D_801E11C0;
extern u8 D_801E11D0;
void func_801CE5A8(s32 arg0);
extern s32 func_80010550(void *, void *);
extern s32 func_80011140(void *, void *, func_801CDFAC_V, u32);
extern void func_8013A28C(void *, func_801CDFAC_W);
extern void func_8013A334(void *, void *, void *, s32);
extern void func_801CE5D8(void *);
extern struct func_801CDFAC_G D_8008DA88;
extern u8 D_801BC025[];
extern struct func_801CDFAC_H D_80171CF0;

void func_801CDFAC(struct func_801CDFAC_Obj *arg0, struct func_801CDFAC_A *arg1) {
    struct func_801CDFAC_Struct *t;
    func_801CDFAC_V *p;
    struct func_801CDFAC_Obj2 *o;
    if (func_801CC540() != 0) {
        func_800058DC(arg0, (void (*)(void))D_801CDFAC);
        return;
    }
    if (D_801DAC70 != 0) {
        func_80006214(arg0);
        func_8013A28C(&D_8008DA88, *(func_801CDFAC_W *)D_801DAC70);
        o = arg0->unk5C;
        o->unk76 = 1;
        D_801DAC70 = 0;
    }
    p = (func_801CDFAC_V *)D_801DAC74;
    if (p != 0) {
        if (func_80011140(arg1, arg0->unk5C, *p, (u32)p->z) != 0) {
            D_801DAC74 = 0;
        }
    } else {
        if (func_80010550(arg1, arg0->unk5C) != 0) {
            D_801DAC78 = 1;
        } else {
            D_801DAC78 = 0;
        }
        *(func_801CDFAC_W *)&D_801E11B0 = *(func_801CDFAC_W *)&arg1->unk4->unk2C->unk5C;
        *(func_801CDFAC_W *)&D_801E11A0 = *(func_801CDFAC_W *)(D_801BC025 + 3);
        D_801DAC54 = (s32)arg1;
        func_8013A334(&D_801E11C0, arg1, arg0->unk5C, 0xF);
        func_8013A334(&D_801E11D0, arg1, arg0->unk5C, 0x12);
    }
    if (D_801DAC7C != 0) {
        func_801CE5A8((s32)arg0);
    }
    if (D_801DAC58 != 0) {
        func_801CE5D8(arg0);
    }
    if (D_801DAC88 != 0) {
        D_80006214(arg0);
        D_8008DA88.unk30->unk2C->unk28 = *D_80171CF0.unkD8->unk4;
        D_8008DA88.unk30->unk2C->unk0 = D_80171CF0.unkD8->unk0->unk0;
        D_8008DA88.unk30->unk2C->unk2C = D_80171CF0.unkD8->unk0->unk2;
    }
}
