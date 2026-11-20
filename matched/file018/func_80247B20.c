#include "common.h"
typedef struct func_802472C8_StructB {
    u8 pad0[0x30];
    f32 f[6];
} func_802472C8_StructB;
typedef struct func_802472C8_StructA {
    u8 pad0[0x2C];
    func_802472C8_StructB *unk2C;
} func_802472C8_StructA;
extern func_802472C8_StructA *D_801BBCD8;
extern s32 D_8025C6E8;
extern u8 *D_8025C6F0;
extern s8 D_8025C704;
extern void func_80005670();
extern void func_800058DC(void *, void *);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
typedef struct func_80247A1C_StructObj {
    u8 pad0[0x78];
    s16 unk78;
} func_80247A1C_StructObj;
typedef struct func_80247A1C_StructArg0 {
    u8 pad0[0x5C];
    func_80247A1C_StructObj *unk5C;
    u8 pad60[0x30];
    s16 unk90;
} func_80247A1C_StructArg0;
extern void func_802488D0();

extern u8 D_80258ECC[];
extern u8 D_8025C39C[];
extern s8 D_8025C6FB;
extern s16 D_801BBD84;

void func_80247B20(func_80247A1C_StructArg0 *arg0, s32 arg1) {
    s16 v;

    v = arg0->unk90;
    if (v == 0x40) {
        func_80005670(D_8025C6E8, D_80258ECC, arg0);
        v = arg0->unk90;
    }
    arg0->unk90 = v - 1;
    if (v == 0) {
        arg0->unk90 = arg0->unk90 + 1;
        func_8011AAF4(D_8025C39C, 0x521, arg0, 0, 1, 10.0f, D_801BBCD8->unk2C->f[0], D_801BBCD8->unk2C->f[1], D_801BBCD8->unk2C->f[2], 4294967296.0f, D_801BBCD8->unk2C->f[3], D_801BBCD8->unk2C->f[4], D_801BBCD8->unk2C->f[5], 0.0f, 35.0f, 0, 0);
        D_8025C704 = 0;
        func_800058DC(arg0, func_802488D0);
        D_8025C6F0 = NULL;
        D_8025C6FB = 0x64;
        D_801BBD84 = 2;
    }
}
