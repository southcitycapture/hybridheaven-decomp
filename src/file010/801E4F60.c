#include "common.h"


typedef struct func_801E4F60_Struct {
    u8 pad[0x54];
    s32 unk54;
} func_801E4F60_Struct;

extern void func_801C4A5C(void *, s32, s32);
extern func_801E4F60_Struct *D_801BBCCC;

void func_801E4F60(u16 arg0) {
    s32 temp_a2;
    func_801E4F60_Struct *temp_a0;

    temp_a2 = arg0;
    temp_a0 = D_801BBCCC;
    temp_a0->unk54 = temp_a2;
    func_801C4A5C(temp_a0, 0, temp_a2);
}



void func_801E4F94(u16 arg0) {
    s32 *temp_a0;

    temp_a0 = D_801BBCCC;
    temp_a0[0x54 / 4] |= arg0;
    func_801C4A5C(temp_a0, 0, arg0);
}


void func_801E4FD0(u16 arg0) {
    s32 temp_a2;
    func_801E4F60_Struct *temp_a0;

    temp_a2 = arg0;
    temp_a0 = D_801BBCCC;
    temp_a0->unk54 &= ~temp_a2;
    func_801C4A5C(temp_a0, 0, temp_a2);
}

/* hh-block asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801E5010.s {"functions":["func_801E5010"],"rodata":[]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/_mrg_keep_text_func_801E5010.s")

#define D_80011140 D_80011140__func_801E6BCC
#define D_80011198 D_80011198__func_801E6BCC
#define D_80011258 D_80011258__func_801E6BCC
#define D_80216B90 D_80216B90__func_801E6BCC
#define D_80216B9C D_80216B9C__func_801E6BCC
#define D_80216BA8 D_80216BA8__func_801E6BCC
#define D_80216BE4 D_80216BE4__func_801E6BCC
#define D_80216BF4 D_80216BF4__func_801E6BCC
#define D_8021AFC2 D_8021AFC2__func_801E6BCC
#define func_80011140__func_801E6BCC func_80011140__func_801E6BCC__func_801E6BCC
#define func_800111E0 func_800111E0__func_801E6BCC
#define func_8012C6B4 func_8012C6B4__func_801E6BCC
#define func_8013A28C func_8013A28C__func_801E6BCC
#define func_801E7274_Arg0 func_801E7274_Arg0__func_801E6BCC
#define func_801E7274_Table func_801E7274_Table__func_801E6BCC
#define func_801E74DC_Sub func_801E74DC_Sub__func_801E6BCC
#define func_801EFD14_Table func_801EFD14_Table__func_801E6BCC
typedef struct func_801E7274_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E7274_Table;
extern void D_80011140(s32, void *, func_801E7274_Table, s32);
extern s32 D_80011258(s32, void *);
typedef struct func_801EFD14_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EFD14_Table;
extern func_801EFD14_Table D_80216B90;
extern func_801EFD14_Table D_80216B9C;
extern func_801EFD14_Table D_80216BA8;
extern void func_800111E0(s32, void *);
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
extern void func_8013A28C(s32, func_801E74DC_Sub);
typedef struct func_801E7274_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x40 - 0x30];
    f32 unk40;
    u8 pad2[0x48 - 0x44];
    f32 unk48;
} func_801E7274_Arg0;


extern u16 D_80216BF4;
extern u8 D_8021AFC2;
extern func_801EFD14_Table D_80216BE4;
extern s32 func_8012C6B4(s32);
extern void D_80011198(s32, void *);
extern s32 func_80011140__func_801E6BCC(s32, void *, func_801EFD14_Table, s32);

typedef struct func_801E6BCC_StructState {
    s32 id;
    u16 frame;
    u16 flags;
    f32 speed;
} func_801E6BCC_StructState;

#define ARG2 (*arg2Ref)
#define STATE ((func_801E6BCC_StructState *)((u8 *)ARG2 + 0x1C))
#define PLAY() func_8013A28C(arg1, *(func_801E74DC_Sub *)state)
#define MOVE(table, time) D_80011140(arg1, ARG2, *(func_801E7274_Table *)&(table), time)
#define FLAGS actor->unk2C
#define X actor->unk40
#define Z actor->unk48

void func_801E6BCC(arg0, arg1, arg2, arg3)
s32 arg0;
s32 arg1;
void *arg2;
u16 arg3;
{
    f64 divisor;
    func_801E6BCC_StructState *state;
    u16 var_a3 = arg3;
    func_801E7274_Arg0 *actor = (func_801E7274_Arg0 *)arg0;
    void **arg2Ref = &arg2;

    FLAGS |= 0x40;
    switch (STATE->id) {
    case 0x1680041:
        state = STATE;
        if (1.0 != state->speed) {
            state->speed = 1.0f;
            PLAY();
        }
        FLAGS |= 0x60;
        if (D_80216BF4 >= 301) {
            D_80216BF4 = 0;
            D_8021AFC2 = 0;
            if (func_8012C6B4(4) == 3) {
                state->id = 0x1680054;
                state->frame = 0;
                state->flags = 0;
                state->speed = 1.0f;
                PLAY();
            } else {
                D_80011198(arg1, ARG2);
                D_8021AFC2 = 1;
                MOVE(D_80216BE4, 10);
            }
            X = 0.0f;
            Z = 0.0f;
        } else if (D_8021AFC2 != 0) {
            if (func_80011140__func_801E6BCC(arg1, ARG2, D_80216BE4, 10)) {
                D_8021AFC2 = 0;
            }
        } else {
            func_800111E0(arg1, &state->flags);
            FLAGS |= 0x80;
            X = 0.0f;
            Z = 0.0f;
            D_80216BF4++;
        }
        break;
    case 0x1680057:
        FLAGS &= ~0x80;
        Z = 0.0f;
        X = 0.0f;
        if (var_a3) {
            state = STATE;
            if (state->flags & 2) {
                D_80216BF4 = 0;
                MOVE(D_80216B90, 10);
            } else {
                state->id = 0x1680058;
                state->frame = 0;
                state->flags = 0x1100;
                state->speed = 2.0f;
                PLAY();
            }
        }
        break;
    case 0x1680058:
        FLAGS &= ~0x80;
        if (D_80216BF4 >= 301 && ((state = STATE)->flags & 0x100)) {
            D_80011258(arg1, &state->flags);
        }
        if (var_a3) {
            state = STATE;
            state->id = 0x1680057;
            state->frame = 27;
            state->flags = 0x1002;
            state->speed = 1.0f;
            PLAY();
        } else {
            D_80216BF4++;
        }
        Z = 0.0f;
        X = 0.0f;
        break;
    case 0x1680054:
        if (var_a3) {
            D_80216BF4 = 0;
            state = STATE;
            state->id = 0x1680055;
            state->flags = 0x100;
            state->frame = 0;
            state->speed = 3.0f;
            PLAY();
        }
        break;
    case 0x1680056:
        if (var_a3) {
            D_80216BF4 = 0;
            state = STATE;
            state->id = 0x1680041;
            state->flags = 0;
            state->frame = 0;
            state->speed = 1.0f;
            PLAY();
        }
        break;
    case 0x1680055:
        if (D_80216BF4 >= 301 && ((state = STATE)->flags & 0x100)) {
            D_80011258(arg1, &state->flags);
        }
        if (var_a3) {
            state = STATE;
            state->id = 0x1680056;
            state->frame = 0;
            state->flags = 0;
            state->speed = 1.0f;
            PLAY();
        } else {
            D_80216BF4++;
        }
        break;
    case 0x1680040:
        divisor = 1.1;
        MOVE(D_80216BA8, 5);
        X /= divisor;
        Z /= divisor;
        break;
    case 0x168003F:
        MOVE(D_80216B9C, 5);
        FLAGS |= 0x80;
        divisor = 1.3;
        X /= divisor;
        Z /= divisor;
        break;
    case 0x168003E:
    default:
        MOVE(D_80216B90, 5);
        FLAGS |= 0x80;
        divisor = 1.2;
        X /= divisor;
        Z /= divisor;
        break;
    }
}
#undef ARG2
#undef STATE
#undef PLAY
#undef MOVE
#undef FLAGS
#undef X
#undef Z
#undef D_80011140
#undef D_80011198
#undef D_80011258
#undef D_80216B90
#undef D_80216B9C
#undef D_80216BA8
#undef D_80216BE4
#undef D_80216BF4
#undef D_8021AFC2
#undef func_80011140__func_801E6BCC
#undef func_800111E0
#undef func_8012C6B4
#undef func_8013A28C
#undef func_801E7274_Arg0
#undef func_801E7274_Table
#undef func_801E74DC_Sub
#undef func_801EFD14_Table

extern f32 D_8021AFB0;

typedef struct func_801E7274_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E7274_Sub;
typedef struct func_801E7274_Arg2 {
    u8 pad[0x1C];
    func_801E7274_Sub unk1C;
} func_801E7274_Arg2;
typedef struct func_801E7274_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x40 - 0x30];
    f32 unk40;
    u8 pad2[0x48 - 0x44];
    f32 unk48;
} func_801E7274_Arg0;
typedef struct func_801E7274_Inner {
    u8 pad[0x12];
    s16 unk12;
} func_801E7274_Inner;
typedef struct func_801E7274_Outer {
    u8 pad[0x2C];
    func_801E7274_Inner *unk2C;
} func_801E7274_Outer;
typedef struct func_801E7274_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801E7274_Table;

extern void D_80011140(s32, void *, func_801E7274_Table, s32);
extern void D_8013A28C(s32, func_801E7274_Sub);
extern void func_800111E0(s32, void *);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);

/* globals reached from an earlier-declared symbol */
#define GOUTER (((func_801E7274_Outer **)&D_801BBCCC)[1])
#define GTABLE (*(func_801E7274_Table *)((u8 *)&D_801BBCCC + 0x5AED0))
#define GSCALE D_8021AFB0

void func_801E7274(func_801E7274_Arg0 *arg0, s32 arg1, func_801E7274_Arg2 *arg2, s32 arg3) {
    func_801E7274_Sub *p = &arg2->unk1C;
    s32 t = p->unk0;

    if (t == 0x168003E) goto a;
    if (t == 0x168003F) goto def;
    if (t == 0x1680040) goto def;
    if (t != 0x1680041) goto def;
    goto def;
a:
    if ((f64)p->unk8 != 1.0) {
        p->unk8 = 1.0f;
    }
    D_8013A28C(arg1, *p);
    arg0->unk2C = (arg0->unk2C | 0x60);
    arg0->unk2C = arg0->unk2C & ~0x80;
    func_800111E0(arg1, (u8 *)p + 6);
    arg0->unk40 = (f32)(((f64)func_8001EAD0(GOUTER->unk2C->unk12) * ((f64)GSCALE - 1.0)) / 9.0);
    arg0->unk48 = (f32)(((f64)func_8001EB64(GOUTER->unk2C->unk12) * ((f64)GSCALE - 1.0)) / 9.0);
    return;
def:
    D_80011140(arg1, arg2, GTABLE, 5);
    arg0->unk2C = arg0->unk2C & ~0x80;
    arg0->unk40 = (f32)(((f64)func_8001EAD0(GOUTER->unk2C->unk12) * ((f64)GSCALE - 1.0)) / 9.0);
    arg0->unk48 = (f32)(((f64)func_8001EB64(GOUTER->unk2C->unk12) * ((f64)GSCALE - 1.0)) / 9.0);
}
#undef GOUTER
#undef GTABLE
#undef GSCALE

typedef struct func_801EFD14_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EFD14_Table;
extern void func_80011140(s32, void *, func_801EFD14_Table, s32);

typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;

typedef struct func_801E74DC_Arg2 {
    u8 pad[0x1C];
    func_801E74DC_Sub unk1C;
} func_801E74DC_Arg2;

typedef struct func_801E74DC_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x40 - 0x30];
    f32 unk40;
    u8 pad2[0x48 - 0x44];
    f32 unk48;
} func_801E74DC_Arg0;

typedef struct func_801E74DC_Inner {
    u8 pad[0x12];
    s16 unk12;
} func_801E74DC_Inner;

typedef struct func_801E74DC_Outer {
    u8 pad[0x2C];
    func_801E74DC_Inner *unk2C;
} func_801E74DC_Outer;

extern void func_8013A28C(s32, func_801E74DC_Sub);
extern func_801E74DC_Outer *D_801BBCD0;
extern func_801EFD14_Table D_80216B9C;
extern func_801EFD14_Table D_80216BA8;

#define D_801BBCD0 D_801BBCD0__func_801E74DC
#define D_80216B9C D_80216B9C__func_801E74DC
#define D_80216BA8 D_80216BA8__func_801E74DC
#define func_80011140 func_80011140__func_801E74DC
#define func_8013A28C func_8013A28C__func_801E74DC
#define func_801E74DC_Arg0 func_801E74DC_Arg0__func_801E74DC
#define func_801E74DC_Arg2 func_801E74DC_Arg2__func_801E74DC
#define func_801E74DC_Inner func_801E74DC_Inner__func_801E74DC
#define func_801E74DC_Outer func_801E74DC_Outer__func_801E74DC
#define func_801E74DC_Sub func_801E74DC_Sub__func_801E74DC
#define func_801EFD14_Table func_801EFD14_Table__func_801E74DC
typedef struct func_801E74DC_Inner {
    u8 pad[0x12];
    s16 unk12;
} func_801E74DC_Inner;
typedef struct func_801E74DC_Outer {
    u8 pad[0x2C];
    func_801E74DC_Inner *unk2C;
} func_801E74DC_Outer;
extern func_801E74DC_Outer *D_801BBCD0;
typedef struct func_801EFD14_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EFD14_Table;
extern func_801EFD14_Table D_80216BA8;
extern void func_80011140(s32, void *, func_801EFD14_Table, s32);
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
extern void func_8013A28C(s32, func_801E74DC_Sub);
typedef struct func_801E74DC_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x40 - 0x30];
    f32 unk40;
    u8 pad2[0x48 - 0x44];
    f32 unk48;
} func_801E74DC_Arg0;
typedef struct func_801E74DC_Arg2 {
    u8 pad[0x1C];
    func_801E74DC_Sub unk1C;
} func_801E74DC_Arg2;


extern func_801EFD14_Table D_80216B9C;

typedef struct func_801E74DC_StructMotion {
    f32 directionX;
    f32 directionZ;
    f64 normalization;
} func_801E74DC_StructMotion;

void func_801E74DC(func_801E74DC_Arg0 *arg0, s32 arg1, func_801E74DC_Arg2 *arg2, s32 arg3) {
    func_801E74DC_StructMotion motion;
    func_801E74DC_Sub *s;

    s = &arg2->unk1C;
    if (arg2->unk1C.unk0 == 0x168003E) goto def;
    if (arg2->unk1C.unk0 == 0x168003F) goto caseA;
    if (arg2->unk1C.unk0 == 0x1680040) goto caseC;
    if (arg2->unk1C.unk0 != 0x1680041) goto def;
    goto caseB;

caseA:
    if (s->unk8 != 1.0) {
        s->unk8 = 1.0f;
    }
    func_8013A28C(arg1, *s);
    arg0->unk2C |= 0x60;
    arg0->unk2C &= ~0x80;
    func_800111E0(arg1, (u8 *)s + 6);
    if (D_8021AFB0 >= 6.0) {
        arg0->unk40 = func_8001EAD0(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 1.0) * 0.125;
        arg0->unk48 = func_8001EB64(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 1.0) * 0.125;
    }
    return;

caseB:
    func_80011140(arg1, arg2, D_80216B9C, 5);
    arg0->unk2C &= ~0x80;
    arg0->unk40 = func_8001EAD0(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 3.0) / 20.0;
    arg0->unk48 = func_8001EB64(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 3.0) / 20.0;
    return;

caseC:
    func_80011140(arg1, arg2, *(func_801EFD14_Table *)&D_80216BA8, 4);
    arg0->unk2C &= ~0x80;
    if (D_8021AFB0 >= 6.0) {
        arg0->unk40 = func_8001EAD0(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 1.0) * 0.125;
        arg0->unk48 = func_8001EB64(D_801BBCD0->unk2C->unk12) * (D_8021AFB0 - 1.0) * 0.125;
    }
    return;

def:
    func_80011140(arg1, arg2, *(func_801EFD14_Table *)&D_80216BA8, 4);
    arg0->unk2C &= ~0x80;
    if (D_8021AFB0 >= 6.0) {
        motion.normalization = 20.0;
        motion.directionX = func_8001EAD0(D_801BBCD0->unk2C->unk12);
        arg0->unk40 = motion.directionX * (D_8021AFB0 - 3.0) / motion.normalization;
        motion.directionZ = func_8001EB64(D_801BBCD0->unk2C->unk12);
        arg0->unk48 = motion.directionZ * (D_8021AFB0 - 3.0) / motion.normalization;
    }
}
#undef D_801BBCD0
#undef D_80216B9C
#undef D_80216BA8
#undef func_80011140
#undef func_8013A28C
#undef func_801E74DC_Arg0
#undef func_801E74DC_Arg2
#undef func_801E74DC_Inner
#undef func_801E74DC_Outer
#undef func_801E74DC_Sub
#undef func_801EFD14_Table

extern f32 func_8002FC20(f32);
extern s32 D_80011258(s32, void *);

#define D_801BBCD0 D_801BBCD0__func_801E79B8
#define func_8013A28C func_8013A28C__func_801E79B8
#define func_801E74DC_Arg0 func_801E74DC_Arg0__func_801E79B8
#define func_801E74DC_Arg2 func_801E74DC_Arg2__func_801E79B8
#define func_801E74DC_Inner func_801E74DC_Inner__func_801E79B8
#define func_801E74DC_Outer func_801E74DC_Outer__func_801E79B8
#define func_801E74DC_Sub func_801E74DC_Sub__func_801E79B8
typedef struct func_801E74DC_Inner {
    u8 pad[0x12];
    s16 unk12;
} func_801E74DC_Inner;
typedef struct func_801E74DC_Outer {
    u8 pad[0x2C];
    func_801E74DC_Inner *unk2C;
} func_801E74DC_Outer;
extern func_801E74DC_Outer *D_801BBCD0;
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
extern void func_8013A28C(s32, func_801E74DC_Sub);
typedef struct func_801E74DC_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x40 - 0x30];
    f32 unk40;
    u8 pad2[0x48 - 0x44];
    f32 unk48;
} func_801E74DC_Arg0;
typedef struct func_801E74DC_Arg2 {
    u8 pad[0x1C];
    func_801E74DC_Sub unk1C;
} func_801E74DC_Arg2;

void func_801E79B8(func_801E74DC_Arg0 *arg0, s32 arg1, func_801E74DC_Arg2 *arg2, s32 arg3) {
    func_801E74DC_Sub tmp;
    func_801E74DC_Sub *v;
    f32 len;
    f32 fs;

    v = &arg2->unk1C;
    if (v->unk0 == 0x01680040) {
        if ((f64)v->unk8 != 1.0) {
            v->unk8 = 1.0f;
        }
        func_8013A28C(arg1, *v);
        arg0->unk2C |= 0x60;
        arg0->unk2C &= ~0x80;
        func_800111E0(arg1, (u8 *)v + 6);
        len = func_8002FC20(arg0->unk48 * arg0->unk48 + arg0->unk40 * arg0->unk40);
        fs = (D_8021AFB0 - 1.0) / 6.0;
        fs = len + (fs - len) * 0.0625;
        arg0->unk40 = func_8001EAD0(D_801BBCD0->unk2C->unk12) * fs;
        arg0->unk48 = func_8001EB64(D_801BBCD0->unk2C->unk12) * fs;
        return;
    }
    if (D_80011258(arg1, (u8 *)v + 6) == 0) {
        v->unk0 = 0x01680040;
        *(s16 *)((u8 *)v + 4) = 0;
        *(s16 *)((u8 *)v + 6) = 0x1000;
        func_8013A28C(arg1, *v);
        arg0->unk2C &= ~0x80;
        len = func_8002FC20(arg0->unk48 * arg0->unk48 + arg0->unk40 * arg0->unk40);
        fs = (D_8021AFB0 - 1.0) / 6.0;
        fs = len + (fs - len) * 0.0625;
        arg0->unk40 = func_8001EAD0(D_801BBCD0->unk2C->unk12) * fs;
        arg0->unk48 = func_8001EB64(D_801BBCD0->unk2C->unk12) * fs;
    }
}
#undef D_801BBCD0
#undef func_8013A28C
#undef func_801E74DC_Arg0
#undef func_801E74DC_Arg2
#undef func_801E74DC_Inner
#undef func_801E74DC_Outer
#undef func_801E74DC_Sub

#define B_8021AFC4 B_8021AFC4__func_801E7C30
#define B_8021AFC8 B_8021AFC8__func_801E7C30
#define D_80011198 D_80011198__func_801E7C30
#define D_801BBBF0 D_801BBBF0__func_801E7C30
#define D_801E4011 D_801E4011__func_801E7C30
#define D_80216B90 D_80216B90__func_801E7C30
#define D_80216BF0 D_80216BF0__func_801E7C30
#define D_80216C00 D_80216C00__func_801E7C30
#define D_80216C08 D_80216C08__func_801E7C30
#define D_8021AFB4 D_8021AFB4__func_801E7C30
#define D_8021AFBC D_8021AFBC__func_801E7C30
#define D_8021AFC0 D_8021AFC0__func_801E7C30
#define D_8021AFC4 D_8021AFC4__func_801E7C30
#define D_8021AFC8 D_8021AFC8__func_801E7C30
#define func_80010550 func_80010550__func_801E7C30
#define func_80011140 func_80011140__func_801E7C30
#define func_80011140__r func_80011140__r__func_801E7C30
#define func_8001EF38 func_8001EF38__func_801E7C30
#define func_8013A28C func_8013A28C__func_801E7C30
#define func_801518D4 func_801518D4__func_801E7C30
#define func_801BF1A0 func_801BF1A0__func_801E7C30
#define func_801C5A1C func_801C5A1C__func_801E7C30
#define func_801DFE50 func_801DFE50__func_801E7C30
#define func_801E4F60 func_801E4F60__func_801E7C30
#define func_801E74DC_Sub func_801E74DC_Sub__func_801E7C30
#define func_801E8BD0_G func_801E8BD0_G__func_801E7C30
#define func_801E8BD0_In func_801E8BD0_In__func_801E7C30
#define func_801E8BD0_Mid func_801E8BD0_Mid__func_801E7C30
#define func_801EFD14_Table func_801EFD14_Table__func_801E7C30
#define g ((func_801E8BD0_G *)&D_801BBBF0)
#define P (g->unkE0->unk2C)
extern int D_8021AFC8;
extern int B_8021AFC8;
#define end D_8021AFC8
#define c0 D_8021AFC8; if (0) B_8021AFC8
extern s32 D_80011198(s32, void *);
extern u8 D_801BBBF0[];
extern s8 D_801E4011;
typedef struct func_801EFD14_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EFD14_Table;
extern func_801EFD14_Table D_80216B90;
extern u16 D_80216BF0;
extern s16 D_80216C00;
extern f32 D_8021AFB4;
extern f32 D_8021AFBC;
extern s16 D_8021AFC0;
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
#define g ((func_801E8BD0_G *)&D_801BBBF0)
#define P (g->unkE0->unk2C)
extern s32 func_80010550(s32, void *);
extern void func_80011140(s32, void *, func_801EFD14_Table, s32);
extern s32 func_8001EF38(f32, f32);
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
extern void func_8013A28C(s32, func_801E74DC_Sub);
extern void func_801518D4(s32, s32, s32);
extern void func_801BF1A0(s32);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
void func_801E4F60(u16 arg0);

#undef c0
#undef end

typedef struct func_801E7C30_Sub {
    s32 unk0;
    u16 unk4;
    s16 unk6;
    f32 unk8;
} func_801E7C30_Sub;
typedef struct func_801E7C30_Stick {
    u8 pad[6];
    s16 unk6;
    s16 unk8;
} func_801E7C30_Stick;
typedef struct func_801E7C30_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 pad1[0x3E - 0x34];
    u8 unk3E;
    u8 unk3F;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x68 - 0x4C];
    func_801E7C30_Stick *unk68;
} func_801E7C30_Arg0;
typedef struct func_801E7C30_Arg2 {
    u8 pad[0x1C];
    func_801E7C30_Sub unk1C;
} func_801E7C30_Arg2;
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
extern void func_801DFE50(void *, s32);
extern u8 D_80216C08;

#undef g
#undef P
#define g ((func_801E7C30_G *)&D_801BBBF0)
#define P (g->unkE0->unk2C)
extern s32 B_8021AFC4;
extern s32 D_8021AFC4;
extern void *func_80011140__r(s32, void *, func_801EFD14_Table, s32);
#define SUBV (*(func_801E74DC_Sub *)sub)

