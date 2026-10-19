#include "context.h"

typedef struct func_801C0694_Props {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
} func_801C0694_Props;
typedef struct func_801C0694_Holder {
    u8 pad[0x2C];
    func_801C0694_Props *unk2C;
} func_801C0694_Holder;
typedef struct func_801C0694_Info {
    u8 pad[0x10];
    s32 unk10;
} func_801C0694_Info;
typedef struct func_801C0694_Struct {
    u8 pad0[0x24];
    func_801C0694_Holder *unk24;
    u8 pad28[4];
    u32 unk2C;
    u8 pad30[8];
    func_801C0694_Info *unk38;
} func_801C0694_Struct;

extern u8 D_8017B1F8[];
extern u8 D_8017B0A8[];
extern f32 D_801CEAC4;
extern f32 D_801CEAC8;
extern u8 func_801C08D4[];
extern u8 func_801C0A88[];
void func_801C0B24(s32 arg0, s32 arg1);

void func_801C0694(func_801C0694_Struct *arg0, func_801C0694_Holder **arg1) {
    s32 t;
    f32 k;
    func_80005E44(arg0, D_80164F30);
    func_80006214(arg0);
    func_8012636C(arg0, 0);
    k = D_801CEAC4;
    arg0->unk2C |= 0x20;
    (*arg1)->unk2C->unk18 = k;
    (*arg1)->unk2C->unk1C = k;
    (*arg1)->unk2C->unk20 = k;
    t = arg0->unk38->unk10;
    if (t == 0) goto c0;
    if (t == 1) goto c1;
    if (t != 2) return;
    goto c2;
c0:
    (*arg1)->unk2C->unk30 = (u32)D_8017B1F8 | 0x40000000;
    (*arg1)->unk2C->unk24 |= 0x5000;
    func_800058DC((s32)arg0, func_801C08D4);
    arg0->unk24->unk2C->unk4 = 0.0f;
    arg0->unk24->unk2C->unk8 = 13.0f;
    arg0->unk24->unk2C->unkC = -37.0f;
    arg0->unk24->unk2C->unk12 = 0x800;
    return;
c1:
    func_800058DC((s32)arg0, func_801C0A88);
    arg0->unk24->unk2C->unk4 = 0.0f;
    arg0->unk24->unk2C->unk8 = -13.0f;
    arg0->unk24->unk2C->unkC = -37.0f;
    arg0->unk24->unk2C->unk12 = -0x800;
    return;
c2:
    k = D_801CEAC8;
    (*arg1)->unk2C->unk18 = k;
    (*arg1)->unk2C->unk1C = k;
    (*arg1)->unk2C->unk20 = k;
    (*arg1)->unk2C->unk30 = (u32)D_8017B0A8 | 0x40000000;
    func_800058DC((s32)arg0, func_801C0B24);
    arg0->unk24->unk2C->unk4 = 10.0f;
    arg0->unk24->unk2C->unk8 = -30.0f;
    arg0->unk24->unk2C->unkC = 470.0f;
    arg0->unk24->unk2C->unk12 = 0x1000;
}
