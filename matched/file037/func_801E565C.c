#include "common.h"
extern u8 D_801DAB14[];
extern s32 D_801E6AB8;
extern s32 func_801C0B8C(u64);
extern void func_801C0D04(s32 arg0, s32 arg1);
extern void func_801C0EB0(s32 arg0, s32 arg1);
extern u64 func_801C0F18(s32 arg0, s32 arg1);
void func_801CC470(s32 a0, s32 a1, s32 a2, s32 a3, f32 time);
extern void func_801CC4D8(s32 a0, s32 a1, s32 a2, s32 a3, f32 f);
s32 func_801CEDD4(void);
extern void func_8038D28C();

extern s32 func_801CEDE4(void);
extern f64 func_80034C24();
extern f32 D_801E6ABC;
struct func_801E565C_StructE { u8 pad0[8]; f32 unk8; };
struct func_801E565C_StructD { u8 pad0[0x2C]; struct func_801E565C_StructE *unk2C; };
struct func_801E565C_StructC { u8 pad0[0x24]; struct func_801E565C_StructD *unk24; };
struct func_801E565C_StructB { u8 pad0[8]; struct func_801E565C_StructC *unk8; };
struct func_801E565C_StructA { u8 pad0[8]; struct func_801E565C_StructB *unk8; };
#define CHAIN565C (*(struct func_801E565C_StructA **)D_801DAB14)

s32 func_801E565C(s32 arg0, s32 arg1) {
    f32 t;
    f32 f;

    switch (D_801E6AB8) {
    case 0:
        if (func_801CEDE4() != 0) {
            func_801CC4D8(1, 0x02A80004, 0, 0, 10.0f);
            D_801E6AB8 = 1;
        }
        break;
    case 1:
        if (func_801CEDD4() == 0) {
            func_801CC470(1, 0x02A80004, 0, 0x100, 1.5f);
            func_8038D28C(0x5E4);
            D_801E6AB8 = 2;
        }
        break;
    case 2:
        D_801E6AB8 = 3;
        break;
    case 3:
        if (func_801C0B8C(0x011EDD81) != 0) {
            func_801CC4D8(1, 0x0348008C, 0, 0, 3.0f);
            t = CHAIN565C->unk8->unk8->unk24->unk2C->unk8;
            D_801E6ABC = t;
            func_801C0D04(4, 1);
            D_801E6AB8 = 4;
        }
        break;
    case 4:
        if (func_801CEDD4() == 0) {
            func_801CC470(1, 0x0348008C, 0, 0, 5.0f);
            D_801E6AB8 = 5;
        }
        break;
    case 5:
        if (func_801CEDE4() != 0) {
            func_801CC4D8(1, 0x0348008D, 0, 0, 3.0f);
            D_801E6AB8 = 6;
        }
        break;
    case 6:
        if (func_801CEDD4() == 0) {
            func_801CC470(1, 0x0348008D, 0, 0, 5.0f);
            D_801E6AB8 = 7;
        }
        break;
    case 7:
        if (func_801CEDE4() != 0) {
            func_801CC4D8(1, 0x02A80005, 0, 0, 3.0f);
            D_801E6AB8 = 8;
        }
        break;
    case 8:
        if (func_801CEDD4() == 0) {
            func_801CC470(1, 0x02A80005, 0, 0x100, 1.5f);
            D_801E6AB8 = 9;
        }
        break;
    case 9:
        D_801E6AB8 = 0xA;
        break;
    case 10:
        if (func_801C0B8C(0x013D6201) != 0) {
            func_801CC4D8(1, 0x02A80059, 0, 0, 15.0f);
            D_801E6AB8 = 0xB;
        }
        break;
    case 12:
        if (func_801CEDD4() == 0) {
            func_801CC470(1, 0x02A80059, 0, 0x100, 1.0f);
            D_801E6AB8 = 0xD;
        }
        break;
    case 13:
        D_801E6AB8 = 0xE;
        break;
    case 14:
        if (func_801C0B8C(0x01B77401) != 0) {
            func_801C0EB0(4, 1);
            return 9;
        }
        break;
    }
    if (D_801E6AB8 >= 4) {
        f = (f32) (func_80034C24(func_801C0F18(4, 1)) / 1000000.0) / 10.0f;
        t = D_801E6ABC;
        CHAIN565C->unk8->unk8->unk24->unk2C->unk8 = (((t + 121.0f) - t) * f) + t;
    }
    return 8;
}