void func_801E7C30(func_801E7C30_Arg0 *arg0, s32 arg1, func_801E7C30_Arg2 *arg2, u16 arg3) {
    func_801E7C30_Sub *sub;
    func_801E7C30_Stick *stick;
    f32 sp6C;
    f32 sp60[3];
    s16 ang;
    u8 kind;
    s32 d;
    f32 fa0;
    f32 fa1;

    sub = &arg2->unk1C;
    stick = arg0->unk68;
    switch (sub->unk0) {
    case 0x168004C:
        if (sub->unk4 == 2) {
            arg0->unk2C &= ~0x80;
            arg0->unk2C |= 0x40;
            g->unkEF0 |= 8;
            switch (D_80216C08) {
            case 0:
                arg0->unk3F = 4;
                break;
            case 1:
                arg0->unk3F = 0xA;
                break;
            case 2:
                arg0->unk3F = 0xB;
                break;
            }
        }
        if (g->unkEC4 & 0x20) {
            sub->unk0 = 0x1680053;
            sub->unk4 = 0;
            sub->unk6 = 0;
            func_8013A28C(arg1, SUBV);
            arg0->unk2C &= ~0x80;
            arg0->unk2C |= 0x40;
            arg0->unk40 = 0.0f;
            arg0->unk44 = 0.0f;
            arg0->unk48 = 0.0f;
            func_801E4F60((g->unkEFC | 4 | 8) & 0xFFFF);
            g->unkEF0 |= 8;
            return;
        }
        if (sub->unk4 < 5) {
            return;
        }
        if (arg0->unk30 & 4) {
            if (g->unkEF6 == 0x18) {
                func_801E4F60(1);
                arg0->unk3E = 0xAF;
                D_80216C00 = P->unk12;
                func_801518D4(0, 3, 5);
                sub->unk0 = 0x168002B;
                sub->unk4 = 2;
                sub->unk6 = 0;
                sub->unk8 = 1.0f;
                func_8013A28C(arg1, SUBV);
                arg0->unk48 = 0.0f;
                arg0->unk44 = 0.0f;
                arg0->unk40 = 0.0f;
                return;
            }
            D_8021AFC4 = 0;
            if (D_80216BF0 >= 0x14) {
                func_801518D4(0, 3, 6);
            }
            sub->unk0 = 0x168004D;
            arg0->unk40 = 0.0f;
            arg0->unk44 = 0.0f;
            arg0->unk48 = 0.0f;
            sub->unk4 = 0;
            sub->unk6 = 0;
            sub->unk8 = 1.0f;
            func_8013A28C(arg1, SUBV);
            func_80010550(arg1, arg2);
            func_801E4F60(*(u16 *)((u8 *)g + 0xEFE));
            if (D_80216C08 == 2) {
                arg0->unk2C &= ~0x80;
                return;
            }
            arg0->unk2C |= 0x80;
            return;
        }
        if ((g->unkEF0 & 8) && func_801C5A1C(func_8001EAD0(P->unk12) * 6.0 + P->unk4, P->unk8 + 22.0, func_8001EB64(P->unk12) * 6.0 + P->unkC, func_8001EAD0(P->unk12) * 6.0 + P->unk4, P->unk8 + 16.0, func_8001EB64(P->unk12) * 6.0 + P->unkC) != 0 && (g->unk35A == 8 || g->unk35A == 9 || g->unk35A == 0x11)) {
            kind = g->unk35A;
            sp6C = g->unk384;
            if (func_801C5A1C(P->unk4, P->unk8 + 16.5, P->unkC, func_8001EAD0(P->unk12) * 10.0 + P->unk4, P->unk8 + 16.5, func_8001EB64(P->unk12) * 10.0 + P->unkC) == 0 || (g->unk35A != 0x10 && g->unk35A != 0x22)) {
                if (func_801C5A1C(P->unk4, P->unk8 + 28.0, P->unkC, func_8001EAD0(P->unk12) * 7.0 + P->unk4, P->unk8 + 28.0, func_8001EB64(P->unk12) * 7.0 + P->unkC) == 0) {
                    sub->unk0 = 0x168000D;
                    sub->unk4 = 0;
                    sub->unk6 = 0;
                    sub->unk8 = 1.0f;
                    func_8013A28C(arg1, SUBV);
                    arg0->unk2C &= ~0x40;
                    arg0->unk2C &= ~0x80;
                    func_801E4F60(0);
                    arg0->unk40 = 0.0f;
                    arg0->unk44 = 0.0f;
                    arg0->unk48 = 0.0f;
                    if (kind == 8 || kind == 0x11) {
                        P->unk8 = sp6C - 19.8;
                        g->unkEF0 |= 6;
                        func_801BF1A0(9);
                        D_801E4011 = 0;
                    }
                    if (kind == 9) {
                        func_801BF1A0(0xA);
                        D_801E4011 = 0;
                        P->unk8 = sp6C - 21.0;
                        g->unkEF0 |= 4;
                    }
                    if (func_801C5A1C(P->unk4, P->unk8 + 10.0, P->unkC, func_8001EAD0(P->unk12) * 10.0 + P->unk4, P->unk8 + 10.0, func_8001EB64(P->unk12) * 10.0 + P->unkC) != 0) {
                        sp60[2] = g->unk364;
                        sp60[0] = g->unk35C;
                        sp60[1] = g->unk360;
                        D_8021AFC0 = (s16)(func_8001EF38(-sp60[2], sp60[0]) + 0x1800) & 0x1FFF;
                        D_8021AFB4 = g->unk380;
                        D_8021AFBC = g->unk388;
                        return;
                    }
                    func_801BF1A0(1);
                    sub->unk0 = 0x1680053;
                    sub->unk4 = 0;
                    sub->unk6 = 0;
                    func_8013A28C(arg1, SUBV);
                    arg0->unk2C |= 0x40;
                    func_801E4F60((g->unkEFC | 4 | 8) & 0xFFFF);
                    g->unkEF0 &= 0xFEF1;
                    g->unkEF0 |= 0x200;
                    return;
                }
            }
            return;
        }
        if (func_801C5A1C(P->unk4, P->unk8, P->unkC, func_8001EAD0(P->unk12) * 5.0 + P->unk4, P->unk8, func_8001EB64(P->unk12) * 5.0 + P->unkC) != 0 && g->unk35A != 0xD && g->unk35A != 0xE && g->unk35A != 0x21) {
            sub->unk0 = 0x168002A;
            sub->unk4 = 0;
            sub->unk6 = 0;
            func_8013A28C(arg1, SUBV);
            arg0->unk40 = arg0->unk40 / -8.0;
            arg0->unk48 = arg0->unk48 / -8.0;
            return;
        }
        if (sub->unk4 >= 0xE) {
            D_80216BF0 += 1;
        }
        if (arg0->unk30 & 8) {
            arg0->unk40 = arg0->unk40 * 0.9;
            arg0->unk48 = arg0->unk48 * 0.9;
        }
        break;
    case 0x168004D:
        g->unkEF0 &= 0xFDF7;
        if (arg3 != 0) {
            fa0 = (f64)-stick->unk6 / 20.0;
            fa1 = (f64)stick->unk8 / 20.0;
            ang = (s16)(0x2800 - g->unk232) & 0x1FFF;
            if ((s16)(func_8001EF38(fa0, fa1) + ang - P->unk12) & 0x1000) {
                d = (s16)(((s16)(func_8001EF38(fa0, fa1) + ang - P->unk12) & 0x1FFF) - 0x2000);
            } else {
                d = (s16)((s16)(func_8001EF38(fa0, fa1) + ang - P->unk12) & 0x1FFF);
            }
            if (D_8021AFB0 > 6.0) {
                if ((d < 0 ? -d : d) < 0x800) {
                    d = B_8021AFC4;
                    if (d == 0) {
                        sub->unk0 = 0x168004E;
                        sub->unk6 = 0;
                        sub->unk4 = 0;
                        sub->unk8 = 1.0f;
                        func_8013A28C(arg1, SUBV);
                        func_80010550(arg1, arg2);
                        arg0->unk2C &= ~0x80;
                        arg0->unk2C |= 0x20;
                        arg0->unk40 = func_8001EAD0(P->unk12) * 2.5;
                        arg0->unk48 = func_8001EB64(P->unk12) * 2.5;
                        return;
                    }
                }
            }
            func_80011140(arg1, arg2, D_80216B90, 6);
            d = B_8021AFC4;
            if ((!d) | (D_8021AFC4 = ++d, 0)) {
                arg0->unk2C &= ~0x80;
                arg0->unk2C |= 0x20;
                switch (D_80216C08) {
                case 0:
                    arg0->unk40 = 2.0 * func_8001EAD0(P->unk12);
                    arg0->unk48 = 2.0 * func_8001EB64(P->unk12);
                    return;
                case 1:
                    arg0->unk40 = func_8001EAD0(P->unk12) * 1.0;
                    arg0->unk48 = func_8001EB64(P->unk12) * 1.0;
                    return;
                case 2:
                    arg0->unk40 = func_8001EAD0(P->unk12) * 1.0;
                    arg0->unk48 = func_8001EB64(P->unk12) * 1.0;
                    return;
                }
            } else {
                arg0->unk2C |= 0x80;
                arg0->unk40 = 0.0f;
                arg0->unk48 = 0.0f;
            }
        }
        break;
    case 0x168004E:
        if (arg3 != 0) {
            sub->unk0 = 0x1680040;
            sub->unk4 = 1;
            sub->unk6 = 0;
            sub->unk8 = 1.0f;
            func_8013A28C(arg1, SUBV);
            arg0->unk2C &= ~0x80;
            arg0->unk2C |= 0x20;
            arg0->unk40 = func_8001EAD0(P->unk12) * 2.5;
            arg0->unk48 = func_8001EB64(P->unk12) * 2.5;
        }
        break;
    default:
        D_80011198(arg1, arg2);
        switch (sub->unk0) {
        case 0x168003F:
            if (sub->unk4 < 0xA) {
                sub->unk6 = 0;
            } else if (sub->unk4 < 0x16) {
                sub->unk6 = 0x10;
            } else {
                sub->unk6 = 0;
            }
            D_80216C08 = 1;
            break;
        case 0x1680040:
            if (sub->unk4 < 0xA) {
                sub->unk6 = 0;
            } else {
                sub->unk6 = 0x10;
            }
            D_80216C08 = 0;
            func_801DFE50(arg0, 0);
            break;
        default:
            if (sub->unk4 < 0xB) {
                sub->unk6 = 0;
            } else if (sub->unk4 < 0x1D) {
                sub->unk6 = 0x10;
            } else {
                sub->unk6 = 0;
            }
            D_80216C08 = 2;
            break;
        }
        sub->unk0 = 0x168004C;
        sub->unk4 = 1;
        sub->unk8 = 1.0f;
        func_8013A28C(arg1, SUBV);
        arg0->unk2C |= 0x80;
        arg0->unk2C &= ~0x40;
        arg0->unk40 = 0.0f;
        arg0->unk48 = 0.0f;
        break;
    }
}
#undef SUBV
#undef B_8021AFC4
#undef B_8021AFC8
#undef D_80011198
#undef D_801BBBF0
#undef D_801E4011
#undef D_80216B90
#undef D_80216BF0
#undef D_80216C00
#undef D_80216C08
#undef D_8021AFB4
#undef D_8021AFBC
#undef D_8021AFC0
#undef D_8021AFC4
#undef D_8021AFC8
#undef func_80010550
#undef func_80011140
#undef func_80011140__r
#undef func_8001EF38
#undef func_8013A28C
#undef func_801518D4
#undef func_801BF1A0
#undef func_801C5A1C
#undef func_801DFE50
#undef func_801E4F60
#undef func_801E74DC_Sub
#undef func_801E8BD0_G
#undef func_801E8BD0_In
#undef func_801E8BD0_Mid
#undef func_801EFD14_Table

#define D_801BBBF0 D_801BBBF0__func_801E8BD0
#define D_801E4011 D_801E4011__func_801E8BD0
#define D_80216BF0 D_80216BF0__func_801E8BD0
#define D_80216C00 D_80216C00__func_801E8BD0
#define D_80218578 D_80218578__func_801E8BD0
#define D_80218580 D_80218580__func_801E8BD0
#define D_80218588 D_80218588__func_801E8BD0
#define D_80218590 D_80218590__func_801E8BD0
#define D_8021AFB4 D_8021AFB4__func_801E8BD0
#define D_8021AFBC D_8021AFBC__func_801E8BD0
#define D_8021AFC0 D_8021AFC0__func_801E8BD0
#define func_80010550 func_80010550__func_801E8BD0
#define func_800113D0 func_800113D0__func_801E8BD0
#define func_8001EF38 func_8001EF38__func_801E8BD0
#define func_8013A28C func_8013A28C__func_801E8BD0
#define func_801518D4 func_801518D4__func_801E8BD0
#define func_801BF1A0 func_801BF1A0__func_801E8BD0
#define func_801C5A1C func_801C5A1C__func_801E8BD0
#define func_801E4F60 func_801E4F60__func_801E8BD0
#define func_801E74DC_Sub func_801E74DC_Sub__func_801E8BD0
extern u8 D_801BBBF0[];
extern s32 func_80010550(s32, void *);
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
extern void func_8013A28C(s32, func_801E74DC_Sub);
void func_801E4F60(u16 arg0);


typedef struct func_801E8BD0_Sub {
    s32 unk0;
    s16 unk4;
    s16 unk6;
    f32 unk8;
} func_801E8BD0_Sub;
typedef struct func_801E8BD0_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 pad1[0x3E - 0x34];
    u8 unk3E;
    u8 unk3F;
    f32 unk40;
    f32 unk44;
    f32 unk48;
} func_801E8BD0_Arg0;
typedef struct func_801E8BD0_Arg2 {
    u8 pad[0x1C];
    func_801E8BD0_Sub unk1C;
} func_801E8BD0_Arg2;
typedef struct func_801E8BD0_Arg4 {
    u8 pad[6];
    s16 unk6;
    s16 unk8;
} func_801E8BD0_Arg4;
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
extern s32 func_8001EF38(f32, f32);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
extern void func_800113D0(s32, void *);
extern void func_801518D4(s32, s32, s32);
extern void func_801BF1A0(s32);
extern u16 D_80216BF0;
extern s16 D_80216C00;
extern s8 D_801E4011;
extern f64 D_80218578;
extern f64 D_80218580;
extern f64 D_80218588;
extern f64 D_80218590;
extern f32 D_8021AFB4;
extern f32 D_8021AFBC;
extern s16 D_8021AFC0;

#define g ((func_801E8BD0_G *)&D_801BBBF0)
#define P (g->unkE0->unk2C)
void func_801E8BD0(func_801E8BD0_Arg0 *arg0, s32 arg1, func_801E8BD0_Arg2 *arg2, u16 arg3, func_801E8BD0_Arg4 *arg4) {
    func_801E8BD0_Sub *sub;
    func_801E8BD0_In *in;
    f32 fv1;
    s16 ang;
    f32 sp6C;
    f32 sp60[3];
    f32 fa0;
    f32 fa1;
    u8 sp57;
    s32 v;

    sub = &arg2->unk1C;
    ang = (s16)(0x2800 - g->unk232) & 0x1FFF;
    fa0 = (f64)-arg4->unk6 / 20.0;
    fa1 = (f64)arg4->unk8 / 20.0;
    fv1 = fa0 * fa0 + fa1 * fa1;
    if ((f64)fv1 < 1.0) {
        fv1 = 0.0f;
    }
    fa0 = func_8001EB64((s16)((s16)((s16)func_8001EF38(fa0, fa1) + (u16)ang) - g->unkE0->unk2C->unk12) & 0x1FFF);
    if ((f64)fa0 < 0.0) {
        fa0 = 0.0f;
    }
    switch (sub->unk0) {
    case 0x168004F:
        arg0->unk40 = 0.0f;
        arg0->unk48 = 0.0f;
        if (arg3 != 0) {
            sub->unk0 = 0x1680050;
            sub->unk4 = 0;
            sub->unk6 = 1;
            sub->unk8 = 1.0f;
            func_8013A28C(arg1, *(func_801E74DC_Sub *)sub);
            arg0->unk2C = arg0->unk2C & ~0x80;
            arg0->unk3F = 3;
            func_801E4F60((g->unkEFC | 4 | 8) & 0xFFFF);
        }
        return;
    case 0x1680050:
        P->unk4 += (func_8001EAD0(P->unk12) * (fv1 * fa0)) * (0.02);
        P->unkC += (func_8001EB64(P->unk12) * (fv1 * fa0)) * (0.02);
        if (arg0->unk44 < 0.0) {
            func_800113D0(arg1, (u8 *)sub + 6);
        }
        if (arg0->unk30 & 4) {
            if (g->unkEF6 == 0x18) {
                func_801E4F60(1);
                arg0->unk3E = 0xAF;
                D_80216C00 = g->unkE0->unk2C->unk12;
                func_801518D4(0, 3, 5);
                sub->unk0 = 0x168002B;
                sub->unk4 = 2;
                sub->unk6 = 0;
                sub->unk8 = 1.0f;
                func_8013A28C(arg1, *(func_801E74DC_Sub *)sub);
                arg0->unk48 = 0.0f;
                arg0->unk44 = 0.0f;
                arg0->unk40 = 0.0f;
                return;
            }
            if (D_80216BF0 < 0x14) {
                sub->unk0 = 0x1680051;
                sub->unk8 = 1.0f;
            } else {
                func_801518D4(0, 3, 6);
                sub->unk0 = 0x1680052;
                sub->unk8 = 3.0f;
            }
            sub->unk4 = 1;
            sub->unk6 = 0;
            func_8013A28C(arg1, *(func_801E74DC_Sub *)sub);
            arg0->unk40 = 0.0f;
            arg0->unk48 = 0.0f;
            arg0->unk44 = 0.0f;
            func_801E4F60(*(u16 *)((u8 *)g + 0xEFE));
            func_80010550(arg1, arg2);
            return;
        }
        if (arg0->unk44 < 0.0f) {
            D_80216BF0 += 1;
        }
        if (!(g->unkEF0 & 8)) {
            return;
        }
        if (func_801C5A1C(func_8001EAD0(P->unk12) * 5.0 + P->unk4, P->unk8 + 22.0, func_8001EB64(P->unk12) * 5.0 + P->unkC, func_8001EAD0(P->unk12) * 5.0 + P->unk4, P->unk8 + 16.0, func_8001EB64(P->unk12) * 5.0 + P->unkC) == 0) {
            return;
        }
        if (!(g->unk35A == 8 || g->unk35A == 9 || g->unk35A == 0x11 || g->unk35A == 0x23)) {
            return;
        }
        sp57 = g->unk35A;
        sp6C = g->unk384;
        if (func_801C5A1C(P->unk4, P->unk8 + (16.5), P->unkC, func_8001EAD0(P->unk12) * 10.0 + P->unk4, P->unk8 + (16.5), func_8001EB64(P->unk12) * 10.0 + P->unkC) == 0 || (g->unk35A != 0x10 && g->unk35A != 0x22)) {
            if (func_801C5A1C(P->unk4, P->unk8 + 28.0, P->unkC, func_8001EAD0(P->unk12) * 7.0 + P->unk4, P->unk8 + 28.0, func_8001EB64(P->unk12) * 7.0 + P->unkC) == 0) {
                sub->unk0 = 0x168000D;
                sub->unk4 = 0;
                sub->unk6 = 0;
                func_8013A28C(arg1, *(func_801E74DC_Sub *)sub);
                arg0->unk2C = arg0->unk2C & ~0x40;
                arg0->unk2C = arg0->unk2C & ~0x80;
                func_801E4F60(0);
                arg0->unk40 = 0.0f;
                arg0->unk44 = 0.0f;
                arg0->unk48 = 0.0f;
                if (sp57 == 8 || sp57 == 0x11) {
                    g->unkE0->unk2C->unk8 = sp6C - (19.8);
                    g->unkEF0 = g->unkEF0 | 6;
                    func_801BF1A0(9);
                    D_801E4011 = 0;
                } else if (sp57 == 0x23) {
                    g->unkE0->unk2C->unk8 = sp6C - 20.0;
                    g->unkEF0 = g->unkEF0 | 0x102;
                } else if (sp57 == 9) {
                    func_801BF1A0(0xA);
                    D_801E4011 = 0;
                    g->unkE0->unk2C->unk8 = sp6C - 21.0;
                    g->unkEF0 = g->unkEF0 | 4;
                }
                if (func_801C5A1C(P->unk4, P->unk8 + 10.0, P->unkC, func_8001EAD0(P->unk12) * 10.0 + P->unk4, P->unk8 + 10.0, func_8001EB64(P->unk12) * 10.0 + P->unkC) != 0) {
                    sp60[2] = g->unk364;
                    sp60[0] = g->unk35C;
                    sp60[1] = g->unk360;
                    D_8021AFC0 = (s16)(func_8001EF38(-sp60[2], sp60[0]) + 0x1800) & 0x1FFF;
                    D_8021AFB4 = g->unk380;
                    D_8021AFBC = g->unk388;
                    return;
                }
                func_801BF1A0(1);
                sub->unk0 = 0x1680053;
                sub->unk4 = 0;
                sub->unk6 = 0;
                arg0->unk2C = arg0->unk2C | 0x40;
                func_801E4F60((g->unkEFC | 4 | 8) & 0xFFFF);
                func_8013A28C(arg1, *(func_801E74DC_Sub *)sub);
                g->unkEF0 = g->unkEF0 & 0xFEF1;
                g->unkEF0 = g->unkEF0 | 0x200;
            }
        }
    break;
    default:
        sub->unk0 = 0x168004F;
        sub->unk4 = 0;
        sub->unk6 = 0;
        sub->unk8 = 1.0f;
        func_8013A28C(arg1, *(func_801E74DC_Sub *)sub);
        arg0->unk40 = 0.0f;
        arg0->unk2C = arg0->unk2C | 0x80;
        arg0->unk48 = 0.0f;
        g->unkEF0 = g->unkEF0 | 8;
    }
}
#undef g
#undef P
#undef D_801BBBF0
#undef D_801E4011
#undef D_80216BF0
#undef D_80216C00
#undef D_80218578
#undef D_80218580
#undef D_80218588
#undef D_80218590
#undef D_8021AFB4
#undef D_8021AFBC
#undef D_8021AFC0
#undef func_80010550
#undef func_800113D0
#undef func_8001EF38
#undef func_8013A28C
#undef func_801518D4
#undef func_801BF1A0
#undef func_801C5A1C
#undef func_801E4F60
#undef func_801E74DC_Sub



#define D_801BBBF0 D_801BBBF0__func_801E95D4
#define D_80216B90 D_80216B90__func_801E95D4
#define func_800112B0 func_800112B0__func_801E95D4
#define func_80011328 func_80011328__func_801E95D4
#define func_80011380 func_80011380__func_801E95D4
#define func_800113D0 func_800113D0__func_801E95D4
#define func_8013A28C func_8013A28C__func_801E95D4
#define func_801BF1A0 func_801BF1A0__func_801E95D4
#define func_801C5A1C func_801C5A1C__func_801E95D4
#define func_801C7B18 func_801C7B18__func_801E95D4
#define func_801E4F60 func_801E4F60__func_801E95D4
#define func_801E74DC_Sub func_801E74DC_Sub__func_801E95D4
#define func_801EFD14_Table func_801EFD14_Table__func_801E95D4
#define func_801F1114 func_801F1114__func_801E95D4
#define func_801F11C0_Inner func_801F11C0_Inner__func_801E95D4
#define func_801F11C0_Mid func_801F11C0_Mid__func_801E95D4
#define func_801F11C0_Struct func_801F11C0_Struct__func_801E95D4
#define func_801F152C_In func_801F152C_In__func_801E95D4
#define func_801F152C_Obj func_801F152C_Obj__func_801E95D4
#define func_801F152C_Struct func_801F152C_Struct__func_801E95D4
typedef struct func_801F11C0_Inner {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801F11C0_Inner;
typedef struct func_801F11C0_Mid {
    u8 pad[0x2C];
    func_801F11C0_Inner *unk2C;
} func_801F11C0_Mid;
typedef struct func_801F11C0_Struct {
    u8 pad[0xE0];
    func_801F11C0_Mid *unkE0;
} func_801F11C0_Struct;
#define PP (((func_801F11C0_Struct *)&D_801BBBF0)->unkE0->unk2C)
typedef struct func_801F152C_In { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad1[2]; s16 unk12; } func_801F152C_In;
typedef struct func_801F152C_Obj { u8 pad[0x22]; u8 unk22; u8 pad1[9]; func_801F152C_In *unk2C; } func_801F152C_Obj;
typedef struct func_801F152C_Struct { u8 pad[0xE0]; func_801F152C_Obj *unkE0; u8 pad1[0xF4 - 0xE4]; u8 unkF4; u8 pad2[2]; u8 unkF7; } func_801F152C_Struct;
#define G ((func_801F152C_Struct *)&D_801BBBF0)
#define p (G->unkE0->unk2C)
extern u8 D_801BBBF0[];
typedef struct func_801EFD14_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EFD14_Table;
extern func_801EFD14_Table D_80216B90;
extern void func_800113D0(s32, void *);
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
extern void func_8013A28C(s32, func_801E74DC_Sub);
extern void func_801BF1A0(s32);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
void func_801E4F60(u16 arg0);
u8 func_801F1114(void);


typedef struct func_801E95D4_StructPos {
    u8 pad[4];
    f32 x, y, z;
    u8 pad10[2];
    s16 angle;
} func_801E95D4_StructPos;
typedef struct func_801E95D4_StructOuter {
    u8 pad[0x2C];
    func_801E95D4_StructPos *pos;
} func_801E95D4_StructOuter;
typedef struct func_801E95D4_StructGlobal {
    u8 pad[0xE0];
    func_801E95D4_StructOuter *obj;
    u8 padE4[0x35A-0xE4];
    u8 state;
    u8 pad35B[0xBA3-0x35B];
    u8 mode;
    u8 padBA4[0xEF0-0xBA4];
    u16 flags;
    u8 padEF2[4];
    u8 state2;
    u8 padEF7[5];
    s32 mask;
} func_801E95D4_StructGlobal;
typedef struct func_801E95D4_StructArg {
    u8 pad[0x2C];
    s32 flags;
    u8 pad30[0x10];
    f32 x, y, z;
    u8 pad4C[8];
    s32 value;
} func_801E95D4_StructArg;
typedef struct func_801E95D4_StructSub {
    u32 id;
    u16 time;
    u16 flags;
    f32 value;
} func_801E95D4_StructSub;
typedef struct func_801E95D4_StructArg2 {
    u8 pad[0x1C];
    func_801E95D4_StructSub sub;
} func_801E95D4_StructArg2;
extern s32 func_801C7B18(void);
extern void func_80011380(s32, u16 *);
extern void func_80011328(s32, u16 *);
extern void func_800112B0(s32, u16 *);

#define GL ((func_801E95D4_StructGlobal *)D_801BBBF0)
#define SEND(p) func_8013A28C(arg1, *(func_801E74DC_Sub *)(p))
#define PP (GL->obj->pos)
#define PROBEPLUS(h) func_801C5A1C(func_8001EAD0(PP->angle)*4.0+PP->x,PP->y+1.0,func_8001EB64(PP->angle)*4.0+PP->z,func_8001EAD0(PP->angle)*4.0+PP->x,PP->y-(h),func_8001EB64(PP->angle)*4.0+PP->z)
#define PROBEMINUS(h) func_801C5A1C(PP->x-func_8001EAD0(PP->angle)*6.0,PP->y+1.0,PP->z-func_8001EB64(PP->angle)*6.0,PP->x-func_8001EAD0(PP->angle)*6.0,PP->y-(h),PP->z-func_8001EB64(PP->angle)*6.0)
#define UP() func_801C5A1C(PP->x,PP->y,PP->z,PP->x,PP->y+20.0,PP->z)

void func_801E95D4(func_801E95D4_StructArg *arg0, s32 arg1, func_801E95D4_StructArg2 *arg2, u16 arg3, u8 arg4)
{
    func_801E95D4_StructSub *sub;
    s32 pad1, pad2, pad3;
extern void func_801C4A5C();

    (void)&arg4;
    sub = &arg2->sub;
    switch (sub->id) {
    case 0x1680012:
        if (func_801C5A1C(PP->x,PP->y+1.0,PP->z,PP->x,PP->y-2.0,PP->z)) {
            if (arg3) {
                if (!(sub->flags&2)) {
                    sub->id=0x1680013;
                    sub->time=0;
                    sub->flags=0;
                    SEND(sub);
                } else {
                    SEND(&D_80216B90);
                    arg0->flags|=0x80;
                    arg0->x=0.0f;
                    arg0->z=0.0f;
                    func_801E4F60(GL->mask);
                    GL->flags&=~0x100;
                }
            }
        } else {
            sub->id=0x1680053;
            sub->time=0;
            sub->flags=1;
            SEND(sub);
            arg0->x*=0.5;
            arg0->z*=0.5;
            func_801E4F60(GL->mask|4|8);
            GL->flags|=0x208;
        }
        break;
    case 0x1680013:
        if (arg3) {
            if (!(sub->flags&2)) {
                sub->id=0x1680014;
                sub->time=0;
                sub->flags=0;
            } else {
                sub->id=0x1680012;
                sub->time=30;
                sub->flags=2;
            }
            SEND(sub);
        }
        break;
    case 0x1680014:
        if (arg3) {
            if (!(sub->flags&2)) {
                arg0->flags|=0x80;
                sub->id=0x1680017;
                sub->time=0;
                sub->flags=0;
                sub->value=1.0f;
            } else {
                sub->id=0x1680013;
                sub->time=30;
                sub->flags=2;
            }
            SEND(sub);
        }
        break;
    case 0x1680015:
        if (GL->state2==0x11 || GL->state==0x28) {
            arg4=3;
        }
        if (!func_801C7B18()) {
            arg4=3;
        }
        switch (arg4) {
        case 1:
            if (!PROBEPLUS(18.0)) {
                sub->id=0x1680032;
                sub->time=0;
                sub->flags=0;
                sub->value=1.0f;
                SEND(sub);
                arg0->flags&=~0x40;
                arg0->z=0.0f;
                arg0->y=0.0f;
                arg0->flags|=0x80;
                arg0->x=0.0f;
                GL->flags&=~0x100;
                GL->flags|=0x600;
                func_801BF1A0(7);
            } else {
                if (!PROBEPLUS(5.0)) {
                    if (!UP()) {
                        if (func_801F1114()!=20) {
                            if (GL->mode) {
                                func_801BF1A0(12);
                            } else {
                                func_801BF1A0(13);
                            }
                            sub->id=0x1680016;
                            sub->time=0;
                            if (sub->flags&0x10) {
                                sub->flags=0x10;
                            } else {
                                sub->flags=0;
                            }
                            sub->value=0.5f;
                            SEND(sub);
                            func_801E4F60(GL->mask);
                        }
                    } else {
                        func_80011380(arg1,&sub->flags);
                    }
                } else if (arg3) {
                    sub->id=0x1680017;
                    sub->time=0;
                    if (sub->flags&2) {
                        sub->flags&=~2;
                    } else if (sub->flags&0x10) {
                        sub->flags&=~0x10;
                    } else {
                        sub->flags|=0x10;
                    }
                    SEND(sub);
                } else {
                    func_800113D0(arg1,&sub->flags);
                    func_80011328(arg1,&sub->flags);
                }
            }
            break;
        case 2:
            if (!PROBEMINUS(18.0)) {
                sub->id=0x1680031;
                sub->time=0x51;
                if (sub->flags&0x10) {
                    sub->flags=0x12;
                } else {
                    sub->flags=2;
                }
                SEND(sub);
                arg0->flags&=~0x40;
                arg0->z=0.0f;
                arg0->flags|=0x80;
                arg0->y=0.0f;
                arg0->x=0.0f;
                func_801E4F60(13);
                GL->flags|=0x400;
                GL->flags&=~0x100;
            } else {
                if (!PROBEMINUS(5.0)) {
                    if (!UP()) {
                        if (func_801F1114()!=20) {
                            if (GL->mode) {
                                func_801BF1A0(12);
                            } else {
                                func_801BF1A0(13);
                            }
                            sub->id=0x1680016;
                            sub->time=0;
                            if (sub->flags&0x10) {
                                sub->flags=0x10;
                            } else {
                                sub->flags=0;
                            }
                            sub->value=0.5f;
                            SEND(sub);
                            func_801E4F60(GL->mask);
                        }
                    } else {
                        func_80011380(arg1,&sub->flags);
                    }
                } else if (arg3) {
                    sub->id=0x1680017;
                    sub->time=0;
                    if (sub->flags&2) {
                        sub->flags&=~2;
                    } else if (sub->flags&0x10) {
                        sub->flags&=~0x10;
                    } else {
                        sub->flags|=0x10;
                    }
                    SEND(sub);
                } else {
                    func_800113D0(arg1,&sub->flags);
                    func_800112B0(arg1,&sub->flags);
                }
            }
            break;
        case 3:
            if (!UP()) {
                if (func_801C5A1C(PP->x,PP->y+1.0,PP->z,PP->x,PP->y-5.0,PP->z) && GL->state!=20) {
                    if (GL->mode) {
                        func_801BF1A0(12);
                    } else {
                        func_801BF1A0(13);
                    }
                    sub->id=0x1680016;
                    sub->time=0;
                    if (sub->flags&0x10) {
                        sub->flags=0x10;
                    } else {
                        sub->flags=0;
                    }
                    sub->value=0.5f;
                    SEND(sub);
                    func_801E4F60(GL->mask);
                }
            }
            break;
        case 4:
            sub->id=0x1680014;
            sub->time=20;
            sub->flags=2;
            SEND(sub);
            break;
        default:
            if (arg3) {
                sub->id=0x1680017;
                sub->time=0;
                if (sub->flags&2) {
                    sub->flags&=~2;
                } else if (sub->flags&0x10) {
                    sub->flags&=~0x10;
                } else {
                    sub->flags|=0x10;
                }
                SEND(sub);
            } else {
                D_80011258(arg1,&sub->flags);
            }
            break;
        }
        break;
    case 0x1680017:
        if (!PROBEPLUS(5.0) && arg4==1) {
            arg4=2;
        }
        if (!PROBEMINUS(5.0) && arg4==2) {
            arg4=1;
        }
        if (!func_801C7B18()) {
            arg4=3;
        }
        switch (arg4) {
        case 1:
            sub->id=0x1680015;
            sub->time=0;
            sub->flags&=~2;
            SEND(sub);
            break;
        case 2:
            sub->id=0x1680015;
            sub->time=21;
            sub->flags|=2;
            if (sub->flags&0x10) {
                sub->flags&=~0x10;
            } else {
                sub->flags|=0x10;
            }
            SEND(sub);
            break;
        case 3:
            if (!UP()) {
                if (func_801C5A1C(PP->x,PP->y+1.0,PP->z,PP->x,PP->y-5.0,PP->z) && GL->state!=20) {
                    if (GL->mode) {
                        func_801BF1A0(12);
                    } else {
                        func_801BF1A0(13);
                    }
                    sub->id=0x1680016;
                    sub->time=0;
                    if (sub->flags&0x10) {
                        sub->flags=0x10;
                    } else {
                        sub->flags=0;
                    }
                    sub->value=0.5f;
                    SEND(sub);
                    func_801E4F60(GL->mask);
                }
            }
            break;
        case 4:
            sub->id=0x1680014;
            sub->time=20;
            sub->flags=2;
            SEND(sub);
            break;
        }
        break;
    case 0x1680016:
        if (arg3) {
            arg0->flags|=0x80;
            arg0->x=0.0f;
            arg0->z=0.0f;
            sub->id=0x1680041;
            sub->time=0;
            sub->flags=0;
            sub->value=1.0f;
            SEND(sub);
            func_801E4F60(GL->mask);
            GL->flags&=~0x100;
        } else if (sub->time==10) {
            sub->time++;
            SEND(sub);
        }
        break;
    case 0x1680032:
        if (arg3) {
            sub->id=0x1680033;
            sub->time=0;
            sub->flags=0;
            sub->value=1.0f;
            SEND(sub);
            GL->flags&=~0x400;
            func_801E4F60(GL->mask);
        }
        break;
    case 0x1680033:
        if (arg3) {
            arg0->flags|=0x40;
            arg0->z=0.0f;
            arg0->x=0.0f;
            arg0->y=-1.0f;
            sub->id=0x1680053;
            sub->time=0;
            sub->flags=0;
            sub->value=1.0f;
            SEND(sub);
            GL->flags&=~0x400;
            func_801E4F60(GL->mask|4|8);
        }
        break;
    default:
        func_801BF1A0(6);
        sub->id=0x1680012;
        sub->time=0;
        sub->flags=0;
        sub->value=0.5f;
        SEND(sub);
        arg0->value=0xF181;
        func_801C4A5C(arg0,2);
        arg0->flags&=~0x80;
        arg0->x=0.0f;
        arg0->z=0.0f;
        GL->flags|=0x100;
        break;
    }
}
#undef PP
#undef G
#undef p
#undef GL
#undef SEND
#undef PROBEPLUS
#undef PROBEMINUS
#undef UP
#undef D_801BBBF0
#undef D_80216B90
#undef func_800112B0
#undef func_80011328
#undef func_80011380
#undef func_800113D0
#undef func_8013A28C
#undef func_801BF1A0
#undef func_801C5A1C
#undef func_801C7B18
#undef func_801E4F60
#undef func_801E74DC_Sub
#undef func_801EFD14_Table
#undef func_801F1114
#undef func_801F11C0_Inner
#undef func_801F11C0_Mid
#undef func_801F11C0_Struct
#undef func_801F152C_In
#undef func_801F152C_Obj
#undef func_801F152C_Struct

#define D_801BBBF0 D_801BBBF0__func_801EACA4
#define D_801E4011 D_801E4011__func_801EACA4
#define D_8021AFB4 D_8021AFB4__func_801EACA4
#define D_8021AFB8 D_8021AFB8__func_801EACA4
#define D_8021AFBC D_8021AFBC__func_801EACA4
#define D_8021AFC0 D_8021AFC0__func_801EACA4
#define func_8013A28C func_8013A28C__func_801EACA4
#define func_801BF1A0 func_801BF1A0__func_801EACA4
#define func_801C5A1C func_801C5A1C__func_801EACA4
#define func_801E4F60 func_801E4F60__func_801EACA4
#define func_801E74DC_Arg0 func_801E74DC_Arg0__func_801EACA4
#define func_801E74DC_Sub func_801E74DC_Sub__func_801EACA4
#define func_801E7C30_G func_801E7C30_G__func_801EACA4
#define func_801E8BD0_In func_801E8BD0_In__func_801EACA4
#define func_801E8BD0_Mid func_801E8BD0_Mid__func_801EACA4
#define func_801F11C0 func_801F11C0__func_801EACA4
#define g ((func_801E7C30_G *)&D_801BBBF0)
#define P (g->unkE0->unk2C)
extern s8 D_801E4011;
extern f32 D_8021AFB4;
extern f32 D_8021AFBC;
extern s16 D_8021AFC0;
extern u8 D_801BBBF0[];
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
extern void func_8013A28C(s32, func_801E74DC_Sub);
extern void func_801BF1A0(s32);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
void func_801E4F60(u16 arg0);
typedef struct func_801E74DC_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x40 - 0x30];
    f32 unk40;
    u8 pad2[0x48 - 0x44];
    f32 unk48;
} func_801E74DC_Arg0;
s32 func_801F11C0(f32 arg0, f32 arg1, f32 arg2, f32 arg3, s16 arg4);


