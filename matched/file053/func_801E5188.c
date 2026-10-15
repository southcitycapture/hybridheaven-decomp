#include "context.h"


extern struct func_801E5188_Struct0 *D_801DAB14;
extern f32 D_801E9978;
extern f32 D_801E997C;

s32 func_801E5188(s32 arg0, s32 arg1) {
    struct func_801E5188_Struct3 *temp_v0;

    temp_v0 = D_801DAB14->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801E9978;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        D_801DAB14->unk8->unk8->unk24->unk2C->unkC = D_801E997C;
        D_801DAB14->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(1, 0x04100022, 0, 1, 1.0f);
        return 2;
    }
    return 1;
}
