#include "common.h"
extern void func_800058DC(void *a0, void *a1);
void func_801CE1C8(void *a0, s32 a1, f32 a2, f32 a3, f32 a4, s32 a5, s32 a6, s32 a7, s32 a8, s32 a9, s32 a10, s32 a11, s32 a12, s32 a13, s32 a14, s32 a15, s32 a16, s32 a17, s32 a18, s32 a19, s32 a20, s32 a21, s32 a22, f32 a23, f32 a24, f32 a25, f32 a26, s32 a27);
typedef struct { u8 pad[0x2C]; f32 *unk2C; } func_80372D9C_StructA;
typedef struct { u8 pad[0xC8]; f32 unkC8; f32 unkCC; f32 unkD0; f32 unkD4; f32 unkD8; f32 unkDC; } func_80372D9C_StructC;
typedef struct { u8 pad[0x24]; func_80372D9C_StructA *unk24; u8 pad28[0x34]; func_80372D9C_StructC *unk5C; } func_80372D9C_StructB;
typedef struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x30];
    u8 unk40;
    u8 pad41[0x3B];
    u8 unk7C;
    u8 pad7D[0x13];
    func_80372D9C_StructB *unk90;
} func_80372D9C_Struct;
void func_80372D9C(func_80372D9C_Struct *arg0, f32 arg1, f32 arg2, f32 arg3);
typedef struct func_80373634_StructB { u8 pad0[0xC8]; f32 unkC8; u8 padCC[4]; f32 unkD0; f32 unkD4; u8 padD8[4]; f32 unkDC; } func_80373634_StructB;
typedef struct func_80373634_StructC { u8 pad0[0x4]; f32 unk4; u8 pad8[4]; f32 unkC; } func_80373634_StructC;
typedef struct func_80373634_StructD { u8 pad0[0x2C]; func_80373634_StructC *unk2C; } func_80373634_StructD;
typedef struct func_80373634_StructA { u8 pad0[0x24]; func_80373634_StructD *unk24; u8 pad28[0x34]; func_80373634_StructB *unk5C; } func_80373634_StructA;
typedef struct func_80373634_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad10[0x30];
    u8 unk40;
    u8 pad41[3];
    f32 unk44;
    u8 pad48[4];
    u16 unk4C;
    u16 unk4E;
    u8 pad50[0x1C];
    f32 unk6C;
    u8 pad70[4];
    f32 unk74;
    u8 pad78[4];
    u8 unk7C;
    u8 pad7D[3];
    f32 unk80;
    u8 pad84[4];
    f32 unk88;
    u8 pad8C[4];
    func_80373634_StructA *unk90;
} func_80373634_Struct;
void func_80373634(func_80373634_Struct *arg0, s32 arg1);


typedef struct func_80372F8C_StructSub {
    u8 pad[0x36];
    u16 unk36;
} func_80372F8C_StructSub;

typedef struct func_80372F8C_Struct {
    u8 pad0[0x34];
    u8 unk34;
    u8 unk35;
    u8 unk36;
    u8 pad37;
    u8 unk38;
    u8 unk39;
    u8 unk3A;
    u8 pad3B;
    u16 unk3C;
    u8 pad3E[2];
    u8 unk40;
    u8 pad41[3];
    f32 unk44;
    u8 pad48[0x24];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 pad78[8];
    f32 unk80;
    f32 unk84;
    f32 unk88;
    func_80372F8C_StructSub *unk8C;
} func_80372F8C_Struct;

void func_80372F8C(func_80372F8C_Struct *arg0, s32 arg1) {
    func_80372F8C_StructSub *sub;
    f32 x, y, z;
    f32 step, fraction;
    f32 distance;
    u32 r, g, b;
    u16 id;
    u8 effect;
    u8 alpha;

    sub = arg0->unk8C;
    id = sub->unk36;
    effect = 0x30;
    step = 1.0f;
    distance = arg0->unk70 - arg0->unk84;
    if (id == 0x11D && arg0->unk3C < 5) {
        step = distance / 12.0;
    } else if (distance < 6.0) {
        step = distance / 6.0;
    } else if (distance > 10.0) {
        step = distance / 10.0;
    }
    goto l2;
l2:
    distance = arg0->unk70 - arg0->unk84;
    goto l3;
l3:
    y = arg0->unk70 - (f32)(u32)arg0->unk3C * step;
    goto l1;
l1:
    if (distance < 0.01) {
        distance = 0.01f;
    }
    fraction = (arg0->unk70 - y) / distance;
    if (fraction <= 0.0) {
        fraction = 0.0f;
    } else if (fraction >= 1.0) {
        fraction = 1.0f;
    }
    x = (arg0->unk80 - arg0->unk6C) * fraction + arg0->unk6C;
    z = (arg0->unk88 - arg0->unk74) * fraction + arg0->unk74;
    if (arg0->unk40 == 1) {
        effect = 0x2F;
        r = arg0->unk34;
        g = arg0->unk35;
        b = arg0->unk36;
    } else {
        r = (u8)(u32)(((f32)(arg0->unk38 - arg0->unk34) * fraction / 2) + (f32)(u32)arg0->unk34);
        g = (u8)(u32)(((f32)(arg0->unk39 - arg0->unk35) * fraction / 2) + (f32)(u32)arg0->unk35);
        b = (u8)(u32)(((f32)(arg0->unk3A - arg0->unk36) * fraction / 2) + (f32)(u32)arg0->unk36);
    }
    if (id == 0x11D) {
        distance = (f64)(u32)arg0->unk3C * 0.7;
    } else {
        distance = (f64)(u32)arg0->unk3C * 0.3;
    }
    if (y <= arg0->unk84) {
        distance *= 2;
    }
    if (arg0->unk3C < 5) {
        step = (f64)(u32)arg0->unk3C * 0.003;
    } else {
        step = (arg0->unk3C + 10) * 0.001;
    }
    alpha = (u8)(u32)(192.0f * fraction + 63.0f);
    func_801CE1C8(arg0, effect, x, y, z, r, g, b, alpha,
                  r, g, b, 0, arg0->unk38, arg0->unk39, arg0->unk3A,
                  alpha, arg0->unk38, arg0->unk39, arg0->unk3A,
                  0, 1, 0x3C, step, step, step, distance, 5);
    arg0->unk3C++;
    func_80372D9C((func_80372D9C_Struct *)arg0, x, z, distance + 1.0);
    if (y <= arg0->unk84 || arg0->unk3C >= 13) {
        arg0->unk80 = x;
        arg0->unk84 = y;
        arg0->unk88 = z;
        arg0->unk44 = distance + 1.0;
        func_800058DC(arg0, func_80373634);
    }
}
