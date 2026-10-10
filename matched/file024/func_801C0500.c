#include "context.h"

extern void func_801C0608();

extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012636C(void *, s32);
extern void func_8012C784(void *, s32, s32);
extern u8 D_80164F30[];
extern u8 D_8017BA00[];
extern f32 D_801CEAC0;

typedef struct func_801C0500_Cam {
    u8 pad[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u16 unk10;
} func_801C0500_Cam;

typedef struct func_801C0500_Props {
    u8 pad[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad2[0x8];
    void *unk30;
} func_801C0500_Props;

typedef struct func_801C0500_Holder {
    u8 pad[0x2C];
    func_801C0500_Props *unk2C;
} func_801C0500_Holder;

typedef struct func_801C0500_Owner {
    u8 pad[0x2C];
    func_801C0500_Cam *unk2C;
} func_801C0500_Owner;

typedef struct func_801C0500_Arg0 {
    u8 pad[0x24];
    func_801C0500_Owner *unk24;
} func_801C0500_Arg0;

void func_801C0500(void *arg0, void **arg1) {
    func_801C0500_Props *temp_v0;
    f32 temp_f0;

    func_80005E44(arg0, D_80164F30);
    func_80006214(arg0);
    func_8012636C(arg0, 0);
    temp_f0 = D_801CEAC0;
    ((func_801C0500_Holder *) *arg1)->unk2C->unk18 = temp_f0;
    ((func_801C0500_Holder *) *arg1)->unk2C->unk1C = temp_f0;
    ((func_801C0500_Holder *) *arg1)->unk2C->unk20 = temp_f0;
    func_8012C784(arg0, 0, 2);
    func_800058DC((s32) arg0, (void *) func_801C0608);
    ((func_801C0500_Arg0 *) arg0)->unk24->unk2C->unk4 = 0.0f;
    ((func_801C0500_Arg0 *) arg0)->unk24->unk2C->unk8 = 15.0f;
    ((func_801C0500_Arg0 *) arg0)->unk24->unk2C->unkC = -40.0f;
    ((func_801C0500_Arg0 *) arg0)->unk24->unk2C->unk10 = 0x800;
    temp_v0 = ((func_801C0500_Holder *) *arg1)->unk2C;
    temp_v0->unk24 = temp_v0->unk24 | 0x4000;
    ((func_801C0500_Holder *) *arg1)->unk2C->unk30 = (void *) D_8017BA00;
}
