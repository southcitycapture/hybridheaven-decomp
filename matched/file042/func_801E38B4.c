#include "context.h"

extern func_801E3474_Struct0 *D_801DAB14;

typedef struct func_801E38B4_Struct8 {
    u8 pad0[0x8];
    func_801E3474_Struct8 *unk8;
} func_801E38B4_Struct8;

s32 func_801E38B4(s32 arg0, s32 arg1) {
    func_801E3474_Struct24 *temp_v0;

    temp_v0 = ((func_801E38B4_Struct8 *) D_801DAB14->unk8)->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = -2.0f;
        ((func_801E38B4_Struct8 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unk8 = -32.0f;
        ((func_801E38B4_Struct8 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unkC = -201.0f;
        ((func_801E38B4_Struct8 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC470(1, 0x02A80036, 0, 0, 3.5f);
        return 2;
    }
    return 1;
}
