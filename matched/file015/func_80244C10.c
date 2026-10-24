#include "context.h"

typedef struct func_80244C10_StructData {
    u8 pad0[4];
    f32 x, y, z;
    s16 rx, ry, rz;
    u8 pad16[2];
    f32 sx, sy, sz;
    u32 flags;
    u8 pad28[8];
    void *data;
    u8 pad34[0x14];
    u8 c0, c1, c2, c3, c4, c5, c6, c7;
} func_80244C10_StructData;
typedef struct func_80244C10_StructObj {
    u8 pad[0x30];
    func_80244C10_StructData *p;
} func_80244C10_StructObj;
typedef struct func_80244C10_StructState {
    u8 pad[0x94];
    f32 x, y, z, scale;
} func_80244C10_StructState;
typedef struct func_80244C10_StructMsg { s32 a, b, c, d; } func_80244C10_StructMsg;
extern void *func_80005670(void *, void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void *func_8000C3B0(void *);
extern s32 func_80126CC0(void *, void *);
extern void func_80126EAC(void);
extern void func_8012C89C(void *, s32, s32, s32);
extern func_80244C10_StructMsg D_80164F40;
extern u8 D_8017AD28[], D_80252924[], D_80252938[], D_802529E0[];
extern f32 D_80258A5C, D_80258A60, D_80258A64, D_80258A68;
extern f64 D_80258A70;

#define SCALE(i) \
    arg1[i]->p->sz = 1.0f; \
    arg1[i]->p->sx = arg1[i]->p->sy = arg1[i]->p->sz;
#define POS(i) \
    arg1[i]->p->x = arg0->x; \
    arg1[i]->p->y = arg0->y; \
    arg1[i]->p->z = arg0->z;
#define COLOR(i) \
    arg1[i]->p->c4 = ((u8 *)&D_801BBBF0)[0xF32]; \
    arg1[i]->p->c5 = ((u8 *)&D_801BBBF0)[0xF33]; \
    arg1[i]->p->c6 = ((u8 *)&D_801BBBF0)[0xF34]; \
    arg1[i]->p->c7 = ((u8 *)&D_801BBBF0)[0xF35];

void func_80244C10(func_80244C10_StructState *arg0, func_80244C10_StructObj **arg1) {
    func_80244C10_StructMsg msg;
    f32 scale;

    if (func_80126CC0(arg0, func_80126EAC) != 0) {
        if (func_80133A24(0x74) == 0) {
            D_8025A2A0 = func_80005670(arg0, D_80252924);
            D_8025A2A4 = func_80005670(arg0, D_80252938);
            arg0->x = -300.0f;
            arg0->y = -125.0f;
            arg0->z = 378.0f;
            arg0->scale = D_80258A5C;
            msg = D_80164F40;
            msg.b = 0x80000C00;
            func_80005E44(arg0, &msg);
            func_80005E44(arg0, &msg);
            func_80005E44(arg0, &msg);
            func_80005E44(arg0, &msg);
            func_80005E44(arg0, &msg);
            msg.b = 0x80000600;
            func_80005E44(arg0, &msg);
            msg.b = 0x80000C00;
            func_80005E44(arg0, &msg);
            func_80005E44(arg0, &msg);
            func_80006214(arg0);
            func_8012C89C(arg0, 0, 0x2D2, 0);
            arg1[0]->p->data = D_8017AD28;
            SCALE(0)
            POS(0)
            arg1[0]->p->ry = 0;
            func_8012C89C(arg0, 1, 0x2D4, 5);
            arg1[1]->p->data = D_8017AD28;
            SCALE(1)
            POS(1)
            arg1[1]->p->ry = 0x1000;
            func_8012C89C(arg0, 2, 0x2D4, 6);
            arg1[2]->p->data = D_8017AD28;
            SCALE(2)
            POS(2)
            arg1[2]->p->ry = 0x1000;
            func_8012C89C(arg0, 3, 0x289, 7);
            arg1[3]->p->flags = 0x13;
            arg1[3]->p->data = func_8000C3B0(arg1[3]);
            SCALE(3)
            arg1[3]->p->x = -300.0f;
            arg1[3]->p->y = -125.0f;
            arg1[3]->p->z = D_80258A60;
            arg1[3]->p->ry = 0;
            arg1[3]->p->flags |= 0x400;
            COLOR(3)
            func_8012C89C(arg0, 4, 0x289, 8);
            arg1[4]->p->flags = 0x13;
            arg1[4]->p->data = func_8000C3B0(arg1[4]);
            SCALE(4)
            arg1[4]->p->x = -300.0f;
            arg1[4]->p->y = -125.0f;
            arg1[4]->p->z = D_80258A64;
            arg1[4]->p->ry = 0;
            arg1[4]->p->flags |= 0x400;
            COLOR(4)
            func_8012C89C(arg0, 5, 0x2D4, 7);
            scale = D_80258A68;
            arg1[5]->p->flags |= 0x100;
            arg1[5]->p->data = (void *)((u32)D_802529E0 | 0x40000000);
            arg1[5]->p->sx = scale;
            arg1[5]->p->sy = (f64)arg0->scale * D_80258A70;
            arg1[5]->p->sz = scale;
            arg1[5]->p->x = arg0->x;
            arg1[5]->p->y = (f64)arg0->y + 9.5;
            arg1[5]->p->z = arg0->z;
            arg1[5]->p->rx = 0;
            arg1[5]->p->ry = 0;
            arg1[5]->p->rz = 0;
            arg1[5]->p->c0 = 0;
            arg1[5]->p->c1 = 0xFF;
            arg1[5]->p->c2 = 0xFF;
            arg1[5]->p->c3 = 0x80;
            func_8012C89C(arg0, 6, 0x2D4, 0);
            arg1[6]->p->data = D_8017AD28;
            SCALE(6)
            arg1[6]->p->x = arg0->x + 2.0f;
            arg1[6]->p->y = arg0->y;
            arg1[6]->p->z = arg0->z;
            arg1[6]->p->ry = 0;
            func_8012C89C(arg0, 7, 0x2D4, 1);
            arg1[7]->p->data = D_8017AD28;
            SCALE(7)
            arg1[7]->p->x = arg0->x - 2.0f;
            arg1[7]->p->y = arg0->y;
            arg1[7]->p->z = arg0->z;
            arg1[7]->p->ry = 0;
            func_801339D0(0x73);
            func_801339D0(0x77);
            func_800058DC(arg0, func_802453FC);
            return;
        }
        func_800058DC(arg0, func_802453F0);
    }
}
