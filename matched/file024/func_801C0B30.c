#include "common.h"
typedef struct func_801C2DB8_V { s32 a, b, c, d; } func_801C2DB8_V;
extern func_801C2DB8_V D_80164F40;
extern u16 func_80001060();
extern void func_800058DC(s32, void *);
extern void func_80006214(void *);


typedef union func_801C0B30_StructGfx {
    struct { unsigned int w0, w1; } words;
    long long force_structure_alignment;
} func_801C0B30_StructGfx;
typedef struct func_801C0B30_StructInner {
    s16 unk0; u8 pad2[0x26]; func_801C0B30_StructGfx *unk28;
} func_801C0B30_StructInner;
typedef struct func_801C0B30_StructOuter {
    u8 pad[0x24]; u32 unk24; s16 unk28; u8 pad2A[6];
    func_801C0B30_StructInner *unk30;
} func_801C0B30_StructOuter;
extern void func_80116E80(s32);
extern void *func_8001F430(s32);
extern u32 func_8000522C(s32, s32);
extern s32 D_801CC858[][5];
extern s32 D_80005E44(s32, void *);
void func_801C0F64(s32 arg0, s32 arg1);

#define CMD(a,b) { func_801C0B30_StructGfx *g = p++; g->words.w0 = (a); g->words.w1 = (b); }
#define REV(a,b) CMD(a,b)
#define LTB(img) { CMD(0xFD100000, img); CMD(0xF5100000, 0x0709C260); CMD(0xE6000000, 0); CMD(0xF3000000, 0x077FF080); CMD(0xE7000000, 0); CMD(0xF5102000, 0x9C260); CMD(0xF2000000, 0xFC07C); }
#define TRECT(a,b) { CMD(a, b); CMD(0xE1000000, 0); CMD(0xF1000000, 0x04000400); }
void func_801C0B30(s32 arg0, func_801C0B30_StructOuter **arg1) {
    func_801C0B30_StructGfx *p;

    func_80116E80(0x80);
    if (D_80005E44(arg0, &D_80164F40) != 0) {
        s32 i;
        s32 j;

        func_80006214((void *)arg0);
        (*arg1)->unk28 = 0x80;
        p = func_8001F430(0x1000);
        (*arg1)->unk30->unk28 = p;
        (*arg1)->unk30->unk0 = 0;
        (*arg1)->unk24 = 0x80000600;
        func_800058DC(arg0, (void *)func_801C0F64);
        CMD(0xE7000000, 0);
        CMD(0xE3000A01, 0);
        REV(0xE3000C00, 0x80000);
        CMD(0xD9F1FBFF, 0);
        if (func_80001060()) {
            CMD(0xED000000, 0x9FC77C);
        } else {
            CMD(0xED000000, 0x4FC3BC);
        }
        CMD(0xE200001C, 0x0F0A4000);
        CMD(0xFCFFFFFF, 0xFFFCF67B);
        REV(0xD7000002, -1);
        CMD(0xE3000F00, 0);
        CMD(0xE2001E01, 0);
        CMD(0xF9000000, 1);
        REV(0xE3001201, 0x2000);
        CMD(0xE3001001, 0);
        CMD(0xE3000C00, 0);
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 3; j++) {
                LTB(func_8000522C(0x79, D_801CC858[j][i]));
                TRECT(0xE4000000 | (((((i + 1) * 64) << 2) & 0xFFF) << 12) | (((j * 32 + 0x58) << 2) & 0xFFF), ((((i * 64) << 2) & 0xFFF) << 12) | (((j * 32 + 0x38) << 2) & 0xFFF));
            }
        }
        CMD(0xD7000000, 0x80008000);
        CMD(0xDF000000, 0);
    }
}
