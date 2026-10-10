#include "context.h"

extern f32 D_801EB3B4;
extern void func_801D3750(s32);

typedef struct func_801E63D8_Struct_Vals {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    u16 unk12;
} func_801E63D8_Struct_Vals;

typedef struct func_801E63D8_Struct_Node {
    u8 pad0[8];
    struct func_801E63D8_Struct_Node *unk8;
    u8 pad1[0x18];
    struct func_801E63D8_Struct_Node *unk24;
    u8 pad2[4];
    func_801E63D8_Struct_Vals *unk2C;
} func_801E63D8_Struct_Node;

s32 func_801E63D8(s32 arg0, s32 arg1) {
    func_801E63D8_Struct_Node *temp_v0;

    temp_v0 = ((func_801E63D8_Struct_Node *)D_801DAB14)->unk8->unk8->unk8->unk24;
    if (temp_v0 != NULL) {
        temp_v0->unk2C->unk4 = D_801EB3B4;
        ((func_801E63D8_Struct_Node *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk8 = 12.0f;
        ((func_801E63D8_Struct_Node *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unkC = 5120.0f;
        ((func_801E63D8_Struct_Node *)D_801DAB14)->unk8->unk8->unk8->unk24->unk2C->unk12 = 0x1000;
        func_801CC470(2, 0x03200053, 0, 0x100, 15.0f);
        func_801D3750(1);
        return 2;
    }
    return 1;
}
