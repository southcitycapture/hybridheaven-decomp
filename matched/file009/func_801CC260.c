#include "common.h"
extern s32 D_80006214(void *);
extern u8 D_8008DA88[];
extern u16 D_801BCAE0;
typedef struct func_801CC660_Struct {
    u8 pad[0x4C];
    u16 unk4C;
    u16 unk4E;
} func_801CC660_Struct;
extern func_801CC660_Struct *D_801E4080;
typedef struct T_func_801CC9B0_ret_801CC9EC { /* size >= 0x50 */
    /* 0x000 */ u8 pad0[0x30];
    /* 0x030 */ u8 unk30; /* 6 uses */
    /* 0x031 */ u8 pad31[0x3];
    /* 0x034 */ u8 unk34; /* 7 uses */
    /* 0x035 */ u8 unk35; /* 7 uses */
    /* 0x036 */ u8 unk36; /* 7 uses */
    /* 0x037 */ u8 pad37[0x15];
    /* 0x04C */ u16 unk4C; /* 13 uses */
    /* 0x04E */ u16 unk4E; /* 4 uses */
} T_func_801CC9B0_ret_801CC9EC;
extern void func_800058DC(void *, void *);
extern void func_80006214(void *);
extern void func_80020718(s32);
extern s32 func_80126944(void);
extern void func_8013A334(s32 *, u8 *, s32, s32);
void func_801CC660(s32 arg0, s32 arg1);
extern void func_801CE330(void *, s32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32);


struct func_801CC260_StructV { u8 pad[4]; s32 x, y; f32 z; };
struct func_801CC260_StructN { u8 pad[0x2C]; struct func_801CC260_StructV *v; };
struct func_801CC260_StructB {
    u8 pad[0x24]; struct func_801CC260_StructN *n;
    u8 pad28[0x34]; s32 data;
};
struct func_801CC260_StructA { u8 pad[0xC]; struct func_801CC260_StructB *b; };
extern u16 D_801E0D7E;
extern void *D_801CE1C8(void *, s32, s32, s32, f32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, u16, f32, f32, f32, f32, s32);
extern f32 D_801E3388;
extern f32 D_801E338C;
extern f32 D_801E3390;
extern f32 D_801E3394;
extern f32 D_801E3398;
extern f32 D_801E339C;
extern f32 D_801E33A0;

void func_801CC260(struct func_801CC260_StructA *arg0, s32 arg1)
{
    struct func_801CC260_StructV *v;
    s32 data;
    f32 pos[3];
    u16 life;
    u16 r, g, b, r2, g2, b2;
    u16 r3, g3, b3, rate;
    f32 scale1, scale2;
    s32 pad;
#define l r
#define cr g
#define cg b
#define cb r2
#define crate g2

    v = arg0->b->n->v;
    data = arg0->b->data;
    if (D_801E4080->unk4C >= 2) {
        D_801E4080->unk4E = 0;
        life = D_801E0D7E + 60;
        switch (((T_func_801CC9B0_ret_801CC9EC *)D_801E4080)->unk30) {
        case 9: case 10: case 11: case 12:
            r2 = 255; r = 255; g2 = 160; g = 160; b2 = 0; b = 0;
            r3 = 255;
            goto bright_rest;
bright_rest:
            g3 = 224; b3 = 0;
            break;
        case 5: case 6: case 7: case 8:
            r2 = 255; r = 255; g2 = 128; g = 128; b2 = 0; b = 0;
            r3 = 255; g3 = 0; b3 = 0;
            life += 30;
            break;
        case 1: case 2: case 3: case 4:
        default:
            r2 = 80; r = 80; g2 = 255; g = 255; b2 = 255; b = 255;
            r3 = 0;
            goto default_rest;
default_rest:
            g3 = 160;
            goto default_last;
default_last:
            b3 = 255;
            break;
        }
        switch (((T_func_801CC9B0_ret_801CC9EC *)D_801E4080)->unk30) {
        case 1: case 5: case 9:
            rate = 5;
            break;
        case 2: case 6: case 10:
            rate = 10;
            break;
        case 3: case 7: case 11:
            rate = 20;
            break;
        case 4: case 8: case 12:
        default:
            b = 255; g = 255; r = 255;
            rate = 20;
            break;
        }
        if (func_80126944() == 0 && (D_801BCAE0 & 0x100)) {
            scale1 = D_801E3388;
            scale2 = D_801E338C;
        } else {
            scale2 = D_801E3390;
            scale1 = D_801E3394;
        }
        D_801CE1C8(arg0, 1, v->x, v->y, v->z,
            r, g, b, 255, r2, g2, b2,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 1, life,
            D_801E3398, scale1, scale2, 0.0f, 12);
        func_80020718(0x10D);
        func_80006214(arg0->b);
        func_8013A334((s32 *)pos, D_8008DA88, data, 27);
        D_80006214(arg0);
        l = life;
        cr = (u8)r3;
        cg = (u8)g3;
        cb = (u8)b3;
        crate = (u8)rate;
        func_801CE330(arg0, 2, pos[0], pos[1], pos[2],
            255, 255, 255, 255, cr, cg, cb, 0, crate,
            l - 20, D_801E339C, 9);
        func_801CE330(arg0, 3, pos[0], pos[1] + 2.0, pos[2],
            255, 255, 255, 255, cr, cg, cb, 0, crate,
            l - 10, D_801E33A0, 8);
        func_800058DC(arg0, func_801CC660);
    }
}
