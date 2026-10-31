#include "common.h"
#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
extern s32 D_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
struct func_8024EACC_Sub2 {
    u8 pad[0xC];
    f32 unkC;
    u8 pad2[0x2];
    s16 unk12;
};
struct func_8024EACC_Sub {
    u8 pad[0x2C];
    struct func_8024EACC_Sub2 *unk2C;
};
struct func_8024EACC_Glob {
    u8 pad[0xE0];
    struct func_8024EACC_Sub *unkE0;
};
extern struct func_8024EACC_Glob D_801BBBF0;
extern s32 D_8025A2FC;
extern void func_800058DC(void *, void *);
extern void func_8015115C(s32, void *);
typedef struct func_80251504_StructObj {
    u8 pad[0x90];
    u16 unk90;
} func_80251504_StructObj;
void func_80251504(func_80251504_StructObj *arg0, s32 arg1);

extern void func_80126E88(s32);
extern u8 D_80254B60[];
extern u8 D_80259FDC[];
extern f64 D_8025A1E0;
extern f64 D_8025A1E8;
extern f32 D_8025A1F0;
extern f32 D_8025A1F4;
extern f32 D_8025A1F8;

struct func_80250DDC_Struct {
    u8 pad[0x90];
    u16 unk90;
    u8 pad2[2];
    f32 unk94;
};

/* D_8025A1D0 / D_8025A1D8 are f64 rodata literals (loaded once across the
 * byte stores); the values below are stand-ins until the ROM values are known. */
#define LIT_D 75.0
#define LIT_D2 255.0

void func_80250DDC(struct func_80250DDC_Struct *arg0, s32 arg1) {
    s32 v = arg0->unk90++;
#define g ((u8 *)&D_801BBBF0)

    if (v == 0x48) {
        func_8015115C(D_8025A2FC, D_80254B60);
    }
    if (v < 0x4B) {
        g[0xF20] = (u32)((f64)(v * 0x65) / LIT_D + 16.0);
        g[0xF21] = (u32)((f64)(v * 0x5C) / LIT_D + 16.0);
        g[0xF22] = (u32)((f64)(v * 0x30) / LIT_D + 16.0);
        g[0xF23] = 0xFF;
        g[0xF24] = (u32)(LIT_D2 - (f64)(v * 0x4F) / LIT_D);
        g[0xF25] = (u32)(LIT_D2 - (f64)(v * 0x7F) / LIT_D);
        g[0xF28] = 0;
        g[0xF26] = (s32)((f64)(v << 6) / LIT_D + -64.0);
        g[0xF27] = (s32)((f64)(v << 6) / LIT_D);
        g[0xF29] = (u32)((f64)(v * 0xC8) / LIT_D);
        g[0xF2A] = (u32)((f64)(v * 0x8B) / LIT_D);
        g[0xF2B] = (u32)((f64)(v * 0x64) / LIT_D);
    }
    if (v >= 0x4B) {
        if (D_8025A1E0 < arg0->unk94) {
            arg0->unk94 = arg0->unk94 - D_8025A1E8;
        }
    }
    if (D_8011AAF4(D_80259FDC, 0x661, arg0, 0, 2, arg0->unk94, D_8025A1F0, D_8025A1F4, 450.0f, 4294967296.0f, D_8025A1F8, -116.0f, 450.0f, 0.0f, 35.0f, -1, -1) == 0) {
        arg0->unk90 = 0;
        func_80126E88(0x85);
        func_800058DC(arg0, func_80251504);
    }
}
