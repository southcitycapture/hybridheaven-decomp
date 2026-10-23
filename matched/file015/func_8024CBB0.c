#include "context.h"

typedef struct func_8024CBB0_Struct {
    u8 pad[0x1E8];
    f32 unk1E8;
    f32 unk1EC;
    f32 unk1F0;
    f32 unk1F4;
    f32 unk1F8;
    f32 unk1FC;
    u8 pad2[0xF20 - 0x200];
    u8 unkF20;
    u8 unkF21;
    u8 unkF22;
    u8 unkF23;
    u8 unkF24;
    u8 unkF25;
    u8 unkF26;
    s8 unkF27;
    u8 unkF28;
} func_8024CBB0_Struct;

typedef struct func_8024CBB0_Arg {
    u8 pad[0x90];
    u16 unk90;
} func_8024CBB0_Arg;

extern u8 D_802595F8[];
extern u8 D_80259644[];
extern f32 D_802597AC;
extern f32 D_802597B0;
extern f32 D_802597B4;
extern f32 D_802597B8;
extern f32 D_802597BC;
extern f32 D_802597C0;
extern f32 D_802597C4;
extern f32 D_802597C8;
extern f32 D_802597CC;
extern f32 D_802597D0;
extern f32 D_802597D4;
extern f32 D_802597D8;
extern f32 D_802597DC;
extern f32 D_802597E0;
extern f32 D_802597E4;
void func_8024CDE8();

#define func_8024CBB0_G ((func_8024CBB0_Struct *)&D_801BBBF0)

void func_8024CBB0(func_8024CBB0_Arg *arg0, s32 arg1) {
    func_8011AAF4(D_802595F8, 0x2AC, arg0, 0, 2, D_802597AC, D_802597B0, D_802597B4, D_802597B8, D_802597BC, D_802597C0, D_802597C4, D_802597C8, 0.0f, 35.0f, -1, -1);
    if (arg0->unk90++ >= 30) {
        func_8024CBB0_G->unkF20 = 0x75;
        func_8024CBB0_G->unkF21 = 0x6C;
        func_8024CBB0_G->unkF22 = 0x40;
        func_8024CBB0_G->unkF23 = 0xFF;
        func_8024CBB0_G->unkF24 = 0xB0;
        func_8024CBB0_G->unkF25 = 0x80;
        func_8024CBB0_G->unkF26 = 0;
        func_8024CBB0_G->unkF27 = 0x40;
        func_8024CBB0_G->unkF28 = 0;
        func_8024CBB0_G->unk1E8 = D_802597CC;
        func_8024CBB0_G->unk1EC = D_802597D0;
        func_8024CBB0_G->unk1F0 = D_802597D4;
        func_8024CBB0_G->unk1F4 = D_802597D8;
        func_8024CBB0_G->unk1F8 = D_802597DC;
        func_8024CBB0_G->unk1FC = D_802597E0;
        func_8011AAF4(D_80259644, 0x2C7, arg0, 0, 1, 0.0f, func_8024CBB0_G->unk1E8, func_8024CBB0_G->unk1EC, func_8024CBB0_G->unk1F0, 0.0f, func_8024CBB0_G->unk1F4, func_8024CBB0_G->unk1F8, func_8024CBB0_G->unk1FC, 0.0f, D_802597E4, -1, -1);
        D_80089354 = 0;
        func_8001E978(arg0, 0xFF, 0xFF, 0xFF, 8, 0, 2, 0);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024CDE8);
    }
}

#undef func_8024CBB0_G
