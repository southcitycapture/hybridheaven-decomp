#include "context.h"

typedef struct func_80002364_Struct {
    u8 pad[0x1D2];
    s16 unk1D2;
    s32 unk1D4;
    s32 unk1D8;
    s16 unk1DC;
    s16 unk1DE;
    u8 unk1E0;
} func_80002364_Struct;

void func_80002364(s32 arg0, u16 arg1, u16 arg2, u8 arg3) {
    func_80002364_Struct *temp_v0;

    temp_v0 = (func_80002364_Struct *)(D_800692B0 + ((arg3 << 5) + 0x20000));
    temp_v0->unk1D8 = 0;
    temp_v0->unk1D4 = arg0;
    temp_v0->unk1DC = arg1;
    temp_v0->unk1DE = arg2;
    temp_v0->unk1D2 = 0;
    temp_v0->unk1E0 = 0;
}
