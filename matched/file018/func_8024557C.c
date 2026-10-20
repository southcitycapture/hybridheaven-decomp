#include "context.h"
extern void func_8024564C();
extern func_80246E60_StructGlobal D_80258F3C;

typedef struct func_8024557C_StructInner {
    u8 pad0[0x1C];
    func_80246E60_StructGlobal unk1C;
    u8 pad28[0x50];
    s16 unk78;
} func_8024557C_StructInner;

typedef struct func_8024557C_Struct {
    u8 pad0[0x24];
    func_80244F28_StructMid *unk24;
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
    func_8024557C_StructInner *unk5C;
} func_8024557C_Struct;

extern void func_801FBB20(void);
extern void func_8013E570(s32, s32, void *, void *, void *);
extern u8 D_801BC3D8[];

void func_8024557C(func_8024557C_Struct *arg0, s32 *arg1) {
    func_8024557C_StructInner *temp_v0;
    u8 *temp_v0_2;
    s32 value;

    temp_v0 = arg0->unk5C;
    temp_v0->unk1C = D_80258F3C;
    temp_v0->unk78 = 1;
    func_801FBB20();
    D_801BC3D8[0x3BA] = 1;
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
    func_800058DC(arg0, func_8024564C);
}
