#include "common.h"
typedef struct func_8036F898_StructA {
    u8 pad0[0xDC];
    void *unkDC;
    u8 pad1[0x1031 - 0xE0];
    u8 unk1031;
} func_8036F898_StructA;
extern struct func_8036F898_StructA D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern s32 func_802233B0();
void func_8036EA3C(void *arg0, void *arg1);
typedef struct func_8036EA80_Actor {
    u8 pad0[0x5C];
    void *unk5C;
} func_8036EA80_Actor;
void func_8036F084(func_8036EA80_Actor *arg0, void *arg1);
void func_8036F348(void *arg0, s32 arg1);

extern void func_8021FE14(void *, s32);

typedef struct func_8036E960_Struct {
    u8 pad0[2];
    s16 unk2;
    u8 pad1[0x30 - 4];
    u32 b0 : 1;
    u32 b1 : 2;
    u32 rest : 29;
    u8 pad2[0x390 - 0x34];
    u8 unk390;
} func_8036E960_Struct;

void func_8036E960(void *arg0, s32 arg1) {
    func_8036E960_Struct *state;

    if (arg0 == D_801BBBF0.unkDC) {
        state = (func_8036E960_Struct *)D_801BC03C;
    } else {
        state = (func_8036E960_Struct *)D_801BC3D8;
    }
    if (state->unk2 <= 0 || state->b1 != 0) {
        func_802233B0(arg0, arg1);
        return;
    }
    if (D_801BBBF0.unk1031 != 0xF) {
        switch (state->unk390) {
        case 1:
            func_8036EA3C(arg0, (void *)arg1);
            return;
        case 2:
            func_8036F348(arg0, arg1);
            return;
        case 3:
            break;
        case 4:
            func_8021FE14(arg0, arg1);
            return;
        case 5:
            func_8036F084((func_8036EA80_Actor *)arg0, (void *)arg1);
            break;
        }
    }
}
