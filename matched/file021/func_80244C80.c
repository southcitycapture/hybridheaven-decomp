#include "context.h"
typedef struct func_80244DA0_Inner {
    u8 pad0[0x14];
    u32 unk14;
} func_80244DA0_Inner;
typedef struct func_80244DA0_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x8];
    func_80244DA0_Inner *unk38;
    u8 pad2[0x8];
    f32 unk44;
    u8 pad3[0x48];
    u16 unk90;
} func_80244DA0_Struct;
void func_80244DA0(func_80244DA0_Struct *arg0, s32 arg1);
extern void func_8012C784(void *, s32, u32);

typedef struct func_80244C80_Sub38 {
    u8 pad0[0x10];
    u32 unk10;
} func_80244C80_Sub38;

typedef struct func_80244C80_Arg0 {
    u8 pad0[0x38];
    func_80244C80_Sub38 *unk38;
} func_80244C80_Arg0;

void func_80244C80(func_80244C80_Arg0 *arg0, func_80244AF0_Struct_Outer **arg1) {
    f32 temp_fv0;
    func_80244AF0_Struct_Inner *temp_v0;

    func_80005F6C(arg0, D_80164F40);
    func_80006214(arg0);
    func_8012636C(arg0, 0);
    func_800062F8(*arg1, 0x80000C00);
    (*arg1)->unk30->unk30 = D_8017AF38;
    (*arg1)->unk30->unk24 = 0x400;
    (*arg1)->unk30->unk4C = *((u8 *)&D_801BBBF0 + 0xF32);
    (*arg1)->unk30->unk4D = *((u8 *)&D_801BBBF0 + 0xF33);
    (*arg1)->unk30->unk4E = *((u8 *)&D_801BBBF0 + 0xF34);
    (*arg1)->unk30->unk4F = *((u8 *)&D_801BBBF0 + 0xF35);
    func_8012C784(arg0, 0, arg0->unk38->unk10 >> 24);
    (*arg1)->unk30->unk20 = 1.0f;
    temp_v0 = (*arg1)->unk30;
    temp_fv0 = temp_v0->unk20;
    temp_v0->unk1C = temp_fv0;
    (*arg1)->unk30->unk18 = temp_fv0;
    func_800058DC((s32) arg0, &func_80244DA0);
}
