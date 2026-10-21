#include "context.h"

extern u8 D_80259578[];
extern u8 D_802539B0[];
extern f32 D_8025977C;
extern f32 D_80259780;
extern f32 D_80259784;
extern f32 D_80259788;
extern void func_8024CA84();

typedef struct func_8024C8F0_Struct {
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
    s8 unkF26;
    u8 unkF27;
    u8 unkF28;
} func_8024C8F0_Struct;

typedef struct func_8024C8F0_StructArg {
    u8 pad[0x90];
    u16 unk90;
} func_8024C8F0_StructArg;

#define func_8024C8F0_G ((func_8024C8F0_Struct *)&D_801BBBF0)

void func_8024C8F0(func_8024C8F0_StructArg *arg0, s32 arg1) {
    if (arg0->unk90++ >= 0x19) {
        func_8024C8F0_G->unkF20 = 0x64;
        func_8024C8F0_G->unkF21 = 0x64;
        func_8024C8F0_G->unkF22 = 0x64;
        func_8024C8F0_G->unkF23 = 0x64;
        func_8024C8F0_G->unkF24 = 0x64;
        func_8024C8F0_G->unkF25 = 0x64;
        func_8024C8F0_G->unkF26 = -0x64;
        func_8024C8F0_G->unkF27 = 0;
        func_8024C8F0_G->unkF28 = 0;
        func_8024C8F0_G->unk1E8 = D_8025977C;
        func_8024C8F0_G->unk1EC = D_80259780;
        func_8024C8F0_G->unk1F0 = D_80259784;
        func_8024C8F0_G->unk1F4 = D_80259788;
        func_8024C8F0_G->unk1F8 = 12.5f;
        func_8024C8F0_G->unk1FC = -6.0f;
        func_8011AAF4(D_80259578, 0x27D, arg0, 0, 1, 0.0f, func_8024C8F0_G->unk1E8, func_8024C8F0_G->unk1EC,
                      func_8024C8F0_G->unk1F0, 0.0f, func_8024C8F0_G->unk1F4, func_8024C8F0_G->unk1F8,
                      func_8024C8F0_G->unk1FC, 0.0f, 35.0f, -1, -1);
        D_80089354 = 0;
        func_8001E978(arg0, 0xFF, 0xFF, 0xFF, 8, 0, 2, 0);
        func_8015115C(D_8025A2D8, D_802539B0);
        arg0->unk90 = 0;
        func_800058DC(arg0, func_8024CA84);
    }
}

#undef func_8024C8F0_G
