#include "context.h"

typedef struct func_8000242C_Struct {
    u8 pad0[2];
    u16 unk2;
    u16 unk4;
    u8 pad6[4];
    u16 unkA;
    u16 unkC;
    u16 unkE;
    u32 unk10;
    u32 unk14;
    u16 unk18;
    u16 unk1A;
    u8 unk1C;
} func_8000242C_Struct;

void func_8000242C(func_8000242C_Struct *arg0) {
    u16 var_v0;
    u32 temp_v1;

    if (arg0->unk1C == 1) {
        var_v0 = arg0->unk1A;
    } else {
        var_v0 = arg0->unk18;
    }
    temp_v1 = ((arg0->unkA << 0x10) | arg0->unk2) & arg0->unk10;
    if (arg0->unk14 & temp_v1) {
        arg0->unkE = (u16) (arg0->unkE + 1);
    } else {
        arg0->unk1C = 0U;
        arg0->unkE = 0U;
    }
    if ((s32) var_v0 < (s32) arg0->unkE) {
        arg0->unk1C = 1U;
        arg0->unk4 |= (u16) (temp_v1 & 0xFFFF);
        arg0->unkC |= (temp_v1 >> 0x10) & 0xFFFF;
        arg0->unkE = 0U;
    }
    arg0->unk14 = temp_v1;
}
