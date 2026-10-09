#include "context.h"

struct func_80246830_StructInner {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad1[0x30 - 0x28];
    s32 unk30;
    u8 pad2[0x4B - 0x34];
    u8 unk4B;
};

struct func_80246830_StructOuter {
    u8 pad0[0x30];
    struct func_80246830_StructInner *unk30;
};

struct func_80246830_StructArg0 {
    u8 pad0[0x3C];
    s16 unk3C;
};

struct func_80246830_StructCopy {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};

extern void func_800058DC(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
extern struct func_80246830_StructCopy D_80164F40;
extern s32 D_801BBCCC;
extern u8 D_80249B28[];
extern void func_80246914(void);

void func_80246830(struct func_80246830_StructArg0 *arg0, struct func_80246830_StructOuter **arg1) {
    struct func_80246830_StructCopy sp20;

    if (D_801BBCCC != 0) {
        sp20 = D_80164F40;
        sp20.unk4 = 0x80000C00;
        func_80005E44(arg0, &sp20);
        func_80006214(arg0);
        func_8012C89C(arg0, 0, 0x39F, 4);
        (*arg1)->unk30->unk24 = (*arg1)->unk30->unk24 | 0x100;
        (*arg1)->unk30->unk30 = (s32) D_80249B28 | 0x40000000;
        (*arg1)->unk30->unk4B = 0xFF;
        arg0->unk3C = 0;
        func_800058DC(arg0, func_80246914);
    }
}
