#include "context.h"
/* starting point: func_80252E78 (file017), whose assembly is 99% the same as this function's */

extern s32 func_801C42DC(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, f32, s32, f32);
extern s32 func_801C3DC8(void *, s32, s32, s32, f32, f32, f32, f32, f32);
extern f32 D_8025D56C;
extern void func_80250C9C();

typedef struct func_80250B54_StructObj {
    u8 pad[0x3C];
    s16 unk3C;
} func_80250B54_StructObj;
extern void func_80020718(s32);

void func_80250B54(func_80250B54_StructObj *arg0) {
    extern void func_80251750();
    func_80251750();
    func_801C42DC(0xFF, 0xFF, 0xFF, D_801BBBF0[0xF23], D_801BBBF0[0xF24], D_801BBBF0[0xF25], (s8)D_801BBBF0[0xF26], (s8)D_801BBBF0[0xF27], (s8)D_801BBBF0[0xF28], D_801BBBF0[0xF29], D_801BBBF0[0xF2A], D_801BBBF0[0xF2B], (s8)D_801BBBF0[0xF2C], (s8)D_801BBBF0[0xF2D], (s8)D_801BBBF0[0xF2E], D_801BBBF0[0xF32], D_801BBBF0[0xF33], D_801BBBF0[0xF34], D_801BBBF0[0xF35], *(f32 *)&D_801BBBF0[0x29C], *(f32 *)&D_801BBBF0[0x2A0], 2, 0.0f);
    if (func_801C3DC8(arg0, 0x43250000, 0x42B00000, 0xC33E0000, 134.0f, 223.0f, 150.0f, D_8025D56C, 35.0f) == 0) {
        arg0->unk3C = 0;
        func_80020718(0x150);
        func_800058DC(arg0, func_80250C9C);
    }
}
