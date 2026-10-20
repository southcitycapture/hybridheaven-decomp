#include "context.h"
s32 func_801C1334(void);
extern u8 D_801CC8CC;
extern s32 func_801C11BC();
extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

typedef struct func_801C1508_StructB {
    u8 pad[0x30];
    f32 unk30;
    f32 unk34;
    u8 pad2[4];
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_801C1508_StructB;
typedef struct func_801C1508_StructA {
    u8 pad[0x2C];
    func_801C1508_StructB *unk2C;
} func_801C1508_StructA;
typedef struct func_801C1508_StructP {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C1508_StructP;
extern func_801C1508_StructA *D_801BBCD8;
extern u8 D_801CEB18[];
extern f32 D_801CF260;
extern u8 func_801C1624[];
void func_801C1A30(s32 arg0, s32 arg1);

void func_801C1508(func_801C1508_StructP *arg0, s32 arg1) {
    func_801C1508_StructB *p;
    f32 t;

    if (func_801C1334() & 0xB000) {
        func_800058DC((s32)arg0, (void *)func_801C1A30);
    }
    func_8011AAF4(D_801CEB18, 0x219, (s32)arg0, 0, 1, 3.0f, D_801BBCD8->unk2C->unk30, D_801BBCD8->unk2C->unk34, D_801BBCD8->unk2C->unk44 + D_801CF260, 3.0f, D_801BBCD8->unk2C->unk3C, D_801BBCD8->unk2C->unk40, D_801BBCD8->unk2C->unk44 + D_801CF260, 0.0f, 30.0f, -1, -1);
    arg0->unk3C++;
    if (arg0->unk3C == 0x1C2) {
        func_801C11BC(3);
    }
    if (D_801CC8CC == 2) {
        func_800058DC((s32)arg0, (void *)func_801C1624);
    }
}
