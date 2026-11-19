#include "common.h"
typedef struct func_8037BAEC_StructBBBF0 {
    u8 pad[0xEF0];
    u16 unkEF0;
} func_8037BAEC_StructBBBF0;
extern func_8037BAEC_StructBBBF0 D_801BBBF0;
typedef struct func_8037A320_StructV {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_8037A320_StructV;
typedef struct func_8037A320_StructG {
    u8 pad[0x2C];
    func_8037A320_StructV *unk2C;
} func_8037A320_StructG;
extern func_8037A320_StructG *D_801BBCD0;
extern u8 D_80388A6C;
void func_800058DC(void *, void *);
s32 func_80010550(s32, s32, s32);
typedef struct func_8037A320_StructE {
    u32 w0;
    s16 h4;
    s16 h6;
    s32 w8;
} func_8037A320_StructE;
extern void func_8013A28C(s32, func_8037A320_StructE);
extern void func_801518D4(s32, s32, s32);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
extern void func_801CD228(void *, s32);
typedef struct func_8037AC08_StructCam { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[2]; s16 unk12; } func_8037AC08_StructCam;
typedef struct func_8037A320_StructP {
    u8 pad[0x1C];
    func_8037A320_StructE e;
} func_8037A320_StructP;
typedef struct func_8037A320_StructA {
    u8 pad[0x30];
    u32 unk30;
    u8 pad2[0xC];
    f32 unk40;
    u8 pad3[4];
    f32 unk48;
    u8 pad4[0x10];
    func_8037A320_StructP *unk5C;
} func_8037A320_StructA;
void func_8037AEA8(func_8037A320_StructA *arg0, s32 arg1, s32 arg2);
typedef struct func_8037B118_StructV { s32 w0; s32 w4; s32 w8; } func_8037B118_StructV;
typedef struct func_8037B118_StructP { u8 pad[0x1C]; func_8037B118_StructV v; } func_8037B118_StructP;
typedef struct func_8037B118_StructA { u8 pad[0x5C]; func_8037B118_StructP *p; } func_8037B118_StructA;
void func_8037B118(func_8037B118_StructA *arg0, s32 arg1);
typedef struct func_8037B9F0_StructB { u8 pad[0x40]; f32 unk40; f32 unk44; f32 unk48; } func_8037B9F0_StructB;
s32 func_8037B9F0(struct func_8037B9F0_StructB *arg0);


typedef struct func_8037AC08_StructHolder { u8 pad[0x2C]; func_8037AC08_StructCam *unk2C; } func_8037AC08_StructHolder;
typedef struct func_8037AC08_StructP { u8 pad[0x20]; u16 unk20; } func_8037AC08_StructP;
typedef struct func_8037AC08_StructO { u8 pad[0x30]; s32 unk30; u8 pad34[0xC]; f32 unk40; f32 unk44; f32 unk48; u8 pad4C[0x10]; func_8037AC08_StructP *unk5C; } func_8037AC08_StructO;

void func_8037AC08(func_8037AC08_StructO *arg0, s32 arg1) {
    func_8037AC08_StructP *p;
    func_8037AC08_StructCam *cam;
    u16 s;
    u8 *v;
    s32 r;

    p = arg0->unk5C;
    if (p->unk20 == 0) {
        arg0->unk48 = 0.0f;
        arg0->unk44 = 0.0f;
        arg0->unk40 = 0.0f;
        (*(func_8037AC08_StructHolder **)((u8 *)&D_801BBBF0 + 0xE0))->unk2C->unk8 -= 5.0;
        if (D_80388A6C == 2) {
            cam = (*(func_8037AC08_StructHolder **)((u8 *)&D_801BBBF0 + 0xE0))->unk2C;
            cam->unk12 = (s16)(cam->unk12 - 0x800) & 0x1FFF;
        } else if (D_80388A6C == 3) {
            cam = (*(func_8037AC08_StructHolder **)((u8 *)&D_801BBBF0 + 0xE0))->unk2C;
            cam->unk12 = (s16)(cam->unk12 - 0x800) & 0x1FFF;
        }
    }
    s = func_80010550(arg1, (s32)p, (s32)arg0);
    if (func_8037B9F0((void *)arg0) == 0 && s != 0) {
        if (arg0->unk30 & 4) {
            if (D_80388A6C < 4) {
                func_801518D4(0, 7, 6);
            } else {
                func_801518D4(0, 3, 5);
            }
            v = (u8 *)p + 0x1C;
            if (D_80388A6C == 1 || D_80388A6C == 2) {
                *(s32 *)v = 0x190006E;
            } else {
                *(s32 *)v = 0x190006B;
            }
            *(u16 *)(v + 4) = 0;
            *(u16 *)(v + 6) = 0;
            func_8013A28C(arg1, *(func_8037A320_StructE *)v);
            cam = (func_8037AC08_StructCam *)D_801BBCD0->unk2C;
            r = func_801C5A1C(cam->unk4, cam->unk8 + 0.5, cam->unkC, cam->unk4, cam->unk8 - 1.0, cam->unkC);
            if (r == 0 || !(((*(u16 *)((u8 *)&D_801BBBF0 + 4) == 0x4D || *(u16 *)((u8 *)&D_801BBBF0 + 4) == 0x50) && *((u8 *)&D_801BBBF0 + 0x35B) >= 2) || (*(u16 *)((u8 *)&D_801BBBF0 + 4) == 0x51 && *((u8 *)&D_801BBBF0 + 0x35B) == 2))) {
                func_801CD228(arg0, arg1);
            }
            if (D_80388A6C == 1 || D_80388A6C == 2) {
                func_800058DC(arg0, func_8037AEA8);
            } else {
                func_800058DC(arg0, func_8037B118);
            }
        }
    }
}
