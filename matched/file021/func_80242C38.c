#include "context.h"

extern void func_80242CB8();
extern f32 D_80257090;

struct func_80242C38_Inner {
    u8 pad0[0x8];
    f32 unk8;
};

struct func_80242C38_Outer {
    u8 pad0[0x30];
    struct func_80242C38_Inner *unk30;
};

struct func_80242C38_Arg0 {
    u8 pad0[0x24];
    struct func_80242C38_Outer *unk24;
    u8 pad1[0x90 - 0x28];
    u16 unk90;
};

void func_80242C38(struct func_80242C38_Arg0 *arg0, s32 arg1) {
    struct func_80242C38_Inner *temp_v0;
    f32 k;

    func_80242810(arg0);
    k = D_80257090;
    temp_v0 = arg0->unk24->unk30;
    temp_v0->unk8 = temp_v0->unk8 - 1.0f;
    temp_v0 = arg0->unk24->unk30;
    if (!(k < temp_v0->unk8)) {
        temp_v0->unk8 = k;
        arg0->unk90 = 0x80;
        func_800058DC((s32)arg0, (void *)&func_80242CB8);
    }
}
