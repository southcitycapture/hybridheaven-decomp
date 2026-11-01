#include "common.h"
extern u8 D_80164F40[];
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8012C89C(void *, s32, s32, s32);
struct func_803813A8_Struct16 { s32 a, b, c, d; };
struct func_803813A8_StructIn {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[0x8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad3[0x8];
    u32 unk30;
    u8 pad4[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};
struct func_803813A8_StructOut {
    u8 pad0[0x30];
    struct func_803813A8_StructIn *unk30;
};

extern u8 D_80388E98[];
extern f32 D_80389AFC;
extern f32 D_80389B00;
struct func_80381C08_Struct { u8 pad0[0x94]; f32 unk94; f32 unk98; f32 unk9C; u8 pad1[0xA0-0x9C-4]; };

void func_80381C08(struct func_80381C08_Struct *arg0, struct func_803813A8_StructOut **arg1) {
    struct { struct func_803813A8_Struct16 a; } sp;
    sp.a = *(struct func_803813A8_Struct16 *)D_80164F40;
    sp.a.b =0x80000300;
    func_80005E44(arg0, &sp.a);
    func_80006214(arg0);
    func_8012C89C(arg0, 0, 3, 3);
    if (0) {
        (*arg1)->unk30->unk18 = 0.002f;
    }
    (*arg1)->unk30->unk24 = 0x300;
    (*arg1)->unk30->unk30 = (u32)D_80388E98 | 0x40000000;
    (*arg1)->unk30->unk4 = arg0->unk94;
    (*arg1)->unk30->unk8 = arg0->unk98;
    (*arg1)->unk30->unkC = arg0->unk9C;
    (*arg1)->unk30->unk18 = 0.0001f;
    (*arg1)->unk30->unk1C = D_80389B00;
    (*arg1)->unk30->unk20 = 0.0001f;
    (*arg1)->unk30->unk48 = 0x40;
    (*arg1)->unk30->unk49 = 0x40;
    (*arg1)->unk30->unk4A = 0x40;
    (*arg1)->unk30->unk4B = 0;
    (*arg1)->unk30->unk4C = 0;
    (*arg1)->unk30->unk4D = 0;
    (*arg1)->unk30->unk4E = 0;
    *(s16 *)((u8 *)arg0 + 0x3C) = 0;
}
