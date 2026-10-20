#include "context.h"

struct func_8037BA70_StructObj {
    u8 pad0[0x90];
    u8 unk90;
    u8 pad91[0xA4 - 0x91];
    void *unkA4;
};

extern void func_8037B9A4(void *, u8, s16, s16, s8 *);
extern void func_8037BB28(u8 *, u8 *);

void func_8037BA70(struct func_8037BA70_StructObj *arg0, s32 arg1) {
    s32 var_v0;
    s8 sp2B;
    s32 var_v1;

    sp2B = 0;
    if (D_801BBBF0[0x1030] == 0) {
        if ((*(u16 *)(D_801BBBF0 + 0x2C) == 0xA) ||
            (var_v1 = 0xB4, (*(u16 *)(D_801BBBF0 + 0x2C) == 0xB))) {
            var_v0 = 0x46;
            var_v1 = 0xA0;
        } else {
            var_v0 = 0x104;
        }
        arg0->unkA4 = D_801BC3D8;
    } else {
        var_v0 = 0xD6;
        var_v1 = 0x38;
        arg0->unkA4 = D_801BC03C;
    }
    func_8037B9A4(arg0, arg0->unk90, (s16)var_v0, (s16)var_v1, &sp2B);
    func_80006214(arg0);
    func_800058DC(arg0, func_8037BB28);
}
