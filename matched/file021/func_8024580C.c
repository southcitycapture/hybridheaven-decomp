#include "context.h"
struct func_8024593C_Inner {
    u8 pad0[0x10];
    s16 unk10;
};
struct func_8024593C_Outer {
    u8 pad0[0x30];
    struct func_8024593C_Inner *unk30;
};
struct func_8024593C_Arg0 {
    u8 pad0[0x90];
    u16 unk90;
};
void func_8024593C(struct func_8024593C_Arg0 *arg0, struct func_8024593C_Outer **arg1);

typedef struct func_8024580C_StructB {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad1[0x8];
    void *unk30;
    u8 pad2[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_8024580C_StructB;

typedef struct func_8024580C_StructA {
    u8 pad0[0x30];
    func_8024580C_StructB *unk30;
} func_8024580C_StructA;

typedef struct func_8024580C_Struct38 {
    u8 pad0[0x10];
    u32 unk10;
} func_8024580C_Struct38;

typedef struct func_8024580C_Arg0 {
    u8 pad0[0x38];
    func_8024580C_Struct38 *unk38;
    u8 pad1[0x90 - 0x3C];
    u16 unk90;
} func_8024580C_Arg0;

void func_8024580C(func_8024580C_Arg0 *arg0, func_8024580C_StructA **arg1) {
    f32 temp_fv0;
    func_8024580C_StructB *temp_v0;

    func_8001F74C();
    func_80005F6C(arg0, D_80164F40);
    func_80006214(arg0);
    func_8012636C(arg0, 0);
    func_800062F8(*arg1, 0x80000C00);
    (*arg1)->unk30->unk30 = D_8017AF38;
    (*arg1)->unk30->unk24 = 0x400;
    (*arg1)->unk30->unk4C = D_801BBBF0.pad1[0xF32 - 0xF26];
    (*arg1)->unk30->unk4D = D_801BBBF0.pad1[0xF33 - 0xF26];
    (*arg1)->unk30->unk4E = D_801BBBF0.pad1[0xF34 - 0xF26];
    (*arg1)->unk30->unk4F = D_801BBBF0.pad1[0xF35 - 0xF26];
    func_8012C784(arg0, 0, arg0->unk38->unk10 >> 24);
    (*arg1)->unk30->unk20 = 1.0f;
    temp_v0 = (*arg1)->unk30;
    temp_fv0 = temp_v0->unk20;
    temp_v0->unk1C = temp_fv0;
    (*arg1)->unk30->unk18 = temp_fv0;
    arg0->unk90 = 5;
    func_800058DC((s32) arg0, &func_8024593C);
}
