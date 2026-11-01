#include "common.h"
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
extern f32 D_8038A940;
extern f32 D_8038A948;
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
