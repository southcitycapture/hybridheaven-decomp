#include "common.h"

struct func_80136E10_Struct3 {
    u8 pad0[0x10];
    u32 unk10;
};

struct func_80136E10_Struct0 {
    u8 pad0[0x38];
    struct func_80136E10_Struct3 *unk38;
};

struct func_80136E10_Struct2 {
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
};

struct func_80136E10_Struct1 {
    u8 pad0[0x30];
    struct func_80136E10_Struct2 *unk30;
};

extern s32 func_800058DC(void *, void *);
extern void func_80005F6C(void *, void *);
extern void func_80006214(void *);
extern void func_800062F8(void *, u32);
extern void func_8012636C(void *, s32);
extern void func_8012C784(void *, s32, u32);
extern u8 D_80164F40[];
extern u8 D_8017AF38[];
extern u8 D_801BBBF0[];
extern void func_80136F30(void);

void func_80136E10(struct func_80136E10_Struct0 *arg0, struct func_80136E10_Struct1 **arg1) {
    f32 temp_fv0;
    struct func_80136E10_Struct2 *temp_v0;

    func_80005F6C(arg0, D_80164F40);
    func_80006214(arg0);
    func_8012636C(arg0, 0);
    func_800062F8(*arg1, 0x80000C00);
    (*arg1)->unk30->unk30 = D_8017AF38;
    (*arg1)->unk30->unk24 = 0x400;
    (*arg1)->unk30->unk4C = D_801BBBF0[0xF32];
    (*arg1)->unk30->unk4D = D_801BBBF0[0xF33];
    (*arg1)->unk30->unk4E = D_801BBBF0[0xF34];
    (*arg1)->unk30->unk4F = D_801BBBF0[0xF35];
    func_8012C784(arg0, 0, arg0->unk38->unk10 >> 24);
    (*arg1)->unk30->unk20 = 1.0f;
    temp_v0 = (*arg1)->unk30;
    temp_fv0 = temp_v0->unk20;
    temp_v0->unk1C = temp_fv0;
    (*arg1)->unk30->unk18 = temp_fv0;
    func_800058DC(arg0, func_80136F30);
}
