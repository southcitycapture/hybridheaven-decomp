#include "context.h"

typedef struct func_801C06C0_Struct {
    s32 unk0;
    s16 unk4;
    s32 unk8;
} func_801C06C0_Struct;

s32 func_801C06C0(s32 arg0, u8 *arg1) {
    s32 temp_v1;
    func_801C06C0_Struct sp20;
    u8 *temp_v0;

    temp_v1 = *(u16 *)(arg1 + 4);
    temp_v0 = (u8 *)D_801D8D04[arg0] + temp_v1 * 0x18;
    *(s32 *)(temp_v0 + 0xC) = *(s32 *)(temp_v0 + 0x10);
    sp20.unk0 = 0x80010000;
    sp20.unk4 = 0;
    sp20.unk8 = 0;
    func_801BF7A0(arg0, sp20);
    return 1;
}
