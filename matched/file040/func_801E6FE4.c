#include "common.h"
extern s32 D_801E8468;
extern f32 D_801E846C;
extern f64 func_80034C24();
extern s32 func_801C0B8C(u64 time);
extern void func_801C0EB0(s32 a0, s32 a1);
extern u64 func_801C0F18(s32 a0, s32 a1);
extern s32 func_801DAAF0[];
struct func_801E71F4_StructE { u8 pad[8]; f32 unk8; };
struct func_801E71F4_StructD { u8 pad[0x2C]; struct func_801E71F4_StructE *unk2C; };
struct func_801E71F4_StructC { u8 pad[0x24]; struct func_801E71F4_StructD *unk24; };
struct func_801E71F4_StructB { u8 pad[8]; struct func_801E71F4_StructC *unk8; };
struct func_801E71F4_StructA { u8 pad[8]; struct func_801E71F4_StructB *unk8; };


extern f64 D_801E88E8;
extern f32 D_801E88F0;

s32 func_801E6FE4(s32 arg0, s32 arg1) {
    f64 elapsed;

    switch (D_801E8468) {
    case 0:
        D_801E8468 = 1;
        break;
    case 1:
        D_801E8468 = 2;
        break;
    case 2:
        D_801E8468 = 3;
        break;
    case 3:
        if (func_801C0B8C(0x1AABCCB) != 0) {
            D_801E8468 = 4;
        }
        break;
    case 4:
        D_801E8468 = 5;
        break;
    case 5:
        if (func_801C0B8C(0x1D8838B) != 0) {
            D_801E8468 = 6;
        }
        break;
    case 6:
        D_801E8468 = 7;
        break;
    case 7:
        func_801C0EB0(4, 1);
        return 5;
    }
    if (D_801E8468 < 6) {
        elapsed = func_80034C24(func_801C0F18(4, 1));
        ((struct func_801E71F4_StructA **)func_801DAAF0)[9]->unk8->unk8->unk24->unk2C->unk8 =
            (25.0f - D_801E846C) * ((f32)(elapsed / D_801E88E8) / D_801E88F0) + D_801E846C;
    }
    return 4;
}
