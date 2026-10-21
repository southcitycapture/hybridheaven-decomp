#include "context.h"
extern struct func_80243D1C_Struct D_801BBBF0;
typedef struct func_80243D1C_Struct {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[0x434 - 6];
    u8 unk434;
} func_80243D1C_Struct;

struct func_8024332C_Sub2 { u8 pad[4]; f32 unk4; };
struct func_8024332C_Sub { u8 pad[0x2C]; struct func_8024332C_Sub2 *unk2C; };
struct func_8024332C_Glob { u8 pad[0x1D]; u8 unk1D; u8 pad2[0xC2]; struct func_8024332C_Sub *unkE0; };
struct func_8024332C_Struct { u8 pad[0x3C]; u16 unk3C; u8 pad2[0x52]; u16 unk90; u16 unk92; };
extern f64 D_80246BD8;
extern f64 D_80246BE0;
extern s16 D_80244738[];
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4();
extern void func_8037BB4C();

void func_8024332C(struct func_8024332C_Struct *arg0, s32 arg1) {
    s32 t;
    t = arg0->unk3C++;
    if (t >= 0x3C && !(t % 2)) {
        arg0->unk90 = arg0->unk90 + 1;
    }
    if (!(t % 4)) {
        arg0->unk92 = arg0->unk92 + 1;
    }
    if ((t % arg0->unk90) == 0) {
        func_80129FB8(350.0f, (f32)(((f64)(func_8012C6B4(0x12C) - 0x96) / 10.0) + 25.0), (f32)(((f64)(func_8012C6B4(0xC8) - 0x64) / 10.0) + D_80246BD8), 0.0f, 0.0f, -12.0f, 0.0f, 0xFF, 0xE6, 0, 0xFF, 0, 0, 0xB4, -(s32)arg0->unk92, (f32)(((f64)func_8012C6B4(0x32) / 100.0) + D_80246BE0), 0xB, 0);
    }
    if (t < 0x3C) {
        if (((struct func_8024332C_Glob *)&D_801BBBF0)->unkE0->unk2C->unk4 >= 320.0f && ((struct func_8024332C_Glob *)&D_801BBBF0)->unkE0->unk2C->unk4 < 360.0f) {
            func_8037BB4C(0x1000, 0x3E99999A, 0x3F4CCCCD, D_80244738[((struct func_8024332C_Glob *)&D_801BBBF0)->unk1D]);
        }
    }
    if (t >= 0x5A) {
        func_80020718(0x1A0);
        func_800058DC(arg0, func_802435AC);
    }
}
