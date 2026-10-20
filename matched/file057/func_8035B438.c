#include "context.h"
typedef struct func_8035B650_StructB {
    u8 pad0[4];
    s32 unk4;
    s32 unk8;
    f32 unkC;
} func_8035B650_StructB;
typedef struct func_8035B650_StructC {
    u8 pad0[0x24];
    func_8035B650_StructB *unk24;
} func_8035B650_StructC;
typedef struct func_8035B650_StructA {
    u8 pad0[0xC];
    func_8035B650_StructC *unkC;
    u8 pad1[0x3E - 0x10];
    u16 unk3E;
} func_8035B650_StructA;
void func_8035B650(func_8035B650_StructA *arg0, s32 arg1);

typedef struct func_8035B438_StructC {
    u8 pad[4];
    s32 unk4;
    s32 unk8;
    f32 unkC;
} func_8035B438_StructC;
typedef struct func_8035B438_StructB {
    u8 pad[0x2C];
    func_8035B438_StructC *unk2C;
} func_8035B438_StructB;
typedef struct func_8035B438_StructM {
    u8 pad[0x24];
    func_8035B438_StructB *unk24;
} func_8035B438_StructM;
typedef struct func_8035B438_Struct {
    u8 pad[0xC];
    func_8035B438_StructM *unkC;
    u8 pad2[0x3E - 0x10];
    u16 unk3E;
} func_8035B438_Struct;

extern f32 D_8038A06C;
extern f32 D_8038A070;
extern f32 D_8038A074;

void func_8035B438(func_8035B438_Struct *arg0, s32 arg1) {
    func_8035B438_StructC *v;

    u16 c;
    u16 d;

    v = arg0->unkC->unk24->unk2C;
    if (arg0->unk3E == 1) {
        func_801CE4D4(arg0, 0x23, v->unk4, v->unk8, v->unkC, 0xFF, 0xFF, 0xFF, 0x80, 0, 0x80, 0xA0, 0xC0, 0xFF, 0, 0xA, 0x32, D_8038A06C, 1);
    }
    if (arg0->unk3E++ >= 5) {
        func_801CE4D4(arg0, 0x2D, v->unk4, v->unk8, v->unkC, 0xFF, 0xFF, 0xFF, 0x80, 0, 0x80, 0xA0, 0xC0, 0xFF, 0, 1, 0x1E, D_8038A070, 4);
        func_801CE4D4(arg0, 0x24, v->unk4, v->unk8, v->unkC, 0xFF, 0xFF, 0xFF, 0xFF, 0, 0x80, 0xA0, 0xC0, 0xFF, 0, 1, 0x28, D_8038A074, 4);
        arg0->unk3E = 0;
        func_800058DC(arg0, func_8035B650);
    }
}
