#include "context.h"

typedef struct func_80005B98_Struct {
    u8 pad[0x10];
    s32 unk10;
    s32 unk14;
    s32 unk18;
    s32 unk1C;
    s32 unk20;
    s32 unk24;
    u16 unk28;
} func_80005B98_Struct;

extern void func_800279F0(void *, s32);

void func_80005B98(func_80005B98_Struct *arg0, s32 *arg1) {
    func_80005B98_Struct *temp_a0;

    temp_a0 = (func_80005B98_Struct *) ((u8 *) arg0 + 0x2C);
    arg0->unk10 = arg1[0];
    arg0->unk14 = arg1[1];
    arg0->unk1C = arg1[3];
    arg0->unk18 = arg1[2];
    arg0->unk20 = arg1[4];
    arg0->unk24 = 0;
    func_800279F0(temp_a0, 0x88);
    arg0->unk28 = 0;
}
