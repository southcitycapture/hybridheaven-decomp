#include "common.h"
extern u8 D_80164F40[];
extern s8 D_801BBD54;
extern void func_800058DC(s32, void (*)(void));
extern s32 func_80005E44(void *, void *);
extern s32 func_80006214(void *);
void func_8013234C(s32 arg0, s32 arg1);


typedef struct func_80132358_Gfx {
    u32 w0;
    u32 w1;
} func_80132358_Gfx;

typedef struct func_80132358_Struct30 {
    s16 unk0;
    u8 pad2[0x22];
    u32 unk24;
    func_80132358_Gfx *unk28;
} func_80132358_Struct30;

typedef struct func_80132358_Struct24 {
    u8 pad0[0x24];
    u32 unk24;
    s16 unk28;
    u8 pad2A[6];
    func_80132358_Struct30 *unk30;
} func_80132358_Struct24;

typedef struct func_80132358_Struct {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad30[0x60];
    u8 unk90;
    u8 pad91[3];
    f32 unk94;
    func_80132358_Gfx *unk98;
} func_80132358_Struct;
extern s32 func_80001060(void);
extern func_80132358_Gfx *func_8001F430(s32);
extern void func_80116E80(s32);
extern u8 D_80400000[];
extern u8 D_8038F800[];
void func_80132D74(s32 arg0, s32 arg1);
void func_80132D28(void *arg0, s32 arg1);

#define GFX(a, b) { func_80132358_Gfx *_g = gfx++; _g->w0 = (a); _g->w1 = (b); }

void func_80132358(func_80132358_Struct *arg0, func_80132358_Struct24 **arg1) {
    func_80132358_Gfx *gfx;
    s32 i;
    s32 one;

    if (arg0->unk90 == 2) {
        func_80116E80(4);
        func_800058DC((s32)arg0, (void (*)(void))func_8013234C);
        return;
    }
    one = 1;
    D_801BBD54 = one;
    switch ((u32)arg0->unk90) {
    case 0:
        if (func_80005E44(arg0, D_80164F40) == 0) {
            return;
        }
        func_80006214(arg0);
        (*arg1)->unk28 = 4;
        arg0->unk2C |= 0x20;
        if (func_80001060() != 0) {
            gfx = func_8001F430(0x4000);
        } else {
            gfx = func_8001F430(0x1000);
        }
        arg0->unk98 = gfx;
        (*arg1)->unk30->unk28 = gfx;
        (*arg1)->unk30->unk24 |= 0x100;
        (*arg1)->unk30->unk0 = 0;
        (*arg1)->unk24 = 0x80000600;
        func_800058DC((s32)arg0, (void (*)(void))func_80132D74);
        arg0->unk94 = 127.0f;
        GFX(0xE7000000, 0);
        GFX(0xE3000A01, 0);
        GFX(0xE3000C00, 0x80000);
        GFX(0xD9F1FBFF, 0);
        if (func_80001060() != 0) {
            GFX(0xED000000, 0x9FC77C);
        } else {
            GFX(0xED000000, 0x4FC3BC);
        }
        GFX(0xE200001C, 0x504340);
        GFX(0xFCFFFFFF, 0xFFFCF67B);
        GFX(0xD7000002, 0xFFFFFFFF);
        GFX(0xE3000F00, 0);
        GFX(0xE2001E01, 0);
        GFX(0xF9000000, one);
        GFX(0xE3001201, 0x2000);
        GFX(0xE3001001, 0);
        GFX(0xE3000C00, 0);
        if (func_80001060() != 0) {
            for (i = 0; i < 153; i++) {
                GFX(0xFD100000, (u32)D_80400000 + i * 0xF00 + 0x200000); GFX(0xF5100000, 0x070982A0); GFX(0xE6000000, 0); GFX(0xF3000000, 0x0777F00D); GFX(0xE7000000, 0); GFX(0xF5114000, 0x000982A0); GFX(0xF2000000, 0x009FC008);
                GFX(0xE4A00000 | (((u32)(((i + 1) * 3) << 2) & 0xFFF)), ((u32)((i * 3) << 2) & 0xFFF));
                GFX(0xE1000000, 0);
                GFX(0xF1000000, 0x04000400);
            }
        } else {
            for (i = 0; i < 39; i++) {
                GFX(0xFD100000, (u32)D_8038F800 + (u32)i * 0xF00 + 0x4B000); GFX(0xF5100000, 0x07098290); GFX(0xE6000000, 0); GFX(0xF3000000, 0x0777F01A); GFX(0xE7000000, 0); GFX(0xF510A000, 0x00098290); GFX(0xF2000000, 0x004FC014);
                GFX(0xE4500000 | (((u32)(((i + 1) * 6) << 2) & 0xFFF)), ((u32)((i * 6) << 2) & 0xFFF)); GFX(0xE1000000, 0); GFX(0xF1000000, 0x04000400);
            }
        }
        GFX(0xD7000000, 0x80008000);
        gfx->w0 = 0xDF000000; gfx->w1 = 0;
        break;
    case 1:
        func_800058DC((s32)arg0, (void (*)(void))func_80132D28);
        break;
    }
}
