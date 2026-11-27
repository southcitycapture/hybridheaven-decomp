#include "common.h"
extern u8 D_801BBBF0[];
typedef struct func_801EFD14_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EFD14_Table;
extern func_801EFD14_Table D_80216B90;
extern f32 D_8021AFB4;
extern f32 D_8021AFB8;
extern f32 D_8021AFBC;
extern s16 D_8021AFC0;
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
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
#define SUBV (*(func_801E74DC_Sub *)sub)
extern void func_80011140(s32, void *, func_801EFD14_Table, s32);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_8001EF38(f32, f32);
extern void func_8013A28C(s32, func_801E74DC_Sub);
extern void func_801BF1A0(s32);
extern void func_801C4A5C(void *, s32, s32);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
void func_801E4F60(u16 arg0);
typedef struct func_801E8BD0_G {
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
    u8 pad5[0xEF0 - 0x38C];
    u16 unkEF0;
    u8 pad6[4];
    u8 unkEF6;
    u8 pad7[5];
    s32 unkEFC;
} func_801E8BD0_G;

#undef g
#undef P
#undef G
#undef SUBV
typedef struct func_801ED72C_StructA {
    u8 pad[0x2C]; u32 flags; u8 pad2[0x10];
    f32 x, y, z; u8 pad3[8]; s32 unk54;
} func_801ED72C_StructA;
typedef union func_801ED72C_StructSub {
    struct { u32 id; s16 frame; u16 flags; f32 speed; } fields;
    func_801E74DC_Sub value;
} func_801ED72C_StructSub;
typedef struct func_801ED72C_StructB {
    u8 pad[0x1C]; func_801ED72C_StructSub anim;
} func_801ED72C_StructB;
#define g ((func_801E8BD0_G *)D_801BBBF0)
#define P (g->unkE0->unk2C)
#define SUBV(v) ((v)->value)
#define FLAGS g->unkEF0
#define LAST (*(u16 *)(D_801BBBF0 + 0xEFE))
extern void func_801F13B8(f32, f32, f32, f32, s16);