typedef struct func_801EACA4_StructSub {
    s32 unk0;
    s16 unk4;
    u16 unk6;
    f32 unk8;
} func_801EACA4_Sub;
typedef struct func_801EACA4_StructArg2 {
    u8 pad[0x1C];
    func_801EACA4_Sub unk1C;
} func_801EACA4_Arg2;

extern f32 D_8021AFB8;

void func_801EACA4(func_801E74DC_Arg0 *arg0, s32 arg1, func_801EACA4_Arg2 *arg2, u16 arg3, u8 arg4) {
    func_801EACA4_Sub *sub;

    sub = &arg2->unk1C;
    switch (sub->unk0) {
    case 0x0168000D:
        g->unkEF0 &= 0xFFF7;
        arg0->unk2C |= 0x80;
        if (arg3 != 0) {
            arg0->unk2C |= 0x80;
            P->unk12 = D_8021AFC0;
            switch (arg4) {
            default:
                D_801E4011 = 0;
                break;
            case 1:
                if (g->unkEF0 & 4) {
                    *(u8 *)&D_801E4011 = 1;
                    sub->unk0 = 0x0168000E;
                    sub->unk4 = 0;
                    sub->unk6 = 0x10;
                }
                break;
            case 2:
                if (g->unkEF0 & 4) {
                    *(u8 *)&D_801E4011 = 2;
                    sub->unk0 = 0x0168000E;
                    sub->unk4 = 0;
                    sub->unk6 = 0;
                }
                break;
            case 3:
                if (func_801C5A1C(P->unk4, P->unk8 + 28.0, P->unkC, func_8001EAD0(P->unk12) * 7.0 + P->unk4, P->unk8 + 28.0, func_8001EB64(P->unk12) * 7.0 + P->unkC) != 0) {
                    break;
                }
                if (g->unkEF0 & 2) {
                    D_801E4011 = 0;
                    sub->unk0 = 0x01680011;
                    sub->unk4 = 0;
                    sub->unk6 = 0;
                    sub->unk8 = 0.5f;
                }
                break;
            case 4:
                D_801E4011 = 0;
                if (g->unkEF0 & 4) {
                    func_801BF1A0(0xB);
                }
                sub->unk0 = 0x01680050;
                sub->unk4 = 0;
                sub->unk6 = 0;
                arg0->unk2C |= 0x40;
                func_801E4F60(g->unkEFC | 4 | 8);
                g->unkEF0 &= 0xFEF9;
                g->unkEF0 |= 0x200;
                P->unk4 -= func_8001EAD0(P->unk12) * 3.5;
                P->unkC -= func_8001EB64(P->unk12) * 3.5;
                break;
            }
            func_8013A28C(arg1, *(func_801E74DC_Sub *)sub);
        } else {
            func_801F11C0(D_8021AFB4, D_8021AFB8, D_8021AFBC, 2.0f, D_8021AFC0);
        }
        break;
    case 0x0168000E:
        func_801E4F60(0xD);
        if (arg3 != 0) {
            sub->unk0 = 0x0168000F;
            sub->unk4 = 0;
            func_8013A28C(arg1, *(func_801E74DC_Sub *)sub);
        }
        break;
    case 0x0168000F:
        if (func_801C5A1C(func_8001EAD0(P->unk12) * 5.0 + P->unk4, P->unk8 + 22.0, func_8001EB64(P->unk12) * 5.0 + P->unkC, func_8001EAD0(P->unk12) * 5.0 + P->unk4, P->unk8 + 16.0, func_8001EB64(P->unk12) * 5.0 + P->unkC) == 0) {
            if (g->unkEF0 & 4) {
                func_801BF1A0(0xB);
            }
            sub->unk0 = 0x01680050;
            sub->unk4 = 0;
            sub->unk6 = 0;
            func_8013A28C(arg1, *(func_801E74DC_Sub *)sub);
            arg0->unk2C |= 0x40;
            func_801E4F60(g->unkEFC | 4 | 8);
            g->unkEF0 &= 0xFEF9;
            g->unkEF0 |= 0x200;
            P->unk4 -= func_8001EAD0(P->unk12) * 3.5;
            P->unkC -= func_8001EB64(P->unk12) * 3.5;
        } else if (arg3 != 0) {
            switch (arg4) {
            case 1:
                if (g->unkEF0 & 4) {
                    if (sub->unk6 & 0x10) {
                        sub->unk0 = 0x0168000F;
                        sub->unk4 = 0;
                        sub->unk6 = 0x10;
                    } else {
                        D_801E4011 = 0;
                        sub->unk0 = 0x01680010;
                        sub->unk4 = 0;
                    }
                }
                break;
            case 2:
                if (g->unkEF0 & 4) {
                    if (sub->unk6 & 0x10) {
                        D_801E4011 = 0;
                        sub->unk0 = 0x01680010;
                        sub->unk4 = 0;
                    } else {
                        sub->unk0 = 0x0168000F;
                        sub->unk4 = 0;
                        sub->unk6 = 0;
                    }
                }
                break;
            default:
            case 3:
            case 4:
                D_801E4011 = 0;
                sub->unk0 = 0x01680010;
                sub->unk4 = 0;
                break;
            }
            func_8013A28C(arg1, *(func_801E74DC_Sub *)sub);
        }
        break;
    case 0x01680010:
        if (arg3 != 0) {
            switch (arg4) {
            default:
                D_801E4011 = 0;
                break;
            case 1:
                if (g->unkEF0 & 4) {
                    *(u8 *)&D_801E4011 = 1;
                    sub->unk0 = 0x0168000E;
                    sub->unk4 = 0;
                    sub->unk6 = 0x10;
                }
                break;
            case 2:
                if (g->unkEF0 & 4) {
                    *(u8 *)&D_801E4011 = 2;
                    sub->unk0 = 0x0168000E;
                    sub->unk4 = 0;
                    sub->unk6 = 0;
                }
                break;
            case 3:
                if (func_801C5A1C(P->unk4, P->unk8 + 28.0, P->unkC, func_8001EAD0(P->unk12) * 7.0 + P->unk4, P->unk8 + 28.0, func_8001EB64(P->unk12) * 7.0 + P->unkC) != 0) {
                    break;
                }
                if (g->unkEF0 & 2) {
                    D_801E4011 = 0;
                    sub->unk0 = 0x01680011;
                    sub->unk4 = 0;
                    sub->unk6 = 0;
                    sub->unk8 = 0.5f;
                }
                break;
            case 4:
                D_801E4011 = 0;
                if (g->unkEF0 & 4) {
                    func_801BF1A0(0xB);
                }
                sub->unk0 = 0x01680050;
                sub->unk4 = 0;
                sub->unk6 = 0;
                arg0->unk2C |= 0x40;
                func_801E4F60(g->unkEFC | 4 | 8);
                g->unkEF0 &= 0xFEF9;
                g->unkEF0 |= 0x200;
                P->unk4 -= func_8001EAD0(P->unk12) * 3.5;
                P->unkC -= func_8001EB64(P->unk12) * 3.5;
                break;
            }
            func_8013A28C(arg1, *(func_801E74DC_Sub *)sub);
        }
        break;
    case 0x01680011:
        if (arg3 != 0) {
            if (g->unkEF0 & 0x100) {
                func_801BF1A0(6);
                sub->unk0 = 0x01680031;
            } else {
                sub->unk0 = 0x01680026;
            }
            sub->unk4 = 0;
            sub->unk6 = 0;
            sub->unk8 = 1.0f;
            func_8013A28C(arg1, *(func_801E74DC_Sub *)sub);
            func_801E4F60(0xC);
        }
        break;
    }
}
#undef g
#undef P
#undef D_801BBBF0
#undef D_801E4011
#undef D_8021AFB4
#undef D_8021AFB8
#undef D_8021AFBC
#undef D_8021AFC0
#undef func_8013A28C
#undef func_801BF1A0
#undef func_801C5A1C
#undef func_801E4F60
#undef func_801E74DC_Arg0
#undef func_801E74DC_Sub
#undef func_801E7C30_G
#undef func_801E8BD0_In
#undef func_801E8BD0_Mid
#undef func_801F11C0

/* hh-block asm/nonmatchings/file010/801E4F60/_ro_regular_329f7177f9df4cb3.s {"functions":[],"rodata":[],"rodata_bytes":[2149680584,6067656,16],"rodata_section":".rodata"} */
#pragma GLOBAL_ASM("asm/nonmatchings/file010/801E4F60/_ro_regular_329f7177f9df4cb3.s")

#define D_801BBCD0 D_801BBCD0__func_801EB7A8
#define D_801BBF74 D_801BBF74__func_801EB7A8
#define D_801BCAE0 D_801BCAE0__func_801EB7A8
#define D_80216B90 D_80216B90__func_801EB7A8
#define D_80216BCC D_80216BCC__func_801EB7A8
#define D_80216BD8 D_80216BD8__func_801EB7A8
#define D_80216BFC D_80216BFC__func_801EB7A8
#define D_80218248 D_80218248__func_801EB7A8
#define D_802185C8 D_802185C8__func_801EB7A8
#define D_802185D0 D_802185D0__func_801EB7A8
#define func_80011140 func_80011140__func_801EB7A8
#define func_800113D0 func_800113D0__func_801EB7A8
#define func_8010843C func_8010843C__func_801EB7A8
#define func_8011AAF4 func_8011AAF4__func_801EB7A8
#define func_8013A28C func_8013A28C__func_801EB7A8
#define func_801BF1A0 func_801BF1A0__func_801EB7A8
#define func_801E4F60 func_801E4F60__func_801EB7A8
#define func_801E74DC_Inner func_801E74DC_Inner__func_801EB7A8
#define func_801E74DC_Outer func_801E74DC_Outer__func_801EB7A8
#define func_801E74DC_Sub func_801E74DC_Sub__func_801EB7A8
#define func_801E8BD0_Arg0 func_801E8BD0_Arg0__func_801EB7A8
#define func_801EFD14_Table func_801EFD14_Table__func_801EB7A8
typedef struct func_801E74DC_Inner {
    u8 pad[0x12];
    s16 unk12;
} func_801E74DC_Inner;
typedef struct func_801E74DC_Outer {
    u8 pad[0x2C];
    func_801E74DC_Inner *unk2C;
} func_801E74DC_Outer;
extern func_801E74DC_Outer *D_801BBCD0;
extern u16 D_801BCAE0;
typedef struct func_801EFD14_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EFD14_Table;
extern func_801EFD14_Table D_80216B90;
extern func_801EFD14_Table D_80216BCC;
extern void func_800113D0(s32, void *);
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
extern void func_8013A28C(s32, func_801E74DC_Sub);
extern void func_801BF1A0(s32);
void func_801E4F60(u16 arg0);
typedef struct func_801E8BD0_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 pad1[0x3E - 0x34];
    u8 unk3E;
    u8 unk3F;
    f32 unk40;
    f32 unk44;
    f32 unk48;
} func_801E8BD0_Arg0;


typedef struct func_801EB7A8_Table {
    s32 unk0, unk4, unk8;
} func_801EB7A8_Table;
extern s32 func_80011140(s32, void *, func_801EB7A8_Table, s32);
typedef struct func_801EB7A8_StructAnim {
    s32 id;
    u16 frame, flags;
    f32 last;
} func_801EB7A8_StructAnim;
typedef struct func_801EB7A8_StructArg2 {
    u8 pad[0x1C];
    union { func_801E74DC_Sub s; func_801EB7A8_StructAnim a; } u;
} func_801EB7A8_StructArg2;
typedef struct func_801EB7A8_StructPos {
    u8 pad[4];
    f32 x, y, z;
    u8 pad2[2];
    s16 angle;
} func_801EB7A8_StructPos;
typedef struct func_801EB7A8_StructObj {
    u8 pad[0x2C];
    func_801EB7A8_StructPos *pos;
} func_801EB7A8_StructObj;
extern s32 func_8010843C(f32, f32, f32, f32, f32, f32);
extern void func_8011AAF4(char *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, u32);
extern f64 D_802185C8;
extern f64 D_802185D0;
extern char D_80218248[];
extern f32 D_801BBF74;
extern u16 D_80216BFC;
extern func_801EB7A8_Table D_80216BD8;
#define POS (((func_801EB7A8_StructObj *)D_801BBCD0)->pos)
#define TIMER D_80216BFC

void func_801EB7A8(func_801E8BD0_Arg0 *arg0, s32 arg1, func_801EB7A8_StructArg2 *volatile arg2, u16 arg3) {
    s32 timer;
    f32 sp78, sp74, c, x, y;
    f32 z;
    s16 ang;
    s32 id;
    func_801E74DC_Sub *sub;
    arg0->unk48 = 0.0f;
    *(s32 *)&arg0->unk2C |= 0xA0;
    arg0->unk40 = 0.0f;
    id = arg2->u.a.id;
    switch (id) {
    case 0x1900018:
        if (arg3 != 0) {
            sub = &(*(func_801EB7A8_StructArg2 **)&arg2)->u.s;
            sub->unk0 = 0x1900074;
            ((func_801EB7A8_StructAnim *)sub)->frame = 0;
            ((func_801EB7A8_StructAnim *)sub)->flags = 0;
            sub->unk8 = 5.0f;
            func_8013A28C(arg1, *sub);
        }
        break;
    case 0x1900074:
        arg0->unk44 = 0.0f;
        *(s32 *)&arg0->unk2C &= ~0x40;
        if (func_8010843C(POS->x, POS->y + 2.0, POS->z, POS->x, POS->y - 10.0, POS->z) != 0) {
            POS->y = D_801BBF74 + 1.0;
        }
        sub = &arg2->u.s;
        if (sub->unk8 < 5.0) {
            sub->unk8 = 10.0f;
            func_8013A28C(arg1, *sub);
        }
        timer = TIMER;
        if (timer >= 0x97) {
            func_800113D0(arg1, (u8 *)sub + 6);
            goto event;
        }
        if (timer >= 0x78) goto increment;
        ang = (s16)((timer - 0x78) / D_802185C8);
        ang += 0x400;
        sp78 = func_8001EAD0(POS->angle + ang) * 30.0 + POS->x;
        sp74 = POS->y + 25.0;
        c = func_8001EB64(POS->angle + ang);
        c = c * 30.0 + POS->z;
        x = POS->x;
        y = POS->y + 4.0 + (0x78 - TIMER) * D_802185D0;
        z = POS->z;
        func_8011AAF4(D_80218248, 0x908, arg0, 0, 1, 10.0f, sp78, sp74, c, 10.0f, x, y, z, 0.0f, 35.0f, -1, -1);
    increment:
        TIMER = TIMER + 1;
        break;
    event:
        if (arg3 != 0) {
            if (func_80011140(arg1, arg2, D_80216BD8, 10) != 0) {
                func_8013A28C(arg1, *sub);
                func_801BF1A0(12);
            }
        }
        break;
    case 0x1900075:
        if (arg3 != 0) {
            arg0->unk44 = 0.0f;
            *(s32 *)&arg0->unk2C |= 0x40;
            if (func_80011140(arg1, arg2, *(func_801EB7A8_Table *)&D_80216BCC, 30) != 0) {
                func_801E4F60((&D_801BCAE0)[7]);
            }
        }
        break;
    case 0x3480010:
        if (arg3 != 0) {
            D_801BCAE0 = 0x80;
            func_80011140(arg1, arg2, *(func_801EB7A8_Table *)&D_80216B90, 10);
        }
        break;
    }
}
#undef POS
#undef TIMER
#undef D_801BBCD0
#undef D_801BBF74
#undef D_801BCAE0
#undef D_80216B90
#undef D_80216BCC
#undef D_80216BD8
#undef D_80216BFC
#undef D_80218248
#undef D_802185C8
#undef D_802185D0
#undef func_80011140
#undef func_800113D0
#undef func_8010843C
#undef func_8011AAF4
#undef func_8013A28C
#undef func_801BF1A0
#undef func_801E4F60
#undef func_801E74DC_Inner
#undef func_801E74DC_Outer
#undef func_801E74DC_Sub
#undef func_801E8BD0_Arg0
#undef func_801EFD14_Table

#define D_801BBBF0 D_801BBBF0__func_801EBCC4
#define D_8021AFC8 D_8021AFC8__func_801EBCC4
#define func_800058DC func_800058DC__func_801EBCC4
#define func_80010550 func_80010550__func_801EBCC4
#define func_80011258 func_80011258__func_801EBCC4
#define func_800112B0 func_800112B0__func_801EBCC4
#define func_80011328 func_80011328__func_801EBCC4
#define func_80011380 func_80011380__func_801EBCC4
#define func_800113D0 func_800113D0__func_801EBCC4
#define func_8001EF38 func_8001EF38__func_801EBCC4
#define func_8013A28C func_8013A28C__func_801EBCC4
#define func_801BF1A0 func_801BF1A0__func_801EBCC4
#define func_801C5A1C func_801C5A1C__func_801EBCC4
#define func_801E4F60 func_801E4F60__func_801EBCC4
#define func_801E5010 func_801E5010__func_801EBCC4
#define func_801E74DC_Sub func_801E74DC_Sub__func_801EBCC4
extern u8 D_801BBBF0[];
extern int D_8021AFC8;
s32 func_800058DC(void *arg0, void *arg1);
extern s32 func_80010550(s32, void *);
extern void func_80011258(s32, s32, u16);
extern void func_800112B0(s32, u16 *);
extern void func_80011328(s32, u16 *);
extern void func_80011380(s32, u16 *);
extern void func_800113D0(s32, void *);
extern s32 func_8001EF38(f32, f32);
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
extern void func_8013A28C(s32, func_801E74DC_Sub);
extern void func_801BF1A0(s32);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
void func_801E4F60(u16 arg0);
extern void func_801E5010(void);


typedef struct func_801EBCC4_StructPos {
    u8 pad[4];
    f32 x, y, z;
    u8 pad10[2];
    s16 angle;
} func_801EBCC4_StructPos;

typedef struct func_801EBCC4_StructObj {
    u8 pad[0x2C];
    func_801EBCC4_StructPos *pos;
} func_801EBCC4_StructObj;

typedef struct func_801EBCC4_StructVec {
    f32 x, y, z;
} func_801EBCC4_StructVec;

typedef struct func_801EBCC4_StructGlobal {
    u8 pad0[0xE0];
    func_801EBCC4_StructObj *obj;
    u8 pad1[0x35A - 0xE4];
    u8 kind;
    u8 pad2[0x380 - 0x35B];
    f32 x, y, z;
    u8 pad3[0xEE4 - 0x38C];
    func_801EBCC4_StructVec vec;
    u16 flags;
    u8 pad4[3];
    u8 state;
    u8 pad5[2];
    s32 value;
    u8 pad6[2];
    u16 id;
} func_801EBCC4_StructGlobal;

typedef struct func_801EBCC4_StructAnim {
    s32 id;
    u16 frame;
    u16 flags;
    f32 rate;
} func_801EBCC4_StructAnim;

typedef struct func_801EBCC4_StructArg2 {
    u8 pad[0x18];
    s16 unk18;
    u8 pad1[2];
    func_801EBCC4_StructAnim anim;
} func_801EBCC4_StructArg2;

typedef struct func_801EBCC4_StructArg0 {
    u8 pad[0x2C];
    s32 flags;
    u8 pad1[0x40 - 0x30];
    f32 x, y, z;
} func_801EBCC4_StructArg0;



#define HH_GLOBAL ((func_801EBCC4_StructGlobal *)D_801BBBF0)
#define HH_POS (HH_GLOBAL->obj->pos)
#define HH_ANIM (*(func_801E74DC_Sub *)anim)
#define HH_BYTE (*(u8 *)&D_8021AFC8)

