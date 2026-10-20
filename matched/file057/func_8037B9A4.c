#include "context.h"

void func_8037B9A4(void *arg0, u8 arg1, s16 arg2, s16 arg3, s32 arg4)
{
    struct func_8037B5A0_Struct3 data;

    data.unk0 = arg2;
    data.unk2 = arg3;
    data.unk30 = data.unk4 = data.unk28 = 0x20;
    data.unk32 = data.unk6 = data.unk2A = 0x10;
    data.unkB = 0x80;
    data.unk10 = 4;
    data.unk18 = *D_80172574->unk0;
    data.unk1C = ((s32 *)D_80172574->unk4)[(u16)(arg1 + 7)];
    data.unk2E = 0;
    data.unk2C = 0;
    D_80181A84.unkC = &data.unk0;
    func_80146088(arg0, &D_80181A84, arg4);
}
