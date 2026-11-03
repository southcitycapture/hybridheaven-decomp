#include "common.h"


typedef struct func_8037BBF0_Struct {
    u8 id;
    u8 pad[3];
    f32 x;
    f32 z;
} func_8037BBF0_Struct;

extern f32 func_8002FC20(f32);
extern func_8037BBF0_Struct D_80388A8C[];
extern func_8037BBF0_Struct D_80388B1C[];
extern f32 D_8038A940;
extern f32 D_8038A948;

extern u16 D_801CBBF0[];
#define G_ID (((u16 *)((u8 *)D_801CBBF0 - 0x10000))[2])

s32 func_8037BBF0(f32 arg0, f32 arg1, u8 arg2) {
    u8 i;
    f32 dx;
    f32 dz;

    i = 0;
    if (arg2) {
        for (; D_80388A8C[i].id < 0xFF; i++) {
            if (G_ID == D_80388A8C[i].id) {
                dx = arg1 - D_80388A8C[i].z;
                dz = arg0 - D_80388A8C[i].x;
                if (func_8002FC20(dx * dx + dz * dz) < 30.0) {
                    D_8038A940 = D_80388A8C[i].x;
                    D_8038A948 = D_80388A8C[i].z;
                    return 1;
                }
            }
        }
        return 0;
    }
    for (; D_80388B1C[i].id < 0xFF; i++) {
        if (G_ID == D_80388B1C[i].id) {
            dx = arg1 - D_80388B1C[i].z;
            dz = arg0 - D_80388B1C[i].x;
            if (func_8002FC20(dx * dx + dz * dz) < 30.0) {
                D_8038A940 = D_80388B1C[i].x;
                D_8038A948 = D_80388B1C[i].z;
                return 1;
            }
        }
    }
    return 0;
}

