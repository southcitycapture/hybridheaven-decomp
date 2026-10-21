#include "context.h"

struct func_8024148C_StructArg;
extern void func_800058DC(void *, void *);
extern s32 func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern s32 func_801C3D20(f32, f32, s32);
void func_8024148C(struct func_8024148C_StructArg *arg0, s32 arg1);
extern s16 func_8001EF38(f32, f32);
extern s32 func_80133A24(s32);
extern f32 D_802581F4;
extern f32 D_802581F8;
extern f32 D_802581FC;
extern f32 D_80258200;
extern f32 D_80258204;
extern f32 D_80258208;
extern f32 D_8025820C;
extern f32 D_80258210;
extern f32 D_80258214;
extern u8 D_80258050[];
extern u8 D_8025808C[];
extern u8 func_80240E14[];
typedef struct func_80240C00_Struct { u8 pad0[4]; f32 unk4; u8 pad1[4]; f32 unkC; u8 pad2[2]; u16 unk12; } func_80240C00_Struct;
typedef struct func_80240C00_Node { u8 pad0[0x2C]; func_80240C00_Struct *unk2C; } func_80240C00_Node;
typedef struct func_80240C00_Inner { u8 pad0[0x40]; f32 unk40; u8 pad1[4]; f32 unk48; } func_80240C00_Inner;
typedef struct func_80240C00_Outer { u8 pad0[0xDC]; func_80240C00_Inner *unkDC; } func_80240C00_Outer;
typedef struct func_80240C00_Struct2 { u8 pad0[0x3C]; u16 unk3C; } func_80240C00_Struct2;
#define F80240C00_N (*(func_80240C00_Node **)&D_801BBCD0)->unk2C

void func_80240C00(func_80240C00_Struct2 *arg0, s32 arg1) {
    if (func_801C3D20(50.0f, D_802581F4, 0x41000000) != 0) {
        (*(func_80240C00_Outer *)&D_801BBBF0).unkDC->unk40 = 0.0f;
        (*(func_80240C00_Outer *)&D_801BBBF0).unkDC->unk48 = 0.0f;
        func_801C3B2C(2);
        func_801C3B10(1);
        if (func_80133A24(0x6F) != 0) {
            func_8011AAF4(D_80258050, 0xED, arg0, 0, 1, 0.0f, D_802581F8, D_802581FC, D_80258200, 0.0f, D_80258204, D_80258208, 450.0f, 0.0f, 35.0f, -1, -1);
            arg0->unk3C = 0;
            func_800058DC(arg0, func_8024148C);
        } else {
            func_8011AAF4(D_8025808C, 0xF6, arg0, 0, 1, 0.0f, 21.0f, D_8025820C, D_80258210, 0.0f, 48.5f, 16.5f, D_80258214, 0.0f, 35.0f, -1, -1);
            F80240C00_N->unk12 = func_8001EF38(50.0f - F80240C00_N->unk4, 444.0f - F80240C00_N->unkC);
            arg0->unk3C = 0;
            *(s16 *)((u8 *)arg0 + 0x9C) = 0;
            func_800058DC(arg0, func_80240E14);
        }
    }
}
