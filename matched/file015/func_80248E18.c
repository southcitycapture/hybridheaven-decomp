#include "common.h"

extern u8 D_80258ED0[];
struct func_8024A434_Sub {
    u8 pad[0x40];
    f32 unk40;
    u8 pad2[4];
    f32 unk48;
};
struct func_8024A434_StructBBF0 {
    u8 pad[0xDC];
    struct func_8024A434_Sub *unkDC;
};
extern struct func_8024A434_StructBBF0 D_801BBBF0;
#define G(o) (*(f32 *)((u8 *)&D_801BBBF0 + (o)))
#define P(T, o) (*(T *)((u8 *)arg0 + (o)))
extern void func_800058DC(void *, void *);
extern void func_80020718(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
s32 func_80133A24(s32);
extern void func_801518D4(s32, s32, s32);
extern u8 func_80248F7C[];
void func_80248E18(void *arg0, s32 arg1) {
    s32 t;

    if (func_80133A24(0x73) != 0) {
        t = P(u16, 0x3C)++;
        if (t >= 5) {
            G(0x1E8) = 41.5f;
            G(0x1EC) = -95.5f;
            G(0x1F0) = (-162.699997f);
            G(0x1F4) = 144.699997f;
            G(0x1F8) = (-265.600006f);
            G(0x1FC) = (-299.5f);
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