void func_801EBCC4(arg0, arg1, arg2, arg3)
func_801EBCC4_StructArg0 *arg0;
s32 arg1;
func_801EBCC4_StructArg2 *arg2;
s32 arg3;
{
    u8 mode;
    func_801EBCC4_StructVec saved;
    f32 y;
    s32 result;
    func_801EBCC4_StructPos *pos;
    register func_801EBCC4_StructAnim *anim;
    f32 vec[3];
    f32 dx, dz;
    s16 saveAngle;
    f32 oldX, oldZ;

    anim = (func_801EBCC4_StructAnim *)((s32)arg2 + 0x1C);
    pos = HH_POS;
    saved.x = pos->x;
    saved.y = pos->y;
    saved.z = pos->z;
    result = func_80010550(arg1, arg2);
    mode = *((u8 *)&arg3 + 3);
    HH_POS->x = saved.x;
    HH_POS->y = saved.y;
    HH_POS->z = saved.z;
    pos = HH_POS;
    oldX = pos->x;
    oldZ = pos->z;
    saveAngle = pos->angle;
    switch (anim->id) {
    case 0x0168001E:
        HH_BYTE = 0;
        if (result != 0) {
            if ((anim->flags & 2) != 2) {
                anim->id = 0x0168001F;
                anim->frame = 0;
                anim->flags = 1;
                anim->rate = 1.0f;
                func_8013A28C(arg1, HH_ANIM);
            } else {
                func_801BF1A0(13);
                arg2->unk18 = 0;
                HH_GLOBAL->flags &= ~0x40;
                arg0->x = 0.0f;
                arg0->z = 0.0f;
                arg0->flags |= 0x80;
                anim->id = 0x01680041;
                anim->frame = 0;
                anim->flags = 0;
                anim->rate = 1.0f;
                func_8013A28C(arg1, HH_ANIM);
                arg0->flags |= 0x40;
                func_801E4F60(HH_GLOBAL->id);
                HH_GLOBAL->state = 0;
                HH_GLOBAL->value = 0;
                return;
            }
        }
        break;
    case 0x0168002F:
        HH_BYTE = 0;
        if (result != 0) {
            if (anim->flags & 0x10) {
                anim->flags = 0x11;
            } else {
                anim->flags = 1;
            }
            anim->id = 0x0168001F;
            anim->frame = 0;
            anim->rate = 1.0f;
            func_8013A28C(arg1, HH_ANIM);
        }
        break;
    case 0x01680020:
        if (result != 0) {
            if (anim->flags & 2) {
                anim->id = 0x0168001F;
                anim->frame = 0;
                anim->flags = 1;
                anim->rate = 1.0f;
                func_8013A28C(arg1, HH_ANIM);
            } else {
                func_801BF1A0(13);
                arg2->unk18 = 0;
                HH_GLOBAL->flags &= ~0x40;
                arg0->x = 0.0f;
                arg0->z = 0.0f;
                arg0->flags |= 0x80;
                anim->id = 0x01680041;
                anim->frame = 0;
                anim->flags = 0;
                anim->rate = 1.0f;
                func_8013A28C(arg1, HH_ANIM);
                arg0->flags |= 0x40;
                func_801E4F60(HH_GLOBAL->id);
                HH_GLOBAL->state = 0;
                HH_GLOBAL->value = 0;
            }
        }
        break;
    case 0x0168001F:
        HH_BYTE = mode;
        switch (mode) {
        case 1:
            func_800113D0(arg1, &anim->flags);
            func_800111E0(arg1, &anim->flags);
            func_80011328(arg1, &anim->flags);
            break;
        case 2:
            func_800113D0(arg1, &anim->flags);
            func_800112B0(arg1, &anim->flags);
            func_800111E0(arg1, &anim->flags);
            break;
        case 3:
            func_801C5A1C((pos = HH_POS)->x, y = pos->y + 16.5, pos->z, func_8001EAD0(HH_POS->angle) * 10.0 + pos->x, y, func_8001EB64(HH_POS->angle) * 10.0 + pos->z);
            if (anim->flags & 0x10) {
                anim->flags = 0x10;
            } else {
                anim->flags = 0;
            }
            if (HH_GLOBAL->kind == 10) {
                anim->id = 0x0168001E;
                anim->frame = 0x1D;
                anim->flags |= 2;
            } else {
                anim->id = 0x01680020;
                anim->frame = 0;
            }
            func_8013A28C(arg1, HH_ANIM);
            break;
        default:
            func_80011258(arg1, (s32)&anim->flags, mode);
            func_80011380(arg1, &anim->flags);
            break;
        }
        break;
    default:
        HH_BYTE = 0;
        if (func_801C5A1C((pos = HH_POS)->x, y = pos->y + 16.5, pos->z, func_8001EAD0(HH_POS->angle) * 10.0 + pos->x, y, func_8001EB64(HH_POS->angle) * 10.0 + pos->z) != 0) {
            vec[0] = HH_GLOBAL->vec.x;
            vec[1] = HH_GLOBAL->vec.y;
            vec[2] = HH_GLOBAL->vec.z;
            switch (HH_GLOBAL->kind) {
            case 27:
                HH_POS->angle = (s16)(func_8001EF38(-vec[2], vec[0]) + 0x1800) & 0x1FFF;
                HH_POS->x = func_8001EAD0(HH_POS->angle + 0x1000) * 3.0 + HH_GLOBAL->x;
                HH_POS->z = func_8001EB64(HH_POS->angle + 0x1000) * 3.0 + HH_GLOBAL->z;
                func_801E4F60(0);
                anim->id = 0x01680020;
                anim->frame = 0x1D;
                anim->flags = 2;
                func_801BF1A0(3);
                break;
            case 23:
                HH_POS->angle = (s16)(func_8001EF38(-vec[2], vec[0]) + 0x1800) & 0x1FFF;
                HH_POS->x = func_8001EAD0(HH_POS->angle + 0x1000) * 2.0 + HH_GLOBAL->x;
                HH_POS->z = func_8001EB64(HH_POS->angle + 0x1000) * 2.0 + HH_GLOBAL->z;
                dx = -func_8001EAD0(HH_POS->angle + 0x1000) * 5.0;
                dz = -func_8001EB64(HH_POS->angle + 0x1000) * 5.0;
                HH_POS->angle = (s16)(func_8001EF38(-vec[2], vec[0]) + 0x1000) & 0x1FFF;
                if (func_801C5A1C((pos = HH_POS)->x + dx, pos->y + 16.5, pos->z + dz, func_8001EAD0(HH_POS->angle) * 10.0 + (pos->x + dx), pos->y + 16.5, func_8001EB64(HH_POS->angle) * 10.0 + (pos->z + dz)) != 0) {
                    if (HH_GLOBAL->kind != 3) {
                        func_801C5A1C(-(2.0 * func_8001EAD0(HH_POS->angle)) + ((pos = HH_POS)->x + dx), pos->y + 16.5, (pos->z + dz) - 2.0 * func_8001EB64(HH_POS->angle), func_8001EAD0(HH_POS->angle) * 10.0 + (pos->x + dx), pos->y + 16.5, func_8001EB64(HH_POS->angle) * 10.0 + (pos->z + dz));
                    }
                } else {
                    HH_POS->x = oldX;
                    HH_POS->z = oldZ;
                    HH_POS->angle = saveAngle;
                    anim->id = 0x01680007;
                    anim->frame = 0;
                    anim->flags = 0;
                    func_8013A28C(arg1, HH_ANIM);
                    arg0->flags |= 0x80;
                    HH_GLOBAL->state = 0;
                    HH_GLOBAL->value = 0;
                    HH_GLOBAL->flags &= ~0x40;
                    arg0->x = 0.0f;
                    arg0->y = 0.0f;
                    arg0->z = 0.0f;
                    func_801E4F60(HH_GLOBAL->id);
                    break;
                }
                HH_POS->x = func_8001EAD0(HH_POS->angle + 0x1000) * 4.5 + HH_GLOBAL->x - dx;
                HH_POS->z = func_8001EB64(HH_POS->angle + 0x1000) * 4.5 + HH_GLOBAL->z - dz;
                func_801E4F60(0);
                anim->id = 0x0168002F;
                anim->frame = 0x1D;
                anim->flags = 2;
                func_801BF1A0(3);
                break;
            case 28:
                HH_POS->angle = (s16)(func_8001EF38(-vec[2], vec[0]) + 0x1800) & 0x1FFF;
                HH_POS->x = func_8001EAD0(HH_POS->angle + 0x1000) * 2.0 + HH_GLOBAL->x;
                HH_POS->z = func_8001EB64(HH_POS->angle + 0x1000) * 2.0 + HH_GLOBAL->z;
                dx = -func_8001EAD0(HH_POS->angle + 0x1000) * 5.0;
                dz = -func_8001EB64(HH_POS->angle + 0x1000) * 5.0;
                HH_POS->angle = func_8001EF38(-vec[2], vec[0]) & 0x1FFF;
                if (func_801C5A1C((pos = HH_POS)->x + dx, pos->y + 16.5, pos->z + dz, func_8001EAD0(HH_POS->angle) * 10.0 + (pos->x + dx), pos->y + 16.5, func_8001EB64(HH_POS->angle) * 10.0 + (pos->z + dz)) != 0) {
                    if (HH_GLOBAL->kind != 3) {
                        func_801C5A1C(-(2.0 * func_8001EAD0(HH_POS->angle)) + ((pos = HH_POS)->x + dx), pos->y + 16.5, (pos->z + dz) - 2.0 * func_8001EB64(HH_POS->angle), func_8001EAD0(HH_POS->angle) * 10.0 + (pos->x + dx), pos->y + 16.5, func_8001EB64(HH_POS->angle) * 10.0 + (pos->z + dz));
                    }
                } else {
                    HH_POS->x = oldX;
                    HH_POS->z = oldZ;
                    HH_POS->angle = saveAngle;
                    anim->id = 0x01680007;
                    anim->frame = 0;
                    anim->flags = 0;
                    func_8013A28C(arg1, HH_ANIM);
                    arg0->flags |= 0x80;
                    HH_GLOBAL->state = 0;
                    HH_GLOBAL->value = 0;
                    HH_GLOBAL->flags &= ~0x40;
                    arg0->x = 0.0f;
                    arg0->y = 0.0f;
                    arg0->z = 0.0f;
                    func_801E4F60(HH_GLOBAL->id);
                    break;
                }
                HH_POS->x = func_8001EAD0(HH_POS->angle + 0x1000) * 4.5 + HH_GLOBAL->x - dx;
                HH_POS->z = func_8001EB64(HH_POS->angle + 0x1000) * 4.5 + HH_GLOBAL->z - dz;
                func_801E4F60(0);
                anim->id = 0x0168002F;
                anim->frame = 0x1D;
                anim->flags = 0x12;
                func_801BF1A0(3);
                break;
            case 10:
                HH_POS->angle = (s16)(func_8001EF38(-vec[2], vec[0]) + 0x1800) & 0x1FFF;
                HH_POS->x = func_8001EAD0(HH_POS->angle + 0x1000) * 5.0 + HH_GLOBAL->x;
                HH_POS->z = func_8001EB64(HH_POS->angle + 0x1000) * 5.0 + HH_GLOBAL->z;
                anim->id = 0x0168001E;
                anim->frame = 0;
                anim->flags = 0;
                break;
            default:
                HH_POS->x = oldX;
                HH_POS->z = oldZ;
                HH_POS->angle = saveAngle;
                anim->id = 0x01680007;
                anim->frame = 0;
                anim->flags = 0;
                func_8013A28C(arg1, HH_ANIM);
                arg0->flags |= 0x80;
                HH_GLOBAL->state = 0;
                HH_GLOBAL->value = 0;
                HH_GLOBAL->flags &= ~0x40;
                arg0->x = 0.0f;
                arg0->y = 0.0f;
                arg0->z = 0.0f;
                func_801E4F60(HH_GLOBAL->id);
                break;
            }
            func_8013A28C(arg1, HH_ANIM);
            arg0->flags &= ~0x40;
            arg0->flags |= 0x80;
            arg0->x = 0.0f;
            arg0->y = 0.0f;
            arg0->z = 0.0f;
            func_80010550(arg1, arg2);
        } else {
            HH_POS->x = oldX;
            HH_POS->z = oldZ;
            HH_POS->angle = saveAngle;
            anim->id = 0x01680007;
            anim->frame = 0;
            anim->flags = 0;
            func_8013A28C(arg1, HH_ANIM);
            arg0->flags |= 0x80;
            HH_GLOBAL->state = 0;
            HH_GLOBAL->value = 0;
            HH_GLOBAL->flags &= ~0x40;
            arg0->x = 0.0f;
            arg0->y = 0.0f;
            arg0->z = 0.0f;
            func_801E4F60(HH_GLOBAL->id);
        }
        break;
    }
    if (!(HH_GLOBAL->flags & 0x40)) {
        func_800058DC(arg0, func_801E5010);
    }
}
#undef HH_GLOBAL
#undef HH_POS
#undef HH_ANIM
#undef HH_BYTE
#undef D_801BBBF0
#undef D_8021AFC8
#undef func_800058DC
#undef func_80010550
#undef func_80011258
#undef func_800112B0
#undef func_80011328
#undef func_80011380
#undef func_800113D0
#undef func_8001EF38
#undef func_8013A28C
#undef func_801BF1A0
#undef func_801C5A1C
#undef func_801E4F60
#undef func_801E5010
#undef func_801E74DC_Sub

extern func_801EFD14_Table D_80216B90;

extern u8 D_80216C0C;

#define D_80216B90 D_80216B90__func_801ECF58
#define func_80011140 func_80011140__func_801ECF58
#define func_8013A28C func_8013A28C__func_801ECF58
#define func_801E74DC_Arg0 func_801E74DC_Arg0__func_801ECF58
#define func_801E74DC_Sub func_801E74DC_Sub__func_801ECF58
#define func_801ED0EC_Arg2 func_801ED0EC_Arg2__func_801ECF58
#define func_801ED0EC_Sub func_801ED0EC_Sub__func_801ECF58
#define func_801EFD14_Table func_801EFD14_Table__func_801ECF58
typedef struct func_801EFD14_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EFD14_Table;
extern func_801EFD14_Table D_80216B90;
extern void func_80011140(s32, void *, func_801EFD14_Table, s32);
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
extern void func_8013A28C(s32, func_801E74DC_Sub);
typedef struct func_801E74DC_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x40 - 0x30];
    f32 unk40;
    u8 pad2[0x48 - 0x44];
    f32 unk48;
} func_801E74DC_Arg0;
typedef struct func_801ED0EC_Sub {
    s32 unk0;
    s16 unk4;
    s16 unk6;
    f32 unk8;
} func_801ED0EC_Sub;
typedef struct func_801ED0EC_Arg2 {
    u8 pad[0x1C];
    func_801ED0EC_Sub unk1C;
} func_801ED0EC_Arg2;


void func_801ECF58(func_801E74DC_Arg0 *arg0, s32 arg1, func_801ED0EC_Arg2 *arg2, u16 arg3, u8 arg4) {
    func_801ED0EC_Sub *s;
    func_801ED0EC_Arg2 *data = arg2;
    s32 a3 = arg3;
    s32 id;

    id = data->unk1C.unk0;
    if (id == 0x1680007) goto l7;
    if (id != 0x1680021) {
        s = &data->unk1C;
        goto lelse;
    }
    goto l21;
l7:
    if (arg4 != 0) {
        D_80216C0C = 1;
    }
    if (a3 != 0) {
        s = &data->unk1C;
        if (D_80216C0C != 0) {
            s->unk0 = 0x1680022;
        } else {
            s->unk0 = 0x1680021;
        }
        s->unk4 = 0;
        s->unk6 = 0;
        func_8013A28C(arg1, *(func_801E74DC_Sub *)s);
        D_80216C0C = 0;
    }
    return;
l21:
    if (a3 != 0) {
        func_80011140(arg1, data, *(func_801EFD14_Table *)&D_80216B90, 0xA);
        arg0->unk2C |= 0x80;
        arg0->unk40 = 0.0f;
        arg0->unk48 = 0.0f;
    } else {
        D_80216C0C = 0;
    }
    return;
lelse:
    s->unk0 = 0x1680007;
    s->unk4 = 0;
    s->unk6 = 0;
    func_8013A28C(arg1, *(func_801E74DC_Sub *)s);
    arg0->unk40 = 0.0f;
    arg0->unk2C |= 0x80;
    arg0->unk48 = 0.0f;
    D_80216C0C = 0;
}
#undef D_80216B90
#undef func_80011140
#undef func_8013A28C
#undef func_801E74DC_Arg0
#undef func_801E74DC_Sub
#undef func_801ED0EC_Arg2
#undef func_801ED0EC_Sub
#undef func_801EFD14_Table

#define D_801BBBF0 D_801BBBF0__func_801ED0EC
#define func_80010550 func_80010550__func_801ED0EC
#define func_8013A28C func_8013A28C__func_801ED0EC
#define func_801E74DC_Arg0 func_801E74DC_Arg0__func_801ED0EC
#define func_801E74DC_Inner func_801E74DC_Inner__func_801ED0EC
#define func_801E74DC_Outer func_801E74DC_Outer__func_801ED0EC
#define func_801E74DC_Sub func_801E74DC_Sub__func_801ED0EC
#define func_801F10C8_Struct func_801F10C8_Struct__func_801ED0EC
#define func_801F10C8_Struct_Inner func_801F10C8_Struct_Inner__func_801ED0EC
#define func_801F10C8_Struct_Inner2 func_801F10C8_Struct_Inner2__func_801ED0EC
typedef struct func_801F10C8_Struct_Inner2 {
    u8 pad0[0x4];
    u16 unk4;
} func_801F10C8_Struct_Inner2;
typedef struct func_801F10C8_Struct_Inner {
    u8 pad0[0x68];
    func_801F10C8_Struct_Inner2 *unk68;
} func_801F10C8_Struct_Inner;
typedef struct func_801F10C8_Struct {
    u8 pad0[0xDC];
    func_801F10C8_Struct_Inner *unkDC;
    u8 pad1[0xEF0 - 0xE0];
    u16 unkEF0;
} func_801F10C8_Struct;
extern func_801F10C8_Struct D_801BBBF0;
extern s32 func_80010550(s32, void *);
typedef struct func_801E74DC_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x40 - 0x30];
    f32 unk40;
    u8 pad2[0x48 - 0x44];
    f32 unk48;
} func_801E74DC_Arg0;
typedef struct func_801E74DC_Inner {
    u8 pad[0x12];
    s16 unk12;
} func_801E74DC_Inner;
typedef struct func_801E74DC_Outer {
    u8 pad[0x2C];
    func_801E74DC_Inner *unk2C;
} func_801E74DC_Outer;
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;

typedef struct func_801ED0EC_StructGlobal {
    u8 pad[0xE0];
    func_801E74DC_Outer *unkE0;
} func_801ED0EC_StructGlobal;

typedef struct func_801ED0EC_Sub {
    s32 unk0;
    s16 unk4;
    s16 unk6;
    f32 unk8;
} func_801ED0EC_Sub;

typedef struct func_801ED0EC_Arg2 {
    u8 pad[0x1C];
    func_801ED0EC_Sub unk1C;
} func_801ED0EC_Arg2;

void func_801ED0EC(func_801E74DC_Arg0 *arg0, s32 arg1, func_801ED0EC_Arg2 *arg2, u16 arg3)
{
    func_801ED0EC_Sub *temp;
    func_801E74DC_Inner *inner;

    temp = &arg2->unk1C;
    if (arg2->unk1C.unk0 == 0x01680022) {
        if (arg3 == 0) {
            return;
        }
        {
            temp->unk0 = 0x0168003E;
            temp->unk4 = 0;
            temp->unk6 = 0;
            func_8013A28C(arg1, *(func_801E74DC_Sub *)temp);
            inner = ((func_801ED0EC_StructGlobal *)&D_801BBBF0)->unkE0->unk2C;
            inner->unk12 = inner->unk12 + 0x1000;
            inner = ((func_801ED0EC_StructGlobal *)&D_801BBBF0)->unkE0->unk2C;
            inner->unk12 = inner->unk12 & 0x1FFF;
            func_80010550(arg1, arg2);
        }
    } else {
        temp->unk0 = 0x01680022;
        temp->unk4 = 0;
        temp->unk6 = 0;
        func_8013A28C(arg1, *(func_801E74DC_Sub *)temp);
        arg0->unk40 = 0.0f;
        arg0->unk48 = 0.0f;
        arg0->unk2C |= 0x80;
    }
}
#undef D_801BBBF0
#undef func_80010550
#undef func_8013A28C
#undef func_801E74DC_Arg0
#undef func_801E74DC_Inner
#undef func_801E74DC_Outer
#undef func_801E74DC_Sub
#undef func_801F10C8_Struct
#undef func_801F10C8_Struct_Inner
#undef func_801F10C8_Struct_Inner2


typedef struct func_801ED1F4_StructPos {
    u8 pad[4];
    f32 x, y, z;
} func_801ED1F4_StructPos;
typedef struct func_801ED1F4_StructObj {
    u8 pad[0x2C];
    func_801ED1F4_StructPos *pos;
} func_801ED1F4_StructObj;
typedef struct func_801ED1F4_StructGlobal {
    u8 pad[0xE0];
    func_801ED1F4_StructObj *obj;
    u8 pad2[0x230 - 0xE4];
    u8 flag;
} func_801ED1F4_StructGlobal;
extern s32 func_80010550(s32, void *);
extern void func_801E6BCC(s32, s32, void *, u16);

extern u8 D_801CBBF0[];

#define FUNC_801ED1F4_G ((func_801ED1F4_StructGlobal *)(D_801CBBF0 - 0x10000))

void func_801ED1F4(s32 arg0, s32 arg1, u8 *arg2) {
    f32 sp34;
    f32 sp30;
    f32 sp2C;
    func_801E74DC_Sub sp20;
    u16 sp1E;
    func_801ED1F4_StructPos *temp_v0;
    u8 *p;

    temp_v0 = FUNC_801ED1F4_G->obj->pos;
    sp2C = temp_v0->x;
    sp30 = temp_v0->y;
    sp34 = temp_v0->z;
    sp1E = func_80010550(arg1, arg2);
    FUNC_801ED1F4_G->obj->pos->x = sp2C;
    FUNC_801ED1F4_G->obj->pos->y = sp30;
    FUNC_801ED1F4_G->obj->pos->z = sp34;
    FUNC_801ED1F4_G->flag = 1;
    p = *(u8 **)&arg2;
    *(s16 *)(p + 0x22) = 0;
    p += 0x1C;
    func_8013A28C(arg1, *(func_801E74DC_Sub *)p);
    func_801E6BCC(arg0, arg1, arg2, sp1E);
}

#undef FUNC_801ED1F4_G

#define D_801BBBF0 D_801BBBF0__func_801ED2D4
#define func_800058DC func_800058DC__func_801ED2D4
#define func_800113D0 func_800113D0__func_801ED2D4
#define func_8001EF38 func_8001EF38__func_801ED2D4
#define func_8013A28C func_8013A28C__func_801ED2D4
#define func_801E4F60 func_801E4F60__func_801ED2D4
#define func_801E5010 func_801E5010__func_801ED2D4
#define func_801E74DC_Sub func_801E74DC_Sub__func_801ED2D4
extern u8 D_801BBBF0[];
s32 func_800058DC(void *arg0, void *arg1);
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
extern void func_8013A28C(s32, func_801E74DC_Sub);
void func_801E4F60(u16 arg0);
extern void func_801E5010(void);


typedef struct func_801ED2D4_StructPos {
    u8 pad0[4];
    f32 x, y, z;
    u8 pad1[2];
    s16 angle;
} func_801ED2D4_StructPos;
typedef struct func_801ED2D4_StructOuter {
    u8 pad[0x2C];
    func_801ED2D4_StructPos *pos;
} func_801ED2D4_StructOuter;
typedef struct func_801ED2D4_StructGlobal {
    u8 pad0[0xE0];
    func_801ED2D4_StructOuter *obj;
    u8 pad1[0xEE4-0xE4];
    f32 x, y, z;
    u16 flags;
    u8 pad2[3];
    u8 mode;
    u8 pad3[2];
    s32 unkEF8;
    u8 pad4[2];
    u16 unkEFE;
} func_801ED2D4_StructGlobal;
typedef struct func_801ED2D4_StructObj {
    u8 pad0[0x2C];
    s32 flags;
    u8 pad1[0x10];
    f32 x, y, z;
} func_801ED2D4_StructObj;
typedef union func_801ED2D4_StructAnim {
    struct func_801ED2D4_StructAnimFields {
        s32 unk0;
        s16 unk4;
        u16 unk6;
        f32 unk8;
    } f;
    func_801E74DC_Sub all;
} func_801ED2D4_StructAnim;
typedef struct func_801ED2D4_StructArg {
    u8 pad[0x18];
    s16 unk18;
    u8 pad1[2];
    func_801ED2D4_StructAnim anim;
} func_801ED2D4_StructArg;
typedef union func_801ED2D4_StructAddress {
    u32 address;
    func_801ED2D4_StructAnim *anim;
} func_801ED2D4_StructAddress;
extern void func_800113D0(s32, void *);
extern s32 func_8001EF38(f32, f32);
#define G ((func_801ED2D4_StructGlobal *)&D_801BBBF0)
#define FLAGS(p) (*(u16 *)&(p)->f.unk4 + 0)
#define FP(p) (&(p)->f.unk6)

void func_801ED2D4(func_801ED2D4_StructObj *input, s32 arg1, s32 arg2, s32 arg3)
{
    f32 saved[4];
    func_801ED2D4_StructAnim *p;
    func_801ED2D4_StructPos *pos;
    func_801ED2D4_StructAddress address;
    f32 trig;
    f32 vec[3];
    s32 result;
    s32 flags;

    pos = G->obj->pos;
    saved[0] = pos->x;
    saved[1] = pos->y;
    saved[2] = pos->z;
    result = func_80010550(arg1, (void *)arg2);
    p = (func_801ED2D4_StructAnim *)(((u32)arg2 + 28) & 0xFFFFFFFF);
    flags = *((u8 *)&arg3 + 3);
    G->obj->pos->x = saved[0];
    G->obj->pos->y = saved[1];
    G->obj->pos->z = saved[2];
    switch (p->all.unk0) {
    case 0x1680018:
    case 0x168001B:
        if (result) {
            if (G->mode == 0x2A) p->f.unk0 = 0x1680019;
            else p->f.unk0 = 0x1680030;
            p->f.unk4 = 0;
            func_8013A28C(arg1, p->all);
        }
        break;
    case 0x168001A:
    case 0x168001D:
        if (result) {
            ((func_801ED2D4_StructArg *)arg2)->unk18 = 0;
            G->flags &= ~0x40;
            input->x = 0.0f;
            input->y = 0.0f;
            input->flags |= 0x80;
            input->z = 0.0f;
            p->f.unk0 = 0x1680041;
            p->f.unk4 = 0;
            *FP(p) = 0;
            p->f.unk8 = 1.0f;
            func_8013A28C(arg1, p->all);
            input->flags |= 0x40;
            func_801E4F60(G->unkEFE);
            G->mode = 0;
            G->unkEF8 = 0;
        }
        break;
    case 0x1680019:
    case 0x168001C:
    case 0x1680030:
        if (result || (*FP(p) & 1)) {
            if (flags == 3) {
                if (G->mode == 0x2A) p->f.unk0 = 0x168001A;
                else p->f.unk0 = 0x168001D;
                flags = *FP(p);
                p->f.unk4 = 0;
                if (flags & 0x10) *FP(p) = flags & ~0x10;
                else *FP(p) = flags | 0x10;
                func_8013A28C(arg1, p->all);
            } else {
                p->f.unk4 = 0;
                func_800113D0(arg1, FP(p));
                flags = *FP(p);
                if (flags & 0x10) *FP(p) = flags & ~0x10;
                else *FP(p) = flags | 0x10;
                func_8013A28C(arg1, p->all);
            }
        } else if (flags == 3) {
            D_80011258(arg1, FP(p));
        }
        break;
    default: {
        if (G->mode == 0x2A) p->f.unk0 = 0x1680018;
        else p->f.unk0 = 0x168001B;
        p->f.unk4 = 0;
        *FP(p) = 0x10;
        p->f.unk8 = (0.4f);
        func_8013A28C(arg1, p->all);
        if (G->mode != 0x2A) {
            trig = func_8001EAD0(G->obj->pos->angle);
            G->obj->pos->x = G->obj->pos->x + trig * 5.0;
            trig = func_8001EB64(G->obj->pos->angle);
            G->obj->pos->z = G->obj->pos->z + trig * 5.0;
        }
        input->flags &= ~0x40;
        input->flags |= 0x80;
        input->x = 0.0f;
        input->y = 0.0f;
        input->z = 0.0f;
        vec[0] = G->x;
        vec[1] = G->y;
        vec[2] = G->z;
        G->obj->pos->angle = (s16)(func_8001EF38(-vec[2], vec[0]) + 0x1800) & 0x1FFF;
        func_80010550(arg1, (void *)arg2);
        break;
    }
    }
    if (!(G->flags & 0x40)) func_800058DC(input, func_801E5010);
}
#undef G
#undef FLAGS
#undef FP
#undef D_801BBBF0
#undef func_800058DC
#undef func_800113D0
#undef func_8001EF38
#undef func_8013A28C
#undef func_801E4F60
#undef func_801E5010
#undef func_801E74DC_Sub

