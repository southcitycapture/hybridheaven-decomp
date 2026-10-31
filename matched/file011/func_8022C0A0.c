#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];


typedef struct func_8022C0A0_StructB { u8 pad0[6]; u8 unk6; } func_8022C0A0_StructB;
typedef struct func_8022C0A0_Struct {
    u8 pad0[6]; s16 unk6; u8 pad8[2]; s16 unkA;
    u8 pad0C[0x42-0xC]; s16 unk42; s16 unk44;
    u8 pad46[0x2D4-0x46]; func_8022C0A0_StructB *unk2D4; u8 unk2D8; u8 pad2D9; u8 unk2DA;
    u8 pad2DB[0x300-0x2DB]; s16 unk300; s16 unk302;
} func_8022C0A0_Struct;

void func_8022C0A0(void) {
    func_8022C0A0_Struct *p;
    s32 a0;
    register s32 a1;
    s32 t;

    t = D_801BBBF0[0x1030];
    if (t == 0) {
        p = (func_8022C0A0_Struct *)D_801BC03C;
    } else {
        p = (func_8022C0A0_Struct *)D_801BC3D8;
    }
    if (p->unk2D8 != 0xB && p->unk2D8 != 0xC && p->unk2D8 != 0xA) {
        a0 = 0x64;
        if ((p->unk2D8 == 2 || (p->unk2D8 >= 4 && p->unk2D8 < 8)) && p->unk2DA == 0) {
            a0 = 0x46;
        }
        a1 = p->unk6;
        p->unk302 = p->unkA;
        p->unk300 = a1;
        if (a1 >= a0) {
            p->unk44 = a0;
        } else {
            p->unk44 = a1;
        }
        if ((p->unk2D8 == 2 || (p->unk2D8 >= 4 && p->unk2D8 < 9)) &&
            ((s32)p == (s32)D_801BBBF0 + 0x44C || *(u16 *)(D_801BBBF0 + 0x2C) == 0xA || *(u16 *)(D_801BBBF0 + 0x2C) == 0xB)) {
            a0 = (u8)(a1 = p->unk2D4->unk6);
            t = p->unkA;
            if (t >= a0) {
                p->unk42 = a0;
                return;
            }
            p->unk42 = t;
        }
    } else {
        p->unk300 = p->unk6;
        p->unk44 = 0x64;
    }
}
