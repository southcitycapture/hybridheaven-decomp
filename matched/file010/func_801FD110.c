#include "context.h"

struct func_801FD110_Inner {
    u8 pad0[0x30];
    s32 unk30;
};

struct func_801FD110_Struct {
    u8 pad0[0x24];
    struct func_801FD110_Inner *unk24;
};

extern void func_8013E5C4(s32, s32, s32, s32, s32);
extern void func_800058DC(void *, void *);
extern u8 func_80126EAC[];

void func_801FD110(struct func_801FD110_Struct *volatile arg0, s32 *arg1) {
    s32 temp_a0;
    s32 temp_v0;

    temp_a0 = *arg1;
    temp_v0 = arg0->unk24->unk30;
    func_8013E5C4(temp_a0, 0, temp_v0 + 4, temp_v0 + 8, temp_v0 + 0xC);
    func_800058DC(arg0, func_80126EAC);
}
