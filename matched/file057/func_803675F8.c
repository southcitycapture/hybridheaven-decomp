#include "context.h"

typedef struct func_803675F8_Struct {
    u8 pad0[0x2C];
    f32 x, y, z;
    u16 unk38, unk3A;
    u8 pad3C[4];
    s32 unk40;
    u8 pad44[0x10];
    u8 unk54;
} func_803675F8_Struct;

typedef struct func_803675F8_StructData {
    f32 x, y, z;
    s16 unkC, unkE, unk10;
    u8 pad12[2];
    s32 unk14;
    u16 unk18;
    u8 pad1A[2];
    s32 unk1C;
    u16 unk20;
    u8 pad22[0xE];
    f32 unk30, unk34, unk38;
} func_803675F8_StructData;

extern s32 func_80005E44(void *, void *);
extern void func_803676B8();
extern void func_80367788(s32, s32);
extern u8 D_803868FC[];
extern f32 D_8038AA10;
extern func_803675F8_StructData D_8038CC20;

void func_803675F8(func_803675F8_Struct *arg0, s32 arg1) {
    D_8038CC20.x = arg0->x;
    D_8038CC20.y = arg0->y;
    D_8038CC20.z = arg0->z;
    D_8038CC20.unk10 = 0;
    D_8038CC20.unkE = D_8038CC20.unk10;
    D_8038CC20.unkC = D_8038CC20.unk10;
    D_8038CC20.unk18 = arg0->unk38;
    D_8038CC20.unk20 = arg0->unk3A;
    D_8038CC20.unk1C = arg0->unk40;
    D_8038CC20.unk14 = 0x15;
    D_8038CC20.unk38 = D_8038AA10;
    D_8038CC20.unk34 = D_8038CC20.unk38;
    D_8038CC20.unk30 = D_8038CC20.unk38;
    if (func_80005E44(arg0, D_803868FC) != 0) {
        arg0->unk54 = 0;
        func_800058DC((s32) arg0, func_803676B8);
        return;
    }
    func_800058DC((s32) arg0, func_80367788);
}
