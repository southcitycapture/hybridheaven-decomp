#include "context.h"

typedef struct func_8037470C_StructCam {
    u8 pad0[0x30];
    f32 unk30;
    f32 unk34;
    f32 unk38;
    f32 unk3C;
    f32 unk40;
    f32 unk44;
} func_8037470C_StructCam;

typedef struct func_8037470C_StructCamOwner {
    u8 pad0[0x2C];
    func_8037470C_StructCam *unk2C;
} func_8037470C_StructCamOwner;

typedef struct func_8037470C_StructNew {
    u8 pad0[0x2C];
    void *unk2C;
    u16 unk30;
    u16 unk32;
    u8 pad34[0x42 - 0x34];
    s16 unk42;
    u8 pad44[0x4C - 0x44];
    s8 unk4C;
    u8 pad4D[3];
    f32 unk50;
    u8 pad54[0x5C - 0x54];
    u16 unk5C;
    u16 unk5E;
    f32 unk60;
    f32 unk64;
    f32 unk68;
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    f32 unk78;
} func_8037470C_StructNew;

typedef struct func_8037470C_StructGlobal {
    u8 pad0[0xDC];
    void *unkDC;
    u8 padE0[0xE8 - 0xE0];
    func_8037470C_StructCamOwner *unkE8;
    u8 padEC[0x1118 - 0xEC];
    func_8037470C_StructNew *unk1118;
} func_8037470C_StructGlobal;

extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_80387C50[];
extern func_8037470C_StructNew *D_80005670(void *, u8 *, u8 *, void *);

void func_8037470C(void *arg0, u16 arg1, u16 arg2, f32 arg3) {
    u8 *var_a2;
    func_8037470C_StructNew *temp_v0;

    if (arg0 == ((func_8037470C_StructGlobal *)D_801BBBF0)->unkDC) {
        var_a2 = D_801BC03C;
    } else {
        var_a2 = D_801BC3D8;
    }
    if (((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118 == NULL) {
        ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118 = temp_v0 = D_80005670((void *)((s32)arg0 * 1), D_80387C50, var_a2, arg0);
        if (temp_v0 != NULL) {
            temp_v0->unk2C = arg0;
            ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk30 = arg1;
            ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk32 = arg2;
            if ((*(u32 *)(var_a2 + 0x30) << 9 >> 30) == 3) {
                ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk4C = 1;
            } else {
                ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk4C = 0;
            }
            ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk50 = arg3;
            ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk42 = 0;
            ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk5C = 0;
            ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk5E = 0;
            ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk60 = ((func_8037470C_StructGlobal *)D_801BBBF0)->unkE8->unk2C->unk30;
            ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk64 = ((func_8037470C_StructGlobal *)D_801BBBF0)->unkE8->unk2C->unk34;
            ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk68 = ((func_8037470C_StructGlobal *)D_801BBBF0)->unkE8->unk2C->unk38;
            ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk6C = ((func_8037470C_StructGlobal *)D_801BBBF0)->unkE8->unk2C->unk3C;
            ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk70 = ((func_8037470C_StructGlobal *)D_801BBBF0)->unkE8->unk2C->unk40;
            ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk74 = ((func_8037470C_StructGlobal *)D_801BBBF0)->unkE8->unk2C->unk44;
            ((func_8037470C_StructGlobal *)D_801BBBF0)->unk1118->unk78 = 35.0f;
        }
    }
}
