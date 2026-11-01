#include "common.h"
extern u8 D_801BBBF0[];
extern u16 D_801BBBF4;
extern u8 D_801E16A0[];
extern u16 func_80011590();
extern s32 func_801C5A1C(f32, f32, f32, f32, f32, f32);
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
