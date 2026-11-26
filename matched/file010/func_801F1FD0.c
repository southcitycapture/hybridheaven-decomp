#include "common.h"
#define ABS(x) (((x) < 0) ? -(x) : (x))
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
typedef struct {
    u8 pad0[8];
    f32 unk8;
} func_801F1D74_StructF;
typedef struct {
    u8 pad0[0x2C];
    func_801F1D74_StructF *unk2C;
} func_801F1D74_StructE0;
typedef struct {
    u8 pad0[0x24];
    void *unk24;
    u8 unk28;
    u8 pad29[0xB7];
    func_801F1D74_StructE0 *unkE0;
} func_801F1D74_StructG;
#define GG ((func_801F1D74_StructG *)&D_801BBBF0)
typedef struct {
    u8 pad0[8];
    s16 unk8;
    u8 padA[6];
    u32 unk10;
    u32 unk14;
    u32 unk18;
} func_801F19A0_Data;
#define d ((func_801F19A0_Data *)x)
extern void func_800058DC(void *, void *);
extern s32 func_8012AAE8(void *, s32, f32, s32, f32);
void func_801F28C4(s32 arg0, s32 arg1);
void func_801F38B8(f32 arg0);

#undef d
typedef struct { u8 pad0[4]; s32 unk4; f32 unk8; s32 unkC; u8 pad10[2]; s16 unk12; } func_801F1FD0_StructNode;
typedef struct { u8 pad0[0x2C]; func_801F1FD0_StructNode *unk2C; } func_801F1FD0_StructMid;
typedef struct { u8 pad0[0xE0]; func_801F1FD0_StructMid *unkE0; } func_801F1FD0_StructG;
typedef struct { u8 pad0[0x30]; func_801F1FD0_StructNode *unk30; } func_801F1FD0_StructHi;
typedef struct { u8 pad0[8]; s16 unk8; u8 padA[6]; u32 unk10; s32 unk14; u32 unk18; } func_801F1FD0_StructS38;
typedef struct {
    u8 pad0[0x24]; func_801F1FD0_StructHi *unk24; u8 pad28[0x10]; func_801F1FD0_StructS38 *unk38;
    u8 pad3C[0x64]; f32 unkA0; f32 unkA4;
} func_801F1FD0_StructObj;
typedef struct { func_801F1FD0_StructHi *unk0; func_801F1FD0_StructHi *unk4; } func_801F1FD0_StructArg1;
typedef struct { u8 pad0[0x24]; s32 unk24; } func_801F1FD0_StructRawObj;
#define GG ((func_801F1FD0_StructG *)&D_801BBBF0)
#define ABS(x) (((x) < 0) ? -(x) : (x))

void func_801F1FD0(func_801F1FD0_StructObj *arg0, func_801F1FD0_StructArg1 *arg1) {
    func_801F1FD0_StructS38 *s;
    func_801F1FD0_StructNode *m;
    func_801F1FD0_StructNode *n;
    f64 y;
    f64 half;
    f32 spd;
    f32 cur;
    f32 increment;
    f32 limit;
    f32 decrement;
    f32 divisor;
    s16 t1;
    s16 t0;
    s16 d;
    s32 sp14;
    s32 angleSign;
    s32 angleMask;

    if (arg0->unkA4 == 0.0) {
        divisor = 20.0f;
        s = arg0->unk38;
        cur = arg0->unkA0; spd = (f32)(s->unk10 & 0xFFFF);
        limit = spd / divisor;
        if (limit > cur) {
            increment = spd / 1000.0f;
            arg0->unkA0 = cur + increment;
        } else {
            arg0->unkA0 = limit;
            arg0->unkA4 = arg0->unk24->unk30->unk8 - ((f32)s->unk8 / 10.0 + 0.5f) - (f32)(s->unk10 & 0xFFFF) / divisor;
        }
        n = arg0->unk24->unk30;
        y = (f32)(s16)(s->unk10 >> 16) + 0.5;
    } else {
        s = arg0->unk38;
        y = (f64)(f32)(s16)(s->unk10 >> 16) + 0.5f;
        n = ((func_801F1FD0_StructHi *)((func_801F1FD0_StructRawObj *)arg0)->unk24)->unk30;
        if (y - n->unk8 < arg0->unkA4) {
            spd = (f32)(s->unk10 & 0xFFFF);
            cur = arg0->unkA0;
            if (spd / 100.0f < cur) {
                decrement = spd / 1000.0f;
                arg0->unkA0 = cur - decrement;
                half = 0.5;
                n = arg0->unk24->unk30; y = (f32)(s16)(s->unk10 >> 16) + half;
            }
        }
    }
    if (func_8012AAE8(arg0, n->unk4, y, n->unkC, arg0->unkA0) == 0) {
        arg0->unk24->unk30->unk8 = (f64)(f32)(s16)(arg0->unk38->unk10 >> 16) + 0.5f;
        ((func_801F1FD0_StructMid *)D_801BBCD0)->unk2C->unk8 = arg0->unk24->unk30->unk8 + 1.0;
        func_800058DC((void *)arg0, func_801F28C4);
    } else {
        GG->unkE0->unk2C->unk8 = (arg0->unkA0 + arg0->unk24->unk30->unk8) + 1.0;
    }
    {
        typedef struct { u8 pad[0x10]; u32 words[3]; } func_801F1FD0_StructWords;
        t1 = arg0->unk24->unk30->unk12 - ((arg0->unk38->unk14 & 0xFF) << 8);
    }
    m = GG->unkE0->unk2C;
    t0 = m->unk12;
    d = t1 - t0;
    angleSign = d & 0x1000;
    angleMask = d & 0x1FFF;
    if (ABS(angleSign ? angleMask - 0x2000 : angleMask) >= 0x30) {
        if ((angleSign ? angleMask - 0x2000 : angleMask) < 0) {
            m->unk12 = t0 - 0x40;
        } else {
            m->unk12 = t0 + 0x40;
        }
        m = GG->unkE0->unk2C;
        m->unk12 = (u16)(0x1FFF & m->unk12);
        D_8021AFD0 = 1;
    } else {
        m->unk12 = t1;
        D_8021AFD0 = 0;
    }
    if ((arg0->unk38->unk18 >> 8) & 0xFF) {
        arg1->unk4->unk30->unk8 = arg1->unk0->unk30->unk8;
    }
    func_801F38B8(arg0->unk24->unk30->unk8);
}
