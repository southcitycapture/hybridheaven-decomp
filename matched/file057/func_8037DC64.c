#include "context.h"

extern u8 D_801BCC20;
extern void func_8037E1C4();

struct func_8037DC64_Struct {
    u8 pad[0x97];
    u8 unk97;
    u8 pad98[0xA4 - 0x98];
    u8 unkA4;
    u8 padA5[0xB0 - 0xA5];
    s16 unkB0;
};

struct func_8037DC64_Tbl {
    u8 pad[0x376];
    u8 unk376;
};

void func_8037DC64(struct func_8037DC64_Struct *arg0, s32 arg1) {
    struct func_8037DC64_Tbl *p;

    if (D_801BCC20 == 0) {
        p = (struct func_8037DC64_Tbl *)D_801BC03C;
    } else {
        p = (struct func_8037DC64_Tbl *)D_801BC3D8;
    }
    if (arg0->unkB0-- < 0) {
        if (arg0->unk97 == (u8)p->unk376) {
            arg0->unkB0 = arg0->unkA4 = 0x14;
        } else {
            arg0->unkB0 = arg0->unkA4 = 0x10;
        }
        func_800058DC(arg0, func_8037E1C4);
    }
}
