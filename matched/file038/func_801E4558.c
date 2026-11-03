#include "common.h"
struct func_801E3750_Struct8 {
    u8 pad[8];
    f32 unk8;
};
struct func_801E3750_Struct4 {
    u8 pad[0x30];
    struct func_801E3750_Struct8 *unk30;
};
struct func_801E3750_Struct0 {
    u8 pad[4];
    struct func_801E3750_Struct4 *unk4;
};
extern struct func_801E3750_Struct0 *D_8038D8D0;


extern f32 D_801E7298;

typedef struct func_801E4558_Obj {
    u8 pad0[8];
    f32 unk8;
} func_801E4558_Obj;

typedef struct func_801E4558_Mid {
    u8 pad0[0x30];
    func_801E4558_Obj *unk30;
} func_801E4558_Mid;

typedef struct func_801E4558_Base {
    u8 pad0[0x10];
    func_801E4558_Mid *unkC[12];
} func_801E4558_Base;

void func_801E4558(void) {
    s32 i;

    for (i = 0; i != 0xC; i += 2) {
        if ((s32)(*(func_801E4558_Base **)&D_8038D8D0)->unkC[i]->unk30->unk8 < -0x491) {
            (*(func_801E4558_Base **)&D_8038D8D0)->unkC[i]->unk30->unk8 = 1170.0f;
        }
        (*(func_801E4558_Base **)&D_8038D8D0)->unkC[i]->unk30->unk8 =
            (*(func_801E4558_Base **)&D_8038D8D0)->unkC[i]->unk30->unk8 - 1.0f;

        if ((s32)(*(func_801E4558_Base **)&D_8038D8D0)->unkC[i + 1]->unk30->unk8 < -0x491) {
            (*(func_801E4558_Base **)&D_8038D8D0)->unkC[i + 1]->unk30->unk8 = 1170.0f;
        }
        (*(func_801E4558_Base **)&D_8038D8D0)->unkC[i + 1]->unk30->unk8 =
            (*(func_801E4558_Base **)&D_8038D8D0)->unkC[i + 1]->unk30->unk8 - 1.0f;
    }
}
