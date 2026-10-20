#include "context.h"

typedef struct func_802434E0_Struct_In { u8 pad[8]; f32 unk8; } func_802434E0_Struct_In;
typedef struct func_802434E0_Struct_N { u8 pad[0x30]; func_802434E0_Struct_In *unk30; } func_802434E0_Struct_N;
typedef struct func_802434E0_Struct_A1 { u8 pad[0x14]; func_802434E0_Struct_N *unk14; } func_802434E0_Struct_A1;
typedef struct func_802434E0_Struct_A0 {
    u8 pad[0x3C];
    u16 unk3C;
    u8 pad3E[0x94 - 0x3E];
    f32 unk94;
    u8 pad98[8];
    f32 unkA0;
} func_802434E0_Struct_A0;

extern u8 D_80247D0C[];
extern f64 D_80248460;
extern f64 D_80248468;
extern f64 D_80248470;
extern f32 D_80248478;
extern f32 D_8024847C;
extern f32 D_80248480;
extern f32 D_80248484;
extern f32 D_80248488;
extern u8 func_8024372C[];
#define FF(o) (*(f32 *) ((u8 *) &D_801BBBF0 + (o)))

void func_802434E0(func_802434E0_Struct_A0 *arg0, func_802434E0_Struct_A1 *arg1) {
    s32 t;
    f64 v;

    t = arg0->unk3C++;
    arg1->unk14->unk30->unk8 = arg1->unk14->unk30->unk8 + arg0->unk94;
    arg0->unk94 = (f32) ((f64) arg0->unk94 - D_80248460);
    func_8011AAF4(D_80247D0C, 0x543, arg0, 0, 1, 0.0f, FF(0x1E8), FF(0x1EC), FF(0x1F0), 0.0f, FF(0x1F4), FF(0x1F8), FF(0x1FC), 0.0f, 58.5f, -1, -1);
    if (!(t % 2)) {
        v = D_80248468;
    } else {
        v = D_80248470;
    }
    FF(0x1EC) = (f32) ((f64) FF(0x1EC) + v);
    if (t >= 0x2D) {
        C(0xF20) = 0x39;
        C(0xF21) = 2;
        C(0xF22) = 3;
        C(0xF23) = 0xFD;
        C(0xF24) = 0x61;
        C(0xF25) = 0xE;
        C(0xF26) = 1;
        C(0xF27) = 1;
        C(0xF28) = 0x7F;
        C(0xF29) = 0xFE;
        C(0xF2A) = 0x8A;
        C(0xF2B) = 0xF;
        C(0xF2C) = 0x21;
        *(s8 *) &C(0xF2D) = -0x5A;
        *(s8 *) &C(0xF2E) = -0xC;
        C(0xF32) = 0;
        C(0xF33) = 0;
        C(0xF34) = 0;
        C(0xF35) = 0xA0;
        FF(0x29C) = 5.0f;
        FF(0x2A0) = 700.0f;
        FF(0x1E8) = 8.5f;
        FF(0x1EC) = 2.0f;
        FF(0x1F0) = D_80248478;
        FF(0x1F4) = D_8024847C;
        FF(0x1F8) = D_80248480;
        FF(0x1FC) = D_80248484;
        arg0->unk3C = 0;
        arg0->unkA0 = D_80248488;
        func_800058DC(arg0, (void (*)(void)) func_8024372C);
    }
}