#define D_801BBBF0 D_801BBBF0__func_801ED72C
#define D_80216B90 D_80216B90__func_801ED72C
#define D_8021AFB4 D_8021AFB4__func_801ED72C
#define D_8021AFB8 D_8021AFB8__func_801ED72C
#define D_8021AFBC D_8021AFBC__func_801ED72C
#define D_8021AFC0 D_8021AFC0__func_801ED72C
#define func_80011140 func_80011140__func_801ED72C
#define func_8001EF38 func_8001EF38__func_801ED72C
#define func_8013A28C func_8013A28C__func_801ED72C
#define func_801BF1A0 func_801BF1A0__func_801ED72C
#define func_801C5A1C func_801C5A1C__func_801ED72C
#define func_801E4F60 func_801E4F60__func_801ED72C
#define func_801E74DC_Sub func_801E74DC_Sub__func_801ED72C
#define func_801E7C30_G func_801E7C30_G__func_801ED72C
#define func_801E8BD0_G func_801E8BD0_G__func_801ED72C
#define func_801E8BD0_In func_801E8BD0_In__func_801ED72C
#define func_801E8BD0_Mid func_801E8BD0_Mid__func_801ED72C
#define func_801EFD14_Table func_801EFD14_Table__func_801ED72C
#define func_801F13B8 func_801F13B8__func_801ED72C
#define func_801F152C_In func_801F152C_In__func_801ED72C
#define func_801F152C_Obj func_801F152C_Obj__func_801ED72C
#define func_801F152C_Struct func_801F152C_Struct__func_801ED72C
#define G ((func_801F152C_Struct *)&D_801BBBF0)
#define p (G->unkE0->unk2C)
#define FLAGS(p) (*(u16 *)&(p)->f.unk4 + 0)
#define P G.obj->pos
#define SUBV (*(func_801E74DC_Sub *)sub)
#define g ((func_801E7C30_G *)&D_801BBBF0)
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
extern s32 func_8001EF38(f32, f32);
extern void func_8013A28C(s32, func_801E74DC_Sub);
extern void func_801BF1A0(s32);
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
#undef p
#undef FLAGS
#undef LAST
#undef D_801BBBF0
#undef D_80216B90
#undef D_8021AFB4
#undef D_8021AFB8
#undef D_8021AFBC
#undef D_8021AFC0
#undef func_80011140
#undef func_8001EF38
#undef func_8013A28C
#undef func_801BF1A0
#undef func_801C5A1C
#undef func_801E4F60
#undef func_801E74DC_Sub
#undef func_801E7C30_G
#undef func_801E8BD0_G
#undef func_801E8BD0_In
#undef func_801E8BD0_Mid
#undef func_801EFD14_Table
#undef func_801F13B8
#undef func_801F152C_In
#undef func_801F152C_Obj
#undef func_801F152C_Struct

#define D_801BBBF0 D_801BBBF0__func_801EDF0C
#define D_801E4011 D_801E4011__func_801EDF0C
#define D_80216B90 D_80216B90__func_801EDF0C
#define D_80216BC0 D_80216BC0__func_801EDF0C
#define D_80216BF0 D_80216BF0__func_801EDF0C
#define D_80216C00 D_80216C00__func_801EDF0C
#define D_802186B8 D_802186B8__func_801EDF0C
#define D_802186C0 D_802186C0__func_801EDF0C
#define D_802186C8 D_802186C8__func_801EDF0C
#define D_8021AFB4 D_8021AFB4__func_801EDF0C
#define D_8021AFBC D_8021AFBC__func_801EDF0C
#define D_8021AFC0 D_8021AFC0__func_801EDF0C
#define func_800058DC func_800058DC__func_801EDF0C
#define func_80011140 func_80011140__func_801EDF0C
#define func_8001EF38 func_8001EF38__func_801EDF0C
#define func_80118500 func_80118500__func_801EDF0C
#define func_80118B70 func_80118B70__func_801EDF0C
#define func_801190F4 func_801190F4__func_801EDF0C
#define func_8011B254 func_8011B254__func_801EDF0C
#define func_8011B260 func_8011B260__func_801EDF0C
#define func_8013A28C func_8013A28C__func_801EDF0C
#define func_801518D4 func_801518D4__func_801EDF0C
#define func_801BF1A0 func_801BF1A0__func_801EDF0C
#define func_801C5A1C func_801C5A1C__func_801EDF0C
#define func_801C7B18 func_801C7B18__func_801EDF0C
#define func_801E4F60 func_801E4F60__func_801EDF0C
#define func_801E74DC_Sub func_801E74DC_Sub__func_801EDF0C
#define func_801E7C30_G func_801E7C30_G__func_801EDF0C
#define func_801E8BD0_G func_801E8BD0_G__func_801EDF0C
#define func_801E8BD0_In func_801E8BD0_In__func_801EDF0C
#define func_801E8BD0_Mid func_801E8BD0_Mid__func_801EDF0C
#define func_801E95D4 func_801E95D4__func_801EDF0C
#define func_801EFD14_Table func_801EFD14_Table__func_801EDF0C
#define func_801EFF78 func_801EFF78__func_801EDF0C
#define func_801EFF78_StructAnim func_801EFF78_StructAnim__func_801EDF0C
#define func_801EFF78_StructData func_801EFF78_StructData__func_801EDF0C
#define func_801EFF78_StructObj func_801EFF78_StructObj__func_801EDF0C
#define g ((func_801E8BD0_G *)&D_801BBBF0)
#define P (g->unkE0->unk2C)
#define SUBV (*(func_801E74DC_Sub *)sub)
extern u8 D_801BBBF0[];
extern s8 D_801E4011;
typedef struct func_801EFD14_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EFD14_Table;
extern func_801EFD14_Table D_80216B90;
extern u16 D_80216BF0;
extern s16 D_80216C00;
extern f32 D_8021AFB4;
extern f32 D_8021AFBC;
extern s16 D_8021AFC0;
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
#define g ((func_801E8BD0_G *)&D_801BBBF0)
#define P (g->unkE0->unk2C)
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
#define SUBV (*(func_801E74DC_Sub *)sub)
s32 func_800058DC(void *arg0, void *arg1);
extern void func_80011140(s32, void *, func_801EFD14_Table, s32);
extern s32 func_8001EF38(f32, f32);
extern void func_8013A28C(s32, func_801E74DC_Sub);
extern void func_801518D4(s32, s32, s32);
extern void func_801BF1A0(s32);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
void func_801E4F60(u16 arg0);
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
typedef struct func_801EFF78_StructAnim { s32 id; u16 frame, flags; f32 last; } func_801EFF78_StructAnim;
typedef struct func_801EFF78_StructData { u8 pad[0x1C]; func_801EFF78_StructAnim anim; } func_801EFF78_StructData;
typedef struct func_801EFF78_StructObj {
 u8 pad[0x2C]; s32 unk2C, unk30; u8 pad2[0x40-0x34]; f32 unk40, unk44, unk48;
 u8 pad3[0x5C-0x4C]; func_801EFF78_StructData *unk5C;
} func_801EFF78_StructObj;
void func_801EFF78(func_801EFF78_StructObj *arg0, s32 arg1);


typedef struct func_801EDF0C_Sub {
    s32 unk0;
    u16 unk4;
    s16 unk6;
    f32 unk8;
} func_801EDF0C_Sub;
typedef struct func_801EDF0C_Stick {
    u16 unk0;
    u16 unk2;
} func_801EDF0C_Stick;
typedef struct func_801EDF0C_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 pad1[0x3E - 0x34];
    u8 unk3E;
    u8 unk3F;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x68 - 0x4C];
    func_801EDF0C_Stick *unk68;
} func_801EDF0C_Arg0;
typedef struct func_801EDF0C_Arg2 {
    u8 pad[0x1C];
    func_801EDF0C_Sub unk1C;
} func_801EDF0C_Arg2;
extern func_801EFD14_Table D_80216BC0;
extern f64 D_802186B8;
extern f64 D_802186C0;
extern f64 D_802186C8;
extern s32 func_8011B254();
extern s32 func_8011B260();
extern s32 func_801C7B18();
extern void func_801E95D4(void *, s32, void *, u16, s32);
extern void func_80118500();
extern void func_80118B70();
extern void func_801190F4();
#undef g
#undef P
#define g ((func_801E7C30_G *)&D_801BBBF0)
#define P (g->unkE0->unk2C)
#define SUBV (*(func_801E74DC_Sub *)sub)

#undef D_801BBBF0
#undef D_801E4011
#undef D_80216B90
#undef D_80216BC0
#undef D_80216BF0
#undef D_80216C00
#undef D_8021AFB4
#undef D_8021AFBC
#undef D_8021AFC0
#undef P
#undef SUBV
#undef func_800058DC
#undef func_80011140
#undef func_8001EF38
#undef func_80118500
#undef func_80118B70
#undef func_801190F4
#undef func_8011B254
#undef func_8011B260
#undef func_8013A28C
#undef func_801518D4
#undef func_801BF1A0
#undef func_801C5A1C
#undef func_801C7B18
#undef func_801E4F60
#undef func_801E74DC_Sub
#undef func_801E7C30_G
#undef func_801E8BD0_G
#undef func_801E8BD0_In
#undef func_801E8BD0_Mid
#undef func_801E95D4
#undef func_801EFD14_Table
#undef func_801EFF78
#undef func_801EFF78_StructAnim
#undef func_801EFF78_StructData
#undef func_801EFF78_StructObj
#undef g
#define D_801BBBF0 D_801BBBF0__func_801EDF0C_7941f05e
#define D_801E4011 D_801E4011__func_801EDF0C_7941f05e
#define D_80216B90 D_80216B90__func_801EDF0C_7941f05e
#define D_80216BC0 D_80216BC0__func_801EDF0C_7941f05e
#define D_80216BF0 D_80216BF0__func_801EDF0C_7941f05e
#define D_80216C00 D_80216C00__func_801EDF0C_7941f05e
#define D_8021AFB4 D_8021AFB4__func_801EDF0C_7941f05e
#define D_8021AFBC D_8021AFBC__func_801EDF0C_7941f05e
#define D_8021AFC0 D_8021AFC0__func_801EDF0C_7941f05e
#define func_800058DC func_800058DC__func_801EDF0C_7941f05e
#define func_80011140 func_80011140__func_801EDF0C_7941f05e
#define func_8001EF38 func_8001EF38__func_801EDF0C_7941f05e
#define func_80118500 func_80118500__func_801EDF0C_7941f05e
#define func_80118B70 func_80118B70__func_801EDF0C_7941f05e
#define func_801190F4 func_801190F4__func_801EDF0C_7941f05e
#define func_8011B254 func_8011B254__func_801EDF0C_7941f05e
#define func_8011B260 func_8011B260__func_801EDF0C_7941f05e
#define func_8013A28C func_8013A28C__func_801EDF0C_7941f05e
#define func_801518D4 func_801518D4__func_801EDF0C_7941f05e
#define func_801BF1A0 func_801BF1A0__func_801EDF0C_7941f05e
#define func_801C5A1C func_801C5A1C__func_801EDF0C_7941f05e
#define func_801C7B18 func_801C7B18__func_801EDF0C_7941f05e
#define func_801E4F60 func_801E4F60__func_801EDF0C_7941f05e
#define func_801E74DC_Sub func_801E74DC_Sub__func_801EDF0C_7941f05e
#define func_801E7C30_G func_801E7C30_G__func_801EDF0C_7941f05e
#define func_801E8BD0_G func_801E8BD0_G__func_801EDF0C_7941f05e
#define func_801E8BD0_In func_801E8BD0_In__func_801EDF0C_7941f05e
#define func_801E8BD0_Mid func_801E8BD0_Mid__func_801EDF0C_7941f05e
#define func_801E95D4 func_801E95D4__func_801EDF0C_7941f05e
#define func_801EDF0C_Arg0 func_801EDF0C_Arg0__func_801EDF0C_7941f05e
#define func_801EDF0C_Arg2 func_801EDF0C_Arg2__func_801EDF0C_7941f05e
#define func_801EDF0C_Stick func_801EDF0C_Stick__func_801EDF0C_7941f05e
#define func_801EDF0C_Sub func_801EDF0C_Sub__func_801EDF0C_7941f05e
#define func_801EFD14_Table func_801EFD14_Table__func_801EDF0C_7941f05e
#define func_801EFF78 func_801EFF78__func_801EDF0C_7941f05e
#define func_801EFF78_StructAnim func_801EFF78_StructAnim__func_801EDF0C_7941f05e
#define func_801EFF78_StructData func_801EFF78_StructData__func_801EDF0C_7941f05e
#define func_801EFF78_StructObj func_801EFF78_StructObj__func_801EDF0C_7941f05e
#define func_801F152C_In func_801F152C_In__func_801EDF0C_7941f05e
#define func_801F152C_Obj func_801F152C_Obj__func_801EDF0C_7941f05e
#define func_801F152C_Struct func_801F152C_Struct__func_801EDF0C_7941f05e
typedef struct func_801F152C_In { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad1[2]; s16 unk12; } func_801F152C_In;
typedef struct func_801F152C_Obj { u8 pad[0x22]; u8 unk22; u8 pad1[9]; func_801F152C_In *unk2C; } func_801F152C_Obj;
typedef struct func_801F152C_Struct { u8 pad[0xE0]; func_801F152C_Obj *unkE0; u8 pad1[0xF4 - 0xE4]; u8 unkF4; u8 pad2[2]; u8 unkF7; } func_801F152C_Struct;
#define G ((func_801F152C_Struct *)&D_801BBBF0)
#define P G.obj->pos
#define SUBV (*(func_801E74DC_Sub *)sub)
#define g ((func_801E7C30_G *)&D_801BBBF0)
extern u8 D_801BBBF0[];
extern s8 D_801E4011;
typedef struct func_801EFD14_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EFD14_Table;
extern func_801EFD14_Table D_80216B90;
extern u16 D_80216BF0;
extern s16 D_80216C00;
extern f32 D_8021AFB4;
extern f32 D_8021AFBC;
extern s16 D_8021AFC0;
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
#define g ((func_801E8BD0_G *)&D_801BBBF0)
#define P (g->unkE0->unk2C)
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
#define SUBV (*(func_801E74DC_Sub *)sub)
s32 func_800058DC(void *arg0, void *arg1);
extern void func_80011140(s32, void *, func_801EFD14_Table, s32);
extern s32 func_8001EF38(f32, f32);
extern void func_8013A28C(s32, func_801E74DC_Sub);
extern void func_801518D4(s32, s32, s32);
extern void func_801BF1A0(s32);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
void func_801E4F60(u16 arg0);
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
typedef struct func_801EFF78_StructAnim { s32 id; u16 frame, flags; f32 last; } func_801EFF78_StructAnim;
typedef struct func_801EFF78_StructData { u8 pad[0x1C]; func_801EFF78_StructAnim anim; } func_801EFF78_StructData;
typedef struct func_801EFF78_StructObj {
 u8 pad[0x2C]; s32 unk2C, unk30; u8 pad2[0x40-0x34]; f32 unk40, unk44, unk48;
 u8 pad3[0x5C-0x4C]; func_801EFF78_StructData *unk5C;
} func_801EFF78_StructObj;
void func_801EFF78(func_801EFF78_StructObj *arg0, s32 arg1);


typedef struct func_801EDF0C_Sub {
    s32 unk0;
    u16 unk4;
    s16 unk6;
    f32 unk8;
} func_801EDF0C_Sub;
typedef struct func_801EDF0C_Stick {
    u16 unk0;
    u16 unk2;
} func_801EDF0C_Stick;
typedef struct func_801EDF0C_Arg0 {
    u8 pad0[0x2C];
    s32 unk2C;
    s32 unk30;
    u8 pad1[0x3E - 0x34];
    u8 unk3E;
    u8 unk3F;
    f32 unk40;
    f32 unk44;
    f32 unk48;
    u8 pad2[0x68 - 0x4C];
    func_801EDF0C_Stick *unk68;
} func_801EDF0C_Arg0;
typedef struct func_801EDF0C_Arg2 {
    u8 pad[0x1C];
    func_801EDF0C_Sub unk1C;
} func_801EDF0C_Arg2;
extern func_801EFD14_Table D_80216BC0;
extern s32 func_8011B254();
extern s32 func_8011B260();
extern s32 func_801C7B18();
extern void func_801E95D4(void *, s32, void *, u16, s32);
extern void func_80118500();
extern void func_80118B70();
extern void func_801190F4();
#undef g
#undef P
#define g ((func_801E7C30_G *)&D_801BBBF0)
#define P (g->unkE0->unk2C)
#define SUBV (*(func_801E74DC_Sub *)sub)

void func_801EDF0C(func_801EDF0C_Arg0 *arg0, s32 arg1, func_801EDF0C_Arg2 *arg2, u16 arg3, f64 k) {
    func_801EDF0C_Sub *sub;
    f32 sp68;
    f32 sp5C[3];
    u8 kind;
    func_801EDF0C_Stick *stick;

    sub = &arg2->unk1C;
    stick = arg0->unk68;
    switch (sub->unk0) {
    case 0x168002A:
        if (arg3 != 0) {
            func_80011140(arg1, arg2, D_80216BC0, 5);
        }
    case 0x1680053:
        if (arg0->unk30 & 4) {
            if (g->unkEF6 == 0x18) {
                func_801E4F60(1);
                arg0->unk3E = 0xAF;
                D_80216C00 = P->unk12;
                func_801518D4(0, 3, 5);
                sub->unk0 = 0x168002B;
                sub->unk4 = 2;
                sub->unk6 = 0;
                sub->unk8 = 1.0f;
                func_8013A28C(arg1, SUBV);
                arg0->unk48 = 0.0f;
                arg0->unk44 = 0.0f;
                arg0->unk40 = 0.0f;
                return;
            }
            if (D_80216BF0 < 0x14) {
                if (D_8021AFB0 > 14.0) {
                    sub->unk0 = 0x1680040;
                    sub->unk4 = 8;
                    g->unkEF0 &= 0xFFF7;
                } else if (D_8021AFB0 > 6.0) {
                    sub->unk0 = 0x168003F;
                    sub->unk4 = 8;
                    g->unkEF0 &= 0xFFF7;
                } else if (D_8021AFB0 > 1.0) {
                    sub->unk0 = 0x168003E;
                    sub->unk4 = 9;
                    g->unkEF0 &= 0xFFF7;
                } else {
                    sub->unk0 = 0x1680051;
                    arg0->unk40 = 0.0f;
                    arg0->unk44 = 0.0f;
                    arg0->unk48 = 0.0f;
                    sub->unk4 = 1;
                    sub->unk8 = 1.0f;
                }
            } else {
                if (sub->unk8 > 1.0) {
                    func_801518D4(0, 7, 8);
                } else {
                    func_801518D4(0, 3, 6);
                }
                sub->unk0 = 0x1680052;
                sub->unk4 = 1;
                if (sub->unk8 < 2.0) {
                    sub->unk8 = 3.0f;
                } else {
                    sub->unk8 = 6.0f;
                }
                arg0->unk48 = 0.0f;
                arg0->unk44 = 0.0f;
                arg0->unk40 = 0.0f;
            }
            sub->unk6 = 0;
            func_8013A28C(arg1, SUBV);
            func_80010550(arg1, arg2);
            func_801E4F60(*(u16 *)((u8 *)g + 0xEFE));
            arg0->unk2C |= 0x80;
            return;
        }
        D_80216BF0 += 1;
        if ((g->unkEF0 & 8) && func_801C5A1C(func_8001EAD0(P->unk12) * 6.0 + P->unk4, P->unk8 + 22.0, func_8001EB64(P->unk12) * 6.0 + P->unkC, func_8001EAD0(P->unk12) * 6.0 + P->unk4, P->unk8 + 16.0, func_8001EB64(P->unk12) * 6.0 + P->unkC) != 0 && (g->unk35A == 8 || g->unk35A == 9 || g->unk35A == 0x11)) {
            kind = g->unk35A;
            sp68 = g->unk384;
            if (func_801C5A1C(P->unk4, P->unk8 + (16.5), P->unkC, func_8001EAD0(P->unk12) * 10.0 + P->unk4, P->unk8 + (16.5), func_8001EB64(P->unk12) * 10.0 + P->unkC) == 0 || (g->unk35A != 0x10 && g->unk35A != 0x22)) {
                if (func_801C5A1C(P->unk4, P->unk8 + 28.0, P->unkC, func_8001EAD0(P->unk12) * 7.0 + P->unk4, P->unk8 + 28.0, func_8001EB64(P->unk12) * 7.0 + P->unkC) == 0) {
                    sub->unk0 = 0x168000D;
                    sub->unk4 = 0;
                    sub->unk6 = 0;
                    sub->unk8 = 1.0f;
                    func_8013A28C(arg1, SUBV);
                    arg0->unk2C &= ~0x40;
                    arg0->unk2C &= ~0x80;
                    func_801E4F60(0);
                    arg0->unk40 = 0.0f;
                    arg0->unk44 = 0.0f;
                    arg0->unk48 = 0.0f;
                    if (kind == 8 || kind == 0x11) {
                        P->unk8 = sp68 - (19.8);
                        g->unkEF0 |= 6;
                        func_801BF1A0(9);
                        D_801E4011 = 0;
                    }
                    if (kind == 9) {
                        func_801BF1A0(0xA);
                        D_801E4011 = 0;
                        P->unk8 = sp68 - 21.0;
                        g->unkEF0 |= 4;
                    }
                    if (func_801C5A1C(P->unk4, P->unk8 + 10.0, P->unkC, func_8001EAD0(P->unk12) * 10.0 + P->unk4, P->unk8 + 10.0, func_8001EB64(P->unk12) * 10.0 + P->unkC) != 0) {
                        sp5C[2] = g->unk364;
                        sp5C[0] = g->unk35C;
                        sp5C[1] = g->unk360;
                        D_8021AFC0 = (s16)(func_8001EF38(-sp5C[2], sp5C[0]) + 0x1800) & 0x1FFF;
                        D_8021AFB4 = g->unk380;
                        D_8021AFBC = g->unk388;
                        return;
                    }
                    func_801BF1A0(1);
                    sub->unk0 = 0x1680053;
                    sub->unk4 = 0;
                    sub->unk6 = 0;
                    arg0->unk2C |= 0x40;
                    func_8013A28C(arg1, SUBV);
                    func_801E4F60((g->unkEFC | 4 | 8) & 0xFFFF);
                    g->unkEF0 &= 0xFEF1;
                    g->unkEF0 |= 0x200;
                    return;
                }
            }
            return;
        }
        if (arg0->unk30 & 8) {
            k = (0.9);
            arg0->unk40 *= k;
            arg0->unk48 *= k;
        }
        return;
    case 0x1680051:
        g->unkEF0 &= 0xFDF7;
        if (stick->unk2 & 0x10) {
            func_800058DC(arg0, func_801EFF78);
            return;
        }
        if ((stick->unk2 & 4) && (func_8011B260() == 0 || func_8011B254() == 2)) {
            func_800058DC(arg0, func_80118500);
            return;
        }
        if ((stick->unk2 & 2) && func_8011B260() == 0 && func_8011B254() == 2) {
            func_800058DC(arg0, func_801190F4);
            return;
        }
        if ((stick->unk2 & 1) && func_8011B260() == 0 && func_8011B254() == 2) {
            func_800058DC(arg0, func_80118B70);
            return;
        }
        if ((stick->unk2 & 0x2000) && func_801C5A1C(P->unk4, P->unk8 + 1.0, P->unkC, P->unk4, P->unk8 - 3.0, P->unkC) != 0 && g->unk35A != 0x11 && g->unk35A != 0x28 && func_801C7B18() != 0) {
            func_801E95D4(arg0, arg1, arg2, arg3, 0);
            return;
        }
        if (D_8021AFB0 > 14.0) {
            sub->unk0 = 0x1680040;
            sub->unk4 = 0;
            sub->unk6 = 0;
            sub->unk8 = 1.0f;
            func_8013A28C(arg1, SUBV);
            return;
        }
        if (D_8021AFB0 > 6.0) {
            sub->unk0 = 0x168003F;
            sub->unk4 = 0;
            sub->unk6 = 0;
            sub->unk8 = 1.0f;
            func_8013A28C(arg1, SUBV);
            return;
        }
        if (D_8021AFB0 > 1.0) {
            sub->unk0 = 0x168003E;
            sub->unk4 = 0;
            sub->unk6 = 0;
            sub->unk8 = 1.0f;
            func_8013A28C(arg1, SUBV);
            return;
        }
    case 0x1680052:
        g->unkEF0 &= 0xFFF7;
        if (arg3 != 0) {
            func_80011140(arg1, arg2, *(func_801EFD14_Table *)&D_80216B90, 0xA);
            arg0->unk2C |= 0x80;
            arg0->unk40 = 0.0f;
            arg0->unk48 = 0.0f;
        }
        return;
    default:
        sub->unk0 = 0x1680053;
        sub->unk4 = 0;
        sub->unk6 = 0;
        sub->unk8 = 1.0f;
        func_801E4F60((g->unkEFC | 4 | 8) & 0xFFFF);
        func_8013A28C(arg1, SUBV);
        arg0->unk40 = 0.0f;
        arg0->unk48 = 0.0f;
        return;
    }
}
#undef G
#undef SUBV
#undef D_801BBBF0
#undef D_801E4011
#undef D_80216B90
#undef D_80216BC0
#undef D_80216BF0
#undef D_80216C00
#undef D_8021AFB4
#undef D_8021AFBC
#undef D_8021AFC0
#undef func_800058DC
#undef func_80011140
#undef func_8001EF38
#undef func_80118500
#undef func_80118B70
#undef func_801190F4
#undef func_8011B254
#undef func_8011B260
#undef func_8013A28C
#undef func_801518D4
#undef func_801BF1A0
#undef func_801C5A1C
#undef func_801C7B18
#undef func_801E4F60
#undef func_801E74DC_Sub
#undef func_801E7C30_G
#undef func_801E8BD0_G
#undef func_801E8BD0_In
#undef func_801E8BD0_Mid
#undef func_801E95D4
#undef func_801EDF0C_Arg0
#undef func_801EDF0C_Arg2
#undef func_801EDF0C_Stick
#undef func_801EDF0C_Sub
#undef func_801EFD14_Table
#undef func_801EFF78
#undef func_801EFF78_StructAnim
#undef func_801EFF78_StructData
#undef func_801EFF78_StructObj
#undef func_801F152C_In
#undef func_801F152C_Obj
#undef func_801F152C_Struct
#define D_801BBBF0 D_801BBBF0__func_801EDF0C
#define D_801E4011 D_801E4011__func_801EDF0C
#define D_80216B90 D_80216B90__func_801EDF0C
#define D_80216BC0 D_80216BC0__func_801EDF0C
#define D_80216BF0 D_80216BF0__func_801EDF0C
#define D_80216C00 D_80216C00__func_801EDF0C
#define D_8021AFB4 D_8021AFB4__func_801EDF0C
#define D_8021AFBC D_8021AFBC__func_801EDF0C
#define D_8021AFC0 D_8021AFC0__func_801EDF0C
#define P (g->unkE0->unk2C)
#define SUBV (*(func_801E74DC_Sub *)sub)
#define func_800058DC func_800058DC__func_801EDF0C
#define func_80011140 func_80011140__func_801EDF0C
#define func_8001EF38 func_8001EF38__func_801EDF0C
#define func_80118500 func_80118500__func_801EDF0C
#define func_80118B70 func_80118B70__func_801EDF0C
#define func_801190F4 func_801190F4__func_801EDF0C
#define func_8011B254 func_8011B254__func_801EDF0C
#define func_8011B260 func_8011B260__func_801EDF0C
#define func_8013A28C func_8013A28C__func_801EDF0C
#define func_801518D4 func_801518D4__func_801EDF0C
#define func_801BF1A0 func_801BF1A0__func_801EDF0C
#define func_801C5A1C func_801C5A1C__func_801EDF0C
#define func_801C7B18 func_801C7B18__func_801EDF0C
#define func_801E4F60 func_801E4F60__func_801EDF0C
#define func_801E74DC_Sub func_801E74DC_Sub__func_801EDF0C
#define func_801E7C30_G func_801E7C30_G__func_801EDF0C
#define func_801E8BD0_G func_801E8BD0_G__func_801EDF0C
#define func_801E8BD0_In func_801E8BD0_In__func_801EDF0C
#define func_801E8BD0_Mid func_801E8BD0_Mid__func_801EDF0C
#define func_801E95D4 func_801E95D4__func_801EDF0C
#define func_801EFD14_Table func_801EFD14_Table__func_801EDF0C
#define func_801EFF78 func_801EFF78__func_801EDF0C
#define func_801EFF78_StructAnim func_801EFF78_StructAnim__func_801EDF0C
#define func_801EFF78_StructData func_801EFF78_StructData__func_801EDF0C
#define func_801EFF78_StructObj func_801EFF78_StructObj__func_801EDF0C
#define g ((func_801E7C30_G *)&D_801BBBF0)
#undef SUBV
#undef D_801BBBF0
#undef D_801E4011
#undef D_80216B90
#undef D_80216BC0
#undef D_80216BF0
#undef D_80216C00
#undef D_802186B8
#undef D_802186C0
#undef D_802186C8
#undef D_8021AFB4
#undef D_8021AFBC
#undef D_8021AFC0
#undef func_800058DC
#undef func_80011140
#undef func_8001EF38
#undef func_80118500
#undef func_80118B70
#undef func_801190F4
#undef func_8011B254
#undef func_8011B260
#undef func_8013A28C
#undef func_801518D4
#undef func_801BF1A0
#undef func_801C5A1C
#undef func_801C7B18
#undef func_801E4F60
#undef func_801E74DC_Sub
#undef func_801E7C30_G
#undef func_801E8BD0_G
#undef func_801E8BD0_In
#undef func_801E8BD0_Mid
#undef func_801E95D4
#undef func_801EFD14_Table
#undef func_801EFF78
#undef func_801EFF78_StructAnim
#undef func_801EFF78_StructData
#undef func_801EFF78_StructObj

