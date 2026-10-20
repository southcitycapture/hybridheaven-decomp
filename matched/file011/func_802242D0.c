#include "context.h"
extern struct func_802253B8_Struct D_801BBBF0;
struct func_80224B64_Globals {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0xB98 - 0xF0];
    s16 unkB98;
};
struct func_802253B8_Struct {
    u8 pad0[0x2C];
    u16 unk2C;
    u8 pad1[0xDC - 0x2E];
    s32 unkDC;
};
typedef struct func_80225664_Struct {
    u8 pad0[0x10];
    f32 unk10;
    u8 pad14[0x30 - 0x14];
    s32 unk30;
} func_80225664_Struct;
extern func_80225664_Struct D_801BC03C;
extern func_80225664_Struct D_801BC3D8;

struct func_802242D0_StructC {
    u8 pad[0x12];
    s16 angle;
};
struct func_802242D0_StructB {
    u8 pad[0x2C];
    struct func_802242D0_StructC *unk2C;
};
struct func_802242D0_StructA {
    u8 pad[0x24];
    struct func_802242D0_StructB *unk24;
};

s32 func_802242D0(struct func_802242D0_StructA *arg0) {
    u8 *var_v1;
    s16 temp_a0;
    s16 var_v0;
    s16 angle;
    s32 temp_a2;
    s32 var_a0;
    s32 var_a1;
    s32 var_v0_2;
    s32 var_v0_3;

    if (arg0 == (void *)D_801BBBF0.unkDC) {
        var_v1 = (u8 *)&D_801BC03C;
    } else {
        var_v1 = (u8 *)&D_801BC3D8;
    }
    angle = arg0->unk24->unk2C->angle;
    if (arg0 == (void *)D_801BBBF0.unkDC) {
        var_v0 = ((struct func_80224B64_Globals *)&D_801BBBF0)->unkB98;
    } else {
        var_v0 = ((struct func_80224B64_Globals *)&D_801BBBF0)->unkB98 + 0x1000;
    }
    temp_a0 = var_v0 - angle;
    temp_a2 = temp_a0 & 0x1000;
    if (temp_a2 != 0) {
        var_a1 = temp_a0 & 0x1FFF;
        var_v0_2 = var_a1 - 0x2000;
    } else {
        var_a1 = temp_a0 & 0x1FFF;
        var_v0_2 = var_a1;
    }
    var_a0 = var_v0_2 < 0
        ? -(temp_a2 ? var_a1 - 0x2000 : var_a1)
        : (temp_a2 ? var_a1 - 0x2000 : var_a1);
    if (var_a0 < (*(s16 *)(var_v1 + 0x310) / 2)) {
        return 1;
    }
    return 0;
}
