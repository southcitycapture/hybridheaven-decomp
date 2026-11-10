#define func_801DC9C4 func_801DC9C4__merge_frozen
#include "common.h"

extern f32 D_801E3F2C;
extern s32 D_801BBCCC;
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
extern s32 func_801DC250();                                /* extern */
extern s32 func_801DC700(s32, void *);
extern s32 func_801DCC50(u16, u8, u16 *);                  /* extern */
extern u16 func_80011590();
extern u8 D_801E15E0[];
extern u8 D_801E16A0[];
extern u8 D_801E177C[];
extern u8 D_801E1FD0[];
extern void func_801DCCB0(s32, s32, s32);
extern void func_801DE464(s32, s32, s32);
extern void func_801DFCAC(s32, u8 *, u8 *);


typedef struct func_801DC250_Struct {
    u32 key;
    u8 b[4];
} func_801DC250_Struct;
typedef struct func_801DC250_Arg {
    u32 key;
    u16 unk4;
    u8 pad[2];
    f32 unk8;
} func_801DC250_Arg;

extern func_801DC250_Struct D_801E17C0[];

s32 func_801DC250(arg0)
    func_801DC250_Arg *arg0;
{
    func_801DC250_Struct *p = D_801E17C0;
    u32 k = arg0->key;
    u16 a = arg0->unk4;
    f32 f = arg0->unk8;

    if (p->key != 0) {
        do {
            if (k == p->key) {
                if (a == func_80011590((u32)(p->b[0] * f) & 0xFFFF)) goto ret;
                if (a == func_80011590((u32)(p->b[1] * f) & 0xFFFF)) goto ret;
                if (a == func_80011590((u32)(p->b[2] * f) & 0xFFFF)) {
ret:
                    return p->b[3];
                }
                return 0;
            }
            p++;
        } while (p->key != 0);
    }
    return 0;
}

#define func_80011590 func_80011590__func_801DC510

typedef struct func_801DC510_StructA { s32 id; u16 k; u8 pad6[2]; f32 scale; } func_801DC510_StructA;
typedef struct func_801DC510_StructB { s32 id; u16 a; u16 b; u16 c; u8 pad[2]; } func_801DC510_StructB;
extern u16 func_80011590(u32, void *);

u16 func_801DC510(func_801DC510_StructA *arg0, func_801DC510_StructB *arg1) {
    s32 id = arg0->id;
    u16 k = arg0->k;
    f32 s = arg0->scale;

    while (arg1->id != 0) {
        if (id == arg1->id) {
            if (k == func_80011590((u16)(u32)(arg1->a * s), arg1) ||
                k == func_80011590((u16)(u32)(arg1->b * s), arg1)) {
                return arg1->c;
            }
            return 0;
        }
        arg1++;
    }
    return 0;
}
#undef func_80011590



typedef struct func_801DC700_Struct0 {
    s32 unk0;
    u16 unk4;
    u8 pad6[2];
    f32 unk8;
} func_801DC700_Struct0;

typedef struct func_801DC700_Struct1 {
    s32 unk0;
    u8 unk4;
    u8 unk5;
    u8 unk6;
    u8 pad7;
} func_801DC700_Struct1;

#define arg0 ((func_801DC700_Struct0 *)a0)
#define E ((func_801DC700_Struct1 *)a1)

s32 func_801DC700(s32 a0, void *a1) {
    s32 key = arg0->unk0;
    u16 id = arg0->unk4;
    f32 scale = arg0->unk8;

    if (E->unk0 != 0) {
        do {
            if (key == E->unk0) {
                if (id == func_80011590((u16)(u32)(E->unk4 * scale))) {
                    return 1;
                }
                if (id == func_80011590((u16)(u32)(E->unk5 * scale))) {
                    return 2;
                }
                if (id == func_80011590((u16)(u32)(E->unk6 * scale))) {
                    return 3;
                }
                return 0;
            }
            a1 = E + 1;
        } while (E->unk0 != 0);
    }
    return 0;
}

#undef arg0
#undef E



