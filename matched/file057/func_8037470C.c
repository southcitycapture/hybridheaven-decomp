#include "common.h"
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_801BBBF0[];
typedef struct func_80374F04_StructCam {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_80374F04_StructCam;
typedef struct func_80374F04_StructCamOwner {
    u8 pad0[0x2C];
    func_80374F04_StructCam *unk2C;
} func_80374F04_StructCamOwner;
typedef struct func_80374F04_StructEnt {
    u8 unk0;
    u8 unk1;
    u8 pad2[2];
    u16 unk4;
    u8 pad6[2];
    u16 *unk8;
    u16 *unkC;
    u16 *unk10;
} func_80374F04_StructEnt;
typedef struct func_80374F04_StructObj {
    u8 pad0[0x24];
    struct func_80374F04_StructObj *unk24;
    u8 pad28[0x2C - 0x28];
    void *unk2C;
    u8 pad30[0x5C - 0x30];
    u8 *unk5C;
} func_80374F04_StructObj;
typedef struct func_80374F04_StructNew {
    u8 pad0[0x2C];
    func_80374F04_StructObj *unk2C;
    u8 pad30[4];
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    s16 unk40;
    s16 unk42;
    f32 unk44;
    f32 unk48;
    s8 unk4C;
    u8 pad4D[3];
    f32 unk50;
    func_80374F04_StructEnt *unk54;
    u16 *unk58;
    u16 unk5C;
    u16 unk5E;
    f32 unk60;
    f32 unk64;
    f32 unk68;
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    f32 unk78;
} func_80374F04_StructNew;
typedef struct func_80374F04_StructGlobal {
    u8 pad0[0x1B];
    u8 unk1B;
    u8 pad1C[0xDC - 0x1C];
    func_80374F04_StructObj *unkDC;
    u8 padE0[0xE8 - 0xE0];
    func_80374F04_StructCamOwner *unkE8;
    func_80374F04_StructObj *unkEC;
    u8 padF0[0x1118 - 0xF0];
    func_80374F04_StructNew *unk1118;
} func_80374F04_StructGlobal;
#define G ((func_80374F04_StructGlobal *)D_801BBBF0)
#define NEW (*(func_80374F04_StructNew **)(D_801BBBF0 + 0x1118))
typedef struct func_80374F04_StructPos {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_80374F04_StructPos;
extern func_80374F04_StructNew *func_80005670(func_80374F04_StructObj *, u8 *, func_80374F04_StructPos *);


extern u8 D_80387C50[];

void func_8037470C(func_80374F04_StructObj *arg0, u16 arg1, u16 arg2, f32 arg3) {
    u8 *var_a2;

    if (arg0 == G->unkDC) {
        var_a2 = D_801BC03C;
    } else {
        var_a2 = D_801BC3D8;
    }
    if (G->unk1118 == NULL) {
        NEW = func_80005670(arg0, D_80387C50, (func_80374F04_StructPos *)var_a2);
        if (NEW != NULL) {
            NEW->unk2C = arg0;
            *(u16 *)&G->unk1118->pad30[0] = arg1;
            *(u16 *)&G->unk1118->pad30[2] = arg2;
            if ((*(u32 *)(var_a2 + 0x30) << 9 >> 30) == 3) {
                G->unk1118->unk4C = 1;
            } else {
                G->unk1118->unk4C = 0;
            }
            G->unk1118->unk50 = arg3;
            G->unk1118->unk42 = 0;
            G->unk1118->unk5C = 0;
            G->unk1118->unk5E = 0;
            G->unk1118->unk60 = G->unkE8->unk2C->unk30;
            G->unk1118->unk64 = G->unkE8->unk2C->unk34;
            G->unk1118->unk68 = G->unkE8->unk2C->unk38;
            G->unk1118->unk6C = G->unkE8->unk2C->unk3C;
            G->unk1118->unk70 = G->unkE8->unk2C->unk40;
            G->unk1118->unk74 = G->unkE8->unk2C->unk44;
            G->unk1118->unk78 = 35.0f;
        }
    }
}
