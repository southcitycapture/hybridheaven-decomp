#include "common.h"
extern u8 *D_8038D8D0;


typedef struct func_801E5204_StructValue {
    u8 pad[8];
    f32 unk8;
} func_801E5204_StructValue;

typedef struct func_801E5204_StructNode {
    u8 pad[0x30];
    func_801E5204_StructValue *unk30;
} func_801E5204_StructNode;

typedef struct func_801E5204_StructRoot {
    u8 pad[0x20];
    func_801E5204_StructNode *unk20[12];
} func_801E5204_StructRoot;

extern f32 D_801EB360;

void func_801E5204(void) {
    s32 i;

    for (i = 0; i < 12; i++) {
        if ((s32)((func_801E5204_StructRoot *)D_8038D8D0)->unk20[i]->unk30->unk8 >= 0x492) {
            ((func_801E5204_StructRoot *)D_8038D8D0)->unk20[i]->unk30->unk8 = D_801EB360;
        }
        ((func_801E5204_StructRoot *)D_8038D8D0)->unk20[i]->unk30->unk8 += 1.0f;
    }
}
