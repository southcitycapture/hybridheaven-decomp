#include "common.h"
extern s32 D_801E83B4;
extern s32 D_801E83BC;
extern f64 func_80034C24();
extern s32 func_801C0B8C(u64 time);
s32 func_801C0D04(s32 arg0, s32 arg1);
extern s32 func_801C0DE4(s32 a0, s32 a1, u32 a2);
extern void func_801C0EB0(s32 a0, s32 a1);
extern u64 func_801C0F18(s32 a0, s32 a1);
extern s32 func_801CC470(s32 arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4);
extern void func_801CC4D8(s32 a, s32 b, s32 c, s32 d, f32 scale);
extern s32 func_801CE274();
extern s32 func_801CE284(void);
extern s32 func_801DAAF0[];
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
extern void func_8038D28C(s32 a0);


extern s32 D_801E83C0;

s32 func_801E6AAC(s32 arg0, s32 arg1) {
    s32 temp_a0;
    u64 temp_ret;
    f32 scale;

    switch (D_801E83B4) {
    case 0:
        if (func_801CE274() == 0) {
            func_801CC470(0, 0x3480047, 0, 0, 3.0f);
            D_801E83B4 = 1;
            D_801E83C0 = 0;
        }
        break;
    case 1:
        if (func_801CE284() != 0) {
            func_801CC4D8(0, 0x348006C, 0, 0, 5.0f);
            D_801E83B4 = 2;
        }
        temp_a0 = ((s32 *)&D_801E83B4)[3] + 1;
        ((s32 *)&D_801E83B4)[3] = temp_a0;
        if (temp_a0 == 0x27) {
            temp_a0 *= 0;
            temp_a0 += 0x244;
            func_8038D28C(temp_a0);
        }
        break;
    case 2:
        if (func_801CE274() == 0) {
            func_801CC470(0, 0x348006C, 0, 0, 10.0f);
            D_801E83B4 = 3;
        }
        break;
    case 3:
        if (func_801CE284() != 0) {
            D_801E83B4 = 4;
        }
        break;
    case 4:
        D_801E83B4 = 5;
        break;
    case 5:
        break;
    }

    switch (D_801E83BC) {
    case 0:
        if (func_801C0B8C(0x1F7080B) != 0) {
            func_801C0D04(4, 0);
            D_801E83BC = 1;
        }
        break;
    case 1:
        if (func_801C0DE4(4, 0, 0x40800000) != 0) {
            func_801C0EB0(4, 0);
            func_801C0D04(4, 0);
            D_801E83BC = 2;
        }
        temp_ret = func_801C0F18(4, 0);
        scale = 4.0f;
        ((struct func_801E5D38_Struct_B *) func_801DAAF0[9])->unk8->unk24->unk2C->unk8 =
            ((f32) (func_80034C24(temp_ret) / 1000000.0) / scale) * 122.0f;
        break;
    case 2:
        if (func_801C0DE4(4, 0, 0x40800000) != 0) {
            func_801C0EB0(4, 0);
            return 0x28;
        }
        temp_ret = func_801C0F18(4, 0);
        scale = 4.0f;
        ((struct func_801E5D38_Struct_B *) func_801DAAF0[9])->unk8->unk24->unk2C->unk8 =
            ((f32) (func_80034C24(temp_ret) / 1000000.0) / scale) * 121.0f + 122.0f;
        break;
    }
    return 0x27;
}
