#include "context.h"

typedef struct func_801E5078_StructValue {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801E5078_StructValue;

typedef struct func_801E5078_StructNode {
    u8 pad[0x30];
    func_801E5078_StructValue *unk30;
} func_801E5078_StructNode;

typedef struct func_801E5078_StructRoot {
    u8 pad[0x20];
    func_801E5078_StructNode *unk20;
    func_801E5078_StructNode *unk24;
    func_801E5078_StructNode *unk28;
    func_801E5078_StructNode *unk2C;
} func_801E5078_StructRoot;

extern u8 *D_8038D8D0;
extern f32 D_801EB35C;

#define ROOT ((func_801E5078_StructRoot *)(D_8038D8D0 + offset * 4))

s32 func_801E5078(s32 arg0, s32 arg1) {
    f32 value;
    s32 offset;

    value = D_801EB35C;
    for (offset = 0; offset < 12; offset++) {
        ROOT->unk20->unk30->unk4 = 0.0f;
        ROOT->unk20->unk30->unk8 = value;
        value += 195.0f;
        ROOT->unk20->unk30->unkC = 0.0f;
        ROOT->unk20->unk30->unk12 = 0;
    }
    return 2;
}
