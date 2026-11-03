#include "common.h"
struct func_801F38B8_Node {
    u8 pad0[0x8];
    f32 unk8;
};
struct func_801F38B8_Mid {
    u8 pad0[0x2C];
    struct func_801F38B8_Node *unk2C;
};
struct func_801F38B8_Hi {
    u8 pad0[0x30];
    struct func_801F38B8_Node *unk30;
};
struct func_801F38B8_Lo {
    u8 pad0[0x24];
    struct func_801F38B8_Hi *unk24;
};
struct func_801F38B8_Obj {
    u8 pad0[0x64];
    struct func_801F38B8_Lo *unk64;
};
struct func_801F38B8_Base {
    u8 pad0[0xDC];
    struct func_801F38B8_Obj *unkDC;
    struct func_801F38B8_Mid *unkE0;
};
extern struct func_801F38B8_Base D_801BBBF0;
extern s32 D_801BBCD0;
extern void func_800058DC(void *, void *);
extern s32 func_8012AAE8(void *, s32, f32, s32, f32);
void func_801F28C4(s32 arg0, s32 arg1);
void func_801F38B8(f32 arg0);


struct func_801F2438_StructPos {
    u8 pad0[4]; s32 unk4; f32 unk8; s32 unkC;
    u8 pad10[2]; s16 unk12;
};
struct func_801F2438_StructMid {
    u8 pad0[0x30]; struct func_801F2438_StructPos *unk30;
};
struct func_801F2438_StructData {
    u8 pad0[8]; s16 unk8; u8 padA[6]; u32 unk10; u32 unk14; u32 unk18;
};
struct func_801F2438_StructObj {
    u8 pad0[0x24]; struct func_801F2438_StructMid *unk24;
    u8 pad28[0x10]; struct func_801F2438_StructData *unk38;
    u8 pad3C[0x64]; f32 unkA0; f32 unkA4;
};
struct func_801F2438_StructPair {
    struct func_801F2438_StructMid *unk0, *unk4;
};
struct func_801F2438_StructGlobalMid {
    u8 pad0[0x2C]; struct func_801F2438_StructPos *unk2C;
};
extern s8 D_8021AFD0;
#define POS ((struct func_801F2438_StructPos *)D_801BBBF0.unkE0->unk2C)
#define ANG(x) (((x) & 0x1000) ? (((x) & 0x1FFF) - 0x2000) : ((x) & 0x1FFF))
#define ABS(x) ((x) < 0 ? -(x) : (x))

void func_801F2438(struct func_801F2438_StructObj *arg0, struct func_801F2438_StructPair *arg1) {
    f32 temp_fv0;
    f32 rate;
    f32 speed;
    f32 low;
    f64 temp_fv1;
    f64 var_fv0;
    s32 temp_t0;
    s16 temp_t1;
    s16 temp_v0;
    struct func_801F2438_StructData *temp_v1;
    struct func_801F2438_StructPos *var_v0;
    struct func_801F2438_StructPos *var_a2;
    u32 value;

    if (arg0->unkA4 == 0.0) {
        temp_v1 = arg0->unk38;
        rate = (f32)(temp_v1->unk10 & (speed = arg0->unkA0, 0xFFFF));
        if (speed < rate / 20.0f) {
            low = rate / 1000.0f;
            arg0->unkA0 = speed + low;
        } else {
            arg0->unkA0 = rate / 20.0f;
            value = temp_v1->unk10;
            low = (f32)(value & 0xFFFF);
            arg0->unkA4 = ((f32)(s16)(value >> 16) + 0.5) - arg0->unk24->unk30->unk8 - (low / 20.0f);
        }
    } else {
        temp_v1 = arg0->unk38;
        if ((arg0->unk24->unk30->unk8 - ((f32)temp_v1->unk8 / 10.0 + 0.5)) < arg0->unkA4) {
            rate = (f32)(temp_v1->unk10 & 0xFFFF);
            speed = arg0->unkA0;
            if ((rate / 100.0f) < speed) {
                arg0->unkA0 = speed - rate / 1000.0f;
            }
        }
    }
    if (func_8012AAE8(arg0, arg0->unk24->unk30->unk4, (f32)((f32)temp_v1->unk8 / 10.0 + 0.5), arg0->unk24->unk30->unkC, arg0->unkA0) == 0) {
        arg0->unk24->unk30->unk8 = (f32)arg0->unk38->unk8 / 10.0 + 0.5;
        (*(struct func_801F2438_StructGlobalMid **)&D_801BBCD0)->unk2C->unk8 = arg0->unk24->unk30->unk8 + 1.0;
        func_800058DC((s32)arg0, func_801F28C4);
    } else {
        POS->unk8 = (arg0->unk24->unk30->unk8 - arg0->unkA0) + 1.0;
    }
    temp_t1 = arg0->unk24->unk30->unk12 - ((arg0->unk38->unk14 & 0xFF) << 8);
    var_a2 = POS;
    temp_t0 = var_a2->unk12;
    temp_v0 = temp_t1 - temp_t0;
    if (ABS(ANG(temp_v0)) >= 0x30) {
        if (ANG(temp_v0) < 0) {
            var_a2->unk12 = temp_t0 - 0x40;
        } else {
            var_a2->unk12 = temp_t0 + 0x40;
        }
        var_a2 = POS;
        var_a2->unk12 &= 0x1FFF;
        D_8021AFD0 = 1;
    } else {
        var_a2->unk12 = temp_t1;
        D_8021AFD0 = 0;
    }
    if ((arg0->unk38->unk18 >> 8) & 0xFF) {
        arg1->unk4->unk30->unk8 = arg1->unk0->unk30->unk8 - 2.0;
    }
    func_801F38B8(arg0->unk24->unk30->unk8);
}
