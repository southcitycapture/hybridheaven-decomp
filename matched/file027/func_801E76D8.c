#include "context.h"

typedef struct func_801E76D8_Struct {
    u8 pad0[8];
    struct func_801E76D8_Struct *unk8;
    u8 pad1[0x18];
    func_801E5084_StructC *unk24;
} func_801E76D8_Struct;

s32 func_801E76D8(s32 arg0, s32 arg1) {
    func_801E5084_StructC *temp_v1;

    temp_v1 = ((func_801E76D8_Struct *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24;
    if (temp_v1 != NULL) {
        temp_v1->unk2C->unk4 = 5120.0f;
        ((func_801E76D8_Struct *)D_801DAB14)->unk8->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        return 2;
    }
    return 1;
}
