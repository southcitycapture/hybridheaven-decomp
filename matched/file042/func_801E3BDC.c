#include "context.h"

extern f32 D_801E5088;
extern func_801E3474_Struct0 *D_801DAB14;

typedef struct func_801E3BDC_Struct8 {
    u8 pad0[0x8];
    func_801E3474_Struct8 *unk8;
} func_801E3BDC_Struct8;

s32 func_801E3BDC(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x4F587F) != 0) {
        ((func_801E3BDC_Struct8 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unk4 = D_801E5088;
        ((func_801E3BDC_Struct8 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unk8 = 0.0f;
        ((func_801E3BDC_Struct8 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unkC = 10.0f;
        ((func_801E3BDC_Struct8 *) D_801DAB14->unk8)->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC4D8(1, 0x01680040, 0, 0, 5.0f);
        return 8;
    }
    return 7;
}
