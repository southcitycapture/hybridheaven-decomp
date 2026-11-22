#include "common.h"

struct func_801E5D38_Struct_F {
    u8 pad[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[0x2];
    s16 unk12;
};
struct func_801E5D38_Struct_D {
    u8 pad[0x2C];
    struct func_801E5D38_Struct_F *unk2C;
};
struct func_801E5D38_Struct_C {
    u8 pad[0x24];
    struct func_801E5D38_Struct_D *unk24;
};
struct func_801E5D38_Struct_B {
    u8 pad[0x8];
    struct func_801E5D38_Struct_C *unk8;
};
extern struct func_801E5D38_Struct_B *D_801DAB14;
extern s32 D_801E8468;
extern f32 D_801E846C;
extern f64 func_80034C24();
extern s32 func_801C0B8C(u64 time);
extern s32 func_801C0D04(s32 arg0, s32 arg1);
extern void func_801C0EB0(s32 a0, s32 a1);
extern u64 func_801C0F18(s32 a0, s32 a1);
extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern s32 func_801CEDD4();
struct func_801E71F4_StructE { u8 pad[8]; f32 unk8; };
struct func_801E71F4_StructD { u8 pad[0x2C]; struct func_801E71F4_StructE *unk2C; };
struct func_801E71F4_StructC { u8 pad[0x24]; struct func_801E71F4_StructD *unk24; };
struct func_801E71F4_StructB { u8 pad[8]; struct func_801E71F4_StructC *unk8; };
struct func_801E71F4_StructA { u8 pad[8]; struct func_801E71F4_StructB *unk8; };
s32 func_801E71F4(s32 arg0, s32 arg1) {
    u64 t;
    f64 r;
    f32 four = 4.0f;
    s32 st = D_801E8468;

    if (st == 0) goto c0;
    if (st != 1) goto tail;
    goto c1;
c0:
    if (func_801CEDD4() == 0) {
        func_801CC470(1, 0x02A80039, 0, 0x100, 10.0f);
        D_801E8468 = 1;
    }
    goto tail;
c1:
    if (func_801C0B8C(0x0234110B) != 0) {
        func_801C0EB0(4, 1);
        D_801E846C = ((struct func_801E71F4_StructA *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8;
        func_801C0D04(4, 1);
        return 7;
    }
tail:
    t = func_801C0F18(4, 1);
    r = func_80034C24(t);
    ((struct func_801E71F4_StructA *)D_801DAB14)->unk8->unk8->unk24->unk2C->unk8 = (147.0f - D_801E846C) * ((f32)(r / 1000000.0) / four) + D_801E846C;
    return 6;
}
