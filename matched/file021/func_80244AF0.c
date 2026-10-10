#include "context.h"

/* Declarations as they appear in context.h (used before this function's position in the file). */
extern void func_8001F74C();
extern void func_80005F6C(void *, void *);
extern void func_80006214(void *);
extern void func_800062F8(void *, u32);
extern void func_8012636C(void *, s32);
void func_8012C89C(void *, s32, s32, s32);
extern void func_800058DC(s32, void *);
extern u8 D_80164F40[];
extern u8 D_8017AF38[];
struct func_80244C14_Mid;
void func_80244C14(s32 arg0, struct func_80244C14_Mid **arg1);

typedef struct func_80244AF0_Struct_Inner {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[0x8];
    void *unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80244AF0_Struct_Inner;

typedef struct func_80244AF0_Struct_Outer {
    u8 pad0[0x30];
    func_80244AF0_Struct_Inner *unk30;
} func_80244AF0_Struct_Outer;

void func_80244AF0(s32 arg0, func_80244AF0_Struct_Outer **arg1) {
    f32 temp_fv0;
    func_80244AF0_Struct_Inner *temp_v0;

    func_8001F74C();
    func_80005F6C((void *) arg0, D_80164F40);
    func_80006214((void *) arg0);
    func_8012636C((void *) arg0, 0);
    func_800062F8(*arg1, 0x80000C00);
    (*arg1)->unk30->unk30 = D_8017AF38;
    (*arg1)->unk30->unk24 = 0x400;
    (*arg1)->unk30->unk4C = ((u8 *) &D_801BBBF0)[0xF32];
    (*arg1)->unk30->unk4D = ((u8 *) &D_801BBBF0)[0xF33];
    (*arg1)->unk30->unk4E = ((u8 *) &D_801BBBF0)[0xF34];
    (*arg1)->unk30->unk4F = ((u8 *) &D_801BBBF0)[0xF35];
    func_8012C89C((void *) arg0, 0, 0x508, 5);
    (*arg1)->unk30->unk20 = 1.0f;
    temp_v0 = (*arg1)->unk30;
    temp_fv0 = temp_v0->unk20;
    temp_v0->unk1C = temp_fv0;
    (*arg1)->unk30->unk18 = temp_fv0;
    func_800058DC(arg0, (void *) func_80244C14);
}
