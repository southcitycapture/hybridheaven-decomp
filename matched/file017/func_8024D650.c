#include "context.h"

extern s32 func_80126944(void);
extern s32 func_80133A24(s32);
extern void func_801339D0();
extern void func_801FBB30(void);
extern void func_801C3B2C(s32);
extern void func_801C3B10(s32);
extern void func_800058DC(void *arg0, void *arg1);
extern void func_8024D768();
extern u8 D_801BBBF0[];

struct func_8024D650_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0xC];
    u16 unk3C;
    u8 pad3E[0x36];
    s32 unk74;
    u8 pad78[0x20];
    u8 unk98;
};

void func_8024D650(struct func_8024D650_Struct *arg0, func_8024D030_Args *arg1) {
    if (func_80126944() == 0) {
        arg0->unk2C = arg0->unk2C | 0x800;
    } else {
        arg0->unk2C = arg0->unk2C & ~0x800;
    }
    if (func_80133A24(0x12E) != 0) {
        func_801339D0(0x12E);
        func_801FBB30();
        func_801C3B2C(2);
        func_801C3B10(1);
        arg1->unk1C->unk30->unk4 = -143.0f;
        arg1->unk1C->unk30->unk8 = 0.0f;
        arg1->unk1C->unk30->unkC = -130.0f;
        D_801BBBF0[0x204] = 0xFF;
        D_801BBBF0[0x205] = 0xFF;
        D_801BBBF0[0x206] = 0xF0;
        D_801BBBF0[0x207] = 0xFF;
        D_801BBBF0[0x208] = 0xFF;
        D_801BBBF0[0x209] = 0;
        D_801BBBF0[0x20A] = 0;
        arg0->unk74 = 0;
        arg0->unk3C = 0;
        arg0->unk98 = 0;
        func_801339D0(0x131, arg1);
        func_801339D0(0x132);
        func_800058DC(arg0, &func_8024D768);
    }
}
