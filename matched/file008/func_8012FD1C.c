#include "common.h"
#ifndef G
extern int func_80005204(unsigned short);
#endif
extern s16 D_80089354;
extern u8 D_801BBBF0[];
typedef struct func_801300E8_Struct {
    u8 pad0[0x30];
    u16 unk30;
    u8 pad32[0x324 - 0x32];
    f32 unk324;
    u8 pad328[0x112C - 0x328];
    s32 unk112C;
    f32 unk1130;
    u8 pad1134[4];
    s32 unk1138;
    u8 pad113C[8];
    f32 unk1144;
    f32 unk1148;
    f32 unk114C;
} func_801300E8_Struct;
#define G ((func_801300E8_Struct *)D_801BBBF0)
void *func_8012F490(s32 arg0, s32 arg1);
void *func_8012F87C(s32 arg0, s32 arg1);
void *func_8012FA20(s32 arg0, s32 arg1);
extern void func_8001E978(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_8012FD1C(s32 arg0)
{
    switch (D_801BBBF0[0x166]) {
    case 0:
        D_80089354 = 0;
        return 0;
    case 1:
        D_80089354 = 0;
        D_801BBBF0[0x164] = 0;
        D_801BBBF0[0x15D] = 0;
        func_8001E978(arg0, 0, 0, 0, 15, 0, 1, 0);
        return 1;
    case 2:
        D_80089354 = 0;
        D_801BBBF0[0x164] = 0;
        D_801BBBF0[0x15D] = 0;
        func_8001E978(arg0, 255, 255, 255, 15, 0, 1, 0);
        return 1;
    case 3:
        D_80089354 = 0;
        func_8012F490(arg0, 1);
        return 1;
    case 4:
        D_80089354 = 0;
        func_8012F87C(arg0, 1);
        return 1;
    case 5:
        D_80089354 = 0;
        func_8012FA20(arg0, 1);
        return 1;
    case 6:
        D_80089354 = 2;
        return 0;
    }
    return 0;
}
