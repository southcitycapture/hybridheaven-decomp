#include "common.h"
#define CAT_(a,b) a##b
#define CAT(a,b) CAT_(a,b)
#define func_801C9328 CAT(func_801C9328_L, __LINE__)
extern void (*D_801CCB04)(void *, s32, u8);
extern void func_800058DC(void *, void *, void *, void *);
extern void func_80005E44(s32, void *);
extern s32 func_80006214(s32);
extern void func_8012C89C(s32, s32, s32, s32);
typedef struct func_801C8328_Src {
    u8 pad[0x50];
    f32 unk50;
} func_801C8328_Src;
typedef struct func_801C8328_Inner {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801C8328_Inner;
typedef struct func_801C8328_Mid {
    u8 pad[0x2C];
    func_801C8328_Inner *unk2C;
} func_801C8328_Mid;
typedef struct func_801C8328_Struct {
    u8 pad0[0x24];
    func_801C8328_Mid *unk24;
    u8 pad28[0x14];
    s16 unk3C;
    u8 pad3E[0x1E];
    func_801C8328_Src *unk5C;
    u8 pad60[0x30];
    u8 unk90;
    u8 pad91[3];
    s16 unk94;
    s16 unk96;
    s16 unk98;
    s16 unk9A;
} func_801C8328_Struct;
typedef struct func_801C8B20_Arg {
    u8 pad[0x94];
    s16 unk94;
    s16 unk96;
    s16 unk98;
} func_801C8B20_Arg;
typedef struct func_801C8B20_Inner {
    u8 pad[8];
    f32 unk8;
    u8 pad2[0x3C];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
} func_801C8B20_Inner;
typedef struct func_801C8B20_Outer {
    u8 pad[0x30];
    func_801C8B20_Inner *unk30;
} func_801C8B20_Outer;
void func_801C8B20(func_801C8B20_Arg *arg0, func_801C8B20_Outer **arg1);
extern u8 func_801C9328[];


typedef struct func_801C896C_StructCopy {
    s32 unk0, unk4, unk8, unkC;
} func_801C896C_StructCopy;
typedef struct func_801C896C_StructInner {
    u8 pad0[4];
    f32 unk4, unk8, unkC;
    s16 unk10, unk12, unk14;
    u8 pad16[2];
    f32 unk18, unk1C, unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x14];
    u8 unk48, unk49, unk4A, unk4B;
} func_801C896C_StructInner;
typedef struct func_801C896C_StructOuter {
    u8 pad[0x30];
    func_801C896C_StructInner *unk30;
} func_801C896C_StructOuter;
extern func_801C896C_StructCopy D_801CD178[];
extern u8 D_8017B7F8[];
extern f32 D_801CF3B0;

void func_801C896C(func_801C8328_Struct *arg0, func_801C896C_StructOuter **arg1) {
    func_801C896C_StructCopy sp28;
    func_801C8328_Src *source;
    f32 sp20;

    sp28 = D_801CD178[arg0->unk90];
    source = arg0->unk5C;
    sp20 = source->unk50 - 18.0f;
    sp28.unk4 = 0x800008FF;
    func_80005E44((s32)arg0, &sp28);
    func_80006214((s32)arg0);
    func_8012C89C((s32)arg0, 0, 0x229, 9);
    (*arg1)->unk30->unk24 |= 0x100;
    (*arg1)->unk30->unk30 = (s32)D_8017B7F8 | 0x40000000;
    (*arg1)->unk30->unk48 = 0;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0;
    (*arg1)->unk30->unk4B = 0x40;
    (*arg1)->unk30->unk4 = 100.0f;
    (*arg1)->unk30->unk8 = 5.0f + sp20;
    (*arg1)->unk30->unkC = 0.0f;
    (*arg1)->unk30->unk10 = 0x800;
    (*arg1)->unk30->unk12 = 0;
    (*arg1)->unk30->unk14 = 0;
    (*arg1)->unk30->unk18 = 0.10000000149011612f;
    (*arg1)->unk30->unk1C = 0.10000000149011612f;
    (*arg1)->unk30->unk20 = 0.10000000149011612f;
    {
extern void func_800058DC();
        func_800058DC(arg0, (void *)func_801C8B20);
    }
}
