#include "context.h"

typedef struct func_80228D90_StructAngle {
    u8 pad[0x12];
    s16 angle;
} func_80228D90_StructAngle;
typedef struct func_80228D90_StructObj {
    u8 pad[0x2C];
    func_80228D90_StructAngle *unk2C;
} func_80228D90_StructObj;
typedef struct func_80228D90_StructMid {
    u8 pad[0x24];
    func_80228D90_StructObj *unk24;
} func_80228D90_StructMid;
typedef struct func_80228D90_StructInner {
    u8 pad[0xC];
    func_80228D90_StructMid *unkC;
} func_80228D90_StructInner;
typedef struct func_80228D90_StructArg {
    u8 pad[0xC];
    func_80228D90_StructInner *unkC;
} func_80228D90_StructArg;
typedef struct func_80228D90_StructGlobal {
    u8 pad[0xDC];
    func_80228D90_StructMid *unkDC;
    u8 pad1[0x75C - 0xE0];
    s16 unk75C;
    u8 pad2[0xAF8 - 0x75E];
    s16 unkAF8;
    u8 pad3[0xB98 - 0xAFA];
    s16 unkB98;
} func_80228D90_StructGlobal;

s32 func_80228D90(func_80228D90_StructArg *arg0) {
    s16 temp_a1;
    s16 var_a0;
    s16 var_v1;
    s16 angle;
    s32 temp_a2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1_2;
    s32 var_v1_3;
    func_80228D90_StructMid *temp_v1;

    angle = arg0->unkC->unkC->unk24->unk2C->angle;
    var_a0 = (arg0->unkC->unkC == ((func_80228D90_StructGlobal *)&D_801BBBF0)->unkDC) ? ((func_80228D90_StructGlobal *)&D_801BBBF0)->unk75C : ((func_80228D90_StructGlobal *)&D_801BBBF0)->unkAF8;
    var_v1 = (arg0->unkC->unkC == ((func_80228D90_StructGlobal *)&D_801BBBF0)->unkDC) ? ((func_80228D90_StructGlobal *)&D_801BBBF0)->unkB98 : ((func_80228D90_StructGlobal *)&D_801BBBF0)->unkB98 + 0x1000;
    temp_a1 = var_v1 - angle;
#define ANGLE_DIFF(x) (((x) & 0x1000) ? (((x) & 0x1FFF) - 0x2000) : ((x) & 0x1FFF))
    var_v1_3 = ANGLE_DIFF(temp_a1) < 0 ? -ANGLE_DIFF(temp_a1) : ANGLE_DIFF(temp_a1);
    if (var_v1_3 < var_a0) {
        return 1;
    }
    return 0;
}