#undef func_801DC9C4
#define D_801BBCD8 D_801BBCD8__func_801DC9C4
#define func_8001EAD0 func_8001EAD0__func_801DC9C4
#define func_8001EF38 func_8001EF38__func_801DC9C4
#define func_800207D0 func_800207D0__func_801DC9C4
#define func_8002FC20 func_8002FC20__func_801DC9C4
#define func_801DE6F4_StructVec func_801DE6F4_StructVec__func_801DC9C4
extern f32 func_8001EAD0(s16);
typedef struct func_801DE6F4_StructVec {
    f32 x, y, z;
} func_801DE6F4_StructVec;

typedef struct func_801DC9C4_StructPos {
    u8 pad[0x30];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
} func_801DC9C4_StructPos;
typedef struct func_801DC9C4_StructMid {
    u8 pad[0x2C];
    func_801DC9C4_StructPos *unk2C;
} func_801DC9C4_StructMid;
extern func_801DC9C4_StructMid *D_801BBCD8;
extern s32 func_8001EF38(f32, f32);
extern void func_800207D0(u16, s32, s32);
extern f32 func_8002FC20(f32);

void func_801DC9C4(func_801DE6F4_StructVec pos, u16 arg3, f32 arg4) {
    s16 t;
    s16 firstAngle;
    f32 d;
    f32 m;
    s16 u;
    f32 dx, dy, dz;
    u32 v;
    func_801DC9C4_StructPos *p;

    if (arg3 != 0) {
        p = D_801BBCD8->unk2C;
        dx = pos.x - p->unk30;
        dy = pos.y - p->unk34;
        dz = pos.z - p->unk38;
        d = dx * dx + dy * dy + dz * dz;
        d = func_8002FC20(d);
        if (d < 21.0) {
            v = 0xC8;
        } else {
            v = (s32)(39800.0 / (d + 178.0)) & 0xFF;
        }
        if ((f64)arg4 < 0.0) {
            arg4 = 0.0f;
        }
        m = (f32)v * arg4;
        if (255.0 < (f64)m) {
            m = 255.0f;
        }
        p = D_801BBCD8->unk2C;
        firstAngle = func_8001EF38(pos.z - p->unk38, pos.x - p->unk30);
        p = D_801BBCD8->unk2C;
        do {} while (0);
        u = firstAngle - func_8001EF38(p->unk44 - p->unk38, p->unk3C - p->unk30);
        if (u & 0x1000) {
            t = (u & 0x1FFF) - 0x2000;
        } else {
            t = u & 0x1FFF;
        }
        func_800207D0(arg3, (u32)((f64)func_8001EAD0(t) * 63.0 + 64.0) & 0xFF, (s32)m & 0xFF);
    }
}
#undef D_801BBCD8
#undef func_8001EAD0
#undef func_8001EF38
#undef func_800207D0
#undef func_8002FC20
#undef func_801DE6F4_StructVec
#define func_801DC9C4 func_801DC9C4__merge_frozen





s32 func_801DCC50(arg0, arg1, arg2)
u16 arg0;
s32 arg1;
u16 *arg2;
{
    switch (arg0 + (arg1 != 0 ? 0 : 0) + (arg2 != NULL ? 0 : 0)) {
    case 0x674:
    case 0x675:
        return 5;
    case 0x672:
    case 0x673:
        return 4;
    case 0x67C:
    case 0x67D:
        return 3;
    case 0x67A:
    case 0x67B:
    case 0x67E:
    case 0x67F:
        return 2;
    case 0x670:
    case 0x671:
    case 0x678:
    case 0x679:
        return 1;
    case 0x661:
    default:
        return 0;
    }
}



#define D_801BBBF0 D_801BBBF0__func_801DCCB0
#define D_801DC250 D_801DC250__func_801DCCB0
#define D_801DCC50 D_801DCC50__func_801DCCB0
#define D_801E3DCC D_801E3DCC__func_801DCCB0
#define func_801DE464_Struct func_801DE464_Struct__func_801DCCB0
typedef struct func_801DE464_Struct {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[0x35B - 6];
    u8 unk35B;
} func_801DE464_Struct;
extern func_801DE464_Struct D_801BBBF0;

typedef struct func_801DCCB0_Struct {
    u16 v;
} func_801DCCB0_Struct;

