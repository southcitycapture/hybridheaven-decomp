#include "context.h"
void func_80242220(s32 arg0, s32 arg1);

typedef struct func_8024217C_Leaf {
    u8 pad0[0x8];
    f32 unk8;
} func_8024217C_Leaf;

typedef struct func_8024217C_Mid {
    u8 pad0[0x30];
    func_8024217C_Leaf *unk30;
} func_8024217C_Mid;

typedef struct func_8024217C_Struct {
    u8 pad0[0x24];
    func_8024217C_Mid *unk24;
} func_8024217C_Struct;

extern f32 D_80252574;

void func_8024217C(func_8024217C_Struct *arg0, void *arg1) {
    f32 var_fv0;
    func_8024217C_Leaf *temp_v0;

    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk8 = temp_v0->unk8 + 1.0f;
    var_fv0 = arg0->unk24->unk30->unk8;
    if (var_fv0 > 210.0f) {
        func_80133980(0x1EE);
        var_fv0 = arg0->unk24->unk30->unk8;
    }
    if (!(var_fv0 < D_80252574)) {
        func_800058DC((s32) arg0, (void *) func_80242220);
    }
}
