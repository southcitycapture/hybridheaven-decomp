#include "common.h"
extern s32 D_801DA50C;
void func_801C61C4(s32 arg0, void **arg1);


extern void func_800058DC(s32, void *, void *);
extern s32 func_80001060();
extern void *func_8001F290(s32);

typedef struct func_801C5BE4_Gfx {
    u32 w0;
    u32 w1;
} func_801C5BE4_Gfx;

extern func_801C5BE4_Gfx *D_801DA510;
extern u8 D_80400000[];
extern u8 D_8038F800[];

#define G(c0, c1) { func_801C5BE4_Gfx *_g = D_801DA510++; _g->w0 = (c0); _g->w1 = (c1); }

void func_801C5BE4(s32 arg0, s32 arg1) {
    u8 *imgs[42];
    s32 i;
#define img imgs[1]

    if (func_80001060() != 0) {
        D_801DA50C = (s32)(D_801DA510 = func_8001F290(0x3360));
    } else {
        D_801DA50C = (s32)(D_801DA510 = func_8001F290(0xCD8));
    }
    G(0xE7000000, 0);
    G(0xE3000A01, 0);
    G(0xE3000C00, 0x80000);
    G(0xD9D0F9FA, 0);
    G(0xD9FFFFFF, 0x220004);
    if (func_80001060() != 0) {
        G(0xED000000, 0x9FC77C);
    } else {
        G(0xED000000, 0x4FC3BC);
    }
    G(0xE200001C, 0x504340);
    G(0xFCFFFFFF, 0xFFFCF67B);
    G(0xD7000002, 0xFFFFFFFF);
    G(0xE3000F00, 0);
    G(0xE2001E01, 0);
    G(0xF9000000, 1);
    G(0xE3001201, 0x2000);
    G(0xE3001001, 0);
    G(0xE3000C00, 0);
    if (func_80001060() != 0) {
        for (i = 0, img = D_80400000; i < 153; i++) {
            G(0xFD100000, (u32)(img + (i * 3) * 1280 + 0x200000));
            G(0xF5100000, 0x070982A0);
            G(0xE6000000, 0);
            G(0xF3000000, 0x0777F00D);
            G(0xE7000000, 0);
            G(0xF5114000, 0x982A0);
            G(0xF2000000, 0x9FC008);
            G(0xE4A00000 | ((((i + 1) * 3) << 2) & 0xFFF), ((i * 3) << 2) & 0xFFF);
            G(0xE1000000, 0);
            G(0xF1000000, 0x04000400);
        }
    } else {
        for (i = 0, img = D_8038F800; i < 39; i++) {
            G(0xFD100000, (u32)(img + (i * 6) * 640 + 0x4B000));
            G(0xF5100000, 0x07098290);
            G(0xE6000000, 0);
            G(0xF3000000, 0x0777F01A);
            G(0xE7000000, 0);
            G(0xF510A000, 0x98290);
            G(0xF2000000, 0x4FC014);
            G(0xE4500000 | ((((i + 1) * 6) << 2) & 0xFFF), ((i * 6) << 2) & 0xFFF);
            G(0xE1000000, 0);
            G(0xF1000000, 0x04000400);
        }
    }
    G(0xD7000000, 0x80008000);
    G(0xDF000000, 0);
    func_800058DC(arg0, func_801C61C4, &D_801DA510);
}
