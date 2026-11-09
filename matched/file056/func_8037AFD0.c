#include "common.h"
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
typedef struct func_8037AA80_Struct { s32 a; s32 b; s32 c; } func_8037AA80_Struct;
extern func_8037AA80_Struct D_80388A5C;
void func_800058DC(void *, void *);
s32 func_80010550(s32, s32, s32);
extern void func_80011140(s32, s32, func_8037AA80_Struct, s32);
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
typedef struct func_8037AC08_StructCam { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad10[2]; s16 unk12; } func_8037AC08_StructCam;
typedef struct func_8037AA80_StructA { u8 pad[0x5C]; s32 unk5C; } func_8037AA80_StructA;
void func_8037B08C(func_8037AA80_StructA *arg0, s32 arg1);
typedef struct func_8037B9F0_StructB { u8 pad[0x40]; f32 unk40; f32 unk44; f32 unk48; } func_8037B9F0_StructB;
s32 func_8037B9F0(struct func_8037B9F0_StructB *arg0);


void func_8037AFD0(func_8037A6F4_StructO *arg0, s32 arg1) {
    func_8037A6F4_StructP *saved;
    func_8037A6F4_StructP **pp = &saved;
    u16 result;
    func_8037AC08_StructCam *cam;
    func_8037A6F4_StructP *p;

    p = arg0->unk5C;
    if ((u16)(p->unk20 + 0) == 0) {
        cam = (func_8037AC08_StructCam *)D_801BBCD0->unk2C;
        cam->unk12 = (s16)(cam->unk12 - 0x800) & 0x1FFF;
    }
    saved = p;
    result = func_80010550(arg1, (s32)*pp, (s32)p);
    if (func_8037B9F0((func_8037B9F0_StructB *)arg0) == 0 && result != 0) {
        func_80011140(arg1, (s32)saved, D_80388A5C, 10);
        func_800058DC(arg0, func_8037B08C);
    }
}
