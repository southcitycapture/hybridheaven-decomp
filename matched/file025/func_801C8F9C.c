#include "context.h"
extern func_801C7A74_Struct D_801E04C0;
void func_800058DC(s32 arg0, void (*arg1)(void));

struct func_801C8F9C_Inner {
    u8 pad0[0x8];
    f32 unk8;
    u8 pad1[0x4B - 0xC];
    u8 unk4B;
};

struct func_801C8F9C_Outer {
    u8 pad0[0x30];
    struct func_801C8F9C_Inner *unk30;
};

extern void func_801C8D28(void);

void func_801C8F9C(void *arg0, void **arg1) {
    struct func_801C8F9C_Inner *temp_v1;
    s32 temp_v0;

    temp_v1 = ((struct func_801C8F9C_Outer *) *arg1)->unk30;
    temp_v0 = temp_v1->unk4B;
    temp_v0 -= 8;
    if (temp_v0 < 0) {
        temp_v1->unk8 = ((f32 *) &D_801E04C0)[4] * ((f32 *) &D_801E04C0)[1];
        ((struct func_801C8F9C_Outer *) *arg1)->unk30->unk4B = 0x80;
        func_800058DC(arg0, func_801C8D28);
        return;
    }
    temp_v1->unk4B = temp_v0;
}