typedef struct func_801DCCB0_StructG {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[0x35B - 6];
    u8 unk35B;
} func_801DCCB0_StructG;

#define G801DCCB0 ((func_801DCCB0_StructG *)&D_801BBBF0)

extern f32 D_801E3DCC;
extern s32 D_801DC250(s32);
extern s32 D_801DCC50(u16, s32, u16 *, f32 *);

void func_801DCCB0(s32 a0, s32 a1, s32 arg2) {
    func_801DCCB0_Struct tmp;
    s32 v;
    s32 r;
    f32 *a2;
    s32 *pp;

    pp = &arg2;
    v = D_801DC250(a0);
    a2 = (f32 *)arg2;
    tmp.v = *(u16 *)(D_801E15E0 + (D_801E16A0[G801DCCB0->unk4] * 16 + G801DCCB0->unk35B * 2));
    if (v == 1) goto c1;
    if (v == 2) goto c2;
    if (v != 3) goto def;
    goto c3;
c1:
    *(u16 *)a1 = tmp.v;
    v = *(s32 *)a0;
    if (v == 0x1900220 || v == 0x19001E6) {
        *a2 = D_801E3DCC;
    }
    goto end;
c2:
    *a2 = 0.75f;
c3:
    r = D_801DCC50(tmp.v, a1, (u16 *)&D_801BBBF0, a2);
    if (r >= 4) {
        *(u16 *)a1 = tmp.v;
    } else {
        *(u16 *)a1 = *(u16 *)(D_801E177C + r * 2);
    }
    goto end;
def:
    *(u16 *)a1 = 0;
end:;
}
#undef G801DCCB0
#undef D_801BBBF0
#undef D_801DC250
#undef D_801DCC50
#undef D_801E3DCC
#undef func_801DE464_Struct




/* hh-block asm/nonmatchings/file009/801DC250/_mrg_keep_tail_5aa6dbe69c972ce9.s {"functions":["func_801DCDBC"],"rodata":[],"rodata_bytes":[2149465548,5855324,352]} */
#pragma GLOBAL_ASM("asm/nonmatchings/file009/801DC250/_mrg_keep_tail_5aa6dbe69c972ce9.s")

#define func_801DC250 func_801DC250__func_801DE464

s32 func_801DC250();                                /* extern */

typedef struct func_801DE464_Struct {
    u8 pad0[4];
    u16 unk4;
    u8 pad1[0x35B - 6];
    u8 unk35B;
} func_801DE464_Struct;

extern func_801DE464_Struct D_801BBBF0;

void func_801DE464(s32 arg0, s32 arg1, s32 arg2) {
    u8 temp_a1;
    u8 var_a1;
    u16 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    func_801DE464_Struct *var_v0;

    temp_v0 = func_801DC250();
    temp_a1 = temp_v0;
    if (temp_v0 == 1 || temp_v0 == 2 || temp_v0 == 3) {
        var_v0 = &D_801BBBF0;
        temp_a0 = *(u16 *)(D_801E15E0 + ((D_801E16A0[var_v0->unk4] * 0x10) + (var_v0->unk35B * 2)));
        var_a1 = temp_a1;
        temp_v0_2 = func_801DCC50(temp_a0, temp_a1, (u16 *)arg1);
        if (temp_a1 == 2) {
            *(f32 *)arg2 = 0.75f;
        }
        if (var_a1 == 3) {
            temp_a1--;
        }
        if (temp_v0_2 >= 4) {
            *(u16 *)arg1 = temp_a0;
        } else {
            *(u16 *)arg1 = *(u16 *)(D_801E177C + ((temp_a1 * 0xC) + (temp_v0_2 * 2)));
        }
        if (*(s32 *)arg0 == 0x01900220 || *(s32 *)arg0 == 0x019001E6) {
            *(f32 *)arg2 = 0.300000012f;
        }
        return;
    }
    *(u16 *)arg1 = 0;
}
#undef func_801DC250

#define func_801DE464 func_801DE464__func_801DE590

extern void func_801DE464(s32, s32, s32);

