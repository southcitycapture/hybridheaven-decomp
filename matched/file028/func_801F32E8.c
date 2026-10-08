#include "context.h"

s32 func_801F32E8(s32 arg0, s32 arg1) {
    func_801E3D90_StructD *temp_v0;

    temp_v0 = ((func_801E3D90_StructC *)D_801DAB14->unk8)->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = 4.0f;
        ((func_801E3D90_StructC *)D_801DAB14->unk8)->unk24->unk2C->unk8 = 0.0f;
        ((func_801E3D90_StructC *)D_801DAB14->unk8)->unk24->unk2C->unkC = -34.0f;
        ((func_801E3D90_StructC *)D_801DAB14->unk8)->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(0, 0x03200029, 0, 1, 10.0f);
        return 3;
    }
    return 2;
}
