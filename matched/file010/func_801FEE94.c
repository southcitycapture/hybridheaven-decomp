#include "context.h"

extern void func_800058DC(void *, void *);
extern void func_801FEC58();
extern s32 func_801FEF20;

typedef struct func_801FEE94_Struct {
    u8 pad0[0x94];
    s16 unk94;
    u8 unk96;
    u8 unk97;
    u8 unk98;
    u8 pad99[0xA4 - 0x99];
    s16 unkA4;
    s16 unkA6;
    u8 padA8[0xB0 - 0xA8];
    s16 unkB0;
} func_801FEE94_Struct;

void func_801FEE94(func_801FEE94_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk98;
    arg0->unk98 = temp_v0 - 1;
    if (temp_v0 == 0) {
        if (arg0->unk96 == 0) {
            arg0->unkA4 = 0x78;
            arg0->unkA6 = 0x64;
        } else {
            arg0->unkA4 = 0xC8;
            arg0->unkA6 = 0x64;
        }
        func_801FEC58(arg0, arg0->unk94, arg0->unkA4, arg0->unkA6, arg0->unk97);
        arg0->unkB0 = -0x14;
        func_800058DC(arg0, &func_801FEF20);
    }
}
