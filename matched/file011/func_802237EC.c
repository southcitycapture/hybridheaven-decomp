#include "context.h"

typedef struct func_802237EC_G {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1030 - 0xE0];
    u8 unk1030;
} func_802237EC_G;

typedef struct func_802237EC_W { s32 v; } func_802237EC_W;
typedef struct func_802237EC_C {
    u8 pad0[0x30];
    func_802237EC_W unk30;
    func_802237EC_W unk34;
    func_802237EC_W unk38;
    func_802237EC_W unk3C;
} func_802237EC_C;

typedef struct func_802237EC_S {
    u8 pad0[0x30];
    u8 a30:1;
    u8 m30:6;
    u8 b30:1;
    u8 m31:5;
    u8 l31:3;
    u8 pad32[0x324 - 0x32];
    s32 unk324;
} func_802237EC_S;

typedef struct func_802237EC_T {
    u8 pad0[0x2C];
    void *unk2C;
    u8 pad30[0x90 - 0x30];
    void *unk90;
    s32 unk94;
    void *unk98;
    void *unk9C;
} func_802237EC_T;

typedef struct func_802237EC_P {
    u8 pad0[0x1C];
    s32 unk1C;
    u8 pad20[0x5C - 0x20];
    struct func_802237B0_Struct *unk5C;
    u8 pad60[0x68 - 0x60];
    s32 unk68;
} func_802237EC_P;

void func_8022696C(void);
void *func_80005670(void *arg0, void *arg1);
extern void *func_80242E58(void *);
extern void func_800058DC(void *, void *);
extern u8 D_8023E3C4[];
extern u8 func_802208B0[];
extern struct func_802253B8_Struct D_801BBBF0;

void func_802237EC(func_802237EC_P *arg0) {
    struct func_802237B0_Struct *sp34;
    s32 sp30;
    func_802237EC_S *a2;
    func_802237EC_S *v1;
    func_802237EC_T *r;
    func_802237EC_T *sp20;

    sp34 = arg0->unk5C;
    sp30 = arg0->unk68;
    if ((s32)arg0 == D_801BBCCC) {
        a2 = (func_802237EC_S *)&D_801BC03C;
    } else {
        a2 = (func_802237EC_S *)&D_801BC3D8;
    }
    if ((s32)arg0 != D_801BBCCC) {
        v1 = (func_802237EC_S *)&D_801BC03C;
    } else {
        v1 = (func_802237EC_S *)&D_801BC3D8;
    }
    sp20 = NULL;
    func_8022696C();
    a2->unk324 = arg0->unk1C;
    func_802237B0((struct func_802237B0_Arg *)arg0, 0);
    if (sp34->unk74 == 2) {
        sp20 = func_80242E58(arg0);
    }
    r = func_80005670(*(void **)sp34, D_8023E3C4);
    if (r != NULL) {
        if (sp20 != NULL) {
            sp20->unk2C = r;
        }
        ((func_802237EC_C *)a2)->unk34 = ((func_802237EC_C *)a2)->unk30;
        ((func_802237EC_C *)a2)->unk3C = ((func_802237EC_C *)a2)->unk38;
        ((func_802237EC_C *)v1)->unk34 = ((func_802237EC_C *)v1)->unk30;
        ((func_802237EC_C *)v1)->unk3C = ((func_802237EC_C *)v1)->unk38;
        r->unk90 = sp34;
        r->unk94 = sp30;
        r->unk98 = a2;
        r->unk9C = v1;
        a2->l31 = 2;
        v1->l31 = 5;
        if ((s32)arg0 == ((func_802237EC_G *)&D_801BBBF0)->unkDC) {
            ((func_802237EC_G *)&D_801BBBF0)->unk1030 = 0;
        } else {
            ((func_802237EC_G *)&D_801BBBF0)->unk1030 = 1;
        }
        func_800058DC(arg0, func_802208B0);
    }
}
