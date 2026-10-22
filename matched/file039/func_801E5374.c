#include "context.h"

typedef struct func_801E5374_Struct {
    u8 pad[0x20];
    func_801E5078_StructNode *unk20[12];
} func_801E5374_Struct;

extern f32 D_801EB364;

s32 func_801E5374(s32 arg0, s32 arg1) {
    s32 i;
    f32 f;

    if (func_801C0B8C(0xB8A19F) != 0) {
        f = D_801EB364;
        for (i = 0; i < 12; i++) {
            ((func_801E5374_Struct *)D_8038D8D0)->unk20[i]->unk30->unk4 = 0.0f;
            ((func_801E5374_Struct *)D_8038D8D0)->unk20[i]->unk30->unk8 = f;
            f += 195.0f;
            ((func_801E5374_Struct *)D_8038D8D0)->unk20[i]->unk30->unkC = 0.0f;
            ((func_801E5374_Struct *)D_8038D8D0)->unk20[i]->unk30->unk12 = 0;
        }
        return 7;
    }
    func_801E5204();
    return 6;
}
