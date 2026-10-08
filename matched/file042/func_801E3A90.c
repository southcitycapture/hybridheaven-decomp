#include "context.h"

extern func_801E3474_Struct0 *D_801DAB14;
extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f12);

s32 func_801E3A90(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x30D400) != 0) {
        ((func_801E3474_Struct0 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unk4 = -7.0f;
        ((func_801E3474_Struct0 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801E3474_Struct0 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unkC = 212.0f;
        ((func_801E3474_Struct0 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unk12 = 0x1638;
        func_801CC4D8(1, 0x02A80035, 0, 0, 5.0f);
        return 5;
    }
    return 4;
}
