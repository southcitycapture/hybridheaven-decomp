#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
typedef struct func_80358964_StructA {
    u8 pad0[0x30];
    u8 unk30;
    u8 pad1[0x4C - 0x31];
    s16 unk4C;
} func_80358964_StructA;
extern func_80358964_StructA *D_8038CC10;
extern void *func_80005670(void *, void *);
void func_800058DC(void *arg0, void *arg1);
extern void func_80359858();
void func_8035991C(void *arg0, s32 arg1);
typedef struct func_8035991C_Globals {
    u8 pad0[0xDC];
    void *unkDC;
    u8 pad1[0xEC - 0xE0];
    void *unkEC;
} func_8035991C_Globals;
typedef struct func_8035A434_Struct {
    u8 pad0[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
} func_8035A434_Struct;

extern void func_801CC9B0(void *);
extern void func_803596BC();
extern u8 D_80385540[];

void func_80359560(void *arg0)
{
    void *other;
    func_8035A434_Struct *state;
    u8 type;

    if (arg0 != ((func_8035991C_Globals *) D_801BBBF0)->unkDC) {
        other = ((func_8035991C_Globals *) D_801BBBF0)->unkDC;
    } else {
        other = ((func_8035991C_Globals *) D_801BBBF0)->unkEC;
    }

    if (arg0 == ((func_8035991C_Globals *) D_801BBBF0)->unkDC) {
        state = (func_8035A434_Struct *) D_801BC03C;
    } else {
        state = (func_8035A434_Struct *) D_801BC3D8;
    }
    type = state->unk2D9;
    switch (type) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 16:
    case 17:
    case 18:
    case 30:
    case 31:
    case 32:
        func_801CC9B0(arg0);
        return;
    case 13:
    case 14:
    case 15:
    case 33:
    case 34:
        D_8038CC10 = func_80005670(arg0, D_80385540);
        func_800058DC(arg0, func_803596BC);
        break;
    case 19:
    case 35:
    case 36:
    case 37:
        D_8038CC10 = func_80005670(other, D_80385540);
        func_800058DC(arg0, func_8035991C);
        break;
    default:
        func_800058DC(arg0, func_80359858);
        break;
    }
    D_8038CC10->unk30 = type;
}
