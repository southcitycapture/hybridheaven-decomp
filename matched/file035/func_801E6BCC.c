#include "context.h"
typedef struct func_801E6BCC_Struct {
    u8 pad0[8];
    struct func_801E6BCC_Struct *unk8;
    u8 pad1[0x18];
    struct func_801E6BCC_Struct *unk24;
    u8 pad2[4];
    func_801E64F4_Struct5 *unk2C;
} func_801E6BCC_Struct;
extern f32 D_801E8D40;
extern f32 D_801E8D44;
#define P (*(func_801E6BCC_Struct **)&D_801DAB14)
s32 func_801E6BCC(s32 arg0, s32 arg1) {
    if (D_801E8718 == 0) goto c0;
    if (D_801E8718 != 1) return 3;
    goto c1;
c0:
    if (func_801C0B8C(0x025C3F7E) != 0) {
        P->unk8->unk8->unk8->unk24->unk2C->unk4 = D_801E8D40;
        P->unk8->unk8->unk8->unk24->unk2C->unk8 = 0.0f;
        P->unk8->unk8->unk8->unk24->unk2C->unkC = D_801E8D44;
        P->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1800;
        func_801CC4D8(2, 0x03480042, 0, 0, 5.0f);
        D_801E8718 = 1;
    }
    goto r3;
c1:
    if (func_801CEDD4() == 0) {
        func_801CC470(2, 0x02A80060, 0, 0, 1.5f);
        return 4;
    }
r3:
    return 3;
}
