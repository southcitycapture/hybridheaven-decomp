#include "context.h"

struct func_802429D8_StructInner {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad1[0x4];
    f32 unkC;
};

struct func_802429D8_StructNode {
    u8 pad0[0x2C];
    struct func_802429D8_StructInner *unk2C;
};

struct func_802429D8_StructArg {
    u8 pad0[0x90];
    u16 unk90;
};

extern f32 D_80258600;
extern u8 func_80242A54[];

s32 func_800178E8();                                /* extern */
void func_800058DC(void *, void *);                 /* extern */

void func_802429D8(struct func_802429D8_StructArg *arg0, s32 arg1) {
    if (arg0->unk90 == 0) {
        ((struct func_802429D8_StructNode *) *(struct func_802429D8_StructNode **)((u8 *) &D_801BBBF0 + 0xE0))->unk2C->unk4 = -61.0f;
        ((struct func_802429D8_StructNode *) *(struct func_802429D8_StructNode **)((u8 *) &D_801BBBF0 + 0xE0))->unk2C->unkC = D_80258600;
        arg0->unk90 = 1;
    }
    if (func_800178E8() != 0) {
        func_800058DC(arg0, func_80242A54);
    }
}
