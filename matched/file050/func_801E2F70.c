#include "context.h"

typedef struct {
    u8 pad0[0x10];
    s16 unk10;
    s16 unk12;
    s16 unk14;
    u8 pad16[2];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801E2F70_Struct2;

typedef struct {
    u8 pad0[0x30];
    func_801E2F70_Struct2 *unk30;
} func_801E2F70_Struct1;

typedef struct {
    u8 pad0[0x20];
    func_801E2F70_Struct1 *unk20[14];
} func_801E2F70_Struct0;

extern void func_801E2D40();

s32 func_801E2F70(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < 6; i++) {
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk10 = 0;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk12 = 0;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk14 = 0;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk18 = 1.0f;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk1C = 1.0f;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk20 = 1.0f;
    }
    for (i = 6; i < 14; i++) {
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk10 = 0;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk12 = 0;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk14 = 0x1800;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk18 = 0.5f;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk1C = 0.5f;
        ((func_801E2F70_Struct0 *)D_8038D8D0)->unk20[i]->unk30->unk20 = 1.0f;
    }
    func_801E2D40();
    return 2;
}
