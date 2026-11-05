#include "common.h"
extern u8 D_801842A0[];
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern void func_800058DC();
void func_803602D4(s32 arg0, s32 arg1);
void func_80360AA8(void *arg0, s32 arg1);
extern void func_80360D0C();
typedef struct func_8036104C_Node {
    u8 pad0[6];
    s16 unk6;
    struct func_8036104C_Node *unk8;
} func_8036104C_Node;
typedef struct func_8036104C_Sub {
    u8 pad0[0x7C];
    func_8036104C_Node *unk7C;
    s16 unk80;
    u16 unk82;
} func_8036104C_Sub;
typedef struct func_8036104C_Arg {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad1[0x5C - 0x38];
    func_8036104C_Sub *unk5C;
} func_8036104C_Arg;
void func_8036104C(func_8036104C_Arg *arg0, s32 arg1);

extern void func_80011198(s32, void *);
extern void func_8021B790(void);

typedef struct func_80360818_StructFlags {
    u8 pad0[2];
    u16 unk2;
} func_80360818_StructFlags;

typedef struct func_80360818_StructData {
    u8 pad0[0xC];
    u16 unkC;
    u8 padE[0x84 - 0xE];
    u8 unk84;
} func_80360818_StructData;

typedef struct func_80360818_StructArg {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    func_80360818_StructData *unk5C;
    u8 pad60[8];
    func_80360818_StructFlags *unk68;
} func_80360818_StructArg;

typedef struct func_80360818_StructTable {
    u8 data[0x1C];
} func_80360818_StructTable;

typedef struct func_80360818_StructState {
    u8 pad0[0x32];
    u8 bits32 : 3;
    u8 rest32 : 5;
    u8 pad33[0x44 - 0x33];
    s16 unk44;
    u8 pad46[0x2D4 - 0x46];
    func_80360818_StructTable *unk2D4;
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2DA[3];
    u8 unk2DD;
    u8 unk2DE;
    u8 pad2DF[0x2E8 - 0x2DF];
    u8 unk2E8;
    u8 pad2E9[3];
    f32 unk2EC;
    u8 pad2F0[4];
    f32 unk2F4;
    u8 pad2F8[0x32C - 0x2F8];
    u8 unk32C;
    u8 pad32D[0x391 - 0x32D];
    u8 unk391;
    u8 pad392;
    u8 unk393;
    u8 unk394;
} func_80360818_StructState;

typedef struct func_80360818_StructGlobals {
    u8 pad0[0x2C];
    u16 unk2C;
    u8 pad2E[0xDC - 0x2E];
    func_80360818_StructArg *unkDC;
    u8 padE0[0x1030 - 0xE0];
    u8 unk1030;
} func_80360818_StructGlobals;

#define G_80360818 ((func_80360818_StructGlobals *)D_801BBBF0)
#define ARG_80360818 ((func_80360818_StructArg *)arg0)

void func_80360818(s32 arg0, s32 arg1) {
    func_80360818_StructState *state;
    func_80360818_StructState *other;
    func_80360818_StructData *data;
    func_80360818_StructFlags *flags;

    if (ARG_80360818 == G_80360818->unkDC) {
        state = (func_80360818_StructState *)D_801BC03C;
    } else {
        state = (func_80360818_StructState *)D_801BC3D8;
    }
    if (ARG_80360818 != G_80360818->unkDC) {
        other = (func_80360818_StructState *)D_801BC03C;
    } else {
        other = (func_80360818_StructState *)D_801BC3D8;
    }
    data = ARG_80360818->unk5C;
    flags = ARG_80360818->unk68;
    state->unk2E8 = 0;
    state->unk32C = 0;
    state->bits32 = 0;
    state->unk2DE = 0;
    state->unk394 = 0;
    state->unk2EC = 1.0f;
    func_803602D4(arg0, arg1);
    data->unk84 = 0;
    if (G_80360818->unk2C == 10 && (flags->unk2 & 4)) {
        if (data->unkC >= 0x18 && state->unk2D8 == 1) {
            state->unk2D9 = 0x23;
            state->unk2D4 = &((func_80360818_StructTable *)D_801842A0)[state->unk2D9];
        }
        if (ARG_80360818->unk36 == 0xF3 || ARG_80360818->unk36 == 0x149) {
            state->unk391 = 1;
            state->unk44 += 10;
        }
    }
    if (ARG_80360818->unk36 == 0x11D) {
        if (state->unk2D9 != 0x24) {
            state->unk2D9 = 0x24;
        }
    } else {
        if (state->unk2D9 == 0x24) {
            state->unk2D9 = 8;
        }
        if (state->unk2D9 == 0x23 && data->unkC < 0x18) {
            state->unk2D9 = 8;
        }
    }
    state->unk2F4 = 0.0f;
    func_80011198(arg1, data);
    func_8021B790();
    if (other->unk393 != 0 || other->unk2D8 == 0xC) {
        if (ARG_80360818 != G_80360818->unkDC) {
            G_80360818->unk1030 = 0;
        } else {
            G_80360818->unk1030 = 1;
        }
        state->unk2DD = 1;
        func_800058DC(ARG_80360818, func_80360AA8);
        return;
    }
    if (ARG_80360818 == G_80360818->unkDC) {
        G_80360818->unk1030 = 0;
    } else {
        G_80360818->unk1030 = 1;
    }
    if (state->unk391 != 0) {
        func_800058DC(ARG_80360818, func_80360D0C);
        return;
    }
    func_800058DC(ARG_80360818, func_8036104C);
}
