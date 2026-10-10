#include "context.h"

typedef struct func_80242034_Inner {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad1[0x30 - 0x28];
    void *unk30;
    u8 pad2[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_80242034_Inner;

typedef struct func_80242034_Outer {
    u8 pad0[0x30];
    func_80242034_Inner *unk30;
} func_80242034_Outer;

extern void func_80005F6C(s32 arg0, void *arg1);
extern void func_80006214(s32 arg0);
extern void func_800062F8(void *arg0, s32 arg1);
extern void func_8012C89C(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_80242140(void);
extern u8 D_80164F40[];
extern u8 D_8017AF38[];

void func_80242034(s32 arg0, void **arg1) {
    f32 temp_fv0;
    func_80242034_Inner *temp_v0;

    func_80005F6C(arg0, D_80164F40);
    func_80006214(arg0);
    func_800062F8(*arg1, 0x80000C00);
    ((func_80242034_Outer *) *arg1)->unk30->unk30 = D_8017AF38;
    ((func_80242034_Outer *) *arg1)->unk30->unk24 = 0x400;
    ((func_80242034_Outer *) *arg1)->unk30->unk4C = ((u8 *) &D_801BBBF0)[0xF32];
    ((func_80242034_Outer *) *arg1)->unk30->unk4D = ((u8 *) &D_801BBBF0)[0xF33];
    ((func_80242034_Outer *) *arg1)->unk30->unk4E = ((u8 *) &D_801BBBF0)[0xF34];
    ((func_80242034_Outer *) *arg1)->unk30->unk4F = ((u8 *) &D_801BBBF0)[0xF35];
    func_8012C89C(arg0, 0, 0x52D, 1);
    ((func_80242034_Outer *) *arg1)->unk30->unk20 = 1.0f;
    temp_v0 = ((func_80242034_Outer *) *arg1)->unk30;
    temp_fv0 = temp_v0->unk20;
    temp_v0->unk1C = temp_fv0;
    ((func_80242034_Outer *) *arg1)->unk30->unk18 = temp_fv0;
    func_800058DC((void *) arg0, func_80242140);
}
