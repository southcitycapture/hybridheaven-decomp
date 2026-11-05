#include "common.h"
extern s16 D_8017DC42;
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
extern s8 D_8038A93C;
void func_800058DC(void *, void *);
s32 func_80010550(s32, s32, s32);
void func_80020744(s32);
extern s32 func_80020DAC(s32);
typedef struct func_8037A320_StructE {
    u32 w0;
    s16 h4;
    s16 h6;
    s32 w8;
} func_8037A320_StructE;
extern void func_8013A28C(s32, func_8037A320_StructE);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
extern void func_801DFAA4(void *, s32);
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
void func_8037A960(func_8037A320_StructA *arg0, s32 arg1);
typedef struct func_8037AC08_StructCam { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[2]; s16 unk12; } func_8037AC08_StructCam;
extern void func_8037B86C();
typedef struct func_8037B9F0_StructB { u8 pad[0x40]; f32 unk40; f32 unk44; f32 unk48; } func_8037B9F0_StructB;
s32 func_8037B9F0(struct func_8037B9F0_StructB *arg0);


typedef struct func_8037A6F4_StructP {
    u8 pad[0x1C];
    u32 unk1C;
    u16 unk20;
    s16 unk22;
    s32 unk24;
} func_8037A6F4_StructP;

typedef struct func_8037A6F4_StructO {
    u8 pad[0x30];
    u32 unk30;
    u8 pad34[0xC];
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad4C[0x10];
    func_8037A6F4_StructP *unk5C;
} func_8037A6F4_StructO;

void func_8037A6F4(func_8037A6F4_StructO *arg0, s32 arg1) {
extern s32 func_80010550();
    func_8037A6F4_StructP *p;
    func_8037AC08_StructCam *cam;
    u16 result;
    func_8037A320_StructE *value;

    p = arg0->unk5C;
    if (p->unk20 == 0) {
        if (D_80388A6C == 2) {
            cam = (func_8037AC08_StructCam *)D_801BBCD0->unk2C;
            cam->unk12 = (s16)(cam->unk12 - 0x800) & 0x1FFF;
        } else if (D_80388A6C == 3) {
            cam = (func_8037AC08_StructCam *)D_801BBCD0->unk2C;
            cam->unk12 = (s16)(cam->unk12 - 0x800) & 0x1FFF;
        }
    }
    if (func_8037B9F0((func_8037B9F0_StructB *)arg0) == 0) {
        result = func_80010550(arg1, (s32)p);
        if (arg0->unk30 & 4) {
            arg0->unk40 = arg0->unk40 * 0.9;
            arg0->unk44 = arg0->unk44 * 0.9;
            arg0->unk48 = arg0->unk48 * 0.9;
            if (func_80020DAC(0x308) == 0 && func_80020DAC(0x309) == 0 && func_80020DAC(0x30A) == 0) {
                func_801DFAA4(arg0, 0);
            }
        }
        if (result != 0) {
            cam = (func_8037AC08_StructCam *)D_801BBCD0->unk2C;
            if (func_801C5A1C(cam->unk4, cam->unk8 + 0.5, cam->unkC,
                             cam->unk4, cam->unk8 - 5.0, cam->unkC) != 0) {
                if ((s32)*(u16 *)&D_8017DC42 <= 0) {
                    D_8038A93C = 0;
                    func_80020744(0xA);
                    func_800058DC(arg0, func_8037B86C);
                    return;
                }
                value = (func_8037A320_StructE *)&p->unk1C;
                if (D_80388A6C == 1 || D_80388A6C == 2) {
                    value->w0 = 0x01900074;
                } else {
                    value->w0 = 0x01900076;
                }
                value->h4 = 0;
                value->h6 = 0;
                func_8013A28C(arg1, *value);
                arg0->unk48 = 0.0f;
                arg0->unk44 = 0.0f;
                arg0->unk40 = 0.0f;
                func_800058DC(arg0, func_8037A960);
            }
        }
    }
}
