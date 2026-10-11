#include "context.h"

struct func_80376A80_Inner {
    u8 pad0[0x10];
    s32 unk10;
};

struct func_80376A80_Sub {
    u8 pad0[0x78];
    s16 unk78;
};

struct func_80376A80_Struct {
    u8 pad0[0x38];
    struct func_80376A80_Inner *unk38;
    u8 pad3C[0x20];
    struct func_80376A80_Sub *unk5C;
};

extern s32 func_803757E0(void *, s32, s32, s32);
extern void func_803762E0(void);

void func_80376A80(struct func_80376A80_Struct *arg0, s32 arg1) {
    struct func_80376A80_Sub *sp1C;

    sp1C = arg0->unk5C;
    if (func_803757E0(arg0, arg1, 0, ((u32) arg0->unk38->unk10 >> 8) & 0xFF) == 0) {
        sp1C->unk78 = 1;
        func_800058DC(arg0, &func_803762E0);
    }
}