void func_801DE590(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg0 == D_801BBCCC) {
        func_801DCCB0(arg1, arg2, arg3);
        return;
    }
    func_801DE464(arg1, arg2, arg3);
}
#undef func_801DE464



#define D_801DC250 D_801DC250__func_801DE5E4
#define D_801E179E D_801E179E__func_801DE5E4
#define D_801E3F30 D_801E3F30__func_801DE5E4

extern u8 D_801E179E[];
extern f32 D_801E3F30;
extern s32 D_801DC250();

void func_801DE5E4(s32 arg0, s32 *arg1, u16 *arg2, f32 *arg3, u8 arg4) {
    s32 temp_v0;
    s32 sw;
    u8 var_a0;
    s32 var_a1;

    var_a0 = temp_v0 = D_801DC250(arg1);
    var_a1 = 1;
    if (arg0 == D_801BBCCC) {
        var_a1 = 0;
    }
    if (temp_v0 != 0) {
        sw = temp_v0;
        if (temp_v0 == 2) {
            *arg3 = 0.75f;
            sw = sw | 0;
        }
        if (3 == sw * 1) {
            var_a0 = temp_v0 - 1;
        }
        arg4 = arg4 % 3;
        *arg2 = *(u16 *)(D_801E179E + (var_a1 << 4) + (arg4 << 2) + (var_a0 << 1));
        if ((*arg1 == 0x01900220) || (*arg1 == 0x019001E6)) {
            *arg3 = (0.30000001192092896f);
        }
    } else {
        *arg2 = 0;
    }
}
#undef D_801DC250
#undef D_801E179E
#undef D_801E3F30

#define func_801DC700 func_801DC700__func_801DE6F4

typedef struct func_801DE6F4_StructVec {
    f32 x, y, z;
} func_801DE6F4_StructVec;
typedef struct func_801DE6F4_StructTable {
    u16 values[2][2];
} func_801DE6F4_StructTable;

extern s32 func_801DC700(s32, void *);
extern void func_801DC9C4(func_801DE6F4_StructVec, u16, f32);
extern func_801DE6F4_StructTable D_801E2008;

u16 func_801DE6F4(s32 arg0, func_801DE6F4_StructVec arg1, f32 *arg4, u8 arg5) {
    func_801DE6F4_StructTable table = D_801E2008;
    u8 result;

    result = func_801DC700(arg0, D_801E1FD0);
    if (result == 0) {
        return 0;
    }
    arg5 &= 1;
    if (result == 3) {
        func_801DC9C4(arg1, table.values[arg5][0], *arg4);
    }
    *arg4 = (f64)*arg4 * 1.5;
    return table.values[arg5][result - 1];
}
#undef func_801DC700




