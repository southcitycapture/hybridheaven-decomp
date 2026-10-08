#include "context.h"

typedef struct func_80245680_StructB {
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
} func_80245680_StructB;

typedef struct func_80245680_StructA {
    u8 pad0[0x30];
    func_80245680_StructB *unk30;
} func_80245680_StructA;

typedef struct func_80245680_Struct38 {
    u8 pad0[0x10];
    u32 unk10;
} func_80245680_Struct38;

typedef struct func_80245680_Arg0 {
    u8 pad0[0x38];
    func_80245680_Struct38 *unk38;
} func_80245680_Arg0;

extern void func_8001F74C(void);
extern void func_80005F6C(void *, void *);
extern void func_80006214(void *);
extern void func_8012636C(void *, s32);
extern void func_800062F8(void *, u32);
extern void func_8012C784(void *, s32, u32);
extern u8 D_80164F40[];
extern u8 D_8017AF38[];
extern void func_802457A8(void);

void func_80245680(func_80245680_Arg0 *arg0, func_80245680_StructA **arg1) {
    f32 temp_fv0;
    func_80245680_StructB *temp_v0;

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
    func_800058DC((s32) arg0, func_802457A8);
}