s32 func_801ED72C(func_801ED72C_StructA *arg0, s32 arg1, func_801ED72C_StructB *arg2, u16 arg3) {
    func_801ED72C_StructSub *sub;
    f32 sp48[3];
    f32 c, x;
    f32 sp3C;
    f32 z;
    s32 st;
    f32 sp30;
extern void func_801C4A5C();

    sub = &arg2->anim;
    switch (arg2->anim.fields.id) {
    case 0x1680023:
        arg0->flags |= 0x80;
        if (arg3 != 0) {
            func_80011140(arg1, arg2, *(func_801EFD14_Table *)&D_80216B90, 10);
            arg0->flags |= 0x60;
            func_801E4F60(LAST);
            FLAGS &= 0xFFF9;
        }
        break;
    case 0x1680026:
        arg0->flags |= 0x80;
        if (arg3 != 0) {
            sub->fields.id = 0x168003E;
            sub->fields.frame = 0x1D;
            sub->fields.flags = 0;
            sub->fields.speed = 1.0f;
            func_8013A28C(arg1, SUBV(sub));
            arg0->flags |= 0x60;
            func_801E4F60(LAST);
            FLAGS &= 0xFFF9;
        }
        break;
    case 0x1680031:
        arg0->flags |= 0x80;
        if (arg3 != 0) {
            if (sub->fields.flags & 2) {
                arg0->flags |= 0x60;
                arg0->flags &= ~0x80;
                arg0->z = 0.0f;
                arg0->y = 0.0f;
                arg0->x = 0.0f;
                sub->fields.id = 0x1680053;
                sub->fields.frame = 0;
                sub->fields.flags = 0;
                sub->fields.speed = 1.0f;
                func_8013A28C(arg1, SUBV(sub));
                FLAGS &= 0xFAFF;
                func_801E4F60(g->unkEFC | 4 | 8);
            } else {
                sub->fields.id = 0x1680017;
                sub->fields.frame = 0;
                sub->fields.flags = 0;
                sub->fields.speed = 1.0f;
                func_8013A28C(arg1, SUBV(sub));
                arg0->unk54 = 0xF181;
                func_801C4A5C(arg0, 0);
                arg0->flags |= 0x40;
                FLAGS &= 0xFFF9;
                arg0->x = 0.0f;
                arg0->z = 0.0f;
                arg0->y = 0.0f;
            }
        }
        break;
    case 0x1680024:
    case 0x1680025:
        arg0->flags |= 0x80;
        if (arg3 != 0) {
            arg0->flags |= 0x20;
            sp3C = func_8001EAD0(P->unk12);
            c = func_8001EB64(P->unk12);
            x = P->unk4;
            z = P->unkC;
            func_801C5A1C(x, P->unk8 + 1.0, z, sp3C * 5.0 + x, P->unk8 + 1.0, c * 5.0 + z);
            st = g->unk35A;
            if (st != 15 && st != 16 && st == 34) {
                func_801BF1A0(6);
                FLAGS |= 0x100;
                sub->fields.id = 0x1680031;
                sub->fields.frame = 0;
                sub->fields.flags = 0;
                func_8013A28C(arg1, SUBV(sub));
            } else {
                P->unk8 -= 0.4;
                sub->fields.id = 0x1680026;
                sub->fields.frame = 0;
                sub->fields.flags = 0;
                func_8013A28C(arg1, SUBV(sub));
            }
        } else {
            func_801F13B8(D_8021AFB4, D_8021AFB8, D_8021AFBC, 1.0f, D_8021AFC0);
        }
        break;
    default:
        sp3C = func_8001EAD0(P->unk12);
        c = func_8001EB64(P->unk12);
        x = P->unk4;
        z = P->unkC;
        if (func_801C5A1C(x, P->unk8 + 28.0, z, sp3C * 8.0 + x, P->unk8 + 28.0, c * 8.0 + z) == 0) {
            sp30 = func_8001EAD0(P->unk12);
            c = func_8001EB64(P->unk12);
            x = P->unk4;
            z = P->unkC;
            if (func_801C5A1C(x, P->unk8 + 1.0, z, sp30 * 5.0 + x, P->unk8 + 1.0, c * 5.0 + z) != 0) {
                st = g->unk35A;
                if (st == 14 || st == 15 || st == 16 || st == 34) {
                    sp48[2] = g->unk364;
                    sp48[0] = g->unk35C;
                    sp48[1] = g->unk360;
                    D_8021AFC0 = (s16)(func_8001EF38(-sp48[2], sp48[0]) + 0x1800) & 0x1FFF;
                    arg0->x = 0.0f;
                    arg0->y = 0.0f;
                    arg0->z = 0.0f;
                    st = g->unk35A;
                    if (st == 14) goto c14;
                    if (st == 15) goto c15;
                    if (st == 16) goto c16;
                    if (st == 34) goto c16;
                    sub = &arg2->anim;
                    goto done;
                c14:
                    sub->fields.id = 0x1680023;
                    sub = &arg2->anim;
                    func_801E4F60(14);
                    P->unk4 = g->unk380 - func_8001EAD0(P->unk12) * 3.0f;
                    P->unkC = g->unk388 - func_8001EB64(P->unk12) * 3.0f;
                    goto done;
                c15:
                    sub->fields.id = 0x1680024;
                    sub = &arg2->anim;
                    func_801E4F60(12);
                    D_8021AFB4 = g->unk380;
                    D_8021AFBC = g->unk388;
                    goto done;
                c16:
                    sub->fields.id = 0x1680025;
                    sub = &arg2->anim;
                    if (g->unk35A == 16) func_801E4F60(12);
                    else func_801E4F60(0);
                    D_8021AFB4 = g->unk380;
                    D_8021AFBC = g->unk388;
                done:
                    sub->fields.frame = 0;
                    sub->fields.flags = 0;
                    func_8013A28C(arg1, SUBV(sub));
                    arg0->flags &= ~0x40;
                    arg0->flags &= ~0x20;
                    arg0->z = 0.0f;
                    arg0->y = 0.0f;
                    arg0->x = 0.0f;
                    break;
                }
                return 0;
            }
        }
        return 0;
    }
    return 1;
}
