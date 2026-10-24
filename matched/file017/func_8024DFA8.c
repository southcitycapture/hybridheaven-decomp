#define LP(p,l) LQ(p,l)
#define LQ(p,l) p##_##l
#define func_8024D9B8 LP(fA, __LINE__)
#include "context.h"
#undef func_8024D9B8

extern void func_8024E230();

#define GB(t, o) (*(t *)(D_801BBBF0 + (o)))

void func_8024DFA8(struct func_8024D650_Struct *arg0, func_8024D030_Args *arg1) {
    s32 i;
    s32 sp38;
    func_8024D9B8_P *p;

    sp38 = arg0->unk3C++;
    func_8024F0B0(arg0, arg1);
    func_801C4058(arg0, 0x3ECCCCCD, 0x3DCCCCCD, -0x16);
    if (arg0->unk98 < 0xFB) {
        arg0->unk98 += 4;
    }
    for (i = 0; i < func_801516CC(D_8025DDF0); i++) {
        func_801515B0(D_8025DDF0, i, arg0->unk98);
    }
    if (sp38 >= 0x34) {
        if (sp38 == 0x34) {
            func_80020718(0x186);
        }
        if (!(sp38 % 4)) {
            func_80380F94(-143.0f, 0.0f, 0xC3020000, 0.0f, 0.0f, 0.0f, 0xB);
        }
        arg1->unk1C->unk30->unk4B += 0x10;
        if (arg1->unk1C->unk30->unk4B >= 0xF0) {
            arg1->unk1C->unk30->unk4B = 0xFF;
            arg1->unk18->unk22 = 0;
            arg1->unk10->unk22 = 1;
            arg1->unk14->unk22 = 1;
            ((func_8024D9B8_G *)D_801BBBF0)->unkE0->unk2C->unk4 += func_8001EAD0(((func_8024D9B8_G *)D_801BBBF0)->unkE0->unk2C->unk12) * 20.0f;
            ((func_8024D9B8_G *)D_801BBBF0)->unkE0->unk2C->unkC += func_8001EB64(((func_8024D9B8_G *)D_801BBBF0)->unkE0->unk2C->unk12) * 20.0f;
            GB(u8, 0xF20) = 0x64;
            GB(s8, 0xF21) = 0x32;
            GB(u8, 0xF22) = 0;
            GB(u8, 0xF23) = 0xFF;
            GB(u8, 0xF24) = 0x50;
            GB(s8, 0xF25) = 0x14;
            GB(s8, 0xF26) = -0x1E;
            GB(s8, 0xF27) = -0x7D;
            GB(u8, 0xF28) = 0x32;
            GB(u8, 0xF29) = 0xFF;
            GB(u8, 0xF2A) = 0x96;
            GB(u8, 0xF2B) = 0;
            GB(s8, 0xF2C) = -0x1E;
            GB(u8, 0xF2D) = 0x7D;
            GB(u8, 0xF2E) = 0x14;
            GB(u8, 0xF32) = 0;
            GB(u8, 0xF33) = 0;
            GB(u8, 0xF34) = 0;
            GB(u8, 0xF35) = 0xB9;
            GB(f32, 0x29C) = 5.0f;
            GB(f32, 0x2A0) = 1800.0f;
            arg0->unk3C = 0;
            func_800058DC(arg0, func_8024E230);
        }
    }
}
