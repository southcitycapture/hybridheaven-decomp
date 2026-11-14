#include "common.h"
extern u8 D_801BBBF0[];
extern u16 D_80216BF0;
extern s16 D_80216C00;
typedef struct func_801F152C_In { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad1[2]; s16 unk12; } func_801F152C_In;
typedef struct func_801F152C_Obj { u8 pad[0x22]; u8 unk22; u8 pad1[9]; func_801F152C_In *unk2C; } func_801F152C_Obj;
typedef struct func_801F152C_Struct { u8 pad[0xE0]; func_801F152C_Obj *unkE0; u8 pad1[0xF4 - 0xE4]; u8 unkF4; u8 pad2[2]; u8 unkF7; } func_801F152C_Struct;
#define G ((func_801F152C_Struct *)&D_801BBBF0)
typedef struct func_801E8BD0_In {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E8BD0_In;
typedef struct func_801E8BD0_Mid {
    u8 pad[0x2C];
    func_801E8BD0_In *unk2C;
} func_801E8BD0_Mid;
typedef struct func_801E7C30_G {
    u8 pad0[0xE0];
    func_801E8BD0_Mid *unkE0;
    u8 pad1[0x232 - 0xE4];
    s16 unk232;
    u8 pad2[0x35A - 0x234];
    u8 unk35A;
    u8 pad3;
    f32 unk35C;
    f32 unk360;
    f32 unk364;
    u8 pad4[0x380 - 0x368];
    f32 unk380;
    f32 unk384;
    f32 unk388;
    u8 pad5[0xEC4 - 0x38C];
    s32 unkEC4;
    u8 pad6[0xEF0 - 0xEC8];
    u16 unkEF0;
    u8 pad7[4];
    u8 unkEF6;
    u8 pad8[5];
    s32 unkEFC;
} func_801E7C30_G;
#define g ((func_801E7C30_G *)&D_801BBBF0)
#define P (g->unkE0->unk2C)
extern void func_800113D0(s32, void *);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8001EF38(f32, f32);
extern f32 func_8002FC20(f32);
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
extern void func_8013A28C(s32, func_801E74DC_Sub);
extern void func_801518D4(s32, s32, s32);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
void func_801E4F60(u16 arg0);
typedef struct func_801E74DC_Arg2 {
    u8 pad[0x1C];
    func_801E74DC_Sub unk1C;
} func_801E74DC_Arg2;
typedef struct func_801EF440_StructA {
    u8 pad[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
} func_801EF440_StructA;
void func_801EF440(func_801EF440_StructA *arg0);


#undef G
#undef P

typedef struct func_801EEC58_StructPos {
    u8 pad[4];
    f32 x, y, z;
    s16 rx, ry, rz;
} func_801EEC58_StructPos;
typedef struct func_801EEC58_StructObj {
    u8 pad[0x2C];
    func_801EEC58_StructPos *pos;
} func_801EEC58_StructObj;
typedef struct func_801EEC58_StructGlobal {
    u8 pad[0xE0];
    func_801EEC58_StructObj *obj;
    u8 pad2[0x35C - 0xE4];
    f32 x, y, z;
    u8 pad3[0xEF0 - 0x368];
    u16 flags;
    u8 pad4[0xEFE - 0xEF2];
    u16 state;
} func_801EEC58_StructGlobal;
typedef struct func_801EEC58_StructArg {
    u8 pad[0x30];
    s32 flags;
    u8 pad2[0x3E - 0x34];
    u8 state;
    u8 pad3[1];
    f32 x, y, z;
} func_801EEC58_StructArg;
#define G (*(func_801EEC58_StructGlobal *)&D_801BBBF0)
#define P G.obj->pos
extern void func_80011380(s32, void *);
extern void func_80130F74(f32 *);
extern void func_801311F8(u16 *, f32 *, s32, u16, s32);

void func_801EEC58(func_801EEC58_StructArg *arg0, s32 arg1, func_801E74DC_Arg2 *arg2, u16 arg3) {
    s16 pad_s;
    s16 angle;
    u8 i;
    u16 rot[3];
    struct { f32 a, b, e; } vs;
#define V0 vs.a
#define V1 vs.b
#define V2 vs.e
#define vec ((f32 *)&vs)
    func_801E74DC_Sub *anim;
    register u16 *rotp;
    s32 hit;
#define d k
    f32 k;
    f32 c;
    f32 s;

    hit = func_801C5A1C(P->x, P->y, P->z, P->x, P->y - 20.0, P->z);
    anim = &arg2->unk1C;
    if (hit || (arg0->flags & 4)) {
    switch (anim->unk0) {
    case 0x168002B:
        if (arg3 == 0) return;
        anim->unk8 = 1.0f;
        anim->unk0 = 0x168002E;
        ((s16 *)&anim->unk4)[0] = 0;
        ((s16 *)&anim->unk4)[1] = 0x100;
        func_8013A28C(arg1, *anim);
        return;
    case 0x168002E:
        hit = func_801C5A1C(P->x, P->y + 2.0, P->z, P->x, P->y - 5.0, P->z);
        if (hit) {
            V0 = G.x;
            V1 = G.y;
            V2 = G.z;
            rot[1] = 0;
            rot[0] = 0;
            rot[2] = 0;
            if (V0 != 0.0 || V2 != 0.0) {
                angle = func_8001EF38(-V2, V0);
                P->ry = (angle + 0x800) & 0x1FFF;
            } else {
                P->ry = *(u16 *)&D_80216C00;
            }
            if (P->ry >= 0x800 && P->ry < 0x810) {
                P->ry = 0x810;
            } else if (P->ry >= 0x1800 && P->ry < 0x1810) {
                P->ry = 0x1810;
            }
            D_80216C00 = P->ry;
            d = func_8002FC20(V2*V2 + V0*V0);
            hit = 0x800 - (func_8001EF38(V1, d) & 0x1FFF);
            angle = hit;
            hit = (s16)hit;
            s = func_8001EB64(hit);
            hit = angle;
            c = func_8001EAD0(hit);
            k = func_8001EAD0(P->ry);
            arg0->x = arg0->x + 0.15 * k * c * s;
            s = func_8001EB64(hit);
            c = func_8001EAD0(hit);
            k = func_8001EB64(P->ry);
            arg0->z = arg0->z + 0.15 * k * c * s;
            arg0->y = 0.0f;
            func_801EF440((func_801EF440_StructA *)arg0);
            if (V0 == 0.0 && V2 == 0.0) {
                arg0->x = arg0->x * 0.95;
                arg0->z = arg0->z * 0.95;
                func_80011380(arg1, (u8 *)anim + 6);
            } else {
                func_800113D0(arg1, (u8 *)anim + 6);
            }
            if (V0 == 0.0 && V2 == 0.0) {
                if (arg0->z*arg0->z + arg0->x*arg0->x < 0.01) {
                    anim->unk0 = 0x1680041;
                    ((s16 *)&anim->unk4)[0] = 0;
                    ((s16 *)&anim->unk4)[1] = 0;
                    anim->unk8 = 1.0f;
                    func_8013A28C(arg1, *anim);
                    arg0->state = 5;
                    arg0->x = 0.0f;
                    arg0->z = 0.0f;
                    func_801E4F60(G.state);
                    return;
                }
            }
            func_80130F74(vec);
            func_801311F8(rot, vec, 0, (P->ry >> 3) & 0xFFFF, 0);
            for (i = 0; ; ) {
                rotp = &rot[i++];
                *rotp = (f64)(u32)*rotp * 0.3515625;
                if (i >= 3) break;
            }
            P->rx = (s32)((f64)(u32)rot[0] / 0.0439453125);
            P->ry = (s32)((f64)(u32)rot[1] / 0.0439453125);
            P->rz = (s32)((f64)(u32)rot[2] / 0.0439453125);
            return;
        }
        return;
    default:
        func_801E4F60(1);
        arg0->state = 0xAF;
        D_80216C00 = P->ry;
        func_801518D4(0, 3, 5);
        anim->unk8 = 1.0f;
        anim->unk0 = 0x168002B;
        ((s16 *)&anim->unk4)[0] = 0;
        ((s16 *)&anim->unk4)[1] = 0;
        func_8013A28C(arg1, *anim);
        arg0->x = 0.0f;
        arg0->z = 0.0f;
        return;
    }
    } else {
    anim->unk8 = 3.0f;
    anim->unk0 = 0x1680053;
    ((s16 *)&anim->unk4)[0] = 0;
    ((s16 *)&anim->unk4)[1] = 0;
    func_8013A28C(arg1, *anim);
    arg0->state = 5;
    arg0->x = arg0->x / 2.5;
    arg0->z = arg0->z / 2.5;
    func_801E4F60(G.state);
    G.flags |= 0x200;
    G.flags &= 0xFEFF;
    P->rx = 0;
    P->rz = 0;
    D_80216BF0 = 0x14;
    }
}
