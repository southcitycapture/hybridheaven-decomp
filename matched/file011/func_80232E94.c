#include "context.h"

typedef struct func_80232E94_Struct {
    u8 pad0[0x30];
    u8 unk30;
    u8 pad1[0x2D8 - 0x31];
    u8 unk2D8;
    u8 pad2[0x2DA - 0x2D9];
    u8 unk2DA;
    u8 pad3[0x396 - 0x2DB];
    u8 unk396;
} func_80232E94_Struct;
typedef struct func_80232E94_Obj2 {
    u8 pad0[0x9C];
    u8 unk9C;
} func_80232E94_Obj2;
typedef struct func_80232E94_Obj {
    u8 pad0[0x5C];
    func_80232E94_Obj2 *unk5C;
} func_80232E94_Obj;
typedef struct func_80232E94_G {
    u8 pad0[0xDC];
    func_80232E94_Obj *unkDC;
    u8 padE0[0xEC - 0xE0];
    func_80232E94_Obj *unkEC;
    u8 padF0[0x44C - 0xF0];
    func_80232E94_Struct unk44C;
    u8 pad7E8[0x1030 - 0x44C - sizeof(func_80232E94_Struct)];
    u8 unk1030;
} func_80232E94_G;
#define G ((func_80232E94_G *)D_801BBBF0)
extern u16 func_8022DB40(void *);
extern s32 func_8022F0E0(void *);
extern s32 func_80230DD4(s32, u16, s32, void *);
extern s32 func_80232D08(void *, u16);
extern s32 func_80379904();
extern s32 func_8037A884();

void func_80232E94(s32 arg0) {
    s32 pad;
    func_80232E94_Struct *var_a3;
    func_80232E94_Struct *var_s0;
    func_80232E94_Obj2 *var_a0;
    u16 sp26;

    if (G->unk1030 == 0) {
        var_s0 = (func_80232E94_Struct *)D_801BC03C;
    } else {
        var_s0 = (func_80232E94_Struct *)D_801BC3D8;
    }
    if (var_s0 == &G->unk44C) {
        var_a3 = (func_80232E94_Struct *)D_801BC3D8;
    } else {
        var_a3 = (func_80232E94_Struct *)D_801BC03C;
    }
    if (arg0 == (s32)G->unkDC) {
        var_a0 = G->unkEC->unk5C;
    } else {
        var_a0 = G->unkDC->unk5C;
    }
    if (var_s0->unk2D8 < 0xB || var_s0->unk2D8 == 0xF) {
        func_8022EE7C(arg0, (struct func_8022EE7C_Struct *)var_s0);
        sp26 = func_8022DB40(var_s0);
        func_80232D08(var_s0, func_80230DD4(arg0, sp26, func_8022F0E0(var_a3) & 0xFFFF, var_a3));
        if (var_a3->unk396 != 0) {
            var_a3->unk396 = 0;
            var_a3->unk30 = var_a3->unk30 & 0xFFE1;
        }
    } else if (var_s0->unk2DA != 0) {
        if (var_a0->unk9C == 2) {
            var_a0->unk9C = 3;
        }
        if (var_s0->unk2D8 == 0xC) {
            func_80379904(arg0, var_s0);
        }
        if (var_s0->unk2D8 == 0x13) {
            func_8037A884(arg0, var_s0);
        }
    }
}
