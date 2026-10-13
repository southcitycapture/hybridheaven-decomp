#include "context.h"

typedef struct func_801C39E0_StructGfx {
    u32 w0;
    u32 w1;
} func_801C39E0_StructGfx;

typedef struct func_801C39E0_Struct {
    u8 pad[0x90];
    u8 unk90;
    u8 unk91;
    u8 unk92;
    u8 unk93;
    u8 unk94;
    u8 unk95;
    u8 unk96;
    u8 unk97;
    u16 unk98;
    u8 pad9A[2];
    u16 unk9C;
} func_801C39E0_Struct;

extern s32 func_80001060(f32);
extern s32 func_801302CC(f32);
extern func_801C39E0_StructGfx *D_801DA2AC;
extern func_801C39E0_StructGfx D_801DEF90[];

#define GFX10(c0, c1) { func_801C39E0_StructGfx *_g = D_801DA2AC++; _g->w0 = (c0); _g->w1 = (c1); }
#define GFX01(c0, c1) { func_801C39E0_StructGfx *_g = D_801DA2AC++; _g->w0 = (c0); _g->w1 = (c1); }

void func_801C39E0(func_801C39E0_Struct *arg0, s32 arg1) {
    f32 cur;
    f32 max;
    f32 r;
    f32 gg;
    f32 b;
    f32 a;

    if (D_801DA2B0 == 0) {
        D_801DA2B0 = 0;
        D_801DA2B4 = 0;
        D_801DA2B8 = 0;
        func_80005700();
        return;
    }
    if (D_801DA2B8 != 0) {
        D_801DA2B8 = 0;
        func_800058DC(arg0, func_801C3940);
        return;
    }
    if (arg0->unk9C >= arg0->unk98) {
        cur = (u32)arg0->unk98;
        max = (u32)arg0->unk9C;
        D_801DA2AC = D_801DEF90;
        GFX01(0xE3000C00, 0);
        GFX10(0xE3000F00, 0);
        GFX10(0xE3001201, 0);
        GFX01(0xE3001402, 0xC00);
        GFX10(0xE3001001, 0);
        if (func_80001060(max) != 0) {
            if (func_801302CC(max) != 0) {
                GFX01(0xED080168, 0x980618);
            } else {
                GFX01(0xED080040, 0x980740);
            }
        } else {
            GFX01(0xED040020, 0x4C03A0);
        }
        GFX10(0xE7000000, 0);
        GFX01(0xFCFFFFFF, 0xFFFDF6FB);
        GFX10(0xE200001C, 0x504240);
        r = (f32)(arg0->unk94 - arg0->unk90) * cur / max + (u32)arg0->unk90;
        gg = (f32)(arg0->unk95 - arg0->unk91) * cur / max + (u32)arg0->unk91;
        b = (f32)(arg0->unk96 - arg0->unk92) * cur / max + (u32)arg0->unk92;
        a = (f32)(arg0->unk97 - arg0->unk93) * cur / max + (u32)arg0->unk93;
        GFX01(0xFA000000, (((u8)(u32)r & 0xFF) << 24) | (((u8)(u32)gg & 0xFF) << 16) | (((u8)(u32)b & 0xFF) << 8) | ((u8)(u32)a & 0xFF));
        if (func_80001060(max) != 0) {
            GFX10(0xF6A00780, 0);
        } else {
            GFX10(0xF65003C0, 0);
        }
        GFX10(0xDF000000, 0);
        arg0->unk98++;
        return;
    }
    D_801DA2B4 = 0;
}
