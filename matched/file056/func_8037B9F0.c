#include "context.h"
typedef struct func_8037B9F0_StructV { u8 pad[0x30]; f32 unk30; f32 unk34; f32 unk38; f32 unk3C; f32 unk40; f32 unk44; } func_8037B9F0_StructV;
typedef struct func_8037B9F0_StructA { u8 pad[0x2C]; func_8037B9F0_StructV *unk2C; } func_8037B9F0_StructA;
extern u16 D_801BCAE0;
extern func_8037B9F0_StructA *D_801BBCD8;
extern u8 D_80389730[];
extern u8 func_8037B64C[];
extern void func_801E4F60(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);

s32 func_8037B9F0(func_8037B9F0_StructB *arg0) {
    if (D_801BCAE0 & 0x8000) {
        func_801E4F60(0x1E);
        func_8011AAF4(D_80389730, 0x3BC, arg0, 0, 1, 10.0f, D_801BBCD8->unk2C->unk30, D_801BBCD8->unk2C->unk34, D_801BBCD8->unk2C->unk38, 10.0f, arg0->unk40 + D_801BBCD8->unk2C->unk3C, arg0->unk44 + D_801BBCD8->unk2C->unk40, arg0->unk48 + D_801BBCD8->unk2C->unk44, 0.0f, 35.0f, -1, -1);
        func_800058DC(arg0, func_8037B64C);
        return 1;
    }
    return 0;
}
