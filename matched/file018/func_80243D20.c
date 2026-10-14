#include "context.h"

struct func_80243D20_Inner {
    u8 pad0[0x78];
    s16 unk78;
};
struct func_80243D20_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x5C - 0x30];
    struct func_80243D20_Inner *unk5C;
    u8 pad2[0x94 - 0x60];
    s16 unk94;
};
struct func_80243D20_Leaf {
    u8 pad0[0x4];
    s32 unk4;
    s32 unk8;
    s32 unkC;
};
struct func_80243D20_Mid {
    u8 pad0[0x2C];
    struct func_80243D20_Leaf *unk2C;
};
struct func_80243D20_Top {
    u8 pad0[0x24];
    struct func_80243D20_Mid *unk24;
};

extern s32 func_8012A988(void *, s32, s32, s32, s32);
extern void func_80243E0C();
extern struct func_80242C60_Cfg D_80258DA4;
extern struct func_80243D20_Top *D_8025C6F0;

void func_80243D20(struct func_80243D20_Struct *arg0, s32 arg1) {
    struct func_80243D20_Inner *sp2C;
    struct func_80243D20_Leaf *temp_v1;

    sp2C = arg0->unk5C;
    arg0->unk2C = arg0->unk2C | 0x80;
    if (func_80242620() == 0 && func_8012CE9C(arg1, sp2C, D_80258DA4, 0xA) == 0) {
        func_80010550(arg1, sp2C);
        temp_v1 = D_8025C6F0->unk24->unk2C;
        if (func_8012A988(arg0, temp_v1->unk4, temp_v1->unkC, 0x30, 0x1000) == 0) {
            arg0->unk94 = (s16) (func_8012C6B4(0x40) + 0x80);
            sp2C->unk78 = 1;
            func_800058DC(arg0, func_80243E0C);
        }
    }
}
