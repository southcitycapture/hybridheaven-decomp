#include "context.h"

typedef struct func_8036780C_Struct {
    u8 pad0[0x32];
    u16 bf:3;
    u16 rest:13;
    u8 pad34[0x2D8 - 0x34];
    u8 unk2D8;
    u8 pad2D9;
    u8 unk2DA;
} func_8036780C_Struct;

extern void func_80374F04(s32, f32);
extern void func_80368374(s32, s32);
void func_8036920C(s32 arg0, s32 arg1);
extern u8 D_80387254;
extern u8 D_801BBBF0[];
extern struct func_80369094_Struct D_801BC03C;
extern struct func_80369094_Struct D_801BC3D8;
extern void func_800058DC(s32, void *);

void func_8036780C(s32 arg0, s32 arg1) {
    s32 other;
    func_8036780C_Struct *v1;
    func_8036780C_Struct *v0;

    if (arg0 != *(s32 *)(D_801BBBF0 + 0xDC)) {
        other = *(s32 *)(D_801BBBF0 + 0xDC);
    } else {
        other = *(s32 *)(D_801BBBF0 + 0xEC);
    }
    if (arg0 == *(s32 *)(D_801BBBF0 + 0xDC)) {
        v1 = (func_8036780C_Struct *)&D_801BC03C;
    } else {
        v1 = (func_8036780C_Struct *)&D_801BC3D8;
    }
    if (arg0 != *(s32 *)(D_801BBBF0 + 0xDC)) {
        v0 = (func_8036780C_Struct *)&D_801BC03C;
    } else {
        v0 = (func_8036780C_Struct *)&D_801BC3D8;
    }
    D_80387254 = 0;
    v0->bf = 0;
    v1->bf = v0->bf;
    if (v1->unk2DA != 0 || v0->unk2D8 == 0x12) {
        func_80374F04(arg0, 1.0f);
        func_800058DC(arg0, func_80368374);
        func_800058DC(other, func_80368374);
        return;
    }
    func_800058DC(arg0, func_8036920C);
    func_800058DC(other, func_8036920C);
}
