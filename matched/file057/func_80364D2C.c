#include "context.h"

typedef struct func_80364D2C_Struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x2D8 - 0x38];
    u8 unk2D8;
    u8 unk2D9;
    u8 pad2DA[0x2F8 - 0x2DA];
    u8 unk2F8;
    u8 pad2F9[0x320 - 0x2F9];
    u8 unk320;
    u8 pad321[0x375 - 0x321];
    u8 unk375;
    u8 unk376;
} func_80364D2C_Struct;
typedef struct func_80364D2C_Struct4 {
    u16 t[3][3];
} func_80364D2C_Struct4;
typedef struct func_80364D2C_Vec {
    s32 x, y, z;
} func_80364D2C_Vec;

#define G80364D2C ((func_803643CC_Glob *)&D_801BBBF0)

extern u8 D_803643CC(s32, s32);
extern s32 D_80006214(s32);
extern void D_803709D0(s32, func_80364D2C_Vec, s32);
extern void D_80020718(s32);
extern void func_8036445C(s32, s32, u8, u8);
extern func_80364D2C_Struct4 D_803869EC;

void func_80364D2C(s32 arg0, s32 arg1) {
    s32 sp54;
    func_80364D2C_Struct *sp50;
    func_80364D2C_Struct *t0;
    func_80364D2C_Struct4 sp38;
    func_80364D2C_Vec sp2C;
    u8 v1;
    u8 v0;
    u8 sp29;

    if (arg0 != G80364D2C->unkDC) {
        sp54 = G80364D2C->unkDC;
    } else {
        sp54 = G80364D2C->unkEC;
    }
    if (arg0 == G80364D2C->unkDC) {
        sp50 = (func_80364D2C_Struct *)D_801BC03C;
    } else {
        sp50 = (func_80364D2C_Struct *)D_801BC3D8;
    }
    if (arg0 != G80364D2C->unkDC) {
        t0 = (func_80364D2C_Struct *)D_801BC03C;
    } else {
        t0 = (func_80364D2C_Struct *)D_801BC3D8;
    }
    sp38 = D_803869EC;
    if (sp50->unk2F8 != 0) {
        sp29 = D_803643CC(arg0, arg1);
        func_80006214(sp54);
        func_80360400(&sp2C, sp54, D_8008DA88);
        D_80006214(arg0);
        if (t0->unk2D8 == 0xA || t0->unk2D8 == 9) {
            if (t0->unk375 >= t0->unk376) {
                sp50->unk2F8 = 4;
            }
        }
        D_803709D0(arg0, sp2C, sp50->unk2F8);
        if (sp50->unk2F8 >= 6) {
            v1 = 0;
        } else if (sp50->unk2F8 >= 4) {
            v1 = 2;
        } else {
            v1 = (sp50->unk2F8 - 1) & 0xFF;
        }
        if (((func_80364D2C_Struct *)sp54)->unk36 == 0xF6 || ((func_80364D2C_Struct *)sp54)->unk36 == 0xF4 || ((func_80364D2C_Struct *)sp54)->unk36 == 0xF5) {
            D_80020718(0x229);
        } else {
            if (((func_80364D2C_Struct *)arg0)->unk36 == 0xF6 || ((func_80364D2C_Struct *)arg0)->unk36 == 0xF4 || ((func_80364D2C_Struct *)arg0)->unk36 == 0xF5) {
                v0 = 2;
            } else {
                v0 = (t0->unk2D9 < 0xE) ? 0 : 1;
            }
            D_80020718(sp38.t[v0][v1]);
        }
        func_8036445C(arg0, arg1, sp50->unk320, sp29);
    }
}
