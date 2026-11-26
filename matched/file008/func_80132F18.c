#include "common.h"
extern u8 D_80164F40[];
extern s8 D_801BBD54;
extern u8 D_8038F800[];
extern u8 D_80400000[];
typedef struct func_80132358_Gfx {
    u32 w0;
    u32 w1;
} func_80132358_Gfx;
#define GFX(a, b) { func_80132358_Gfx *_g = gfx++; _g->w0 = (a); _g->w1 = (b); }
extern s32 func_80001060(void);
extern void func_800058DC(s32, void (*)(void));
extern s32 func_80005E44(void *, void *);
extern s32 func_80006214(void *);
extern func_80132358_Gfx *func_8001F430(s32);
void func_8013341C(s32 arg0, s32 arg1);
void func_80133458(void *arg0, s32 arg1);
void func_80133730(s32 arg0, s32 arg1);


typedef struct func_80132F18_Struct30 {
    s16 unk0;
    u8 pad2[2];
    f32 unk4, unk8, unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18, unk1C, unk20;
    u32 unk24;
    func_80132358_Gfx *unk28;
    u8 pad2C[4];
    u32 unk30;
} func_80132F18_Struct30;

typedef struct func_80132F18_Struct24 {
    u8 pad0[0x24];
    u32 unk24;
    s16 unk28;
    u8 pad2A[6];
    func_80132F18_Struct30 *unk30;
} func_80132F18_Struct24;

typedef struct func_80132F18_Struct {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad30[0x60];
    u8 unk90;
    u8 unk91;
    u8 pad92[2];
    s16 unk94;
    u8 pad96[2];
    func_80132358_Gfx *unk98;
} func_80132F18_Struct;

typedef struct func_80132F18_Vtx {
    s32 w[4];
} func_80132F18_Vtx;

extern u8 D_80178CA4[];
extern u8 D_80178CE0[];
extern func_80132F18_Vtx D_80178D48[];
extern s32 D_80179708[][4];

void func_80132F18(func_80132F18_Struct *arg0, func_80132F18_Struct24 **arg1) {
    s32 i;
    func_80132358_Gfx *gfx;

    if (func_80001060() != 0) {
        arg0->unk91 = 0x4D;
    } else {
        arg0->unk91 = 0x26;
    }
    if (arg0->unk90 == 2) {
        func_80005E44(arg0, &D_80178CA4);
        func_800058DC((s32)arg0, (void (*)(void))func_80133730);
        return;
    }
    D_801BBD54 = 1;
    switch ((u32)arg0->unk90) {
    case 0:
        arg0->unk2C |= 0x20;
        for (i = 0; i <= arg0->unk91; i++) {
            if (func_80005E44(arg0, D_80164F40) == 0) {
                return;
            }
        }
        func_80006214(arg0);
        if (func_80001060() != 0) {
            gfx = func_8001F430(0x2000);
        } else {
            gfx = func_8001F430(0x1000);
        }
        arg0->unk98 = gfx;
        for (i = 0; i <= arg0->unk91; i++) {
            arg1[i]->unk28 = 1;
            arg1[i]->unk30->unk30 = (u32)D_80178CE0 | 0x40000000;
            arg1[i]->unk30->unk24 |= 0x100;
            arg1[i]->unk30->unk0 = 0;
            arg1[i]->unk30->unk20 = 0.01f;
            arg1[i]->unk30->unkC = 0.0f;
            arg1[i]->unk30->unk12 = 0x1000;
            arg1[i]->unk24 = 0x80000600;
            arg1[i]->unk30->unk28 = gfx;
            if (func_80001060() != 0) {
                arg1[i]->unk30->unk18 = 0.0112f;
                arg1[i]->unk30->unk1C = 0.0117f;
                arg1[i]->unk30->unk4 = 0.0f;
                arg1[i]->unk30->unk8 = 0.2f;
                { GFX(0xFD100000, (u32)(D_80400000 + 0x200000 + i * 0x1E00)); GFX(0xF5100000, 0x070982A0); GFX(0xE6000000, 0); GFX(0xF3000000, 0x0777F00D); GFX(0xE7000000, 0); GFX(0xF5114000, 0x982A0); GFX(0xF2000000, 0x9FC008); }
                GFX(0x01004008, (u32)D_80179708[i * 4]);
            } else {
                arg1[i]->unk30->unk18 = 0.01f;
                arg1[i]->unk30->unk1C = 0.01f;
                arg1[i]->unk30->unk4 = 0.0f;
                arg1[i]->unk30->unk8 = 0.0f;
                { GFX(0xFD100000, (u32)(D_8038F800 + 0x4B000 + i * 0xF00)); GFX(0xF5100000, 0x07098290); GFX(0xE6000000, 0); GFX(0xF3000000, 0x0777F01A); GFX(0xE7000000, 0); GFX(0xF510A000, 0x98290); GFX(0xF2000000, 0x4FC014); }
                GFX(0x01004008, (u32)&D_80178D48[i * 4]);
            }
            GFX(0x06000204, 0x20604);
            GFX(0xD7000000, 0x80008000);
            GFX(0xDF000000, 0);
        }
        func_800058DC((s32)arg0, (void (*)(void))func_8013341C);
        arg0->unk94 = 0x7E;
        break;
    case 1:
        func_800058DC((s32)arg0, (void (*)(void))func_80133458);
        break;
    }
}
