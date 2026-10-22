#include "context.h"
typedef struct func_8022B544_Struct {
    u8 pad0[0x448];
    func_80228C20_StructMid **unk448;
    s16 unk44C;
    u8 pad1[0x818 - 0x44E];
    u32 unk818_0 : 1;
    u32 unk818_1 : 2;
    u32 unk818_3 : 29;
    u8 pad2[0xAE0 - 0x81C];
    u8 unkAE0;
    u8 pad3[0x1030 - 0xAE1];
    u8 unk1030;
    u8 unk1031;
} func_8022B544_Struct;
typedef struct func_8022B544_Obj {
    u8 pad0[0x90];
    u8 unk90;
} func_8022B544_Obj;
typedef struct func_8022B544_P {
    u8 pad0[4]; f32 unk4; f32 unk8; s32 unkC; u8 pad1[2]; s16 unk12;
} func_8022B544_P;
extern s32 func_8014ADB4(f32, f32, s32, s16, s32, s32, s32);
extern s32 func_8014B36C(s32);
#define GS ((func_8022B544_Struct *)&D_801BBBF0)

void func_8022B544(func_8022B544_Obj *arg0, s32 arg1)
{
    s32 v;
    func_8022B544_P *p;
    extern void func_80005700();
    if (GS->unk1030 == 0 && GS->unkAE0 >= 3 && GS->unk1031 == 9 && arg0->unk90 < 3) {
        v = ((GS->unk44C >= 0x259) + 1) ? 1 : 0;
        p = (func_8022B544_P *)GS->unk448[0]->unk24->unk2C;
        func_8014B36C(func_8014ADB4(p->unk4, p->unk8, p->unkC, p->unk12, 0, v, 0) & 0xFF);
        arg0->unk90 = arg0->unk90 + 1;
    }
    if (GS->unk818_1 != 0) {
        func_80005700(arg0, GS);
    }
}
