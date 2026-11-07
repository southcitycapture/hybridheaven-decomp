#include "common.h"
typedef struct func_80240A6C_Pos {
    u8 pad0[0x4];
    f32 unk4;
} func_80240A6C_Pos;
typedef struct func_80240A6C_Actor {
    u8 pad0[0x2C];
    func_80240A6C_Pos *unk2C;
} func_80240A6C_Actor;
typedef struct func_80240A6C_Global {
    u8 pad0[0xE0];
    func_80240A6C_Actor *unkE0;
    u8 padE4[0x2A4 - 0xE4];
    f32 unk2A4;
    f32 unk2A8;
    u8 pad2AC[0xF36 - 0x2AC];
    u8 unkF36;
    u8 unkF37;
    u8 unkF38;
    u8 unkF39;
    u8 unkF3A;
    u8 unkF3B;
    s8 unkF3C;
    s8 unkF3D;
    s8 unkF3E;
    u8 unkF3F;
    u8 unkF40;
    u8 unkF41;
    s8 unkF42;
    s8 unkF43;
    s8 unkF44;
    u8 unkF45;
    u8 unkF46;
    u8 unkF47;
    u8 unkF48;
} func_80240A6C_Global;
extern func_80240A6C_Global D_801BBBF0;
extern void func_80005700(void *);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4(s32);
extern s32 func_80150584(void);


typedef struct func_80241A00_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x52];
    f32 unk90;
    f32 unk94;
    f32 unk98;
    u8 unk9C;
} func_80241A00_Struct;

typedef struct func_80241A00_G {
    u8 pad0[0x1D];
    u8 unk1D;
} func_80241A00_G;
extern void func_80020718(s32);
extern void func_8037BB4C(s16, f32, f32, s16);
extern u16 D_80249988[];

void func_80241A00(func_80241A00_Struct *arg0, s32 arg1) {
    s32 i;
    s32 t;
    s32 b;

    t = arg0->unk3C++;
    if (func_80150584() != 0) {
        func_80005700(arg0);
        return;
    }
    if (t % 2 == 0) {
        func_80129FB8(arg0->unk90, arg0->unk94 - 5.0f, arg0->unk98, (func_8012C6B4(200) - 100) / 100.0, (func_8012C6B4(100) - 50) / 100.0, arg0->unk9C == 0 ? 1 : -1, 0.2f, 0xFF, 0xFF, 0xFF, 0x40, 0x40, 0x80, 0x8C, -4, func_8012C6B4(20) / 1000.0 + 0.3, 0xB, 0);
    }
    if (t >= 0x1E) {
        if (t == 0x1E) {
            if (arg0->unk9C == 0) {
                func_80020718(0x302);
            } else {
                func_80020718(0x301);
            }
            for (i = 0; i != 6; i++) {
                func_80129FB8(arg0->unk90, arg0->unk94 - 5.0f, arg0->unk98, (func_8012C6B4(400) - 200) / 100.0, (func_8012C6B4(400) - 200) / 100.0, arg0->unk9C == 0 ? 1.2 : -1.2, 0.0f, 0xFF, 0xFF, 0xFF, 0x40, 0x40, 0x80, 0xB4, -8, func_8012C6B4(40) / 1000.0 + 0.16, 0xC, 0);
            }
        }
        if (t % 2 == 0) {
            func_80129FB8(arg0->unk90, arg0->unk94, arg0->unk98, (func_8012C6B4(300) - 150) / 100.0, (func_8012C6B4(200) - 100) / 100.0, arg0->unk9C == 0 ? 7 : -7, 0.0f, 0xFF, 0xFF, 0xFF, 0x40, 0x40, 0x80, 0xC8, -8, func_8012C6B4(20) / 100.0 + 0.32, 0xB, 0);
        }
    }
    if (t >= 0x24 && t < 0x3D) {
        if (arg0->unk90 - 9.0 <= D_801BBBF0.unkE0->unk2C->unk4 && D_801BBBF0.unkE0->unk2C->unk4 <= arg0->unk90 + 9.0) {
            b = D_80249988[((func_80241A00_G *)&D_801BBBF0)->unk1D];
            func_8037BB4C(arg0->unk9C == 0 ? 0 : 0x1000, 0.3f, 0.8f, b);
        }
    }
    if (t >= 0x3C) {
        func_80005700(arg0);
    }
}