#define D_801BBBF0 D_801BBBF0__func_8037BE10
#define D_80216B90 D_80216B90__func_8037BE10
#define D_80388A70 D_80388A70__func_8037BE10
#define D_8038A944 D_8038A944__func_8037BE10
#define D_8038A94C D_8038A94C__func_8037BE10
#define func_800058DC func_800058DC__func_8037BE10
#define func_80011140 func_80011140__func_8037BE10
#define func_8001EAD0 func_8001EAD0__func_8037BE10
#define func_8001EB64 func_8001EB64__func_8037BE10
#define func_8001EF38 func_8001EF38__func_8037BE10
#define func_801BF1A0 func_801BF1A0__func_8037BE10
#define func_801C4A5C func_801C4A5C__func_8037BE10
#define func_801C5A1C func_801C5A1C__func_8037BE10
#define func_801C89D8 func_801C89D8__func_8037BE10
#define func_801E4F60 func_801E4F60__func_8037BE10
#define func_801E5010 func_801E5010__func_8037BE10
#define func_801EBCC4 func_801EBCC4__func_8037BE10
#define func_801ED2D4 func_801ED2D4__func_8037BE10
#define func_801F11C0 func_801F11C0__func_8037BE10
#define func_8037BBF0 func_8037BBF0__func_8037BE10
#define func_8037C8F8 func_8037C8F8__func_8037BE10
#define func_8037D1DC_Arg func_8037D1DC_Arg__func_8037BE10
#define func_8037D1DC_DC func_8037D1DC_DC__func_8037BE10
#define func_8037D1DC_E0 func_8037D1DC_E0__func_8037BE10
#define func_8037D1DC_E0S func_8037D1DC_E0S__func_8037BE10
#define func_8037D1DC_E8 func_8037D1DC_E8__func_8037BE10
#define func_8037D1DC_E8S func_8037D1DC_E8S__func_8037BE10
#define func_8037D1DC_Glob func_8037D1DC_Glob__func_8037BE10
typedef struct {
    u8 pad0[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
} func_8037D1DC_DC;
typedef struct {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_8037D1DC_E0S;
typedef struct {
    u8 pad0[0x2C];
    func_8037D1DC_E0S *unk2C;
} func_8037D1DC_E0;
typedef struct {
    u8 pad0[0x24];
    f32 unk24;
} func_8037D1DC_E8S;
typedef struct {
    u8 pad0[0x2C];
    func_8037D1DC_E8S *unk2C;
} func_8037D1DC_E8;
typedef struct {
    u8 pad0[0xDC];
    func_8037D1DC_DC *unkDC;
    func_8037D1DC_E0 *unkE0;
    u8 padE4[4];
    func_8037D1DC_E8 *unkE8;
    u8 padEC[0xEF0 - 0xEC];
    u16 unkEF0;
} func_8037D1DC_Glob;
extern func_8037D1DC_Glob D_801BBBF0;
extern void func_800058DC(s32, void (*)(void));
extern void func_801C4A5C(void *, s32);
s32 func_8037BBF0(f32 arg0, f32 arg1, u8 arg2);
typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8037D1DC_Arg;


typedef struct func_8037BE10_StructInput {
    u8 pad[6]; s16 x; s16 y;
} func_8037BE10_StructInput;
typedef struct func_8037BE10_StructAnim {
    u8 pad[0x18]; s16 timer; u8 pad1[2]; s32 id;
} func_8037BE10_StructAnim;
typedef struct func_8037BE10_StructObj {
    u8 pad[0x2C]; u32 flags; u8 pad30[0x10];
    f32 vx, vy, vz; u8 pad4C[8]; s32 state; u8 pad58[4];
    func_8037BE10_StructAnim *anim; u8 pad60[8];
    func_8037BE10_StructInput *input;
} func_8037BE10_StructObj;
typedef struct func_8037BE10_StructGlob {
    u8 pad[0xE0]; func_8037D1DC_E0 *obj;
    u8 padE4[0x230-0xE4]; u8 flag; u8 pad231; s16 angle;
    u8 pad234[0x35A-0x234]; u8 type;
    u8 pad35B[0xEE4-0x35B]; f32 x,y,z; u16 flags;
    u8 padEF2[3]; u8 mode; u8 padEF6[2]; s32 active; s32 state;
} func_8037BE10_StructGlob;
extern s16 func_8001EF38(f32, f32);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern void func_801E5010(void);
extern void func_8037C8F8(void *, s32, void *, s32);
extern s32 func_801C5A1C(f32,f32,f32,f32,f32,f32);
extern s32 func_801F11C0(f32,f32,f32,f32,s16);
extern void func_801E4F60(s32);
extern void func_80011140(s32,void *,func_8037D1DC_Arg,s32);
extern void func_801BF1A0(s32);
extern void func_801EBCC4(void *,s32,void *,u8);
extern void func_801ED2D4(void *,s32,void *,u8);
extern void func_801C89D8(void);
extern func_8037D1DC_Arg D_80216B90;
extern f32 D_8038A944;
extern s16 D_8038A94C;
extern s16 D_80388A70;

#define G ((func_8037BE10_StructGlob *)&D_801BBBF0)
#define P (G->obj->unk2C)
#define SINP func_8001EAD0(P->unk12)
#define COSP func_8001EB64(P->unk12)

void func_8037BE10(func_8037BE10_StructObj *arg0, s32 arg1)
{
    func_8037BE10_StructAnim *anim;
    func_8037BE10_StructInput *input;
    u8 action;
    f32 x, y;
    u8 unused[4];
    s16 angle;
    s16 unusedAngle;
    s16 relative;
    f32 pad6C;
    f32 pos[3];

    anim = arg0->anim;
    input = arg0->input;
    action = 0;
    angle = (s16)(0x2800 - G->angle) & 0x1FFF;
    x = -input->x / 20.0;
    y = input->y / 20.0;
    relative = (s16)(func_8001EF38(x, y) + angle) - P->unk12;
    relative &= 0x1FFF;
    G->flag = 0;
    if (G->active == 0) {
        G->mode = 0;
        anim->timer = 0;
        G->flags &= ~0x40;
        func_800058DC((s32)arg0, func_801E5010);
        return;
    }
    switch (G->mode / 10U) {
    case 0:
        func_8037C8F8(arg0, arg1, anim, 0);
        return;
    case 1:
        if (func_801C5A1C(P->unk4, P->unk8 + 16.5, P->unkC,
                SINP * 10.0 + P->unk4, P->unk8 + 16.5, COSP * 10.0 + P->unkC)) {
            if (G->mode == 10 || G->mode == 11) {
                pos[2] = G->z;
                pos[0] = G->x;
                pos[1] = G->y;
                D_8038A94C = (s16)(func_8001EF38(-pos[2], pos[0]) + 0x1800) & 0x1FFF;
                D_8038A944 = P->unk8;
                func_8037BBF0(P->unk4, P->unkC, (u8)(G->mode - 10));
                func_801F11C0(D_8038A940, D_8038A944, D_8038A948, 3.0f, D_8038A94C);
                G->mode = 12;
                func_801E4F60(0);
                arg0->flags &= ~0x40;
                arg0->vz = arg0->vy = arg0->vx = 0.0f;
                break;
            } else if (G->mode == 12) {
                func_80011140(arg1, anim, D_80216B90, 10);
                if (func_801F11C0(D_8038A940, D_8038A944, D_8038A948, 3.0f, D_8038A94C) == 0) {
                    return;
                }
                G->mode++;
                break;
            } else {
                switch (G->type) {
                case 3:
                    func_801C5A1C(P->unk4, P->unk8 + 19.5, P->unkC,
                        SINP * 10.0 + P->unk4, P->unk8 + 19.5, COSP * 10.0 + P->unkC);
                    if (G->type == 3) {
                        if (y > 1.0) {
                            func_801C5A1C(P->unk4, P->unk8 + 19.8, P->unkC,
                                SINP * 10.0 + P->unk4, P->unk8 + 19.8, COSP * 10.0 + P->unkC);
                            if (G->type == 3) {
                                arg0->state = 0;
                                func_801C4A5C(arg0, 0);
                                if (anim->id == 0x168001F) {
                                    func_801BF1A0(4);
                                } else {
                                    func_801BF1A0(3);
                                }
                            } else {
                                action = 3;
                            }
                        } else {
                            arg0->state = 0;
                            func_801C4A5C(arg0, 0);
                            if (anim->id == 0x168001F) {
                                func_801BF1A0(4);
                            } else {
                                func_801BF1A0(3);
                            }
                        }
                    } else {
                        action = 3;
                    }
                    goto tend;
                case 4:
                    arg0->state = 0;
                    func_801C4A5C(arg0, 0);
                    func_801BF1A0(2);
                    goto tend;
                case 10:
                    arg0->state = 1;
                    func_801C4A5C(arg0, 0);
                    if (anim->id == 0x168001F) {
                        func_801BF1A0(4);
                    } else {
                        func_801BF1A0(3);
                    }
                    if (y < -1.0) {
                        if (func_801C5A1C(P->unk4, P->unk8, P->unkC, P->unk4, P->unk8 - 50.0, P->unkC)) {
                            action = 3;
                        }
                    }
                    goto tend;
                }
                arg0->state = 0;
                action = 3;
            tend:;
            }
        } else {
            arg0->state = 0;
            action = 3;
        }
        if (action != 3) {
            if (y > 1.0) {
                action = 1;
            } else if (y < -1.0) {
                action = 2;
            } else {
                action = 0;
            }
        }
        func_801EBCC4(arg0, arg1, anim, action);
        return;
    case 2:
        break;
    case 3:
        anim->timer = 0;
        G->flags &= ~0x40;
        arg0->flags |= 0x80;
        arg0->vx = arg0->vy = arg0->vz = 0.0f;
        arg0->state = G->state;
        func_801C4A5C(arg0, 0);
        D_80388A70 = 0;
        G->mode = 0;
        func_800058DC((s32)arg0, func_801E5010);
        return;
    case 4:
        if (func_801C5A1C(P->unk4 - SINP * 2.0, P->unk8, P->unkC - COSP * 2.0,
                SINP * 6.0 + P->unk4, P->unk8 + 8.0, COSP * 6.0 + P->unkC)) {
            switch (G->type) {
            case 11:
                arg0->state = 0;
                func_801C4A5C(arg0, 0);
                func_801BF1A0(14);
                break;
            case 12:
                arg0->state = 0;
                func_801C4A5C(arg0, 0);
                func_801BF1A0(14);
                break;
            case 18:
                arg0->state = 0;
                if (anim->id == 0x1680030) {
                    if (func_801C5A1C(P->unk4 - SINP * 2.0, P->unk8, P->unkC - COSP * 2.0,
                            (f64)SINP + P->unk4, P->unk8 + 8.0, (f64)COSP + P->unkC)) {
                        if (G->type == 18) {
                            action = 3;
                        }
                    }
                } else if (anim->id == 0x1680019) {
                    action = 3;
                }
                break;
            default:
                func_801C89D8();
                D_80388A70 = 0;
                G->mode = 0;
                G->active = 0;
                func_801BF1A0(1);
                return;
            }
            if (action != 3) {
                if (x * x + y * y > 1.0) {
                    if (relative >= 0x400 && relative < 0xC00) {
                        action = 0;
                    } else if (relative >= 0xC00 && relative < 0x1400) {
                        action = 2;
                    } else if (relative >= 0x1400 && relative < 0x1C00) {
                        action = 0;
                    } else {
                        action = 1;
                    }
                }
            }
        }
        func_801ED2D4(arg0, arg1, anim, action);
        break;
    }
}
#undef G
#undef P
#undef SINP
#undef COSP
#undef D_801BBBF0
#undef D_80216B90
#undef D_80388A70
#undef D_8038A944
#undef D_8038A94C
#undef func_800058DC
#undef func_80011140
#undef func_8001EAD0
#undef func_8001EB64
#undef func_8001EF38
#undef func_801BF1A0
#undef func_801C4A5C
#undef func_801C5A1C
#undef func_801C89D8
#undef func_801E4F60
#undef func_801E5010
#undef func_801EBCC4
#undef func_801ED2D4
#undef func_801F11C0
#undef func_8037BBF0
#undef func_8037C8F8
#undef func_8037D1DC_Arg
#undef func_8037D1DC_DC
#undef func_8037D1DC_E0
#undef func_8037D1DC_E0S
#undef func_8037D1DC_E8
#undef func_8037D1DC_E8S
#undef func_8037D1DC_Glob

/* hh-block asm/nonmatchings/file056/8037BBF0/_mrg_keep_tail_55268ff7ca1899ad.s {"functions":["func_8037C8F8"],"rodata":[],"rodata_bytes":[2151192768,8371744,80]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file056/8037BBF0/_mrg_keep_tail_55268ff7ca1899ad.s")

#define D_801BBBF0 D_801BBBF0__func_8037CFE8
#define D_803898E4 D_803898E4__func_8037CFE8
#define func_80005700 func_80005700__func_8037CFE8
#define func_801BF1A0 func_801BF1A0__func_8037CFE8
#define func_8037D1DC_Arg func_8037D1DC_Arg__func_8037CFE8
#define func_8037D1DC_DC func_8037D1DC_DC__func_8037CFE8
#define func_8037D1DC_E0 func_8037D1DC_E0__func_8037CFE8
#define func_8037D1DC_E0S func_8037D1DC_E0S__func_8037CFE8
#define func_8037D1DC_E8 func_8037D1DC_E8__func_8037CFE8
#define func_8037D1DC_E8S func_8037D1DC_E8S__func_8037CFE8
#define func_8037D1DC_Glob func_8037D1DC_Glob__func_8037CFE8
#define func_8037D1DC_S1 func_8037D1DC_S1__func_8037CFE8
typedef struct {
    u8 pad0[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
} func_8037D1DC_DC;
typedef struct {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_8037D1DC_E0S;
typedef struct {
    u8 pad0[0x2C];
    func_8037D1DC_E0S *unk2C;
} func_8037D1DC_E0;
typedef struct {
    u8 pad0[0x24];
    f32 unk24;
} func_8037D1DC_E8S;
typedef struct {
    u8 pad0[0x2C];
    func_8037D1DC_E8S *unk2C;
} func_8037D1DC_E8;
typedef struct {
    u8 pad0[0xDC];
    func_8037D1DC_DC *unkDC;
    func_8037D1DC_E0 *unkE0;
    u8 padE4[4];
    func_8037D1DC_E8 *unkE8;
    u8 padEC[0xEF0 - 0xEC];
    u16 unkEF0;
} func_8037D1DC_Glob;
extern func_8037D1DC_Glob D_801BBBF0;
typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8037D1DC_Arg;
typedef struct {
    u8 pad0[0x1C];
    func_8037D1DC_Arg unk1C;
} func_8037D1DC_S1;


typedef struct func_8037CFE8_StructB { u8 pad[0x24]; s32 f24; u8 pad2[0x34]; func_8037D1DC_S1 *f5C; } func_8037CFE8_StructB;

extern f32 D_803898E4;
extern void func_801BF1A0(s32, void *);
extern void func_80005700(s32);

void func_8037CFE8(s32 arg0, s32 arg1) {
    f32 pos[4];
    func_8037D1DC_E0S *p;
    func_8037D1DC_S1 *q;
    f32 dx, dy, dz;

    if (D_801BBBF0.unkDC != NULL && ((func_8037CFE8_StructB *)D_801BBBF0.unkDC)->f24 != 0 && D_801BBBF0.padEC[9] != 0) {
        q = ((func_8037CFE8_StructB *)D_801BBBF0.unkDC)->f5C;
        if (q->unk1C.unk0 == 0x1680015 || *(u32 *)&q->unk1C == 0x1680017) {
            pos[0] = 37.0f;
            pos[1] = D_803898E4;
            pos[2] = 308.0f;
            p = D_801BBBF0.unkE0->unk2C;
            dz = p->unkC - pos[2];
            dx = p->unk4 - pos[0];
            dy = p->unk8 - pos[1];
            if ((f64)func_8002FC20(dz * dz + (dx * dx + dy * dy)) < 5.0) {
                D_801BBBF0.unkEF0 |= 0x4000;
                func_801BF1A0(0, &D_801BBBF0);
                func_80005700(arg0);
            }
        }
    }
}
#undef D_801BBBF0
#undef D_803898E4
#undef func_80005700
#undef func_801BF1A0
#undef func_8037D1DC_Arg
#undef func_8037D1DC_DC
#undef func_8037D1DC_E0
#undef func_8037D1DC_E0S
#undef func_8037D1DC_E8
#undef func_8037D1DC_E8S
#undef func_8037D1DC_Glob
#undef func_8037D1DC_S1

#define func_8037D1DC func_8037D1DC__func_8037D0F8

extern void func_800058DC(s32, void (*)(void));
extern void func_80020718(s32);
extern s32 func_8011AAF4(void *, s32, s32, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801FBB30(void);
extern u8 D_80389854[];
extern f32 D_803898E8;
extern f32 D_803898EC;
extern f32 D_803898F0;
extern f32 D_803898F4;
extern f32 D_803898F8;
extern f32 D_803898FC;
extern void func_8037D1DC();

void func_8037D0F8(s32 arg0, s32 arg1) {
    if (func_8011AAF4(D_80389854, 0x21C, arg0, 0, 1, 1.0f, D_803898E8, D_803898EC, D_803898F0, 1.0f, D_803898F4, D_803898F8, D_803898FC, 0.0f, 35.0f, -1, -1) == 0) {
        func_80020718(8);
        func_801FBB30();
        func_800058DC(arg0, func_8037D1DC);
    }
}
#undef func_8037D1DC

#define func_8037D320 func_8037D320__func_8037D1DC

typedef struct {
    u8 pad0[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
} func_8037D1DC_DC;

typedef struct {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_8037D1DC_E0S;

typedef struct {
    u8 pad0[0x24];
    f32 unk24;
} func_8037D1DC_E8S;

typedef struct {
    u8 pad0[0x2C];
    func_8037D1DC_E0S *unk2C;
} func_8037D1DC_E0;

typedef struct {
    u8 pad0[0x2C];
    func_8037D1DC_E8S *unk2C;
} func_8037D1DC_E8;

typedef struct {
    u8 pad0[0xDC];
    func_8037D1DC_DC *unkDC;
    func_8037D1DC_E0 *unkE0;
    u8 padE4[4];
    func_8037D1DC_E8 *unkE8;
    u8 padEC[0xEF0 - 0xEC];
    u16 unkEF0;
} func_8037D1DC_Glob;

extern func_8037D1DC_Glob D_801BBBF0;
extern f32 D_80389900;

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8037D1DC_Arg;

typedef struct {
    u8 pad0[0x1C];
    func_8037D1DC_Arg unk1C;
} func_8037D1DC_S1;

typedef struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x54 - 0x30];
    s32 unk54;
    u8 pad58[0x5C - 0x58];
    func_8037D1DC_S1 *unk5C;
} func_8037D1DC_Arg0;

extern void func_8013A28C(s32, func_8037D1DC_Arg);
extern void func_801C4A5C(void *, s32);
extern void func_80010550(s32, void *);
extern void func_8037D320();

void func_8037D1DC(func_8037D1DC_Arg0 *arg0, s32 arg1) {
    func_8037D1DC_S1 *s1;

    arg0->unk2C |= 0xE0;
    s1 = arg0->unk5C;
    D_801BBBF0.unkE0->unk2C->unk4 = 34.0f;
    D_801BBBF0.unkE0->unk2C->unk8 = D_80389900;
    D_801BBBF0.unkE0->unk2C->unkC = 308.0f;
    D_801BBBF0.unkDC->unk40 = D_801BBBF0.unkDC->unk44 =
        D_801BBBF0.unkDC->unk48 = 0.0f;
    s1->unk1C.unk0 = 0x01680015;
    *(s16 *)((u8 *)s1 + 0x20) = 0;
    *(s16 *)((u8 *)s1 + 0x22) = 0;
    *(f32 *)((u8 *)s1 + 0x24) = 1.0f;
    func_8013A28C(arg1, s1->unk1C);
    D_801BBBF0.unkEF0 = D_801BBBF0.unkEF0 & 0xFEFF;
    D_801BBBF0.unkE0->unk2C->unk12 = 0x1E;
    arg0->unk54 = 0x181;
    func_801C4A5C(arg0, 0);
    func_80010550(arg1, s1);
    D_801BBBF0.unkE8->unk2C->unk24 = 1.0f;
    func_800058DC(arg0, func_8037D320);
}
#undef func_8037D320

extern void func_801E95D4(void *, s32, void *, u16, s32);
extern s32 D_80010550(s32, void *);
void func_8037D320(func_8037D1DC_Arg0 *arg0, s32 arg1) {
    func_8037D1DC_S1 *t;
    u16 r;
    t = arg0->unk5C;
    D_801BBBF0.unkE8->unk2C->unk24 = 1.0f;
    D_801BBBF0.unkE0->unk2C->unk12 = 0x1E;
    r = D_80010550(arg1, t);
    func_801E95D4(arg0, arg1, t, r, 1);
}


/* Original readonly objects; named loads retain their original addresses. */

static const unsigned char rodata_8037BBF0[] = {
    0xA5, 0xC8, 0xA5, 0xE9, 0xA5, 0xD6, 0xA5, 0xEB, 0xC8, 0xAF, 0xC0, 0xB8, 0xA1, 0xAA, 0xA1, 0xAA,
    0x0A, 0x00, 0x00, 0x00, 0x68, 0x61, 0x73, 0x69, 0x67, 0x6F, 0x20, 0x25, 0x64, 0x0A, 0x00, 0x00,
    0xCA, 0xE4, 0xB4, 0xB0, 0xC3, 0xE6, 0x20, 0x00, 0xB6, 0xAF, 0xC0, 0xA9, 0xBD, 0xAA, 0xCE, 0xBB,
    0xA1, 0xAA, 0x0A, 0x00, 0x44, 0x45, 0x4D, 0x4F, 0x32, 0x31, 0x30, 0x20, 0x4F, 0x4B, 0x21, 0x0A,
    0x00, 0x00, 0x00, 0x00, 0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F, 0x75, 0x2F, 0x6E, 0x75,
    0x36, 0x34, 0x2F, 0x72, 0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61, 0x2F, 0x6D, 0x61, 0x69,
    0x6E, 0x2F, 0x67, 0x61, 0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x70, 0x6C,
    0x61, 0x79, 0x65, 0x72, 0x2F, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x5F, 0x64, 0x65, 0x6D, 0x6F,
    0x2E, 0x63, 0x00, 0x00,
};
/* hh-owned-pool func_8037BE10 80389894 803898C0 */
