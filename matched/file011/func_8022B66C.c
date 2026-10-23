#include "context.h"

typedef struct func_8022B66C_Struct {
    u8 pad0[0x42];
    s16 unk42;
    u8 pad44[0x2D8 - 0x44];
    u8 unk2D8;
    u8 pad2D9[0x2DB - 0x2D9];
    u8 unk2DB;
    u8 pad2DC[0x2DF - 0x2DC];
    u8 unk2DF;
    u8 unk2E0[8];
    u8 unk2E8;
    u8 pad2E9[0x2F0 - 0x2E9];
    u8 unk2F0;
    u8 unk2F1;
    u8 pad2F2[0x2F4 - 0x2F2];
    f32 unk2F4;
} func_8022B66C_Struct;

typedef struct func_8022B66C_Obj2 {
    u8 pad0[0x9C];
    u8 unk9C;
} func_8022B66C_Obj2;

typedef struct func_8022B66C_Obj {
    u8 pad0[0x5C];
    func_8022B66C_Obj2 *unk5C;
} func_8022B66C_Obj;

typedef struct func_8022B66C_G {
    u8 pad0[0xDC];
    func_8022B66C_Obj *unkDC;
    u8 padE0[0xEC - 0xE0];
    func_8022B66C_Obj *unkEC;
    u8 padF0[0x1030 - 0xF0];
    u8 unk1030;
} func_8022B66C_G;

#define G8022B66C ((func_8022B66C_G *)D_801BBBF0)

extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern f32 func_803618B0(void *);

s32 func_8022B66C(s32 arg0) {
    u8 *base;
    func_8022B66C_Struct *a3;
    func_8022B66C_Struct *a1;
    func_8022B66C_Obj2 *v1;
    u8 i;
    u8 flag;
    extern void func_80232E94();

    if (G8022B66C->unk1030 == 0) {
        a3 = (func_8022B66C_Struct *)D_801BC03C;
    } else {
        a3 = (func_8022B66C_Struct *)D_801BC3D8;
    }
    base = (u8 *)a3 - 0x44C;
    if (base == D_801BBBF0) {
        a1 = (func_8022B66C_Struct *)D_801BC3D8;
    } else {
        a1 = (func_8022B66C_Struct *)D_801BC03C;
    }
    if (arg0 == (s32)G8022B66C->unkDC) {
        v1 = G8022B66C->unkEC->unk5C;
    } else {
        v1 = G8022B66C->unkDC->unk5C;
    }
    flag = 0;
    if (a3->unk2E8 == 2) {
        if (base == D_801BBBF0) {
            base = (u8 *)G8022B66C->unkDC;
        } else {
            base = (u8 *)G8022B66C->unkEC;
        }
        a3->unk2F4 = func_803618B0(base);
        a1->unk2F0 = 0;
        a1->unk2DB = a1->unk2F1;
        if (v1->unk9C == 2) {
            v1->unk9C = 3;
        }
        for (i = 0; i < a3->unk2DF; i++) {
            if (a3->unk2E0[i] < 6 && flag == 0) {
                a1->unk42 = 10;
                flag++;
            }
            if (a3->unk2E0[i] < 6) {
                a1->unk2F0 |= 2;
            } else if (a3->unk2E0[i] == 6) {
                a1->unk2F0 |= 1;
            } else if (a3->unk2E0[i] < 10) {
                a1->unk2F0 |= 8;
            } else if (a3->unk2E0[i] < 13) {
                a1->unk2F0 |= 4;
            } else if (a3->unk2E0[i] < 16) {
                a1->unk2F0 |= 0x20;
            } else {
                a1->unk2F0 |= 0x10;
            }
        }
        a3->unk2DF = 0;
        for (i = 0; i < 6; i++) {
            if (a1->unk2F0 & (1 << i)) {
                a3->unk2DF++;
            }
        }
        a1->unk2DF = a3->unk2DF;
        if (a1->unk2D8 == 13 && a1->unk2DB != 0) {
            a3->unk42 = 10;
        }
        a3->unk2E8 = 3;
        func_80232E94(arg0, a1);
        return 1;
    }
    return 0;
}
