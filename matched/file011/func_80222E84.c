#include "context.h"

struct func_8021F9C8_Actor;
void func_80222FCC(s32 arg0, s32 arg1);
void func_80222FD8(struct func_8021F9C8_Actor *arg0, s32 arg1);

typedef struct {
    u8 pad0[0x2C];
    u16 unk2C;
    u8 pad2E[0xDC - 0x2E];
    s32 unkDC;
    u8 padE0[0xB9A - 0xE0];
    s16 unkB9A;
    u8 padB9C[0x1031 - 0xB9C];
    u8 unk1031;
} func_80222E84_Dev;

typedef struct {
    u8 pad0[0x74];
    u8 unk74;
} func_80222E84_Sub;

typedef struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    func_80222E84_Sub *unk5C;
} func_80222E84_Actor;

#define DV ((func_80222E84_Dev *)&D_801BBBF0)
#define ACT ((func_80222E84_Actor *)arg0)
#define P ((func_80222B08_Struct *)p)

void func_80222E84(s32 arg0, s32 arg1) {
    s32 pad24;
    func_80222E84_Sub *sub;
    s32 p;
    s32 pad18;
    s32 id;

    sub = ACT->unk5C;
    p = DV->unkDC;
    if (arg0 == p) {
        p = (s32)&D_801BC03C;
    } else {
        p = (s32)&D_801BC3D8;
    }
    P->b = 1;
    P->c = 0;
    P->a = 1;
    if (p) {
    }
    if (DV->unk1031 != 0xF && DV->unk1031 >= 0xA) {
        func_802237B0(arg0, 0);
        func_8013C6FC(arg0, arg1, 0);
        func_8013B808(arg0, arg1, 3);
        if (DV->unk2C != 0xA && sub->unk74 == 3) {
            id = ACT->unk36;
            if (p) {
            }
            if (id == 0x148 || id == 0x11D || id == 0x11E) {
                P->b = 3;
                func_800058DC(arg0, func_80222FCC);
                return;
            } else {
                DV->unkB9A = 0;
                func_800058DC(arg0, func_80222FD8);
                return;
            }
        } else {
        }
        P->b = 3;
        func_800058DC(arg0, func_80222FCC);
    }
}