#undef P
#undef g
#define D_801BBBF0 D_801BBBF0__func_801EEC58
#define D_80216BF0 D_80216BF0__func_801EEC58
#define D_80216C00 D_80216C00__func_801EEC58
#define func_80011380 func_80011380__func_801EEC58
#define func_800113D0 func_800113D0__func_801EEC58
#define func_8001EF38 func_8001EF38__func_801EEC58
#define func_80130F74 func_80130F74__func_801EEC58
#define func_801311F8 func_801311F8__func_801EEC58
#define func_8013A28C func_8013A28C__func_801EEC58
#define func_801518D4 func_801518D4__func_801EEC58
#define func_801C5A1C func_801C5A1C__func_801EEC58
#define func_801E4F60 func_801E4F60__func_801EEC58
#define func_801E74DC_Arg2 func_801E74DC_Arg2__func_801EEC58
#define func_801E74DC_Sub func_801E74DC_Sub__func_801EEC58
#define func_801E7C30_G func_801E7C30_G__func_801EEC58
#define func_801E8BD0_In func_801E8BD0_In__func_801EEC58
#define func_801E8BD0_Mid func_801E8BD0_Mid__func_801EEC58
#define func_801EF440 func_801EF440__func_801EEC58
#define func_801EF440_StructA func_801EF440_StructA__func_801EEC58
#define func_801F152C_In func_801F152C_In__func_801EEC58
#define func_801F152C_Obj func_801F152C_Obj__func_801EEC58
#define func_801F152C_Struct func_801F152C_Struct__func_801EEC58
#define G ((func_801F152C_Struct *)&D_801BBBF0)
#define g ((func_801E7C30_G *)&D_801BBBF0)
#define P (g->unkE0->unk2C)
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
extern s32 func_8001EF38(f32, f32);
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

#undef D_801BBBF0
#undef D_80216BF0
#undef D_80216C00
#undef G
#undef P
#undef func_80011380
#undef func_800113D0
#undef func_8001EF38
#undef func_80130F74
#undef func_801311F8
#undef func_8013A28C
#undef func_801518D4
#undef func_801C5A1C
#undef func_801E4F60
#undef func_801E74DC_Arg2
#undef func_801E74DC_Sub
#undef func_801E7C30_G
#undef func_801E8BD0_In
#undef func_801E8BD0_Mid
#undef func_801EF440
#undef func_801EF440_StructA
#undef func_801F152C_In
#undef func_801F152C_Obj
#undef func_801F152C_Struct
#undef g
#define D_801BBBF0 D_801BBBF0__func_801EEC58_5ea0bedb
#define D_80216BF0 D_80216BF0__func_801EEC58_5ea0bedb
#define D_80216C00 D_80216C00__func_801EEC58_5ea0bedb
#define func_80011380 func_80011380__func_801EEC58_5ea0bedb
#define func_800113D0 func_800113D0__func_801EEC58_5ea0bedb
#define func_8001EF38 func_8001EF38__func_801EEC58_5ea0bedb
#define func_80130F74 func_80130F74__func_801EEC58_5ea0bedb
#define func_801311F8 func_801311F8__func_801EEC58_5ea0bedb
#define func_8013A28C func_8013A28C__func_801EEC58_5ea0bedb
#define func_801518D4 func_801518D4__func_801EEC58_5ea0bedb
#define func_801C5A1C func_801C5A1C__func_801EEC58_5ea0bedb
#define func_801E4F60 func_801E4F60__func_801EEC58_5ea0bedb
#define func_801E74DC_Arg2 func_801E74DC_Arg2__func_801EEC58_5ea0bedb
#define func_801E74DC_Sub func_801E74DC_Sub__func_801EEC58_5ea0bedb
#define func_801E7C30_G func_801E7C30_G__func_801EEC58_5ea0bedb
#define func_801E8BD0_In func_801E8BD0_In__func_801EEC58_5ea0bedb
#define func_801E8BD0_Mid func_801E8BD0_Mid__func_801EEC58_5ea0bedb
#define func_801EEC58_StructArg func_801EEC58_StructArg__func_801EEC58_5ea0bedb
#define func_801EEC58_StructGlobal func_801EEC58_StructGlobal__func_801EEC58_5ea0bedb
#define func_801EEC58_StructObj func_801EEC58_StructObj__func_801EEC58_5ea0bedb
#define func_801EEC58_StructPos func_801EEC58_StructPos__func_801EEC58_5ea0bedb
#define func_801EF440 func_801EF440__func_801EEC58_5ea0bedb
#define func_801EF440_StructA func_801EF440_StructA__func_801EEC58_5ea0bedb
#define func_801F152C_In func_801F152C_In__func_801EEC58_5ea0bedb
#define func_801F152C_Obj func_801F152C_Obj__func_801EEC58_5ea0bedb
#define func_801F152C_Struct func_801F152C_Struct__func_801EEC58_5ea0bedb
#define G ((func_801F152C_Struct *)&D_801BBBF0)
#define g ((func_801E7C30_G *)&D_801BBBF0)
#define P (g->unkE0->unk2C)
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
extern void func_80011380(s32, u16 *);
extern void func_800113D0(s32, void *);
extern s32 func_8001EF38(f32, f32);
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

typedef struct func_801EEC58_StructAngles {
    s16 pitch;
    s16 yaw;
} func_801EEC58_StructAngles;

#define G (*(func_801EEC58_StructGlobal *)&D_801BBBF0)
#define P G.obj->pos
extern void func_80130F74(f32 *);
extern void func_801311F8(u16 *, f32 *, s32, u16, s32);

void func_801EEC58(func_801EEC58_StructArg *arg0, s32 arg1, func_801E74DC_Arg2 *arg2, u16 arg3) {
    func_801EEC58_StructAngles angles;
    u8 i;
    u16 rot[3];
    struct func_801EEC58_StructVector { f32 a, b, e; } vs;
#define V0 vs.a
#define V1 vs.b
#define V2 vs.e
#define vec ((f32 *)&vs)
    func_801E74DC_Sub *anim;
    u16 *rotp;
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
                angles.yaw = func_8001EF38(-V2, V0);
                P->ry = (angles.yaw + 0x800) & 0x1FFF;
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
            angles.pitch = hit;
            hit = (s16)hit;
            s = func_8001EB64(hit);
            hit = angles.pitch;
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
                func_80011380(arg1, (u16 *)((u8 *)anim + 6));
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
#undef g
#undef V0
#undef V1
#undef V2
#undef vec
#undef d
#undef D_801BBBF0
#undef D_80216BF0
#undef D_80216C00
#undef func_80011380
#undef func_800113D0
#undef func_8001EF38
#undef func_80130F74
#undef func_801311F8
#undef func_8013A28C
#undef func_801518D4
#undef func_801C5A1C
#undef func_801E4F60
#undef func_801E74DC_Arg2
#undef func_801E74DC_Sub
#undef func_801E7C30_G
#undef func_801E8BD0_In
#undef func_801E8BD0_Mid
#undef func_801EEC58_StructArg
#undef func_801EEC58_StructGlobal
#undef func_801EEC58_StructObj
#undef func_801EEC58_StructPos
#undef func_801EF440
#undef func_801EF440_StructA
#undef func_801F152C_In
#undef func_801F152C_Obj
#undef func_801F152C_Struct
#define D_801BBBF0 D_801BBBF0__func_801EEC58
#define D_80216BF0 D_80216BF0__func_801EEC58
#define D_80216C00 D_80216C00__func_801EEC58
#define G (*(func_801EEC58_StructGlobal *)&D_801BBBF0)
#define P G.obj->pos
#define func_80011380 func_80011380__func_801EEC58
#define func_800113D0 func_800113D0__func_801EEC58
#define func_8001EF38 func_8001EF38__func_801EEC58
#define func_80130F74 func_80130F74__func_801EEC58
#define func_801311F8 func_801311F8__func_801EEC58
#define func_8013A28C func_8013A28C__func_801EEC58
#define func_801518D4 func_801518D4__func_801EEC58
#define func_801C5A1C func_801C5A1C__func_801EEC58
#define func_801E4F60 func_801E4F60__func_801EEC58
#define func_801E74DC_Arg2 func_801E74DC_Arg2__func_801EEC58
#define func_801E74DC_Sub func_801E74DC_Sub__func_801EEC58
#define func_801E7C30_G func_801E7C30_G__func_801EEC58
#define func_801E8BD0_In func_801E8BD0_In__func_801EEC58
#define func_801E8BD0_Mid func_801E8BD0_Mid__func_801EEC58
#define func_801EF440 func_801EF440__func_801EEC58
#define func_801EF440_StructA func_801EF440_StructA__func_801EEC58
#define func_801F152C_In func_801F152C_In__func_801EEC58
#define func_801F152C_Obj func_801F152C_Obj__func_801EEC58
#define func_801F152C_Struct func_801F152C_Struct__func_801EEC58
#define g ((func_801E7C30_G *)&D_801BBBF0)
#undef g
#undef V0
#undef V1
#undef V2
#undef vec
#undef d
#undef D_801BBBF0
#undef D_80216BF0
#undef D_80216C00
#undef func_80011380
#undef func_800113D0
#undef func_8001EF38
#undef func_80130F74
#undef func_801311F8
#undef func_8013A28C
#undef func_801518D4
#undef func_801C5A1C
#undef func_801E4F60
#undef func_801E74DC_Arg2
#undef func_801E74DC_Sub
#undef func_801E7C30_G
#undef func_801E8BD0_In
#undef func_801E8BD0_Mid
#undef func_801EF440
#undef func_801EF440_StructA
#undef func_801F152C_In
#undef func_801F152C_Obj
#undef func_801F152C_Struct
#define P (g->unkE0->unk2C)
#define g ((func_801E7C30_G *)&D_801BBBF0)

#define D_801BBBF0 D_801BBBF0__func_801EF440
#define func_801C3B7C func_801C3B7C__func_801EF440
#define func_801C5A1C func_801C5A1C__func_801EF440
#define func_801F152C_In func_801F152C_In__func_801EF440
#define func_801F152C_Obj func_801F152C_Obj__func_801EF440
#define func_801F152C_Struct func_801F152C_Struct__func_801EF440
#define G ((func_801F152C_Struct *)&D_801BBBF0)
extern u8 D_801BBBF0[];
typedef struct func_801F152C_In { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad1[2]; s16 unk12; } func_801F152C_In;
typedef struct func_801F152C_Obj { u8 pad[0x22]; u8 unk22; u8 pad1[9]; func_801F152C_In *unk2C; } func_801F152C_Obj;
typedef struct func_801F152C_Struct { u8 pad[0xE0]; func_801F152C_Obj *unkE0; u8 pad1[0xF4 - 0xE4]; u8 unkF4; u8 pad2[2]; u8 unkF7; } func_801F152C_Struct;
#define G ((func_801F152C_Struct *)&D_801BBBF0)


typedef struct func_801EF440_StructP {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801EF440_StructP;

typedef struct func_801EF440_StructI {
    u8 pad[0x2C];
    func_801EF440_StructP *unk2C;
} func_801EF440_StructI;

typedef struct func_801EF440_StructG {
    u8 pad0[0xE0];
    func_801EF440_StructI *unkE0;
    u8 pad1[0x35A - 0xE4];
    u8 unk35A;
    u8 pad2;
    f32 unk35C;
    f32 unk360;
    f32 unk364;
    u8 pad3[0x38C - 0x368];
    s32 unk38C;
} func_801EF440_StructG;

typedef struct func_801EF440_StructA {
    u8 pad[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
} func_801EF440_StructA;
extern void func_801C3B7C(s32);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);

#define G ((func_801EF440_StructG *)&D_801BBBF0)
#define MAG(x) func_8002FC20(x[0] * x[0] + x[1] * x[1] + x[2] * x[2])
#define DOT (v[0] * -u[0] + v[1] * -u[1] + v[2] * -u[2])

#undef DOT
#undef D_801BBBF0
#undef G
#undef MAG
#undef func_801C3B7C
#undef func_801C5A1C
#undef func_801F152C_In
#undef func_801F152C_Obj
#undef func_801F152C_Struct
#define D_801BBBF0 D_801BBBF0__func_801EF440_799b2c69
#define func_801C3B7C func_801C3B7C__func_801EF440_799b2c69
#define func_801C5A1C func_801C5A1C__func_801EF440_799b2c69
#define func_801EF440_StructA func_801EF440_StructA__func_801EF440_799b2c69
#define func_801EF440_StructG func_801EF440_StructG__func_801EF440_799b2c69
#define func_801EF440_StructI func_801EF440_StructI__func_801EF440_799b2c69
#define func_801EF440_StructP func_801EF440_StructP__func_801EF440_799b2c69
#define func_801F152C_In func_801F152C_In__func_801EF440_799b2c69
#define func_801F152C_Obj func_801F152C_Obj__func_801EF440_799b2c69
#define func_801F152C_Struct func_801F152C_Struct__func_801EF440_799b2c69
#define G ((func_801F152C_Struct *)&D_801BBBF0)
extern u8 D_801BBBF0[];
typedef struct func_801F152C_In { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad1[2]; s16 unk12; } func_801F152C_In;
typedef struct func_801F152C_Obj { u8 pad[0x22]; u8 unk22; u8 pad1[9]; func_801F152C_In *unk2C; } func_801F152C_Obj;
typedef struct func_801F152C_Struct { u8 pad[0xE0]; func_801F152C_Obj *unkE0; u8 pad1[0xF4 - 0xE4]; u8 unkF4; u8 pad2[2]; u8 unkF7; } func_801F152C_Struct;
#define G ((func_801F152C_Struct *)&D_801BBBF0)


typedef struct func_801EF440_StructP {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
} func_801EF440_StructP;

typedef struct func_801EF440_StructI {
    u8 pad[0x2C];
    func_801EF440_StructP *unk2C;
} func_801EF440_StructI;

typedef struct func_801EF440_StructG {
    u8 pad0[0xE0];
    func_801EF440_StructI *unkE0;
    u8 pad1[0x35A - 0xE4];
    u8 unk35A;
    u8 pad2;
    f32 unk35C;
    f32 unk360;
    f32 unk364;
    u8 pad3[0x38C - 0x368];
    s32 unk38C;
} func_801EF440_StructG;

typedef struct func_801EF440_StructA {
    u8 pad[0x40];
    f32 unk40;
    f32 unk44;
    f32 unk48;
} func_801EF440_StructA;
extern void func_801C3B7C(s32);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);

#define G ((func_801EF440_StructG *)&D_801BBBF0)
#define MAG(x) func_8002FC20(x[0] * x[0] + x[1] * x[1] + x[2] * x[2])
#define DOT (v[0] * -u[0] + v[1] * -u[1] + v[2] * -u[2])

void func_801EF440(func_801EF440_StructA *arg0) {
    func_801EF440_StructP *q;
    f32 v[3];
    f32 u[3];
    f32 a[3];
    f32 b[3];
    f32 sp48;
    f32 sp44;
    f32 sp40;
    u8 i;
#define p (G->unkE0->unk2C)

    q = p;
    if (func_801C5A1C(q->unk4, q->unk8 + 1.0, q->unkC,
                      arg0->unk40 * 3.0 + q->unk4,
                      q->unk8 + 1.0,
                      arg0->unk48 * 3.0 + q->unkC) != 0) {
        if (G->unk35A != 0x1A) {
            v[0] = G->unk35C;
            v[1] = G->unk360;
            v[2] = G->unk364;
            u[0] = arg0->unk40;
            u[1] = arg0->unk44;
            u[2] = arg0->unk48;
            a[0] = a[1] = a[2] = 0.0f;
            b[0] = b[1] = b[2] = 0.0f;
            sp40 = DOT / (MAG(v) * MAG(u));
            sp48 = MAG(v);
            sp44 = MAG(u) * sp40 / sp48;

            for (i = 0; i < 3; i++) {
                a[i] = v[i] * sp44 * 0.6;
            }
            for (i = 0; i < 3; i++) {
                b[i] = u[i] + a[i] * 2.0;
            }
            arg0->unk40 = b[0];
            arg0->unk44 = b[1];
            arg0->unk48 = b[2];
        } else {
            func_801C3B7C(G->unk38C);
        }
    }
}
#undef G
#undef MAG
#undef DOT
#undef p
#undef D_801BBBF0
#undef func_801C3B7C
#undef func_801C5A1C
#undef func_801EF440_StructA
#undef func_801EF440_StructG
#undef func_801EF440_StructI
#undef func_801EF440_StructP
#undef func_801F152C_In
#undef func_801F152C_Obj
#undef func_801F152C_Struct
#define DOT (v[0] * -u[0] + v[1] * -u[1] + v[2] * -u[2])
#define D_801BBBF0 D_801BBBF0__func_801EF440
#define G ((func_801EF440_StructG *)&D_801BBBF0)
#define MAG(x) func_8002FC20(x[0] * x[0] + x[1] * x[1] + x[2] * x[2])
#define func_801C3B7C func_801C3B7C__func_801EF440
#define func_801C5A1C func_801C5A1C__func_801EF440
#define func_801F152C_In func_801F152C_In__func_801EF440
#define func_801F152C_Obj func_801F152C_Obj__func_801EF440
#define func_801F152C_Struct func_801F152C_Struct__func_801EF440
#undef G
#undef MAG
#undef DOT
#undef p
#undef D_801BBBF0
#undef func_801C3B7C
#undef func_801C5A1C
#undef func_801F152C_In
#undef func_801F152C_Obj
#undef func_801F152C_Struct



#define D_801BBBF0 D_801BBBF0__func_801EF6F8
#define func_8013A28C func_8013A28C__func_801EF6F8
#define func_801BF1A0 func_801BF1A0__func_801EF6F8
#define func_801C88BC func_801C88BC__func_801EF6F8
#define func_801E4F60 func_801E4F60__func_801EF6F8
#define func_801E74DC_Arg2 func_801E74DC_Arg2__func_801EF6F8
#define func_801E74DC_Sub func_801E74DC_Sub__func_801EF6F8
#define func_801E7C30 func_801E7C30__func_801EF6F8
#define func_801E8BD0 func_801E8BD0__func_801EF6F8
#define func_801E95D4 func_801E95D4__func_801EF6F8
#define func_801ED1F4 func_801ED1F4__func_801EF6F8
#define func_801EDF0C func_801EDF0C__func_801EF6F8
#define func_801F152C_In func_801F152C_In__func_801EF6F8
#define func_801F152C_Obj func_801F152C_Obj__func_801EF6F8
#define func_801F152C_Struct func_801F152C_Struct__func_801EF6F8
typedef struct func_801F152C_In { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad1[2]; s16 unk12; } func_801F152C_In;
typedef struct func_801F152C_Obj { u8 pad[0x22]; u8 unk22; u8 pad1[9]; func_801F152C_In *unk2C; } func_801F152C_Obj;
typedef struct func_801F152C_Struct { u8 pad[0xE0]; func_801F152C_Obj *unkE0; u8 pad1[0xF4 - 0xE4]; u8 unkF4; u8 pad2[2]; u8 unkF7; } func_801F152C_Struct;
#define G ((func_801F152C_Struct *)&D_801BBBF0)
extern u8 D_801BBBF0[];
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
extern void func_8013A28C(s32, func_801E74DC_Sub);
void func_801E4F60(u16 arg0);
typedef struct func_801E74DC_Arg2 {
    u8 pad[0x1C];
    func_801E74DC_Sub unk1C;
} func_801E74DC_Arg2;
void func_801ED1F4(s32 arg0, s32 arg1, u8 *arg2);


typedef struct func_801EF6F8_StructPos {
    u8 pad[4];
    f32 x, y, z;
} func_801EF6F8_StructPos;
typedef union func_801EF6F8_StructSavedPos {
    f32 coords[3];
    u8 padding[16];
} func_801EF6F8_StructSavedPos;
typedef union func_801EF6F8_StructSavedData {
    void *value;
    u8 padding[8];
} func_801EF6F8_StructSavedData;
typedef struct func_801EF6F8_StructSub {
    s32 id;
    s16 part;
    u16 flags;
    f32 value;
} func_801EF6F8_StructSub;
typedef union func_801EF6F8_StructSubView {
    func_801EF6F8_StructSub fields;
    func_801E74DC_Sub all;
} func_801EF6F8_StructSubView;
typedef struct func_801EF6F8_StructOuter {
    u8 pad[0x2C];
    func_801EF6F8_StructPos *pos;
} func_801EF6F8_StructOuter;
typedef struct func_801EF6F8_StructGlobal {
    u8 pad0[0xE0];
    func_801EF6F8_StructOuter *outer;
    u8 pad1[0x190-0xE4];
    u16 state;
    u8 pad2[0xEF0-0x192];
    u16 flags;
    u8 pad3[0xEFE-0xEF2];
    u16 sound;
} func_801EF6F8_StructGlobal;
typedef struct func_801EF6F8_StructArg {
    u8 pad0[0x2C];
    u32 flags;
    u8 pad1[0x40-0x30];
    f32 x;
    u8 pad2[4];
    f32 z;
    u8 pad3[0x68-0x4C];
    void *data;
} func_801EF6F8_StructArg;
extern void func_801BF1A0(s32);
extern void func_801C88BC(void);
extern void func_801E8BD0(void *, s32, void *, u16, void *);
extern void func_801E7C30(void *, s32, void *, u16);
extern void func_801EDF0C(void *, s32, void *, u16);
extern void func_801E95D4(void *, s32, void *, u16, s32);

#define G ((func_801EF6F8_StructGlobal *)&D_801BBBF0)
#define SAVE_POS() cur = G->outer->pos; pos.coords[0] = cur->x; pos.coords[1] = cur->y; pos.coords[2] = cur->z
#define RESTORE_POS() G->outer->pos->x = pos.coords[0]; G->outer->pos->y = pos.coords[1]; G->outer->pos->z = pos.coords[2]

s32 func_801EF6F8(func_801EF6F8_StructArg *arg0, s32 arg1, func_801E74DC_Arg2 *arg2)
{
    func_801EF6F8_StructSavedData data;
    func_801EF6F8_StructSavedPos pos;
    u16 result;
    func_801EF6F8_StructSubView *sub;
    func_801EF6F8_StructPos *cur;
    func_801E74DC_Arg2 **arg2_ptr = &arg2;
    s32 *arg1_ptr = &arg1;

    data.value = arg0->data;
    if (G->state == 5 || G->state == 6) {
        func_801BF1A0(1);
        func_801E4F60(G->sound);
        G->flags &= 0xF0F1;
        func_801C88BC();
        G->flags |= 0x20;
        return 1;
    }
    sub = (func_801EF6F8_StructSubView *)&(*arg2_ptr)->unk1C;
    switch ((u32)sub->fields.id) {
    case 0x168004F:
    case 0x1680050:
        G->flags |= 0x200;
        SAVE_POS();
        result = func_80010550(*arg1_ptr, *arg2_ptr);
        RESTORE_POS();
        func_801E8BD0(arg0, *arg1_ptr, *arg2_ptr, result, data.value);
        break;
    case 0x168004C:
        G->flags |= 0x200;
        SAVE_POS();
        result = func_80010550(*arg1_ptr, *arg2_ptr);
        RESTORE_POS();
        func_801E7C30(arg0, *arg1_ptr, *arg2_ptr, result);
        break;
    case 0x168002A:
    case 0x1680051:
    case 0x1680052:
    case 0x1680053:
        G->flags |= 0x200;
        SAVE_POS();
        result = func_80010550(*arg1_ptr, *arg2_ptr);
        RESTORE_POS();
        func_801EDF0C(arg0, *arg1_ptr, *arg2_ptr, result);
        break;
    case 0x1680015:
    case 0x1680017:
        func_801BF1A0(13);
        sub->all.unk0 = 0x1680016;
        sub->fields.part = 0;
        sub->fields.flags = 0;
        sub->fields.value = 0.5f;
        func_8013A28C(*arg1_ptr, sub->all);
        func_801E4F60(G->sound);
        SAVE_POS();
        result = func_80010550(*arg1_ptr, *arg2_ptr);
        RESTORE_POS();
        func_801E95D4(arg0, *arg1_ptr, *arg2_ptr, result, 0);
        break;
    case 0x1680012:
    case 0x1680013:
    case 0x1680014:
        if (!(sub->fields.flags & 2)) {
            sub->fields.flags |= 2;
            func_8013A28C(*arg1_ptr, sub->all);
        }
        /* fall through */
    case 0x1680016:
        SAVE_POS();
        result = func_80010550(*arg1_ptr, *arg2_ptr);
        RESTORE_POS();
        func_801E95D4(arg0, *arg1_ptr, *arg2_ptr, result, 0);
        break;
    case 0x1680054:
    case 0x1680055:
    case 0x1680056:
    case 0x1680057:
    case 0x1680058:
        sub->all.unk0 = 0x1680041;
        sub->fields.part = 0;
        sub->fields.flags = 0;
        sub->fields.value = 1.0f;
        func_8013A28C(*arg1_ptr, sub->all);
        break;
    default:
        func_801ED1F4((s32)arg0, *arg1_ptr, (u8 *)*arg2_ptr);
        break;
    }
    arg0->z = 0.0f;
    arg0->x = 0.0f;
    if (sub->fields.id == 0x1680041) {
        func_801BF1A0(1);
        func_801E4F60(G->sound);
        G->flags &= 0xF0F1;
        func_801C88BC();
        arg0->flags |= 0xE0;
        if (G->state == 1) {
            func_801E4F60(0x3F);
        }
        G->flags |= 0x20;
        return 1;
    }
    G->flags &= 0xFFDF;
    return 0;
}
#undef G
#undef SAVE_POS
#undef RESTORE_POS
#undef D_801BBBF0
#undef func_8013A28C
#undef func_801BF1A0
#undef func_801C88BC
#undef func_801E4F60
#undef func_801E74DC_Arg2
#undef func_801E74DC_Sub
#undef func_801E7C30
#undef func_801E8BD0
#undef func_801E95D4
#undef func_801ED1F4
#undef func_801EDF0C
#undef func_801F152C_In
#undef func_801F152C_Obj
#undef func_801F152C_Struct


typedef struct func_801EFBEC_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad1[0x5C - 0x30];
    s32 unk5C;
} func_801EFBEC_Struct;

