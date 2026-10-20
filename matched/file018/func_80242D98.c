#include "context.h"

typedef struct func_80242D98_StructVec {
    s32 x;
    s32 y;
    s32 z;
} func_80242D98_StructVec;

typedef struct func_80242D98_StructInner {
    u8 pad0[0x1C];
    func_80242D98_StructVec unk1C;
    u8 pad28[0x50];
    s16 unk78;
} func_80242D98_StructInner;

typedef struct func_80242D98_StructLeaf {
    u8 pad0[0x2C];
    u8 *unk2C;
} func_80242D98_StructLeaf;

typedef struct func_80242D98_Struct {
    u8 pad0[0x24];
    func_80242D98_StructLeaf *unk24;
    u8 pad28[4];
    s32 unk2C;
    u8 pad30[0x1C];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
    u8 unk50;
    u8 pad51[3];
    s32 unk54;
    u8 pad58[4];
    func_80242D98_StructInner *unk5C;
} func_80242D98_Struct;

extern struct func_80242C60_Cfg D_80258DA4;
extern void func_80242E5C();
extern void func_801FBB20(void);
extern void func_8013E570(s32, s32, void *, void *, void *);

void func_80242D98(func_80242D98_Struct *arg0, s32 *arg1) {
    func_80242D98_StructInner *temp_v0;
    u8 *temp_v0_2;
    s32 value;

    temp_v0 = arg0->unk5C;
    temp_v0->unk1C = *(func_80242D98_StructVec *)&D_80258DA4;
    temp_v0->unk78 = 1;
    func_801FBB20();
    arg0->unk2C |= 0x23E0;
    arg0->unk4C = 0x1B;
    arg0->unk4D = 0x1B;
    arg0->unk4E = 0x1B;
    arg0->unk4F = 0;
    arg0->unk50 = 0xA;
    arg0->unk54 |= 0xE1;
    value = *arg1;
    temp_v0_2 = arg0->unk24->unk2C;
    func_8013E570(value, 0, temp_v0_2 + 4, temp_v0_2 + 8, temp_v0_2 + 0xC);
    func_800058DC(arg0, func_80242E5C);
}
