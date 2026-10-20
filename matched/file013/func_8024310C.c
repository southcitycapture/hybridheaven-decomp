#include "context.h"

typedef struct func_8024310C_StructE {
    u8 pad0[0x78];
    u16 unk78;
} func_8024310C_StructE;

typedef struct func_8024310C_StructD {
    s32 a;
    s32 b;
    s32 c;
} func_8024310C_StructD;

typedef struct func_8024310C_Struct {
    u8 pad0[0x24];
    func_80242FD0_StructC *unk24;
    u8 pad28[0x5C - 0x28];
    func_8024310C_StructE *unk5C;
    u8 pad60[0x90 - 0x60];
    u8 unk90;
    u8 pad91[3];
    u8 unk94;
    u8 unk95;
    u8 unk96;
    u8 unk97;
    u8 pad98[4];
    s16 unk9C;
    u8 pad9E[2];
    s16 unkA0;
} func_8024310C_Struct;

extern void func_802431C4();
extern void func_8013A1B4();
extern void func_800058DC(void *, void *);
extern u8 D_80246C64[];

void func_8024310C(func_8024310C_Struct *arg0, s32 arg1) {
    func_80242FD0_StructB *temp_v0;
    func_8024310C_StructE *temp_v1;

    arg0->unkA0 = 0;
    arg0->unk90 = 0;
    arg0->unk95 = 0;
    arg0->unk96 = 0;
    arg0->unk97 = 1;
    arg0->unk94 = 0;
    temp_v0 = arg0->unk24->unk2C;
    temp_v1 = arg0->unk5C;
    arg0->unk9C = (s32)(temp_v0->unk4 + temp_v0->unkC);
    temp_v1->unk78 = 1;
    func_8013A1B4(arg1, *(func_8024310C_StructD *)D_80246C64, 0x1FFFFF);
    func_800058DC(arg0, func_802431C4);
}
