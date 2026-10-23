#include "context.h"

typedef struct func_801DA304_StructPos {
    u8 pad[6];
    s16 x, y, z;
} func_801DA304_StructPos;
typedef struct func_801DA304_StructObj {
    u8 pad[0x38];
    func_801DA304_StructPos *unk38;
    u8 pad3C[0x90 - 0x3C];
    u8 unk90;
    u8 pad91[2];
    u8 unk93;
    f32 unk94;
    u8 pad98[4];
    u8 unk9C;
} func_801DA304_StructObj;
typedef struct func_801DA304_StructTable {
    u8 pad[6];
    u16 unk6;
    f32 unk8;
    u8 padC[6];
    u16 unk12;
} func_801DA304_StructTable;
extern void func_801FC830(f32, f32, f32, f32, s32);
extern s32 func_80133A24(s32);
extern func_801D8948_Struct14 D_8018294C[];

s32 func_801DA304(func_801DA304_StructObj *arg0, func_801D8948_Struct24 **arg1) {
    u8 state;
    u32 effect;
    func_801DA304_StructPos *pos;
    func_801D8948_Struct30 *p;
    func_801D8948_Struct30 *p1;
    func_801D8948_Struct30 *p2;
    f32 value;

    state = arg0->unk93;
    if (state == 0) goto state0;
    if (state == 1) goto state1;
    if (state != 2) goto done;
    goto done;
    state0:
    {
        if (arg0->unk9C == 5) {
            if (func_80133A24(0x171) != 0) {
                arg0->unk93 = 2;
                arg0->unk94 = 0.0f;
                arg1[0]->unk30->unk8 = (f32)(u32)D_8018294C[arg0->unk90].unk6 / 3.0;
                arg1[1]->unk30->unk8 = (2.0 * (f32)(u32)D_8018294C[arg0->unk90].unk6) / 3.0;
                arg1[2]->unk30->unk8 = (f32)(u32)D_8018294C[arg0->unk90].unk6;
            }
        } else if (func_80133A24(0x172) != 0) {
            arg0->unk93 = 2;
            arg0->unk94 = 0.0f;
            arg1[0]->unk30->unk8 = (f32)(u32)D_8018294C[arg0->unk90].unk6 / 3.0;
            arg1[1]->unk30->unk8 = (2.0 * (f32)(u32)D_8018294C[arg0->unk90].unk6) / 3.0;
            arg1[2]->unk30->unk8 = (f32)(u32)D_8018294C[arg0->unk90].unk6;
        }
    }
    goto done;
    state1:
    {
        if (arg0->unk94 == 0.0f) {
            effect = ((func_801DA304_StructTable *)D_8018294C)[arg0->unk90].unk12;
            if (effect != 0) {
                pos = arg0->unk38;
                func_801FC830((f32)pos->x / 10.0, (f32)pos->y / 10.0, (f32)pos->z / 10.0, 500.0f, effect);
            }
        }
        p = arg1[0]->unk30;
        p->unk8 += (f64)D_8018294C[arg0->unk90].unk8 / 3.0;
        p1 = arg1[1]->unk30;
        p1->unk8 += (2.0 * (f64)D_8018294C[arg0->unk90].unk8) / 3.0;
        p2 = arg1[2]->unk30;
        p2->unk8 += (f64)D_8018294C[arg0->unk90].unk8;
        effect = (u32)&((func_801DA304_StructTable *)D_8018294C)[arg0->unk90];
        value = (f64)arg0->unk94 + (f64)((func_801DA304_StructTable *)effect)->unk8;
        arg0->unk94 = value;
        if ((f32)(u32)((func_801DA304_StructTable *)effect)->unk6 <= value) {
            arg0->unk93 = 2;
            arg0->unk94 = 0.0f;
        }
    }
    done:
    return 1;
}
