#include "context.h"
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801518D4(s32, s32, s32);
extern void func_80020718(s32);
extern u8 D_80258ED0[];
extern f32 D_8025913C;
extern f32 D_80259140;
extern f32 D_80259144;
extern f32 D_80259148;
extern u8 func_80248F7C[];

#define G(o) (*(f32 *)((u8 *)&D_801BBBF0 + (o)))
#define P(T, o) (*(T *)((u8 *)arg0 + (o)))

void func_80248E18(void *arg0, s32 arg1) {
    s32 t;

    if (func_80133A24(0x73) != 0) {
        t = P(u16, 0x3C)++;
        if (t >= 5) {
            G(0x1E8) = 41.5f;
            G(0x1EC) = -95.5f;
            G(0x1F0) = D_8025913C;
            G(0x1F4) = D_80259140;
            G(0x1F8) = D_80259144;
            G(0x1FC) = D_80259148;
            func_8011AAF4(D_80258ED0, 0x208, arg0, 0, 1, 0.0f, G(0x1E8), G(0x1EC), G(0x1F0), 0.0f, G(0x1F4), G(0x1F8), G(0x1FC), 0.0f, 35.0f, -1, -1);
            if (t >= 10) {
                P(u16, 0x3C) = 0;
                P(f32, 0x94) = 4.0f;
                P(f32, 0x98) = 4.0f;
                func_80020718(0x1BC);
                func_801518D4(0, 6, 0xF);
                func_800058DC(arg0, (void *)func_80248F7C);
            }
        }
    }
}