#define D_801BBBF0 D_801BBBF0__func_801DE7EC
#define D_801BBBF4 D_801BBBF4__func_801DE7EC
#define D_801BBCD0 D_801BBCD0__func_801DE7EC
#define D_801BBF44 D_801BBF44__func_801DE7EC
#define D_801E15E8 D_801E15E8__func_801DE7EC
#define D_801E1F58 D_801E1F58__func_801DE7EC
#define D_801E1F7C D_801E1F7C__func_801DE7EC
#define func_8001EAD0 func_8001EAD0__func_801DE7EC
#define func_8001EB64 func_8001EB64__func_801DE7EC
#define func_801084C4 func_801084C4__func_801DE7EC
#define func_80126944 func_80126944__func_801DE7EC
#define func_801DC510 func_801DC510__func_801DE7EC
#define func_801DC510_StructA func_801DC510_StructA__func_801DE7EC
#define func_801DC510_StructB func_801DC510_StructB__func_801DE7EC
#define func_801DC9C4 func_801DC9C4__func_801DE7EC
#define func_801DCDBC func_801DCDBC__func_801DE7EC
#define func_801DE590 func_801DE590__func_801DE7EC
#define func_801DE5E4 func_801DE5E4__func_801DE7EC
#define func_801DE6F4 func_801DE6F4__func_801DE7EC
#define func_801DE6F4_StructVec func_801DE6F4_StructVec__func_801DE7EC
#define func_801DFE28 func_801DFE28__func_801DE7EC
extern u8 D_801BBBF0[];
extern u16 D_801BBBF4;
typedef struct func_801DC510_StructA { s32 id; u16 k; u8 pad6[2]; f32 scale; } func_801DC510_StructA;
typedef struct func_801DC510_StructB { s32 id; u16 a; u16 b; u16 c; u8 pad[2]; } func_801DC510_StructB;
u16 func_801DC510(func_801DC510_StructA *arg0, func_801DC510_StructB *arg1);
typedef struct func_801DE6F4_StructVec {
    f32 x, y, z;
} func_801DE6F4_StructVec;
extern void func_801DC9C4(func_801DE6F4_StructVec, u16, f32);
void func_801DE590(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_801DE5E4(s32 arg0, s32 *arg1, u16 *arg2, f32 *arg3, u8 arg4);
u16 func_801DE6F4(s32 arg0, func_801DE6F4_StructVec arg1, f32 *arg4, u8 arg5);
u8 func_801DFE28(s32 arg0);


typedef struct func_801DE7EC_StructPos {
    u8 pad0[4]; f32 x, y, z; u8 pad10[2]; s16 angle;
    u8 pad14[0x1C]; f32 px, py, pz;
} func_801DE7EC_StructPos;
typedef struct func_801DE7EC_StructObj {
    u8 pad0[0x2C]; func_801DE7EC_StructPos *pos;
} func_801DE7EC_StructObj;
typedef struct func_801DE7EC_StructActor {
    u8 pad0[0x24]; func_801DE7EC_StructObj *obj;
    u8 pad28[0x44]; s32 key; u16 frame;
} func_801DE7EC_StructActor;
typedef struct func_801DE7EC_StructArg {
    u8 pad0[0xE]; u16 id; u8 pad10[0xC];
    func_801DC510_StructA anim;
    u8 pad28[0x4C]; u8 mode;
} func_801DE7EC_StructArg;
typedef struct func_801DE7EC_StructG {
    u8 pad0[4]; u16 unk4; u8 pad6[0x26]; u16 unk2C; u8 pad2E[0xBA];
    func_801DE7EC_StructObj *unkE8;
} func_801DE7EC_StructG;
extern func_801DE7EC_StructObj *D_801BBCD0;
extern u8 D_801BBF44[];
extern u16 D_801E15E8[][8];
extern func_801DC510_StructB D_801E1F7C[];
extern func_801DC510_StructB D_801E1F58[];
extern s32 func_801084C4(f32, f32, f32, f32, f32, f32);
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern s32 func_80126944(void);
extern void func_801DCDBC(func_801DC510_StructA *, u16 *, f32 *, func_801DE6F4_StructVec);

#define G ((func_801DE7EC_StructG *)D_801BBBF0)
#define FRAME(n) func_80011590((u32)(anim->scale * (n)) & 0xFFFF)
#define NORMAL() func_801DE590((s32)actor, (s32)anim, (s32)&sound, (s32)&volume)
#define SPECIAL(n) func_801DE5E4((s32)actor, (s32 *)anim, &sound, &volume, (n))

void func_801DE7EC(func_801DE7EC_StructActor *actor, func_801DE7EC_StructArg *arg)
{
    s32 pad0;
    f32 scale;
    s32 pad1;
    u16 sound = 0;
    f32 volume;
    func_801DE6F4_StructVec pos;
    f32 d, c, b, a;
    func_801DC510_StructA *anim = &arg->anim;

    if (G->unk4 >= 220) return;
    pos.x = actor->obj->pos->x;
    pos.y = actor->obj->pos->y;
    pos.z = actor->obj->pos->z;
    if (actor->key == anim->id && actor->frame == anim->k) return;
    actor->key = anim->id;
    actor->frame = anim->k;
    if (anim->id != 0x19100CF && anim->id != 0x1910016 && anim->id != 0x1910008 &&
        (arg->mode == 3 || arg->mode == 4) && arg->id != 0x32 && arg->id != 0x33 &&
        arg->id != 0x34 && (arg->id & 0x7FFF) != 0xF8 && arg->id != 0x149 && G->unk2C != 10) {
        if (func_801084C4(G->unkE8->pos->px, G->unkE8->pos->py,
                         G->unkE8->pos->pz, pos.x, pos.y + 1.0, pos.z)) return;
    }
    scale = anim->scale;
    volume = 1.0f;
    if (anim->id == 0x168000F) {
        if (anim->k == func_80011590((u32)(12.0f * scale) & 0xFFFF) ||
            anim->k == func_80011590((u32)(32.0f * scale) & 0xFFFF)) sound = 0x68E;
        func_801DC9C4(pos, sound, volume);
        return;
    }
    if (anim->id == 0x168000D) {
        if (anim->k == 0) sound = 0x1FD;
        func_801DC9C4(pos, sound, volume);
        return;
    }
    if (!func_801C5A1C(pos.x, pos.y + 20.0, pos.z, pos.x, pos.y - 10.0, pos.z)) {
        a = func_8001EAD0(D_801BBCD0->pos->angle);
        b = func_8001EB64(D_801BBCD0->pos->angle);
        c = func_8001EAD0(D_801BBCD0->pos->angle);
        d = func_8001EB64(D_801BBCD0->pos->angle);
        if (!func_801C5A1C(a * 5.0 + pos.x, pos.y + 20.0, b * 5.0 + pos.z,
                          c * 5.0 + pos.x, pos.y - 10.0, d * 5.0 + pos.z) &&
            anim->id != 0x168001F) return;
    }
    switch (arg->id) {
    case 0x29:
    case 0x2C:
    case 0x2D:
    case 0x11B:
    case 0x11C:
        if (func_80126944() == 1) NORMAL();
        else if (func_80126944() == 0) func_801DCDBC(anim, &sound, &volume, pos);
        break;
    case 0x50:
        if (func_80126944() == 1) SPECIAL(2);
        else {
            func_801DCDBC(anim, &sound, &volume, pos);
            if (sound && sound != 0x672 && sound != 0x674 && sound != 0x673 &&
                sound != 0x675 && sound != 0x68C && sound != 0x68D) sound = 0x654;
        }
        break;
    case 0xF8:
        if (D_801BBBF4 < 20) {
            sound = func_801DC510(anim, D_801E1F7C);
            volume *= 1.5;
        } else sound = func_801DE6F4((s32)anim, pos, &volume, 0);
        break;
    case 0x80F8:
        sound = func_801DE6F4((s32)anim, pos, &volume, 1);
        break;
    case 0x51:
        if (func_80126944() == 1) SPECIAL(2);
        else {
            sound = func_801DC510(anim, D_801E1F58);
            if (sound == 0) SPECIAL(2);
        }
        break;
    case 0x2E:
        if (anim->id == 0x19100CF && (anim->k == FRAME(15.0f) || anim->k == FRAME(20.0f) ||
                                      anim->k == FRAME(24.0f) || anim->k == FRAME(29.0f))) {
            sound = D_801E15E8[D_801E16A0[D_801BBBF4]][D_801BBF44[7]];
            volume = 1.1f;
        } else if (func_80126944() == 1) NORMAL();
        break;
    case 0x2B:
    case 0x31:
    case 0x148:
        if (func_80126944() == 1) NORMAL();
        break;
    case 0x58:
        if (anim->id == 0x1910016 && (anim->k == FRAME(6.0f) || anim->k == FRAME(10.0f) ||
                                      anim->k == FRAME(16.0f) || anim->k == FRAME(21.0f) ||
                                      anim->k == FRAME(36.0f))) sound = 0x662;
        else NORMAL();
        break;
    case 0x32:
        if (anim->id == 0x3200015 && (anim->k == FRAME(3.0f) || anim->k == FRAME(6.0f) ||
                                      anim->k == FRAME(11.0f) || anim->k == FRAME(15.0f))) sound = 0x684;
        else {
    case 0x30:
    case 0x57:
    case 0x59:
    case 0x4057:
            NORMAL();
        }
        break;
    case 0xF4:
        SPECIAL(0);
        break;
    case 0xF5:
    case 0xF6:
        SPECIAL(1);
        break;
    case 0x33:
    case 0x34:
        NORMAL();
        if (sound != 0) {
            if (func_801DFE28((s32)actor)) sound = 0x6BE;
            else sound = 0x6BC;
        }
        break;
    case 0x2A:
    case 0x2F:
    case 0x35:
    case 0x36:
    case 0xF7:
    case 0x141:
    case 0x142:
        break;
    default:
        SPECIAL(2);
        break;
    }
    if (sound) func_801DC9C4(pos, sound, volume);
}
#undef G
#undef FRAME
#undef NORMAL
#undef SPECIAL
#undef D_801BBBF0
#undef D_801BBBF4
#undef D_801BBCD0
#undef D_801BBF44
#undef D_801E15E8
#undef D_801E1F58
#undef D_801E1F7C
#undef func_8001EAD0
#undef func_8001EB64
#undef func_801084C4
#undef func_80126944
#undef func_801DC510
#undef func_801DC510_StructA
#undef func_801DC510_StructB
#undef func_801DC9C4
#define func_801DC9C4 func_801DC9C4__merge_frozen
#undef func_801DCDBC
#undef func_801DE590
#undef func_801DE5E4
#undef func_801DE6F4
#undef func_801DE6F4_StructVec
#undef func_801DFE28


typedef struct func_801DFAA4_StructB {
    u8 pad0[0x2C];
    f32 *unk2C;
} func_801DFAA4_StructB;
typedef struct func_801DFAA4_StructA {
    u8 pad0[0x24];
    func_801DFAA4_StructB *unk24;
} func_801DFAA4_StructA;
typedef struct func_801DFAA4_StructG {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[0xE0 - 6];
    func_801DFAA4_StructB *unkE0;
    u8 padE4[0x35B - 0xE4];
    u8 unk35B;
} func_801DFAA4_StructG;
#define G801DFAA4 ((func_801DFAA4_StructG *)&D_801BBBF0)

s32 func_801DFAA4(func_801DFAA4_StructA *arg0, u8 arg1) {
    f32 *p;
    u16 t;
    u16 id;
    func_801DE6F4_StructVec v;

    v.x = arg0->unk24->unk2C[1];
    v.y = arg0->unk24->unk2C[2];
    v.z = arg0->unk24->unk2C[3];
    if (arg1 == 2) {
        func_801DC9C4(v, 0x30F, 1.0f);
        return 0;
    }
    p = G801DFAA4->unkE0->unk2C;
    if (func_801C5A1C(p[1], p[2], p[3], p[1], p[2] - 5.0, p[3]) != 0) {
        id = *(u16 *)&D_801E15E0[D_801E16A0[G801DFAA4->unk4] * 16 + G801DFAA4->unk35B * 2];
        t = id;
        if (id == 0x677 || id == 0x679 || id == 0x676 || id == 0x678 || id == 0x66E || id == 0x670 || id == 0x66F || id == 0x671 || id == 0x661) {
            if (arg1 == 0) id = 0x308; else id = 0x30C;
        } else if (t == 0x672 || t == 0x674 || t == 0x673 || t == 0x675) {
            if (arg1 == 0) id = 0x30A; else id = 0x30E;
        } else {
            if (arg1 == 0) id = 0x309; else id = 0x30D;
        }
        func_801DC9C4(v, id, 1.0f);
        return 1;
    }
    return 0;
}



void func_801DFCAC(s32 arg0, u8 *arg1, u8 *arg2) {
    f32 *p;
    u16 v;

    p = *(f32 **)(*(s32 *)(arg0 + 0x24) + 0x2C);
    *arg1 = 0;
    *arg2 = 0;
    if (func_801C5A1C(p[1], p[2] + 2.0, p[3], p[1], p[2] - 5.0, p[3]) != 0) {
        v = *(u16 *)(D_801E15E0 + D_801E16A0[D_801BBBF0.unk4] * 16 + D_801BBBF0.unk35B * 2);
        if (v == 0x677 || v == 0x67B || v == 0x676 || v == 0x67A || v == 0x66E || v == 0x672 || v == 0x66F || v == 0x673 || v == 0x661 || v == 0x67F) {
            *arg1 = 1;
        }
        if (v == 0x67B || v == 0x67A || v == 0x67D || v == 0x67C || v == 0x67F || v == 0x67E) {
            *arg2 = 1;
        }
    }
}

#define func_801DFCAC func_801DFCAC__func_801DFE00

extern void func_801DFCAC(s32, u8 *, u8 *);

u8 func_801DFE00(s32 arg0) {
    u8 sp1F;
    u8 sp1E;

    func_801DFCAC(arg0, &sp1F, &sp1E);
    return sp1F;
}
#undef func_801DFCAC

#define func_801DFCAC func_801DFCAC__func_801DFE28

extern void func_801DFCAC(s32, u8 *, u8 *);

u8 func_801DFE28(s32 arg0) {
    u8 sp1F;
    u8 sp1E;

    func_801DFCAC(arg0, &sp1F, &sp1E);
    return sp1E;
}
#undef func_801DFCAC



#define D_801BBBF4 D_801BBBF4__func_801DFE50
#define D_801E2010 D_801E2010__func_801DFE50
#define D_801E202C D_801E202C__func_801DFE50
#define D_801E2048 D_801E2048__func_801DFE50
#define D_801E3FAC D_801E3FAC__func_801DFE50
#define func_80020DAC func_80020DAC__func_801DFE50

typedef struct func_801DFE50_StructInfo {
    u8 pad[0xE];
    u16 id;
} func_801DFE50_StructInfo;
typedef struct func_801DFE50_StructArg {
    u8 pad[0x24];
    func_801DFAA4_StructB *unk24;
    u8 pad28[0x34];
    func_801DFE50_StructInfo *unk5C;
} func_801DFE50_StructArg;
extern s32 func_80020DAC(s32);
extern u16 D_801BBBF4;
extern u16 D_801E2010[][2];
extern u16 D_801E202C[][2];
extern u16 D_801E2048[][2];
extern f32 D_801E3FAC;

void func_801DFE50(func_801DFE50_StructArg *arg0, u8 arg1) {
    func_801DFE50_StructInfo *info;
    u32 pad40;
    f32 scale;
    func_801DE6F4_StructVec pos;
    u8 variant;
    u16 id;
    u32 pad24;

    info = arg0->unk5C;
    scale = (1.2000000476837158f);
    variant = 0;
    pos.x = arg0->unk24->unk2C[1];
    pos.y = arg0->unk24->unk2C[2];
    pos.z = arg0->unk24->unk2C[3];
    if (arg1 != 6) {
        variant = func_801DFE00((s32)arg0);
    } else {
        scale = 1.5f;
        if (D_801BBBF4 == 0x29) {
            variant = 1;
        } else if (D_801BBBF4 == 0x38) {
            if (func_80020DAC(0x238)) {
                variant = 1;
            }
        }
    }
    if (info->id == 0x29) goto a;
    if (info->id == 0x2C) goto a;
    if (info->id == 0x50) goto b;
    if (info->id == 0x11B) goto c;
    if (info->id != 0x11C) goto c;
    goto c;
a:
    func_801DC9C4(pos, D_801E202C[arg1][variant], scale);
    return;
b:
    func_801DC9C4(pos, D_801E2048[arg1][variant], scale);
    return;
c:
    func_801DC9C4(pos, D_801E2010[arg1][variant], scale);
}
#undef D_801BBBF4
#undef D_801E2010
#undef D_801E202C
#undef D_801E2048
#undef D_801E3FAC
#undef func_80020DAC

/* Readonly constants retained after the last ASM donor became C. */






#undef func_801DC9C4







static const unsigned char rodata_801DC250[] = {
    0x74, 0x79, 0x70, 0x65, 0x20, 0x3D, 0x20, 0x25, 0x64, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
/* hh-owned-pool func_801DC9C4 801E3D30 801E3D50 */
/* hh-owned-pool func_801DCC50 801E3D50 801E3DCC */
/* hh-owned-pool func_801DE464 801E3F2C 801E3F30 */
/* hh-owned-pool func_801DE5E4 801E3F30 801E3F34 */
/* hh-owned-pool func_801DE7EC 801E3F34 801E3FAC */
/* hh-owned-pool func_801DFE50 801E3FAC 801E3FB0 */