s32 func_800058DC(void *arg0, void *arg1);
s32 func_80011198(void *arg0, s32 arg1, void *arg2, void *arg3);
extern u8 D_801BBE1A[];
extern s16 D_80216C10;
extern void func_801EFC50();

void func_801EFBEC(func_801EFBEC_Struct *arg0, void *arg1) {
    s32 temp;

    temp = arg0->unk5C;
    arg0->unk2C &= ~0x80;
    D_80216C10 = 0;
    func_80011198(arg1, temp, arg0, arg1);
    D_801BBE1A[6] = 1;
    func_800058DC(arg0, func_801EFC50);
}

typedef struct func_801EFD14_Struct {
    u8 pad[0x5C];
    void *unk5C;
} func_801EFD14_Struct;
extern func_801EFD14_Table D_80216BCC;
void func_801EFD14(func_801EFD14_Struct *arg0, s32 arg1);

extern void func_80011258(s32, s32, u16);

void func_801EFC50(void *arg0, s32 arg1) {
    s32 sp24;
    u16 temp_a2;

    sp24 = (s32) *(void **) ((u8 *) arg0 + 0x5C);
    temp_a2 = (u16) func_80010550(arg1, (void *) sp24);
    if ((*(u16 *) &D_80216C10)++ >= 0x1F) {
        func_80011258(arg1, sp24 + 0x22, temp_a2);
    }
    if (temp_a2 != 0) {
        *(u16 *) &D_80216C10 = 0;
        func_80011140(arg1, (void *) sp24, D_80216BCC, 0x14);
        func_800058DC(arg0, &func_801EFD14);
    }
}

extern u16 D_801BCAE0;


typedef struct func_801EFD14_Obj {
    u8 pad[0x1C];
    s32 unk1C;
} func_801EFD14_Obj;


extern void func_801E5010(void);

void func_801EFD14(func_801EFD14_Struct *arg0, s32 arg1) {
    func_801EFD14_Obj *temp_a1;
    s32 temp_v1;

    temp_a1 = arg0->unk5C;
    func_80010550(arg1, temp_a1);
    temp_v1 = temp_a1->unk1C;
    if (temp_v1 == 0x01680041) {
        D_801BCAE0 = 0x80;
        func_800058DC(arg0, func_801E5010);
    } else if (temp_v1 != 0x03480010) {
        func_80011140(arg1, temp_a1, D_80216BCC, 0x14);
    } else {
        if (func_80010550(arg1, temp_a1) != 0) {
            func_80011140(arg1, temp_a1, D_80216B90, 0xA);
        }
    }
}


void func_801EFE0C(f32 arg0) {
    f64 t = (f64) arg0;
    if (t > 1.0) {
        if (t > 3.0) {
            D_801BBCD0->unk2C->unk12 -= 0x50;
        } else if (t > 2.0) {
            D_801BBCD0->unk2C->unk12 -= 0x3C;
        } else {
            D_801BBCD0->unk2C->unk12 -= 0x28;
        }
    } else if (t < -1.0) {
        if (t < -3.0) {
            D_801BBCD0->unk2C->unk12 += 0x50;
        } else if (t < -2.0) {
            D_801BBCD0->unk2C->unk12 += 0x3C;
        } else {
            D_801BBCD0->unk2C->unk12 += 0x28;
        }
    }
    D_801BBCD0->unk2C->unk12 &= 0x1FFF;
}

#define B_80011140 B_80011140__func_801EFF78
#define D_80011198 D_80011198__func_801EFF78
#define D_801BBBF0 D_801BBBF0__func_801EFF78
#define D_80216B90 D_80216B90__func_801EFF78
#define D_80216BA8 D_80216BA8__func_801EFF78
#define D_80216BF8 D_80216BF8__func_801EFF78
#define D_80216C14 D_80216C14__func_801EFF78
#define D_80216C20 D_80216C20__func_801EFF78
#define D_80216C2C D_80216C2C__func_801EFF78
#define D_80216C38 D_80216C38__func_801EFF78
#define D_80216C44 D_80216C44__func_801EFF78
#define D_802187A0 D_802187A0__func_801EFF78
#define D_802187A4 D_802187A4__func_801EFF78
#define D_8021AFC9 D_8021AFC9__func_801EFF78
#define func_800113D0 func_800113D0__func_801EFF78
#define func_80020718 func_80020718__func_801EFF78
#define func_8013A28C func_8013A28C__func_801EFF78
#define func_8013AE20 func_8013AE20__func_801EFF78
#define func_801C5A1C func_801C5A1C__func_801EFF78
#define func_801DC9C4 func_801DC9C4__func_801EFF78
#define func_801E4F60 func_801E4F60__func_801EFF78
#define func_801E74DC_Sub func_801E74DC_Sub__func_801EFF78
#define func_801EFD14_Table func_801EFD14_Table__func_801EFF78
#define func_801EFE0C func_801EFE0C__func_801EFF78
#define func_801F152C func_801F152C__func_801EFF78
#define func_80379970 func_80379970__func_801EFF78
extern u8 D_801BBBF0[];
typedef struct func_801EFD14_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EFD14_Table;
extern func_801EFD14_Table D_80216B90;
extern func_801EFD14_Table D_80216BA8;
extern void func_800113D0(s32, void *);
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
extern void func_8013A28C(s32, func_801E74DC_Sub);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
void func_801E4F60(u16 arg0);
void func_801EFE0C(f32 arg0);


