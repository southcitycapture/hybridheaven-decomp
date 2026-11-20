#include "common.h"
typedef struct func_8024090C_Struct {
    u8 pad0[0x15D];
    u8 unk15D;
    u8 pad1[6];
    u8 unk164;
    u8 pad2[0x1104 - 0x165];
    s32 unk1104;
} func_8024090C_Struct;
extern func_8024090C_Struct D_801BBBF0;
void func_800058DC(s32 arg0, void *arg1);            /* extern */
typedef struct func_802427CC_StructGlobal {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[0x2A0 - 6];
    f32 unk2A0;
    u8 pad2[0xF20 - 0x2A4];
    u8 unkF20;
    u8 unkF21;
    u8 unkF22;
    u8 unkF23;
    u8 unkF24;
    u8 unkF25;
    u8 unkF26;
    u8 unkF27;
    u8 unkF28;
    u8 unkF29;
    u8 unkF2A;
    u8 unkF2B;
    s8 unkF2C;
    s8 unkF2D;
    u8 unkF2E;
    u8 pad3[6];
    u8 unkF35;
} func_802427CC_StructGlobal;
typedef struct func_802428F8_Struct {
    u8 pad0[0x90];
    u16 unk90;
} func_802428F8_Struct;
void func_8024294C(void *arg0, void *arg1);


void func_802428F8(func_802428F8_Struct *arg0, void *arg1)
{
    ((func_802427CC_StructGlobal *)&D_801BBBF0)->unkF20 += 0x4B;
    if (arg0->unk90--) {
        return;
    }
    arg0->unk90 = 3;
    func_800058DC((s32)arg0, func_8024294C);
}
