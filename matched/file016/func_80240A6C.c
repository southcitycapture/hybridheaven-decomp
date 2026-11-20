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
typedef struct func_80240A6C_Step {
    u8 unk0;
    u8 unk1;
    u16 unk2;
} func_80240A6C_Step;
extern func_80240A6C_Step D_80249958[20];
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_8012C6B4(s32);
extern s32 func_80150584(void);
extern void func_801C3DC8(void *, f32, f32, f32, f32, f32, f32, f32, f32);
extern void func_801C42DC(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, s32, f32);
void *func_80241F1C(f32 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);
void *func_80241FD0(f32 arg0, f32 arg1, f32 arg2, u8 arg3);


typedef struct func_80240A6C_StructSelf {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x52];
    u16 unk90;
    u16 unk92;
    u8 unk94;
    u8 pad2[0x8];
    u8 unk9D;
} func_80240A6C_StructSelf;

typedef struct func_80240A6C_StructSub {
    u8 pad0[0x4D];
    u8 unk4D;
} func_80240A6C_StructSub;

typedef struct func_80240A6C_StructObj {
    u8 pad0[0x30];
    func_80240A6C_StructSub *unk30;
} func_80240A6C_StructObj;

typedef struct func_80240A6C_StructVec {
    f32 x;
    f32 y;
    f32 z;
} func_80240A6C_StructVec;

extern func_80240A6C_StructVec D_802497A8[];
extern u8 D_8024EB60[];

void func_80240A6C(func_80240A6C_StructSelf *arg0, func_80240A6C_StructObj **arg1) {
    s32 sp8C;
    s32 idx;
    f32 x;
    s32 sp80;

    sp8C = arg0->unk3C++;
    switch (arg0->unk94) {
    case 0:
        if (sp8C >= 0xF) {
            arg0->unk94 = 1;
            x = D_801BBBF0.unkE0->unk2C->unk4;
            if (x > 180.0f) {
                x = 180.0f;
            }
            func_8011AAF4(D_8024EB60, 0x196, arg0, 0, 1, 0.0f, 180.1f, 370.0f, -295.0f, 0.0f,
                          x, 280.0f, -295.0f, 0.0f, 35.0f, -1, -1);
        }
        break;
    case 1:
        func_801C42DC(0x62, 0x32, 0, 0x32, 0xA, 0xA, 0x1E, 0x40, -0x1E, 0xFA, 0x64, 0x5A, -0x1E, -0x40, 0x1E, 0x51, 0x2A, 0xA, 0x60, 5.0f, 1800.0f, 6, 7.0f);
        if (func_80150584() == 0) {
            arg0->unk94 = 2;
        }
        break;
    case 2:
        x = D_801BBBF0.unkE0->unk2C->unk4;
        if (x < 180.0f) {
            func_801C3DC8(arg0, 180.1f, 370.0f, -295.0f, x, 280.0f, -295.0f, 0.2f, 35.0f);
        }
        if (func_80150584() != 0) {
            arg0->unk94 = 3;
        }
        break;
    case 3:
        func_801C42DC(D_801BBBF0.unkF36, D_801BBBF0.unkF37, D_801BBBF0.unkF38, D_801BBBF0.unkF39, D_801BBBF0.unkF3A, D_801BBBF0.unkF3B, D_801BBBF0.unkF3C, D_801BBBF0.unkF3D, D_801BBBF0.unkF3E, D_801BBBF0.unkF3F, D_801BBBF0.unkF40, D_801BBBF0.unkF41, D_801BBBF0.unkF42, D_801BBBF0.unkF43, D_801BBBF0.unkF44, D_801BBBF0.unkF45, D_801BBBF0.unkF46, D_801BBBF0.unkF47, D_801BBBF0.unkF48, D_801BBBF0.unk2A4, D_801BBBF0.unk2A8, 4, 6.0f);
        break;
    }
    (*arg1)->unk30->unk4D = sp8C * 0.5;
    if (arg0->unk90-- == 0) {
        arg0->unk90 = func_8012C6B4(0x19) + 5;
        sp80 = func_8012C6B4(2) % 2;
        func_80241F1C(func_8012C6B4(0xFA) - 0x55, 230.0f, sp80 * 0x5A - 0x154, 0.0f, func_8012C6B4(0x28) / 10.0 + 3.0, (func_8012C6B4(0xA) - 5) / 100.0);
    }
    if (arg0->unk92-- == 0) {
        idx = arg0->unk9D++;
        if (D_80249958[idx].unk2 == 0) {
            idx = arg0->unk9D = 0;
        }
        func_80241FD0(D_802497A8[D_80249958[idx].unk0].x, D_802497A8[D_80249958[idx].unk0].y, D_802497A8[D_80249958[idx].unk0].z, D_802497A8[D_80249958[idx].unk0].z != D_802497A8[0].z);
        arg0->unk92 = D_80249958[idx].unk2;
    }
}
