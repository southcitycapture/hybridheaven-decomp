#include "context.h"

extern f64 D_80257118;
struct func_802449E0_Arg0;
void func_802449E0(struct func_802449E0_Arg0 *arg0, s32 arg1);

struct func_8024495C_Struct2 {
    u8 pad[8];
    f32 unk8;
};
struct func_8024495C_Struct1 {
    u8 pad[0x30];
    struct func_8024495C_Struct2 *unk30;
};
struct func_8024495C_Struct0 {
    u8 pad[0x24];
    struct func_8024495C_Struct1 *unk24;
    u8 pad2[0x9C - 0x28];
    f32 unk9C;
};

void func_8024495C(struct func_8024495C_Struct0 *arg0, s32 arg1) {
    arg0->unk9C = (f32)((f64)arg0->unk9C + D_80257118);
    arg0->unk24->unk30->unk8 = arg0->unk24->unk30->unk8 - arg0->unk9C;
    if (!(arg0->unk24->unk30->unk8 > -35.0f)) {
        arg0->unk24->unk30->unk8 = -35.0f;
        func_800058DC((s32)arg0, (void *)func_802449E0);
    }
}
