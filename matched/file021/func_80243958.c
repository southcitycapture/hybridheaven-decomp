#include "context.h"
struct func_80243990_StructLeaf {
    u8 pad0[0x8];
    f32 unk8;
};
struct func_80243990_StructMid {
    u8 pad0[0x30];
    struct func_80243990_StructLeaf *unk30;
};
struct func_80243990_StructArg0 {
    u8 pad0[0x24];
    struct func_80243990_StructMid *unk24;
};
void func_80243990(struct func_80243990_StructArg0 *arg0, s32 arg1);

struct func_80243958_Struct {
    u8 pad[0x90];
    u16 unk90;
};

void func_80243958(struct func_80243958_Struct *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->unk90;
    arg0->unk90 = temp_v0 - 1;
    if (temp_v0 == 0) {
        func_800058DC((s32) arg0, func_80243990);
    }
}
