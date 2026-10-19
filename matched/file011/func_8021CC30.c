#include "context.h"

typedef struct func_8021CC30_Struct {
    u8 pad[0xA0];
    f32 unkA0;
    f32 unkA4;
    f32 unkA8;
    s16 unkAC;
    u8 padAE[2];
    s16 unkB0;
} func_8021CC30_Struct;

typedef struct func_8021CC30_Struct2 {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_8021CC30_Struct2;
typedef struct func_8021CC30_Struct3 {
    u8 pad[0x2C];
    func_8021CC30_Struct2 *unk2C;
} func_8021CC30_Struct3;
typedef struct func_8021CC30_Struct4 {
    u8 pad[0x24];
    func_8021CC30_Struct3 *unk24;
} func_8021CC30_Struct4;
typedef struct func_8021CC30_Struct5 {
    func_8021CC30_Struct4 *unk0;
} func_8021CC30_Struct5;

struct func_8021CDE8_Struct;
void func_8021CE7C(struct func_8021CDE8_Struct *arg0, s32 arg1);
void func_8021D034(s32 arg0, s32 arg1);
void func_8021D72C(s32 arg0, s32 arg1);
extern void func_80146B04();
extern void func_802329F8();
extern u8 D_802176D0[];
extern u8 func_8021D040[];

void func_8021CC30(func_8021CC30_Struct *arg0, s32 arg1) {
    if (*(u16 *)(D_801BBBF0 + 0x2C) != 0xA && *(u16 *)(D_801BBBF0 + 0x2C) != 0xB) {
        if (*(s16 *)(D_801BBBF0 + 0x44E) <= 0) {
            func_80146B04();
            func_802329F8();
            D_801BBBF0[0x1031] = 0xB;
            if (((u8 *)&D_8017DD7C)[0x16] == 2 && ((u8 *)&D_8017DD7C)[0x17] != 0) {
                func_800058DC(arg0, func_8021D72C);
                return;
            }
            func_80005670(arg0, D_802176D0);
            func_800058DC(arg0, func_8021D034);
            return;
        }
        if (*(s16 *)(D_801BBBF0 + 0x7EA) <= 0) {
#define P (**(func_8021CC30_Struct5 **)(D_801BBBF0 + 0x448)).unk0->unk24->unk2C
            arg0->unkA0 = P->unk4;
            arg0->unkA4 = P->unk8;
            arg0->unkA8 = P->unkC;
            arg0->unkAC = P->unk12;
            arg0->unkB0 = 5;
            D_801BBBF0[0x1031] = 0xA;
            func_800058DC(arg0, func_8021CE7C);
        }
    } else {
        D_801BBBF0[0x1031] = 0xC;
        func_800058DC(arg0, func_8021D040);
    }
}
