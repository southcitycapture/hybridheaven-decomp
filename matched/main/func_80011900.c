#include "context.h"

struct func_80011900_Inner {
    u8 pad[0x34];
    f32 unk34;
    f32 unk38;
};

struct func_80011900_Struct {
    u8 pad[0x22];
    u8 unk22;
    u8 pad2[0x30 - 0x23];
    struct func_80011900_Inner *unk30;
};

extern void func_800317D0(s32, void *, s32, void *);

void func_80011900(struct func_80011900_Struct *arg0, s32 arg1) {
    arg0->unk22 = 1;
    func_800317D0(arg1, arg0->unk30, 0x3C, arg0);
    arg0->unk30->unk34 = 1.0f;
    arg0->unk30->unk38 = 1.0f;
}
