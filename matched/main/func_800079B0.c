#include "context.h"

extern u8 D_700000[];
extern u8 D_CE9C0[];

#define CMD(a, b) { func_80007750_Gfx *_g = ((func_80007750_Gfx *)D_8008D5BC)++; _g->w0 = (a); _g->w1 = (u32)(b); }

void func_800079B0(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
    CMD(0xE7000000, 0);
    CMD(0xE3000A01, 0x00300000);
    if (func_80001060(arg0, arg1, arg2, arg3) != 0) {
        CMD(0xED000000, 0x00A00780);
        CMD(0xFF10027F, D_700000);
        CMD(0xFE000000, D_700000);
        CMD(0xF7000000, 0xFFFCFFFC);
        CMD(0xF69FC77C, 0);
    } else {
        CMD(0xED000000, 0x005003C0);
        CMD(0xFF10013F, D_CE9C0);
        CMD(0xFE000000, D_CE9C0);
        CMD(0xF7000000, 0xFFFCFFFC);
        CMD(0xF64FC3BC, 0);
    }
    CMD(0xE7000000, 0);
}
