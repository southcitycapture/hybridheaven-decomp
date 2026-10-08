#include "common.h"

struct func_8037EB58_Struct {
    u8 pad[0xA8];
    u8 unkA8;
    u8 padA9[7];
    s16 unkB0;
};

extern s32 func_800058DC(void *, void *);
extern s32 func_80006214(void *);
extern s32 func_8037E438(void *, s32, s32, u8, s32, s8 *, s32);
extern s32 func_8037EBD0;

void func_8037EB58(struct func_8037EB58_Struct *arg0, s32 arg1) {
    s8 sp37;
    u8 temp_a3;

    sp37 = 0;
    if (arg0->unkB0++ >= 9) {
        temp_a3 = arg0->unkA8;
        func_8037E438(arg0, 0x32, 0x50, temp_a3, temp_a3, &sp37, 0);
        func_80006214(arg0);
        arg0->unkB0 = 0;
        func_800058DC(arg0, &func_8037EBD0);
    }
}
