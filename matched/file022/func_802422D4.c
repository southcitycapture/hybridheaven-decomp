#include "context.h"

extern void func_80005F6C(s32, void *);
extern void func_80006214(s32);
extern void func_800062F8(void *, s32);
extern void func_8012C89C(s32, s32, s32, s32);
extern u8 D_80164F40[];
extern u8 D_8017AF38[];
extern void func_80242414();

typedef struct func_802422D4_Inner {
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
} func_802422D4_Inner;

typedef struct func_802422D4_Outer {
    u8 pad0[0x30];
    func_802422D4_Inner *unk30;
} func_802422D4_Outer;

typedef struct func_802422D4_Arg0Inner {
    u8 pad0[0x10];
    u32 unk10;
} func_802422D4_Arg0Inner;

typedef struct func_802422D4_Arg0 {
    u8 pad0[0x38];
    func_802422D4_Arg0Inner *unk38;
} func_802422D4_Arg0;

void func_802422D4(void *arg0, void **arg1) {
    f32 temp_fv0;
    func_802422D4_Inner *temp_v0;

    func_80005F6C((s32) arg0, D_80164F40);
    func_80006214((s32) arg0);
    func_800062F8(*arg1, 0x80000C00);
    ((func_802422D4_Outer *) *arg1)->unk30->unk30 = D_8017AF38;
    ((func_802422D4_Outer *) *arg1)->unk30->unk24 = 0x400;
    ((func_802422D4_Outer *) *arg1)->unk30->unk4C = ((u8 *) &D_801BBBF0)[0xF32];
    ((func_802422D4_Outer *) *arg1)->unk30->unk4D = ((u8 *) &D_801BBBF0)[0xF33];
    ((func_802422D4_Outer *) *arg1)->unk30->unk4E = ((u8 *) &D_801BBBF0)[0xF34];
    ((func_802422D4_Outer *) *arg1)->unk30->unk4F = ((u8 *) &D_801BBBF0)[0xF35];
    if (((((func_802422D4_Arg0 *) arg0)->unk38->unk10) >> 0x18) != 0) {
        func_8012C89C((s32) arg0, 0, 0x52E, 3);
    } else {
        func_8012C89C((s32) arg0, 0, 0x52E, 4);
    }
    ((func_802422D4_Outer *) *arg1)->unk30->unk20 = 1.0f;
    temp_v0 = ((func_802422D4_Outer *) *arg1)->unk30;
    temp_fv0 = temp_v0->unk20;
    temp_v0->unk1C = temp_fv0;
    ((func_802422D4_Outer *) *arg1)->unk30->unk18 = temp_fv0;
    func_800058DC(arg0, (void *) func_80242414);
}
