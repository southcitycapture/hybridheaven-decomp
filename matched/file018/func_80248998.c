#include "common.h"

typedef struct func_80248998_StructInner {
    u8 pad0[0x10];
    s16 unk10;
    u8 pad12[0x6];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[0x8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
} func_80248998_StructInner;

typedef struct func_80248998_StructOuter {
    u8 pad0[0x30];
    func_80248998_StructInner *unk30;
} func_80248998_StructOuter;

extern s32 func_800058DC(void *, void *);
extern s32 func_80005F6C(void *, void *);
extern s32 func_80006214(void *);
extern s32 func_800062F8(void *, s32);
extern s32 func_8012C89C(void *, s32, s32, s32);
extern s32 func_8012CF8C(void *, s32, s32, s32);
extern u8 D_80164F40[];
extern u8 D_8017B6C0[];
extern f32 D_8025C5DC;
extern u8 func_80248AD0[];

void func_80248998(void *arg0, func_80248998_StructOuter **arg1) {
    f32 fv;

    func_80005F6C(arg0, D_80164F40);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 2);
    func_8012CF8C(arg0, (s32)(*arg1)->unk30 + 0x40, 0x3D0, 0);
    (*arg1)->unk30->unk24 = 0x100;
    (*arg1)->unk30->unk30 = (s32)D_8017B6C0 | 0x40000000;
    func_800062F8(*arg1, 0x80000A00);
    fv = D_8025C5DC;
    (*arg1)->unk30->unk18 = fv;
    (*arg1)->unk30->unk1C = fv;
    (*arg1)->unk30->unk20 = fv;
    (*arg1)->unk30->unk10 = 0x1800;
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4B = 0xFF;
    ((u32 *)arg0)[0x2C / 4] |= 0x20;
    func_800058DC(arg0, func_80248AD0);
}
