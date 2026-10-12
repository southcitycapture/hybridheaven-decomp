#include "context.h"

extern void func_8013CD04(void *, u8, s32, void *);
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];

struct func_80239DFC_Inner {
    u8 pad[0x74];
    u8 unk74;
};

struct func_80239DFC_Struct {
    u8 pad0[0x90];
    struct func_80239DFC_Inner *unk90;
    u8 pad1[0x11];
    u8 unkA5;
    u8 pad2[0x6];
    u16 unkAC;
};

void func_80239DFC(struct func_80239DFC_Struct *arg0, s32 arg1) {
    u8 *var_a0;
    struct func_80239DFC_Inner *temp_v0;
    u8 temp_v1;

    temp_v0 = arg0->unk90;
    temp_v1 = temp_v0->unk74;
    var_a0 = ((temp_v1 == 0) || (temp_v1 == 2)) ? D_801BC03C : D_801BC3D8;
    if (arg0->unkAC >= 0x20) {
        var_a0[0x2D8] = 0xA;
        func_8013CD04(var_a0, arg0->unkA5, 0, arg0);
        func_800058DC(arg0, &func_8023A09C);
    }
}
