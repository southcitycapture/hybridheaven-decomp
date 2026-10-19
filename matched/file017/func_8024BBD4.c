#include "context.h"

extern void func_801C42DC(s32, s32, s32, u8, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, s32, f32);
extern s32 func_801C3DC8(void *, s32, s32, s32, f32, f32, f32, f32, f32);
extern f32 D_8025CFFC;
extern f32 D_8025D000;
extern void func_8024BD1C();
typedef struct { u8 pad0[0x3C]; u16 unk3C; } func_8024BBD4_Struct;

void func_8024BBD4(func_8024BBD4_Struct *arg0, void *arg1) {
    func_8024CEA0((void *)arg0, arg1);
    func_801C42DC(0xFF, 0xFF, 0xFF, D_801BBBF0[0xF23], D_801BBBF0[0xF24], D_801BBBF0[0xF25], (s8)D_801BBBF0[0xF26], (s8)D_801BBBF0[0xF27], (s8)D_801BBBF0[0xF28], D_801BBBF0[0xF29], D_801BBBF0[0xF2A], D_801BBBF0[0xF2B], (s8)D_801BBBF0[0xF2C], (s8)D_801BBBF0[0xF2D], (s8)D_801BBBF0[0xF2E], D_801BBBF0[0xF32], D_801BBBF0[0xF33], D_801BBBF0[0xF34], D_801BBBF0[0xF35], *(f32 *)&D_801BBBF0[0x29C], *(f32 *)&D_801BBBF0[0x2A0], 2, 0.0f);
    if (func_801C3DC8(arg0, 0xC3280000, 0x42AC0000, 0x43340000, -78.0f, D_8025CFFC, -218.0f, D_8025D000, 35.0f) == 0) {
        arg0->unk3C = 0;
        func_80020718(0x150);
        func_800058DC((s32)arg0, func_8024BD1C);
    }
}
