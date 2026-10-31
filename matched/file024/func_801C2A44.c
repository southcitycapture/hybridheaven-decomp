#include "common.h"
typedef struct func_801C2DB8_V { s32 a, b, c, d; } func_801C2DB8_V;
extern func_801C2DB8_V D_80164F40;
extern void func_800058DC(s32, void *);
extern void func_80006214(void *);
extern s32 func_8000C3B0(void *);
extern void func_8012C89C(s32, s32, s32, s32);
extern void func_8012D918(s32, s32, s32, u8, s32);
struct func_801C2D78_Struct_Arg0 {
    u8 pad[0x3C];
    u16 unk3C;
};
struct func_801C2D78_Struct_Inner {
    u8 pad[0x4D];
    u8 unk4D;
};
struct func_801C2D78_Struct_Mid {
    u8 pad[0x30];
    struct func_801C2D78_Struct_Inner *unk30;
};
struct func_801C2D78_Struct_Arg1 {
    u8 pad[0x8];
    struct func_801C2D78_Struct_Mid *unk8;
};
void func_801C2D78(struct func_801C2D78_Struct_Arg0 *arg0, struct func_801C2D78_Struct_Arg1 *arg1);


typedef struct func_801C2A44_Props {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
    u8 pad14[4];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    u32 unk24;
    u8 pad28[8];
    u32 unk30;
    u8 pad34[0x14];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
} func_801C2A44_Props;

typedef struct func_801C2A44_Obj {
    u8 pad[0x30];
    func_801C2A44_Props *unk30;
} func_801C2A44_Obj;

typedef struct func_801C2A44_Arg1 {
    func_801C2A44_Obj *unk0;
    func_801C2A44_Obj *unk4;
    func_801C2A44_Obj *unk8;
} func_801C2A44_Arg1;

typedef struct func_801C2A44_Arg0 {
    u8 pad[0x3C];
    u16 unk3C;
} func_801C2A44_Arg0;

extern u8 D_801CC8D8[];
#define D_801CF27C 0.009999999776f
#define D_801CF280 0.0700000003f
#define D_801CF284 0.009999999776f
#define D_801CF288 0.0700000003f
#define D_801CF28C 0.009999999776f

void func_801C2A44(func_801C2A44_Arg0 *arg0, func_801C2A44_Arg1 *arg1) {
    func_801C2DB8_V sp28;

    sp28 = D_80164F40;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C((s32)arg0, 0, 0x228, 0x2B);
    arg1->unk0->unk30->unk24 = 0x14;
    arg1->unk0->unk30->unk30 = func_8000C3B0(arg1->unk0);
    arg1->unk0->unk30->unk4 = 0;
    arg1->unk0->unk30->unk8 = 0;
    arg1->unk0->unk30->unkC = 0;
    arg1->unk0->unk30->unk18 = D_801CF27C;
    arg1->unk0->unk30->unk1C = D_801CF27C;
    arg1->unk0->unk30->unk20 = D_801CF27C;
    arg1->unk0->unk30->unk12 = 0;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C((s32)arg0, 1, 0x228, 0x2C);
    arg1->unk4->unk30->unk24 = 0x14;
    arg1->unk4->unk30->unk30 = func_8000C3B0(arg1->unk4);
    arg1->unk4->unk30->unk4 = -500.0f;
    arg1->unk4->unk30->unk8 = 200.0f;
    arg1->unk4->unk30->unkC = 0.0f;
    arg1->unk4->unk30->unk18 = D_801CF280;
    arg1->unk4->unk30->unk1C = D_801CF284;
    arg1->unk4->unk30->unk20 = D_801CF280;
    arg1->unk4->unk30->unk12 = 0x1800;
    func_80005E44(arg0, &sp28);
    func_80006214(arg0);
    func_8012C89C((s32)arg0, 2, 0x228, 0x2D);
    func_8012D918((s32)arg0, 0x228, 0x2E, 2, 0);
    arg1->unk8->unk30->unk24 |= 0x4100;
    arg1->unk8->unk30->unk30 = (u32)D_801CC8D8 | 0x40000000;
    arg1->unk8->unk30->unk4 = -500.0f;
    arg1->unk8->unk30->unk8 = 190.0f;
    arg1->unk8->unk30->unkC = 0.0f;
    arg1->unk8->unk30->unk18 = D_801CF288;
    arg1->unk8->unk30->unk1C = D_801CF28C;
    arg1->unk8->unk30->unk20 = D_801CF288;
    arg1->unk8->unk30->unk12 = 0x1800;
    arg1->unk8->unk30->unk48 = 0x90;
    arg1->unk8->unk30->unk49 = 0x40;
    arg1->unk8->unk30->unk4A = 0x30;
    arg1->unk8->unk30->unk4B = 0xFF;
    arg1->unk8->unk30->unk4C = 0;
    arg1->unk8->unk30->unk4D = 0;
    arg1->unk8->unk30->unk4E = 0xFF;
    arg1->unk8->unk30->unk4F = 0xFF;
    arg0->unk3C = 0;
    func_800058DC((s32)arg0, func_801C2D78);
}
