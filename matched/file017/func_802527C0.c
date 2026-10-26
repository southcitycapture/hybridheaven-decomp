#include "common.h"
#define LP(p,l) LQ(p,l)
#define LQ(p,l) p##_##l
extern u8 D_801BBBF0[];
extern s32 D_8025DE10;
extern void func_800058DC();
extern void func_80020718(s32);
extern void func_801515B0(s32, s32, s32);
extern s32 func_801516CC(s32);
extern void func_801C4058(void *, s32, s32, s32);
typedef struct func_80252A54_A0 { u8 pad[0x3C]; u16 unk3C; } func_80252A54_A0;
typedef struct func_80252A54_In { u8 pad[0x4B]; u8 unk4B; } func_80252A54_In;
typedef struct func_80252A54_Nd { u8 pad[0x22]; u8 unk22; u8 pad23[0xD]; func_80252A54_In *unk30; } func_80252A54_Nd;
typedef struct func_80252A54_A1 { u8 pad[0x1C]; func_80252A54_Nd *unk1C; } func_80252A54_A1;
void func_80252A54(func_80252A54_A0 *arg0, func_80252A54_A1 *arg1);
extern void func_802538A4();
extern void func_80380F94(f32, f32, f32, f32, f32, f32, s32);


typedef struct func_802527C0_In { u8 pad0[4]; f32 unk4; u8 pad8[4]; f32 unkC; u8 pad10[2]; s16 unk12; } func_802527C0_In;
typedef struct func_802527C0_Obj { u8 pad[0x3C]; u16 unk3C; u8 pad3E[0x5A]; u8 unk98; } func_802527C0_Obj;
typedef struct func_802527C0_N { u8 pad[0x22]; u8 unk22; u8 pad23[0xD]; u8 *unk30; } func_802527C0_N;
typedef struct func_802527C0_A { u8 pad0[8]; func_802527C0_N *unk8; u8 padC[4]; func_802527C0_N *unk10; func_802527C0_N *unk14; func_802527C0_N *unk18; func_802527C0_N *unk1C; } func_802527C0_A;
typedef struct func_802527C0_Cam { u8 pad[0x2C]; func_802527C0_In *unk2C; } func_802527C0_Cam;
typedef struct func_802527C0_G { u8 pad[0xE0]; func_802527C0_Cam *unkE0; } func_802527C0_G;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);

void func_802527C0(func_802527C0_Obj *arg0, func_802527C0_A *arg1) {
    s32 i;
    s32 sp38;
    func_802527C0_In *p;

    sp38 = arg0->unk3C++;
    func_802538A4(arg0, arg1);
    func_801C4058(arg0, 0xBCA3D70A, 0xBE19999A, 0);
    if (arg0->unk98 < 0xFB) {
        arg0->unk98 += 4;
    }
    i = 0;
    if (func_801516CC(D_8025DE10) > 0) {
        do {
            func_801515B0(D_8025DE10, i & 0xFF, arg0->unk98);
            i += 1;
        } while (i < func_801516CC(D_8025DE10));
    }
    if (sp38 >= 0x34) {
        if (sp38 == 0x34) {
            func_80020718(0x186);
        }
        if (!(sp38 % 4)) {
            func_80380F94(150.0f, 0.0f, 125.0f, 0.0f, 0.0f, 0.0f, 0xB);
        }
        arg1->unk1C->unk30[0x4B] += 0x10;
        if (arg1->unk1C->unk30[0x4B] >= 0xF0) {
            arg1->unk1C->unk30[0x4B] = 0xFF;
            arg1->unk18->unk22 = 0;
            arg1->unk10->unk22 = 1;
            arg1->unk14->unk22 = 1;
            arg1->unk8->unk22 = 1;
            ((func_802527C0_G *)D_801BBBF0)->unkE0->unk2C->unk4 += func_8001EAD0(((func_802527C0_G *)D_801BBBF0)->unkE0->unk2C->unk12) * 20.0f;
            ((func_802527C0_G *)D_801BBBF0)->unkE0->unk2C->unkC += func_8001EB64(((func_802527C0_G *)D_801BBBF0)->unkE0->unk2C->unk12) * 20.0f;
            D_801BBBF0[0xF20] = 0x32;
            D_801BBBF0[0xF21] = 0x3E;
            D_801BBBF0[0xF22] = 0x1E;
            D_801BBBF0[0xF23] = 1;
            D_801BBBF0[0xF24] = 0x6E;
            D_801BBBF0[0xF25] = 1;
            D_801BBBF0[0xF26] = 6;
            ((s8 *)D_801BBBF0)[0xF27] = -0x7D;
            ((s8 *)D_801BBBF0)[0xF28] = -0xA;
            D_801BBBF0[0xF29] = 0xC8;
            D_801BBBF0[0xF2A] = 0xC8;
            D_801BBBF0[0xF2B] = 0xC8;
            D_801BBBF0[0xF2C] = 0xF;
            D_801BBBF0[0xF2D] = 0x51;
            ((s8 *)D_801BBBF0)[0xF2E] = -0x40;
            D_801BBBF0[0xF32] = 0;
            D_801BBBF0[0xF33] = 0;
            D_801BBBF0[0xF34] = 0;
            D_801BBBF0[0xF35] = 0xB9;
            *(f32 *)&D_801BBBF0[0x29C] = 5.0f;
            *(f32 *)&D_801BBBF0[0x2A0] = 200.0f;
            arg0->unk3C = 0;
            func_800058DC(arg0, func_80252A54);
        }
    }
}
