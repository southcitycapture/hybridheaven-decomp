#include "common.h"
#ifndef CREATE
extern int func_80005204(unsigned short);
#endif
typedef struct func_8012F490_StructArgs {
    s32 words[5];
} func_8012F490_StructArgs;
typedef struct func_8012F490_StructObj {
    u8 pad[0x92];
    s16 unk92;
    u8 pad94[4];
    s16 unk98;
} func_8012F490_StructObj;
extern func_8012F490_StructObj *D_8012C4D0(s32, func_8012F490_StructArgs, u8);
extern func_8012F490_StructArgs D_80178CB4;
typedef struct func_8012F87C_StructObj {
    u8 pad[0x90];
    u8 mode;
} func_8012F87C_StructObj;
#define CREATE(a) ((func_8012F87C_StructObj *)D_8012C4D0(a, D_80178CB4, 3))
extern s16 D_80089354;
void *func_8012F490(s32 arg0, s32 arg1);
void *func_8012F87C(s32 arg0, s32 arg1);
void *func_8012FA20(s32 arg0, s32 arg1);


extern u8 D_801BBD55;
extern s8 D_801BBD54;
extern void func_8001EAA4(void);
extern void func_8001E978(s32, s32, s32, s32, s32, s32, s32, s32);

s32 func_8012FBC4(s32 arg0)
{
    switch (D_801BBD55) {
    case 0:
        D_80089354 = 0;
        return 0;
    case 1:
        D_80089354 = 2;
        func_8001EAA4();
        D_801BBD54 = 0;
        func_8001E978(arg0, 0, 0, 0, 15, 0, 2, 0);
        return 1;
    case 2:
        D_80089354 = 2;
        func_8001EAA4();
        D_801BBD54 = 0;
        func_8001E978(arg0, 255, 255, 255, 15, 0, 2, 0);
        return 1;
    case 3:
        D_80089354 = 0;
        func_8012F490(arg0, 0);
        return 1;
    case 4:
        D_80089354 = 0;
        func_8012F87C(arg0, 0);
        return 1;
    case 5:
        D_80089354 = 0;
        func_8012FA20(arg0, 0);
        return 1;
    case 6:
        D_80089354 = 2;
        return 0;
    }
    D_80089354 = 0;
    return 0;
}
