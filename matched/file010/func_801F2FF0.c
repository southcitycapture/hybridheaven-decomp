#include "common.h"
#define ABS(x) ((x) < 0 ? -(x) : (x))
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
extern s8 D_8021AFD0;
extern void func_800058DC(void *, void *);
extern s32 func_8012AAE8(void *, s32, f32, s32, f32);
void func_801F3430(void *arg0, void *arg1);
void func_801F38B8(f32 arg0);


struct func_801F2FF0_StructPos { u8 pad0[4]; s32 unk4; f32 unk8; s32 unkC; u8 pad10[2]; s16 unk12; };
struct func_801F2FF0_StructMid { u8 pad0[0x30]; struct func_801F2FF0_StructPos *unk30; };
struct func_801F2FF0_StructData { u8 pad0[8]; s16 unk8; u8 padA[6]; u32 unk10; s32 unk14; };
struct func_801F2FF0_StructObj { u8 pad0[0x24]; struct func_801F2FF0_StructMid *unk24; u8 pad28[0x10]; struct func_801F2FF0_StructData *unk38; u8 pad3C[0x64]; f32 unkA0; f32 unkA4; };
struct func_801F2FF0_StructGlobal { u8 pad0[0x2C]; struct func_801F2FF0_StructPos *unk2C; };

#define WRAP(x) (((x) & 0x1000) ? ((x) & 0x1FFF) - 0x2000 : ((x) & 0x1FFF))
#define ABS(x) (((x) < 0) ? -(x) : (x))
#define H(d) ((f32)(d)->unk8 / 10.0 + 0.5)
#define SPD(d) ((f32)((d)->unk10 & 0xFFFF))
#define P ((struct func_801F2FF0_StructPos *) D_801BBBF0.unkE0->unk2C)

void func_801F2FF0(struct func_801F2FF0_StructObj *arg0, s32 arg1) {
    s16 temp_t1;
    s16 temp_v0_2;
    struct func_801F2FF0_StructData *d;

    if (arg0->unkA4 == 0.0) {
        d = arg0->unk38;
        if (arg0->unkA0 < SPD(d) / 20.0f) {
            arg0->unkA0 += SPD(d) / 1000.0f;
        } else {
            arg0->unkA0 = SPD(d) / 20.0f;
            arg0->unkA4 = (((f32)(s16)(d->unk10 >> 16) + 0.5) - arg0->unk24->unk30->unk8) - SPD(d) / 20.0f;
        }
    } else {
        d = arg0->unk38;
        if (arg0->unk24->unk30->unk8 - H(d) < arg0->unkA4) {
            if (SPD(d) / 100.0f < arg0->unkA0) {
                arg0->unkA0 -= SPD(d) / 1000.0f;
            }
        }
    }
    if (func_8012AAE8(arg0, arg0->unk24->unk30->unk4, H(d), arg0->unk24->unk30->unkC, arg0->unkA0) == 0) {
        arg0->unk24->unk30->unk8 = H(arg0->unk38);
        ((struct func_801F2FF0_StructGlobal *) D_801BBCD0)->unk2C->unk8 = arg0->unk24->unk30->unk8 + 1.0;
        func_800058DC(arg0, func_801F3430);
    } else {
        D_801BBBF0.unkE0->unk2C->unk8 = (arg0->unk24->unk30->unk8 - arg0->unkA0) + 1.0;
    }
    temp_t1 = arg0->unk24->unk30->unk12 - ((arg0->unk38->unk14 & 0xFF) << 8);
    temp_v0_2 = temp_t1 - P->unk12;
    if (ABS(WRAP(temp_v0_2)) >= 0x30) {
        if (WRAP(temp_v0_2) < 0) {
            P->unk12 -= 0x40;
        } else {
            P->unk12 += 0x40;
        }
        P->unk12 &= 0x1FFF;
        D_8021AFD0 = 1;
    } else {
        P->unk12 = temp_t1;
        D_8021AFD0 = 0;
    }
    func_801F38B8(arg0->unk24->unk30->unk8);
}
