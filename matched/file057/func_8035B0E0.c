#include "common.h"
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
void func_800058DC(void *arg0, void *arg1);
void func_80020718(s32 arg0);
struct func_8035B270_S3 { u8 pad[4]; s32 f4; s32 f8; f32 fC; };
struct func_8035B270_S2 { u8 pad[0x2C]; struct func_8035B270_S3 *f2C; };
struct func_8035B270_S1 { u8 pad[0x24]; struct func_8035B270_S2 *f24; };
struct func_8035B270_S0 { u8 pad[0xC]; struct func_8035B270_S1 *fC; u8 pad2[0x2E]; u16 f3E; };
void func_8035B270(struct func_8035B270_S0 *arg0, s32 arg1);
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
void func_8035B438(func_8035B438_Struct *arg0, s32 arg1);
typedef struct func_8035B864_S2 {
    u8 pad0[4];
    s32 unk4;
    s32 unk8;
    f32 unkC;
} func_8035B864_S2;
typedef struct func_8035B864_S1 {
    u8 pad0[0x2C];
    func_8035B864_S2 *unk2C;
} func_8035B864_S1;
typedef struct func_8035B864_S0 {
    u8 pad0[0x24];
    func_8035B864_S1 *unk24;
} func_8035B864_S0;
typedef struct func_8035B864_Arg {
    u8 pad0[0xC];
    func_8035B864_S0 *unkC;
    u8 pad1[0x3E - 0x10];
    u16 unk3E;
} func_8035B864_Arg;
void func_8035B864(func_8035B864_Arg *arg0, s32 arg1);
typedef struct func_8035B9AC_Vec { s32 w[3]; } func_8035B9AC_Vec;
typedef struct func_8035B9AC_Obj {
    u8 pad[0xB0];
    func_8035B9AC_Vec a;
    func_8035B9AC_Vec b;
} func_8035B9AC_Obj;
typedef struct func_8035B9AC_Pos { u8 pad[4]; f32 unk4; f32 unk8; f32 unkC; } func_8035B9AC_Pos;
typedef struct func_8035B9AC_Holder {
    u8 pad0[0x24];
    struct { u8 pad[0x2C]; func_8035B9AC_Pos *p; } *unk24;
    u8 pad1[0x5C - 0x28];
    func_8035B9AC_Obj *unk5C;
} func_8035B9AC_Holder;
typedef struct func_8035B9AC_Arg {
    u8 pad0[0xC];
    func_8035B9AC_Holder *unkC;
    u8 pad1[0x3E - 0x10];
    u16 unk3E;
    u8 pad2[0x6C - 0x40];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
} func_8035B9AC_Arg;
void func_8035B9AC(func_8035B9AC_Arg *arg0, s32 arg1);
typedef struct func_8035BD6C_S0 { u8 pad0[4]; s32 f4; s32 f8; f32 fC; } func_8035BD6C_S0;
typedef struct func_8035BD6C_S3 { u8 pad0[0x2C]; func_8035BD6C_S0 *p; } func_8035BD6C_S3;
typedef struct func_8035BD6C_S2 { u8 pad0[0x24]; func_8035BD6C_S3 *p; } func_8035BD6C_S2;
typedef struct func_8035BD6C_O { u8 pad0[0xC]; func_8035BD6C_S2 *p; u8 pad1[0x2C]; u16 f3C; u16 f3E; } func_8035BD6C_O;
void func_8035BD6C(func_8035BD6C_O *arg0, s32 arg1);


typedef struct func_8035B0E0_Struct {
    u8 pad0[0xC];
    s32 unkC;
    u8 pad1[0x3C - 0x10];
    s16 unk3C;
    u8 pad2[0x40 - 0x3E];
    u8 unk40;
    u8 pad3[0x46 - 0x41];
    u16 unk46;
} func_8035B0E0_Struct;

typedef struct func_8035B0E0_StructState {
    u8 pad[0x2F8];
    u8 unk2F8;
} func_8035B0E0_StructState;

void func_8035B0E0(func_8035B0E0_Struct *arg0, s32 arg1) {
    func_8035B0E0_StructState *state;

    if (D_801BBCCC == arg0->unkC) {
        state = (func_8035B0E0_StructState *)D_801BC03C;
    } else {
        state = (func_8035B0E0_StructState *)D_801BC3D8;
    }
    if (state->unk2F8 != 0 && ++arg0->unk46 >= 10 && state->unk2F8 != 6) {
        switch (arg0->unk40) {
        case 1:
            func_80020718(0x105);
            func_800058DC(arg0, func_8035B270);
            return;
        case 2:
            func_80020718(0x106);
            func_800058DC(arg0, func_8035B438);
            return;
        case 3:
            func_80020718(0x108);
            func_800058DC(arg0, func_8035B9AC);
            return;
        case 4:
            arg0->unk40 = 4;
            func_80020718(0x109);
            arg0->unk3C = 0;
            func_800058DC(arg0, func_8035BD6C);
            return;
        case 0:
            break;
        }
        func_80020718(0x107);
        func_800058DC(arg0, func_8035B864);
    }
}