typedef struct func_801EFF78_StructInput { u16 unk0, unk2, unk4; s16 unk6, unk8; } func_801EFF78_StructInput;
typedef struct func_801EFF78_StructDC { u8 pad[0x68]; func_801EFF78_StructInput *unk68; } func_801EFF78_StructDC;
typedef struct func_801EFF78_StructPos { f32 unk0, x, y, z; } func_801EFF78_StructPos;
typedef struct func_801EFF78_StructE0 { u8 pad[0x2C]; func_801EFF78_StructPos *unk2C; } func_801EFF78_StructE0;
typedef struct func_801EFF78_StructGlobal {
 u8 pad0[0x19]; s8 unk19; u8 pad1[0xDC-0x1A];
 func_801EFF78_StructDC *unkDC; func_801EFF78_StructE0 *unkE0;
 u8 pad2[0x18E-0xE4]; u16 unk18E; u8 pad3[0xEF0-0x190];
 u16 unkEF0; u8 pad4[0xEFC-0xEF2]; s32 unkEFC;
} func_801EFF78_StructGlobal;
typedef struct func_801EFF78_StructAnim { s32 id; u16 frame, flags; f32 last; } func_801EFF78_StructAnim;
typedef struct func_801EFF78_StructData { u8 pad[0x1C]; func_801EFF78_StructAnim anim; } func_801EFF78_StructData;
typedef struct func_801EFF78_StructObj {
 u8 pad[0x2C]; s32 unk2C, unk30; u8 pad2[0x40-0x34]; f32 unk40, unk44, unk48;
 u8 pad3[0x5C-0x4C]; func_801EFF78_StructData *unk5C;
} func_801EFF78_StructObj;
typedef struct func_801EFF78_StructVec { f32 x,y,z; } func_801EFF78_StructVec;
extern s16 D_80216BF8;
extern u8 D_8021AFC9;
extern func_801EFD14_Table D_80216C14;
extern func_801EFD14_Table D_80216C20;
extern func_801EFD14_Table D_80216C2C;
extern func_801EFD14_Table D_80216C38;
extern func_801EFD14_Table D_80216C44;
extern f32 D_802187A0;
extern f32 D_802187A4;
extern void func_80379970(void);
extern void func_8013AE20(void *, s32, s32);
extern void func_80020718(s32);
extern s32 B_80011140(s32, void *, func_801EFD14_Table, s32);
extern s32 D_80011198(s32, void *);
extern void func_801F152C(s32);
extern void func_801DC9C4(func_801EFF78_StructVec, s32, f32);
#define G (*(func_801EFF78_StructGlobal *)&D_801BBBF0)
#undef B_80011140
#undef D_80011198
#undef D_801BBBF0
#undef D_80216B90
#undef D_80216BA8
#undef D_80216BF8
#undef D_80216C14
#undef D_80216C20
#undef D_80216C2C
#undef D_80216C38
#undef D_80216C44
#undef D_8021AFC9
#undef G
#undef func_800113D0
#undef func_80020718
#undef func_8013A28C
#undef func_8013AE20
#undef func_801C5A1C
#undef func_801DC9C4
#undef func_801E4F60
#undef func_801E74DC_Sub
#undef func_801EFD14_Table
#undef func_801EFE0C
#undef func_801F152C
#undef func_80379970
#define B_80011140 B_80011140__func_801EFF78_7c066be6
#define D_80011198 D_80011198__func_801EFF78_7c066be6
#define D_801BBBF0 D_801BBBF0__func_801EFF78_7c066be6
#define D_80216B90 D_80216B90__func_801EFF78_7c066be6
#define D_80216BA8 D_80216BA8__func_801EFF78_7c066be6
#define D_80216BF8 D_80216BF8__func_801EFF78_7c066be6
#define D_80216C14 D_80216C14__func_801EFF78_7c066be6
#define D_80216C20 D_80216C20__func_801EFF78_7c066be6
#define D_80216C2C D_80216C2C__func_801EFF78_7c066be6
#define D_80216C38 D_80216C38__func_801EFF78_7c066be6
#define D_80216C44 D_80216C44__func_801EFF78_7c066be6
#define D_8021AFC9 D_8021AFC9__func_801EFF78_7c066be6
#define func_800113D0 func_800113D0__func_801EFF78_7c066be6
#define func_80020718 func_80020718__func_801EFF78_7c066be6
#define func_8013A28C func_8013A28C__func_801EFF78_7c066be6
#define func_8013AE20 func_8013AE20__func_801EFF78_7c066be6
#define func_801C5A1C func_801C5A1C__func_801EFF78_7c066be6
#define func_801DC9C4 func_801DC9C4__func_801EFF78_7c066be6
#define func_801E4F60 func_801E4F60__func_801EFF78_7c066be6
#define func_801E74DC_Sub func_801E74DC_Sub__func_801EFF78_7c066be6
#define func_801EFD14_Table func_801EFD14_Table__func_801EFF78_7c066be6
#define func_801EFE0C func_801EFE0C__func_801EFF78_7c066be6
#define func_801EFF78_StructAnim func_801EFF78_StructAnim__func_801EFF78_7c066be6
#define func_801EFF78_StructDC func_801EFF78_StructDC__func_801EFF78_7c066be6
#define func_801EFF78_StructData func_801EFF78_StructData__func_801EFF78_7c066be6
#define func_801EFF78_StructE0 func_801EFF78_StructE0__func_801EFF78_7c066be6
#define func_801EFF78_StructGlobal func_801EFF78_StructGlobal__func_801EFF78_7c066be6
#define func_801EFF78_StructInput func_801EFF78_StructInput__func_801EFF78_7c066be6
#define func_801EFF78_StructObj func_801EFF78_StructObj__func_801EFF78_7c066be6
#define func_801EFF78_StructPos func_801EFF78_StructPos__func_801EFF78_7c066be6
#define func_801EFF78_StructVec func_801EFF78_StructVec__func_801EFF78_7c066be6
#define func_801F152C func_801F152C__func_801EFF78_7c066be6
#define func_80379970 func_80379970__func_801EFF78_7c066be6
extern u8 D_801BBBF0[];
typedef struct func_801EFD14_Table {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_801EFD14_Table;
extern func_801EFD14_Table D_80216B90;
extern func_801EFD14_Table D_80216BA8;
extern void func_800113D0(s32, void *);
typedef struct func_801E74DC_Sub {
    s32 unk0;
    s32 unk4;
    f32 unk8;
} func_801E74DC_Sub;
extern void func_8013A28C(s32, func_801E74DC_Sub);
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
void func_801E4F60(u16 arg0);
void func_801EFE0C(f32 arg0);


typedef struct func_801EFF78_StructInput { u16 unk0, unk2, unk4; s16 unk6, unk8; } func_801EFF78_StructInput;
typedef struct func_801EFF78_StructDC { u8 pad[0x68]; func_801EFF78_StructInput *unk68; } func_801EFF78_StructDC;
typedef struct func_801EFF78_StructPos { f32 unk0, x, y, z; } func_801EFF78_StructPos;
typedef struct func_801EFF78_StructE0 { u8 pad[0x2C]; func_801EFF78_StructPos *unk2C; } func_801EFF78_StructE0;
typedef struct func_801EFF78_StructGlobal {
 u8 pad0[0x19]; s8 unk19; u8 pad1[0xDC-0x1A];
 func_801EFF78_StructDC *unkDC; func_801EFF78_StructE0 *unkE0;
 u8 pad2[0x18E-0xE4]; u16 unk18E; u8 pad3[0xEF0-0x190];
 u16 unkEF0; u8 pad4[0xEFC-0xEF2]; s32 unkEFC;
} func_801EFF78_StructGlobal;
typedef struct func_801EFF78_StructAnim { s32 id; u16 frame, flags; f32 last; } func_801EFF78_StructAnim;
typedef struct func_801EFF78_StructData { u8 pad[0x1C]; func_801EFF78_StructAnim anim; } func_801EFF78_StructData;
typedef struct func_801EFF78_StructObj {
 u8 pad[0x2C]; s32 unk2C, unk30; u8 pad2[0x40-0x34]; f32 unk40, unk44, unk48;
 u8 pad3[0x5C-0x4C]; func_801EFF78_StructData *unk5C;
} func_801EFF78_StructObj;
typedef struct func_801EFF78_StructVec { f32 x,y,z; } func_801EFF78_StructVec;
extern s16 D_80216BF8;
extern u8 D_8021AFC9;
extern func_801EFD14_Table D_80216C14;
extern func_801EFD14_Table D_80216C20;
extern func_801EFD14_Table D_80216C2C;
extern func_801EFD14_Table D_80216C38;
extern func_801EFD14_Table D_80216C44;
extern void func_80379970();
extern void func_8013AE20(void *, s32, s32);
extern void func_80020718(s32);
extern s32 B_80011140(s32, void *, func_801EFD14_Table, s32);
extern s32 D_80011198(s32, void *);
extern s32 func_801F152C();
extern void func_801DC9C4(func_801EFF78_StructVec, s32, f32);
#define G (*(func_801EFF78_StructGlobal *)&D_801BBBF0)
void func_801EFF78(func_801EFF78_StructObj *arg0, s32 arg1) {
    func_801EFF78_StructData *data;
    func_801EFF78_StructAnim *anim;
    s32 pad;
    func_801EFF78_StructInput *input;
    f32 x, y;
    func_801EFF78_StructVec pos;
    func_801EFF78_StructPos *p;
    data=arg0->unk5C;
    anim=&data->anim;
    input=G.unkDC->unk68;
    y=G.unk19*(x=input->unk6/20.0, input->unk8/20.0);
    if (G.unkEF0 & 0x1000) {
        func_8013AE20(arg0,arg1,0);
        D_80011198(arg1,data);
        func_800058DC(arg0,func_80379970);
        return;
    }
    if (G.unk18E) {
        func_8013AE20(arg0,arg1,0);
        D_80011198(arg1,data);
        func_800058DC(arg0,func_801E5010);
        return;
    }
    if (G.unkEF0 & 0x2000) {
        D_80216BF8--;
        if (D_80216BF8 <= 0) {
            G.unkEF0 &= 0xDFFF;
            D_80216BF8=0;
        }
    } else {
        D_80216BF8=0;
    }
    p=G.unkE0->unk2C;
    if (!func_801C5A1C(p->x,p->y,p->z,p->x,p->y-5.0,p->z) && !(arg0->unk30 & 4)) {
        arg0->unk2C |= 0x60;
        anim->id=0x1680053;
        anim->frame=0;
        anim->flags=1;
        func_8013A28C(arg1, *(func_801E74DC_Sub *)anim);
        arg0->unk40=0.0f;
        arg0->unk48=0.0f;
        func_801E4F60((G.unkEFC | 4 | 8)&0xFFFF);
        G.unkEF0 |= 0x208;
        func_8013AE20(arg0,arg1,0);
        func_800058DC(arg0,func_801E5010);
        return;
    }
    G.unkEF0 |= 0x80;
    switch (anim->id) {
        case 0x1680048:
            if (!(input->unk2 & 0x10)) {
            anim->flags |= 2;
            func_8013A28C(arg1, *(func_801E74DC_Sub *)anim);
        }
        if (anim->frame==3) {
            if (anim->flags & 2) {
                func_8013AE20(arg0,arg1,0);
                func_80020718(0x6C1);
            } else {
                func_8013AE20(arg0,arg1,2);
            }
        }
        if (func_80010550(arg1,data)) {
            if (anim->flags & 2) {
                func_8013A28C(arg1, *(func_801E74DC_Sub *)&D_80216B90);
                func_80010550(arg1,data);
                func_80010550(arg1,data);
                func_800058DC(arg0,func_801E5010);
                return;
            }
            D_8021AFC9=0;
            if (y>3.0) {
                B_80011140(arg1, data, D_80216C38, 4);
                return;
            }
            if (y< -3.0) {
                B_80011140(arg1, data, D_80216C44, 4);
                return;
            }
            B_80011140(arg1, data, D_80216C2C, 4);
            return;
        }
        return;
        case 0x1680049:
            pad = D_8021AFC9;
            if (!pad) {
            if (anim->flags & 1) {
                if (!(input->unk2 & 0x10)) {
                    if (x*x+y*y > 10.0) {
                        func_8013AE20(arg0,arg1,0);
                        func_8013A28C(arg1, *(func_801E74DC_Sub *)&D_80216BA8);
                        func_80010550(arg1,data);
                        func_80010550(arg1,data);
                        func_800058DC(arg0,func_801E5010);
                        return;
                    }
                    func_800113D0(arg1,&anim->flags);
                    D_8021AFC9=4;
                    B_80011140(arg1, data, D_80216C20, 3);
                    return;
                }
                func_801EFE0C(x);
                if (y>3.0) {
                    func_800113D0(arg1,&anim->flags);
                    D_8021AFC9=2;
                    B_80011140(arg1, data, D_80216C38, 4);
                    return;
                }
                if (y< -3.0) {
                    func_800113D0(arg1,&anim->flags);
                    D_8021AFC9=3;
                    B_80011140(arg1, data, D_80216C44, 4);
                    return;
                }
            }
            if (input->unk4 & 0xA000) {
                func_800113D0(arg1,&anim->flags);
            }
            if (func_80010550(arg1,data)) {
                func_8013A28C(arg1, *(func_801E74DC_Sub *)&D_80216C2C);
                return;
            }
            if (anim->frame == 2) {
                func_801F152C(0);
                return;
            }
        } else {
            switch (pad) {
                case 2:
                    if (B_80011140(arg1, data, D_80216C38, 4)) {
                        D_8021AFC9=0;
                    }
                break;
                case 3:
                    if (B_80011140(arg1, data, D_80216C44, 4)) {
                        D_8021AFC9=0;
                    }
                break;
                case 4:
                    if (B_80011140(arg1, data, D_80216C20, 3)) {
                        D_8021AFC9=0;
                    }
                break;
            }
        }
        break;
        case 0x168004A:
            pad = D_8021AFC9;
            if (!pad) {
            if (anim->flags & 1) {
                if (!(input->unk2 & 0x10)) {
                    if (x*x+y*y > 10.0) {
                        func_8013AE20(arg0,arg1,0);
                        func_8013A28C(arg1, *(func_801E74DC_Sub *)&D_80216BA8);
                        func_80010550(arg1,data);
                        func_80010550(arg1,data);
                        func_800058DC(arg0,func_801E5010);
                        return;
                    }
                    func_800113D0(arg1,&anim->flags);
                    D_8021AFC9=4;
                    B_80011140(arg1, data, D_80216C20, 3);
                    return;
                }
                func_801EFE0C(x);
                if (!(y>3.0)) {
                    if (y< -3.0) {
                        func_800113D0(arg1,&anim->flags);
                        D_8021AFC9=3;
                        B_80011140(arg1, data, D_80216C44, 4);
                        return;
                    }
                    func_800113D0(arg1,&anim->flags);
                    D_8021AFC9=1;
                    B_80011140(arg1, data, D_80216C2C, 4);
                    return;
                }
            }
            if (input->unk4 & 0xA000) {
                func_800113D0(arg1,&anim->flags);
            }
            if (func_80010550(arg1,data)) {
                func_8013A28C(arg1, *(func_801E74DC_Sub *)&D_80216C38);
                return;
            }
            if (anim->frame == 2) {
                func_801F152C(1);
                return;
            }
        } else {
            switch (pad) {
                case 1:
                    if (B_80011140(arg1, data, D_80216C2C, 4)) {
                        D_8021AFC9=0;
                    }
                break;
                case 3:
                    if (B_80011140(arg1, data, D_80216C44, 4)) {
                        D_8021AFC9=0;
                    }
                break;
                case 4:
                    if (B_80011140(arg1, data, D_80216C20, 3)) {
                        D_8021AFC9=0;
                    }
                break;
            }
        }
        break;
        case 0x168004B:
            pad = D_8021AFC9;
            if (!pad) {
            if (anim->flags & 1) {
                if (!(input->unk2 & 0x10)) {
                    if (x*x+y*y > 10.0) {
                        func_8013AE20(arg0,arg1,0);
                        func_8013A28C(arg1, *(func_801E74DC_Sub *)&D_80216BA8);
                        func_80010550(arg1,data);
                        func_80010550(arg1,data);
                        func_800058DC(arg0,func_801E5010);
                        return;
                    }
                    func_800113D0(arg1,&anim->flags);
                    D_8021AFC9=4;
                    B_80011140(arg1, data, D_80216C20, 3);
                    return;
                }
                func_801EFE0C(x);
                if (y>3.0) {
                    func_800113D0(arg1,&anim->flags);
                    D_8021AFC9=2;
                    B_80011140(arg1, data, D_80216C38, 4);
                    return;
                }
                if (!(y< -3.0)) {
                    func_800113D0(arg1,&anim->flags);
                    D_8021AFC9=1;
                    B_80011140(arg1, data, D_80216C2C, 4);
                    return;
                }
            }
            if (input->unk4 & 0xA000) {
                func_800113D0(arg1,&anim->flags);
            }
            if (func_80010550(arg1,data)) {
                func_8013A28C(arg1, *(func_801E74DC_Sub *)&D_80216C44);
                return;
            }
            if (anim->frame == 2) {
                func_801F152C(2);
                return;
            }
        } else {
            switch (pad) {
                case 1:
                    if (B_80011140(arg1, data, D_80216C2C, 4)) {
                        D_8021AFC9=0;
                    }
                break;
                case 2:
                    if (B_80011140(arg1, data, D_80216C38, 4)) {
                        D_8021AFC9=0;
                    }
                break;
                case 4:
                    if (B_80011140(arg1, data, D_80216C20, 3)) {
                        D_8021AFC9=0;
                    }
                break;
            }
        }
        break;
        default: arg0->unk2C |= 0x60;
        arg0->unk2C &= ~0x80;
        arg0->unk48=0.0f;
        arg0->unk44=0.0f;
        arg0->unk40=0.0f;
        pos.x=G.unkE0->unk2C->x;
        pos.y=G.unkE0->unk2C->y;
        pos.z=G.unkE0->unk2C->z;
        if (anim->id==0x1680041) {
            func_8013A28C(arg1, *(func_801E74DC_Sub *)&D_80216C14);
            func_801DC9C4(pos,0x505,(1.2f));
            return;
        }
        if (B_80011140(arg1, data, D_80216C14, 5)) {
            func_801DC9C4(pos,0x505,(1.2f));
        }
        break;
    }
}
#undef G
#undef B_80011140
#undef D_80011198
#undef D_801BBBF0
#undef D_80216B90
#undef D_80216BA8
#undef D_80216BF8
#undef D_80216C14
#undef D_80216C20
#undef D_80216C2C
#undef D_80216C38
#undef D_80216C44
#undef D_8021AFC9
#undef func_800113D0
#undef func_80020718
#undef func_8013A28C
#undef func_8013AE20
#undef func_801C5A1C
#undef func_801DC9C4
#undef func_801E4F60
#undef func_801E74DC_Sub
#undef func_801EFD14_Table
#undef func_801EFE0C
#undef func_801EFF78_StructAnim
#undef func_801EFF78_StructDC
#undef func_801EFF78_StructData
#undef func_801EFF78_StructE0
#undef func_801EFF78_StructGlobal
#undef func_801EFF78_StructInput
#undef func_801EFF78_StructObj
#undef func_801EFF78_StructPos
#undef func_801EFF78_StructVec
#undef func_801F152C
#undef func_80379970
#define B_80011140 B_80011140__func_801EFF78
#define D_80011198 D_80011198__func_801EFF78
#define D_801BBBF0 D_801BBBF0__func_801EFF78
#define D_80216B90 D_80216B90__func_801EFF78
#define D_80216BA8 D_80216BA8__func_801EFF78
#define D_80216BF8 D_80216BF8__func_801EFF78
#define D_80216C14 D_80216C14__func_801EFF78
#define D_80216C20 D_80216C20__func_801EFF78
#define D_80216C2C D_80216C2C__func_801EFF78
#define D_80216C38 D_80216C38__func_801EFF78
#define D_80216C44 D_80216C44__func_801EFF78
#define D_8021AFC9 D_8021AFC9__func_801EFF78
#define G (*(func_801EFF78_StructGlobal *)&D_801BBBF0)
#define func_800113D0 func_800113D0__func_801EFF78
#define func_80020718 func_80020718__func_801EFF78
#define func_8013A28C func_8013A28C__func_801EFF78
#define func_8013AE20 func_8013AE20__func_801EFF78
#define func_801C5A1C func_801C5A1C__func_801EFF78
#define func_801DC9C4 func_801DC9C4__func_801EFF78
#define func_801E4F60 func_801E4F60__func_801EFF78
#define func_801E74DC_Sub func_801E74DC_Sub__func_801EFF78
#define func_801EFD14_Table func_801EFD14_Table__func_801EFF78
#define func_801EFE0C func_801EFE0C__func_801EFF78
#define func_801F152C func_801F152C__func_801EFF78
#define func_80379970 func_80379970__func_801EFF78
#undef G
#undef B_80011140
#undef D_80011198
#undef D_801BBBF0
#undef D_80216B90
#undef D_80216BA8
#undef D_80216BF8
#undef D_80216C14
#undef D_80216C20
#undef D_80216C2C
#undef D_80216C38
#undef D_80216C44
#undef D_802187A0
#undef D_802187A4
#undef D_8021AFC9
#undef func_800113D0
#undef func_80020718
#undef func_8013A28C
#undef func_8013AE20
#undef func_801C5A1C
#undef func_801DC9C4
#undef func_801E4F60
#undef func_801E74DC_Sub
#undef func_801EFD14_Table
#undef func_801EFE0C
#undef func_801F152C
#undef func_80379970


typedef struct func_801F10C8_Struct_Inner2 {
    u8 pad0[0x4];
    u16 unk4;
} func_801F10C8_Struct_Inner2;

typedef struct func_801F10C8_Struct_Inner {
    u8 pad0[0x68];
    func_801F10C8_Struct_Inner2 *unk68;
} func_801F10C8_Struct_Inner;

typedef struct func_801F10C8_Struct {
    u8 pad0[0xDC];
    func_801F10C8_Struct_Inner *unkDC;
    u8 pad1[0xEF0 - 0xE0];
    u16 unkEF0;
} func_801F10C8_Struct;

extern func_801F10C8_Struct D_801BBBF0;

s32 func_801F10C8(void) {
    s32 var_a0;
    func_801F10C8_Struct_Inner2 *p;
    s32 flags;

    p = D_801BBBF0.unkDC->unk68;
    flags = D_801BBBF0.unkEF0;
    if (flags & 0x20) {
        return 1;
    }
    var_a0 = (p->unk4 & 0x4000) != 0;
    if (var_a0 != 0) {
        var_a0 = (flags & 0x880) != 0;
    }
    return var_a0 & 0xFF;
}


u8 func_801F1114(void) {
    return ((u8 *)&D_801BCAE0)[6];
}


u8 func_801F1120(void) {
    return ((u8 *)&D_801BCAE0)[7];
}



s32 func_801F112C(void) {
    s32 var_v1;

    var_v1 = 0;
    if (D_801BCAE0 & 0x10) {
        var_v1 = 1;
    }
    if (D_801BCAE0 & 2) {
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    if (D_801BCAE0 & 4) {
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    if (D_801BCAE0 & 8) {
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    if (D_801BCAE0 & 0x40) {
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    if (D_801BCAE0 & 0x200) {
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    if (D_801BCAE0 & 0x400) {
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    if (D_801BCAE0 & 0x1000) {
        var_v1 = (var_v1 + 1) & 0xFF;
    }
    return var_v1;
}

#define D_801BBBF0 D_801BBBF0__func_801F11C0
#define D_802187A8 D_802187A8__func_801F11C0
extern u8 D_801BBBF0[];


typedef struct func_801F11C0_Inner {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801F11C0_Inner;
typedef struct func_801F11C0_Mid {
    u8 pad[0x2C];
    func_801F11C0_Inner *unk2C;
} func_801F11C0_Mid;
typedef struct func_801F11C0_Struct {
    u8 pad[0xE0];
    func_801F11C0_Mid *unkE0;
} func_801F11C0_Struct;

#define PP (((func_801F11C0_Struct *)&D_801BBBF0)->unkE0->unk2C)
extern f64 D_802187A8;

#undef D_801BBBF0
#undef PP
#define D_801BBBF0 D_801BBBF0__func_801F11C0_950d735d
#define func_801F11C0_Inner func_801F11C0_Inner__func_801F11C0_950d735d
#define func_801F11C0_Mid func_801F11C0_Mid__func_801F11C0_950d735d
#define func_801F11C0_Struct func_801F11C0_Struct__func_801F11C0_950d735d
extern u8 D_801BBBF0[];


typedef struct func_801F11C0_Inner {
    u8 pad0[4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
    u8 pad10[2];
    s16 unk12;
} func_801F11C0_Inner;
typedef struct func_801F11C0_Mid {
    u8 pad[0x2C];
    func_801F11C0_Inner *unk2C;
} func_801F11C0_Mid;
typedef struct func_801F11C0_Struct {
    u8 pad[0xE0];
    func_801F11C0_Mid *unkE0;
} func_801F11C0_Struct;

#define PP (((func_801F11C0_Struct *)&D_801BBBF0)->unkE0->unk2C)
s32 func_801F11C0(f32 arg0, f32 arg1, f32 arg2, f32 arg3, s16 arg4) {
    f32 sp34;
    func_801F11C0_Inner *p;
    f32 fv1;
    s32 d;
    s16 v;
    s16 e;

    sp34 = arg0 - func_8001EAD0(arg4) * arg3;
    fv1 = arg2 - func_8001EB64(arg4) * arg3;
    p = PP;
    p->unk4 = p->unk4 + (sp34 - p->unk4) * 0.25;
    p = PP;
    p->unkC = p->unkC + (fv1 - p->unkC) * 0.25;
    p = PP;
    sp34 = func_8002FC20((sp34 - p->unk4) * (sp34 - p->unk4) + (fv1 - p->unkC) * (fv1 - p->unkC));
    p = PP;
    v = arg4 - p->unk12;
    if (v & 0x1000) {
        d = ((v & 0x1FFF) - 0x2000);
    } else {
        d = v & 0x1FFF;
    }
    p->unk12 = p->unk12 + d * 0.25;
    p = PP;
    v = arg4 - p->unk12;
    if (v & 0x1000) {
        e = ((v & 0x1FFF) - 0x2000);
    } else {
        e = v & 0x1FFF;
    }
    if (e < 0) {
        d = -e;
    } else {
        d = e;
    }
    if (d < 0x51 && sp34 <= (0.05)) {
        p->unk12 = arg4;
        return 1;
    }
    return 0;
}
#undef PP
#undef D_801BBBF0
#undef func_801F11C0_Inner
#undef func_801F11C0_Mid
#undef func_801F11C0_Struct
#define D_801BBBF0 D_801BBBF0__func_801F11C0
#define PP (((func_801F11C0_Struct *)&D_801BBBF0)->unkE0->unk2C)
#undef PP
#undef D_801BBBF0
#undef D_802187A8

#define D_801BBBF0 D_801BBBF0__func_801F13B8
extern u8 D_801BBBF0[];


typedef struct func_801F13B8_Struct_B {
    u8 pad[0x4];
    f32 unk4;
    u8 pad8[0x4];
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_801F13B8_Struct_B;
typedef struct func_801F13B8_Struct_C {
    u8 pad[0x2C];
    func_801F13B8_Struct_B *unk2C;
} func_801F13B8_Struct_C;
typedef struct func_801F13B8_Struct_Global {
    u8 pad[0xE0];
    func_801F13B8_Struct_C *unkE0;
} func_801F13B8_Struct_Global;
#define OBJ (((func_801F13B8_Struct_Global *)&D_801BBBF0)->unkE0->unk2C)

void func_801F13B8(f32 arg0, f32 arg1, f32 arg2, f32 arg3, s16 arg4) {
    f32 x;
    f32 z;
    f32 sn;
    f32 cs;
    s32 r;
    s16 v;
    s16 h;

    sn = func_8001EAD0(arg4);
    x = arg0 - sn * arg3;
    cs = func_8001EB64(arg4);
    z = arg2 - cs * arg3;
    OBJ->unk4 = OBJ->unk4 + (x - OBJ->unk4) * 0.25;
    OBJ->unkC = OBJ->unkC + (z - OBJ->unkC) * 0.25;
    func_8002FC20((x - OBJ->unk4) * (x - OBJ->unk4) + (z - OBJ->unkC) * (z - OBJ->unkC));
    h = OBJ->unk12;
    v = arg4 - h;
    if (v & 0x1000) {
        r = (v & 0x1FFF) - 0x2000;
    } else {
        r = v & 0x1FFF;
    }
    OBJ->unk12 = h + r * 0.25;
    v = arg4 - OBJ->unk12;
    r = (v & 0x1000) ? (v & 0x1FFF) - 0x2000 : v & 0x1FFF;
}
#undef OBJ
#undef D_801BBBF0

#define D_801BBBF0 D_801BBBF0__func_801F152C
#define D_80216C50 D_80216C50__func_801F152C
#define D_80216C80 D_80216C80__func_801F152C
#define D_802187B0 D_802187B0__func_801F152C
#define func_801518D4 func_801518D4__func_801F152C
#define func_801F10C8_Struct func_801F10C8_Struct__func_801F152C
#define func_801F10C8_Struct_Inner func_801F10C8_Struct_Inner__func_801F152C
#define func_801F10C8_Struct_Inner2 func_801F10C8_Struct_Inner2__func_801F152C
#define func_801FD97C func_801FD97C__func_801F152C
#define G (*(func_801EFF78_StructGlobal *)&D_801BBBF0)
typedef struct func_801F10C8_Struct_Inner2 {
    u8 pad0[0x4];
    u16 unk4;
} func_801F10C8_Struct_Inner2;
typedef struct func_801F10C8_Struct_Inner {
    u8 pad0[0x68];
    func_801F10C8_Struct_Inner2 *unk68;
} func_801F10C8_Struct_Inner;
typedef struct func_801F10C8_Struct {
    u8 pad0[0xDC];
    func_801F10C8_Struct_Inner *unkDC;
    u8 pad1[0xEF0 - 0xE0];
    u16 unkEF0;
} func_801F10C8_Struct;
extern func_801F10C8_Struct D_801BBBF0;


typedef struct func_801F152C_Tab { f32 f[4][3]; } func_801F152C_Tab;
typedef struct func_801F152C_In { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad1[2]; s16 unk12; } func_801F152C_In;
typedef struct func_801F152C_Obj { u8 pad[0x22]; u8 unk22; u8 pad1[9]; func_801F152C_In *unk2C; } func_801F152C_Obj;
typedef struct func_801F152C_Struct { u8 pad[0xE0]; func_801F152C_Obj *unkE0; u8 pad1[0xF4 - 0xE4]; u8 unkF4; u8 pad2[2]; u8 unkF7; } func_801F152C_Struct;
extern func_801F152C_Tab D_80216C50;
extern func_801F152C_Tab D_80216C80;
extern f32 D_802187B0;
extern void func_801518D4(s32, s32, s32);
extern void func_801FD97C(f32, f32, f32, f32, f32, f32);
void func_801F152C(s32);

#define G ((func_801F152C_Struct *)&D_801BBBF0)

#undef D_801BBBF0
#undef D_80216C50
#undef D_80216C80
#undef G
#undef func_801518D4
#undef func_801F10C8_Struct
#undef func_801F10C8_Struct_Inner
#undef func_801F10C8_Struct_Inner2
#undef func_801FD97C
#define D_801BBBF0 D_801BBBF0__func_801F152C_956cc63a
#define D_80216C50 D_80216C50__func_801F152C_956cc63a
#define D_80216C80 D_80216C80__func_801F152C_956cc63a
#define func_801518D4 func_801518D4__func_801F152C_956cc63a
#define func_801F10C8_Struct func_801F10C8_Struct__func_801F152C_956cc63a
#define func_801F10C8_Struct_Inner func_801F10C8_Struct_Inner__func_801F152C_956cc63a
#define func_801F10C8_Struct_Inner2 func_801F10C8_Struct_Inner2__func_801F152C_956cc63a
#define func_801F152C_In func_801F152C_In__func_801F152C_956cc63a
#define func_801F152C_Obj func_801F152C_Obj__func_801F152C_956cc63a
#define func_801F152C_Struct func_801F152C_Struct__func_801F152C_956cc63a
#define func_801F152C_Tab func_801F152C_Tab__func_801F152C_956cc63a
#define func_801FD97C func_801FD97C__func_801F152C_956cc63a
#define G (*(func_801EFF78_StructGlobal *)&D_801BBBF0)
typedef struct func_801F10C8_Struct_Inner2 {
    u8 pad0[0x4];
    u16 unk4;
} func_801F10C8_Struct_Inner2;
typedef struct func_801F10C8_Struct_Inner {
    u8 pad0[0x68];
    func_801F10C8_Struct_Inner2 *unk68;
} func_801F10C8_Struct_Inner;
typedef struct func_801F10C8_Struct {
    u8 pad0[0xDC];
    func_801F10C8_Struct_Inner *unkDC;
    u8 pad1[0xEF0 - 0xE0];
    u16 unkEF0;
} func_801F10C8_Struct;
extern func_801F10C8_Struct D_801BBBF0;


typedef struct func_801F152C_Tab { f32 f[4][3]; } func_801F152C_Tab;
typedef struct func_801F152C_In { u8 pad0[4]; f32 unk4; f32 unk8; f32 unkC; u8 pad1[2]; s16 unk12; } func_801F152C_In;
typedef struct func_801F152C_Obj { u8 pad[0x22]; u8 unk22; u8 pad1[9]; func_801F152C_In *unk2C; } func_801F152C_Obj;
typedef struct func_801F152C_Struct { u8 pad[0xE0]; func_801F152C_Obj *unkE0; u8 pad1[0xF4 - 0xE4]; u8 unkF4; u8 pad2[2]; u8 unkF7; } func_801F152C_Struct;
extern func_801F152C_Tab D_80216C50;
extern func_801F152C_Tab D_80216C80;
extern void func_801518D4(s32, s32, s32);
extern void func_801FD97C(f32, f32, f32, f32, f32, f32);

#define G ((func_801F152C_Struct *)&D_801BBBF0)

void func_801F152C(arg0)
u8 arg0;
{
    f32 spCC, spC8, spC4, k, spBC, c, spB4, spB0, spAC, spA8, spA4;
    s16 spA2;
    func_801F152C_Tab t1;
    func_801F152C_Tab t0;

    t1 = D_80216C50;
    t0 = D_80216C80;
    if (G->unkF7 >= 4) {
        G->unkF7 = 0;
    }
    if (arg0 == 0) goto c0;
    if (arg0 == 1) goto c1;
    if (arg0 == 2) goto c2;
    k = spA4;
    goto end;
c0:
    k = (6.8f);
    spA2 = 0;
    if (1) goto end;
c1:
    k = 5.0f;
    spA2 = 0x2AA;
    if (1) goto end;
c2:
    k = 7.5f;
    spA2 = -0x1C7;
end:
    if (G->unkE0->unk22 != 0) {
        if (G->unkF4 != 0) {
            spB4 = func_8001EAD0(G->unkE0->unk2C->unk12 - 0xB0) * k;
            c = func_8001EB64(G->unkE0->unk2C->unk12 - 0xB0);
        } else {
            spB4 = func_8001EAD0(G->unkE0->unk2C->unk12 - 0x70) * k;
            c = func_8001EB64(G->unkE0->unk2C->unk12 - 0x70);
        }
    } else {
        spB4 = func_8001EAD0(G->unkE0->unk2C->unk12 + 0x18) * k;
        c = func_8001EB64(G->unkE0->unk2C->unk12 + 0x18);
    }
    if (G->unkE0->unk22 != 0) {
        spCC = G->unkE0->unk2C->unk4 + spB4;
        spC8 = t1.f[G->unkF7][arg0] + G->unkE0->unk2C->unk8;
        spC4 = G->unkE0->unk2C->unkC + c * k;
    } else {
        spCC = G->unkE0->unk2C->unk4 + spB4;
        spC8 = t0.f[G->unkF7][arg0] + G->unkE0->unk2C->unk8;
        spC4 = G->unkE0->unk2C->unkC + c * k;
    }
    if (G->unkE0->unk22 != 0) {
        spAC = func_8001EAD0(G->unkE0->unk2C->unk12) * k;
        spA8 = func_8001EB64(G->unkE0->unk2C->unk12) * k;
    } else {
        spAC = func_8001EAD0(G->unkE0->unk2C->unk12 + 0x40) * k;
        spA8 = func_8001EB64(G->unkE0->unk2C->unk12 + 0x40) * k;
    }
    spBC = func_8001EAD0(spA2) * k;
    func_801518D4(0, 7, 3);
    func_801FD97C(spCC, spC8, spC4, spAC, spBC, spA8);
}
#undef G
#undef D_801BBBF0
#undef D_80216C50
#undef D_80216C80
#undef func_801518D4
#undef func_801F10C8_Struct
#undef func_801F10C8_Struct_Inner
#undef func_801F10C8_Struct_Inner2
#undef func_801F152C_In
#undef func_801F152C_Obj
#undef func_801F152C_Struct
#undef func_801F152C_Tab
#undef func_801FD97C
#define D_801BBBF0 D_801BBBF0__func_801F152C
#define D_80216C50 D_80216C50__func_801F152C
#define D_80216C80 D_80216C80__func_801F152C
#define G ((func_801F152C_Struct *)&D_801BBBF0)
#define func_801518D4 func_801518D4__func_801F152C
#define func_801F10C8_Struct func_801F10C8_Struct__func_801F152C
#define func_801F10C8_Struct_Inner func_801F10C8_Struct_Inner__func_801F152C
#define func_801F10C8_Struct_Inner2 func_801F10C8_Struct_Inner2__func_801F152C
#define func_801FD97C func_801FD97C__func_801F152C
#undef G
#undef D_801BBBF0
#undef D_80216C50
#undef D_80216C80
#undef D_802187B0
#undef func_801518D4
#undef func_801F10C8_Struct
#undef func_801F10C8_Struct_Inner
#undef func_801F10C8_Struct_Inner2
#undef func_801FD97C

#define D_802187B8 D_802187B8__func_801F1888
#define func_801C5A1C func_801C5A1C__func_801F1888
#define func_80247294 func_80247294__func_801F1888

typedef struct func_801F1888_Vec { u8 pad[4]; f32 x; f32 y; f32 z; } func_801F1888_Vec;
typedef struct func_801F1888_Obj { u8 pad[0x40]; f32 unk40; f32 unk44; f32 unk48; } func_801F1888_Obj;
typedef struct func_801F1888_Buf { u8 pad[0xC]; s16 unkC; s16 unkE; f32 unk10; } func_801F1888_Buf;
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
extern void func_80247294(s32, void *);
extern f64 D_802187B8;

#define V (*(func_801F1888_Vec **)(*(u8 **)((u8 *)&D_801BBBF0 + 0xE0) + 0x2C))
s32 func_801F1888(void) {
    f64 k;
    func_801F1888_Buf sp3C;
    func_801F1888_Obj *o;

    o = (func_801F1888_Obj *)D_801BBBF0.unkDC;
    if (func_801C5A1C(V->x, V->y + 2.0, V->z, V->x, V->y - 2.0, V->z) != 0 && ((u8 *)&D_801BBBF0)[0x35A] == 0x25) {
        func_80247294(*(s32 *)((u8 *)&D_801BBBF0 + 0x38C), &sp3C);
        o->unk40 = -func_8001EAD0(sp3C.unkC) * sp3C.unk10;
        o->unk44 = 0.0f;
        o->unk48 = -func_8001EB64(sp3C.unkC) * sp3C.unk10;
        return 1;
    }
    k = (0.95);
    o->unk40 = o->unk40 * k;
    o->unk48 = o->unk48 * k;
    return 0;
}
#undef V
#undef D_802187B8
#undef func_801C5A1C
#undef func_80247294


/* Original readonly objects; named loads retain their original addresses. */




























































/* hh-owned-pool func_801E7C30 80218560 80218578 */
/* hh-owned-pool func_801E8BD0 80218578 80218598 */
/* hh-owned-pool func_801E95D4 80218598 802185B0 */
/* hh-owned-pool func_801EACA4 802185B0 802185C8 */
/* hh-owned-pool func_801EDF0C 802186B8 802186D0 */
/* hh-owned-pool func_801EEC58 802186D0 80218700 */
/* hh-owned-pool func_801EF440 80218700 80218708 */
/* hh-owned-pool func_801EF6F8 80218708 802187A0 */
/* hh-owned-pool func_801EFF78 802187A0 802187A8 */
/* hh-owned-pool func_801F11C0 802187A8 802187B0 */
/* hh-owned-pool func_801F152C 802187B0 802187B4 */
/* hh-owned-pool func_801F1888 802187B8 802187C0 */




static const unsigned char rodata_801E4F60_80218120[] = {
    0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F, 0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72,
    0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61, 0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61,
    0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x2F, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72,
    0x2F, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x5F, 0x6D, 0x6F, 0x76, 0x65, 0x2E, 0x63, 0x00, 0x00,
    0xB6, 0xF5, 0xC3, 0xE6, 0x0A, 0x00, 0x00, 0x00, 0x32, 0x2E, 0x30, 0x6D, 0xA4, 0xCE, 0xC3, 0xCA,
    0xBA, 0xB9, 0xA4, 0xCF, 0xA3, 0xC2, 0xA4, 0xC7, 0xC5, 0xD0, 0xA4, 0xC3, 0xA4, 0xC6, 0xA4, 0xCD,
    0xA1, 0xA3, 0x0A, 0x00, 0x6C, 0x6A, 0x75, 0x6D, 0x70, 0x3D, 0x3D, 0x3D, 0x3D, 0x3D, 0x3D, 0x68,
    0x69, 0x74, 0x20, 0x6B, 0x69, 0x6E, 0x64, 0x20, 0x3D, 0x20, 0x25, 0x64, 0x20, 0x0A, 0x00, 0x00,
    0xA5, 0xD6, 0xA5, 0xED, 0xA5, 0xC3, 0xA5, 0xAF, 0xA4, 0xAC, 0xA4, 0xC4, 0xA4, 0xC3, 0xA4, 0xAB,
    0xA4, 0xA8, 0xA4, 0xC6, 0xA4, 0xEB, 0xA4, 0xE8, 0x0A, 0x00, 0x00, 0x00, 0x32, 0x2E, 0x30, 0x6D,
    0xA4, 0xCE, 0xC3, 0xCA, 0xBA, 0xB9, 0xA4, 0xCF, 0xA3, 0xC2, 0xA4, 0xC7, 0xC5, 0xD0, 0xA4, 0xC3,
    0xA4, 0xC6, 0xA4, 0xCD, 0xA1, 0xA3, 0x0A, 0x00, 0x76, 0x6A, 0x75, 0x6D, 0x70, 0x3D, 0x3D, 0x3D,
    0x3D, 0x3D, 0x3D, 0x68, 0x69, 0x74, 0x20, 0x6B, 0x69, 0x6E, 0x64, 0x20, 0x3D, 0x20, 0x25, 0x64,
    0x20, 0x0A, 0x00, 0x00, 0xA5, 0xD6, 0xA5, 0xED, 0xA5, 0xC3, 0xA5, 0xAF, 0xA4, 0xAC, 0xA4, 0xC4,
    0xA4, 0xC3, 0xA4, 0xAB, 0xA4, 0xA8, 0xA4, 0xC6, 0xA4, 0xEB, 0xA4, 0xE8, 0x0A, 0x00, 0x00, 0x00,
    0xA5, 0xD6, 0xA5, 0xED, 0xA5, 0xC3, 0xA5, 0xAF, 0xA4, 0xAC, 0xA4, 0xC4, 0xA4, 0xC3, 0xA4, 0xAB,
    0xA4, 0xA8, 0xA4, 0xC6, 0xA4, 0xEB, 0xA4, 0xE8, 0x0A, 0x00, 0x00, 0x00, 0xA5, 0xD6, 0xA5, 0xED,
    0xA5, 0xC3, 0xA5, 0xAF, 0xA4, 0xAC, 0xA4, 0xC4, 0xA4, 0xC3, 0xA4, 0xAB, 0xA4, 0xA8, 0xA4, 0xC6,
    0xA4, 0xEB, 0xA4, 0xE8, 0x0A, 0x00, 0x00, 0x00, 0x2F, 0x68, 0x64, 0x69, 0x73, 0x6B, 0x31, 0x2F,
    0x75, 0x2F, 0x6E, 0x75, 0x36, 0x34, 0x2F, 0x72, 0x7A, 0x30, 0x31, 0x31, 0x5F, 0x75, 0x73, 0x61,
    0x2F, 0x6D, 0x61, 0x69, 0x6E, 0x2F, 0x67, 0x61, 0x6D, 0x65, 0x2F, 0x73, 0x6F, 0x75, 0x72, 0x63,
    0x65, 0x2F, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x2F, 0x70, 0x6C, 0x61, 0x79, 0x65, 0x72, 0x5F,
    0x6D, 0x6F, 0x76, 0x65, 0x2E, 0x63, 0x00, 0x00, 0xC0, 0xB5, 0xBE, 0xEF, 0xC6, 0xB0, 0xBA, 0xEE,
    0x0A, 0x00, 0x00, 0x00, 0xA5, 0xE4, 0xA5, 0xD0, 0xA5, 0xAD, 0xA5, 0xC1, 0xA1, 0xAA, 0xA1, 0xAA,
    0xA1, 0xAA, 0x0A, 0x00, 0xC0, 0xB5, 0xBE, 0xEF, 0xC6, 0xB0, 0xBA, 0xEE, 0x0A, 0x00, 0x00, 0x00,
    0xA5, 0xE4, 0xA5, 0xD0, 0xA5, 0xAD, 0xA5, 0xC1, 0xA1, 0xAA, 0xA1, 0xAA, 0xA1, 0xAA, 0x0A, 0x00,
    0xB7, 0xE3, 0xA5, 0xE4, 0xA5, 0xD0, 0xA5, 0xAD, 0xA5, 0xC1, 0xA1, 0xAA, 0xA1, 0xAA, 0xA1, 0xAA,
    0x0A, 0x00, 0x00, 0x00, 0xA5, 0xE4, 0xA5, 0xD0, 0xA5, 0xAD, 0xA5, 0xC1, 0xA1, 0xAA, 0xA1, 0xAA,
    0xA1, 0xAA, 0x0A, 0x00, 0x32, 0x2E, 0x30, 0x6D, 0xA4, 0xCE, 0xC3, 0xCA, 0xBA, 0xB9, 0xA4, 0xCF,
    0xA3, 0xC2, 0xA4, 0xC7, 0xC5, 0xD0, 0xA4, 0xC3, 0xA4, 0xC6, 0xA4, 0xCD, 0xA1, 0xA3, 0x0A, 0x00,
    0x72, 0x61, 0x6B, 0x6B, 0x61, 0x3D, 0x3D, 0x3D, 0x3D, 0x3D, 0x3D, 0x68, 0x69, 0x74, 0x20, 0x6B,
    0x69, 0x6E, 0x64, 0x20, 0x3D, 0x20, 0x25, 0x64, 0x20, 0x0A, 0x00, 0x00, 0xA5, 0xD6, 0xA5, 0xED,
    0xA5, 0xC3, 0xA5, 0xAF, 0xA4, 0xAC, 0xA4, 0xC4, 0xA4, 0xC3, 0xA4, 0xAB, 0xA4, 0xA8, 0xA4, 0xC6,
    0xA4, 0xEB, 0xA4, 0xE8, 0x0A, 0x00, 0x00, 0x00, 0xA5, 0xB9, 0xA5, 0xC6, 0xA1, 0xBC, 0xA5, 0xB8,
    0xC0, 0xDA, 0xA4, 0xEA, 0xC2, 0xD8, 0xA4, 0xA8, 0x20, 0x20, 0x25, 0x78, 0x0A, 0x00, 0x00, 0x00,
    0x3D, 0x3E, 0x00, 0x00, 0x64, 0x65, 0x6D, 0x6F, 0x20, 0xBE, 0xF5, 0xC2, 0xD6, 0xB0, 0xDC, 0xB9,
    0xD4, 0xB4, 0xB0, 0xCE, 0xBB, 0x0A, 0x00, 0x00, 0xA4, 0xDB, 0xA4, 0xD5, 0xA4, 0xAF, 0xCA, 0xE4,
    0xB4, 0xB0, 0xC3, 0xE6, 0x41, 0x20, 0x00, 0x00, 0xA4, 0xDB, 0xA4, 0xD5, 0xA4, 0xAF, 0xCA, 0xE4,
    0xB4, 0xB0, 0xC3, 0xE6, 0x42, 0x20, 0x00, 0x00, 0x73, 0x74, 0x61, 0x6E, 0x64, 0x20, 0xBE, 0xF5,
    0xC2, 0xD6, 0xB0, 0xDC, 0xB9, 0xD4, 0xB4, 0xB0, 0xCE, 0xBB, 0x0A, 0x00, 0xB6, 0xF5, 0xC3, 0xE6,
    0x0A, 0x00, 0x00, 0x00, 0x80, 0x1E, 0x5C, 0x20, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40,
    0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5A, 0x74,
    0x80, 0x1E, 0x5A, 0x74, 0x80, 0x1E, 0x5A, 0x74, 0x80, 0x1E, 0x5A, 0x74, 0x80, 0x1E, 0x5A, 0x74,
    0x80, 0x1E, 0x58, 0x60, 0x80, 0x1E, 0x58, 0x60, 0x80, 0x1E, 0x58, 0x60, 0x80, 0x1E, 0x58, 0x80,
    0x80, 0x1E, 0x58, 0x60, 0x80, 0x1E, 0x58, 0x80, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40,
    0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40,
    0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5C, 0xC4,
    0x80, 0x1E, 0x5C, 0xF0, 0x80, 0x1E, 0x57, 0xD8, 0x80, 0x1E, 0x57, 0xD8, 0x80, 0x1E, 0x57, 0xD8,
    0x80, 0x1E, 0x57, 0xD8, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40,
    0x80, 0x1E, 0x5D, 0x18, 0x80, 0x1E, 0x57, 0xA4, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40,
    0x80, 0x1E, 0x57, 0xA4, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x57, 0xCC,
    0x80, 0x1E, 0x58, 0x54, 0x80, 0x1E, 0x58, 0x54, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40,
    0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40,
    0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40,
    0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40,
    0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40,
    0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40,
    0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x5D, 0x40, 0x80, 0x1E, 0x58, 0x2C, 0x80, 0x1E, 0x58, 0x2C,
    0x80, 0x1E, 0x58, 0x2C, 0x80, 0x1E, 0x58, 0x00, 0x80, 0x1E, 0x58, 0x00, 0x80, 0x1E, 0x5D, 0x18,
    0x80, 0x1E, 0x5D, 0x18, 0x80, 0x1E, 0x5D, 0x18,
};
/* hh-placed-function func_801E6BCC */
/* hh-placed-function func_801EBCC4 */
/* hh-placed-function func_801ED2D4 */
/* hh-placed-function func_801ED72C */
/* hh-rodata-layout [1696,[[0,1192,16],[16,0,1192],[1208,1208,488]]] */
