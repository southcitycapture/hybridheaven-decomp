#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80379230/D_8038B9A0.s")



struct func_80379230_Struct {
    s16 unk0;
    u8 pad2[6];
    s16 unk8;
};

s32 func_80379230(struct func_80379230_Struct *arg0, u8 arg1) {
    s16 v;

    switch (arg1) {
    case 1:
        if (arg0->unk0 >= 0x191) {
            return 1;
        }
        break;
    case 2:
        v = arg0->unk0;
        if ((v < 0x12C) || (v >= 0x4B1)) {
            return 1;
        }
        break;
    case 3:
        if (arg0->unk0 < 0x2BC) {
            return 1;
        }
        break;
    case 4:
        if (arg0->unk0 < 0x4B0) {
            return 1;
        }
        break;
    case 5:
        if (arg0->unk8 >= 0x12D) {
            return 1;
        }
        break;
    case 6:
        if (arg0->unk8 >= 0x1F5) {
            return 1;
        }
        break;
    case 7:
        if (arg0->unk8 < 0x12C) {
            return 1;
        }
        break;
    case 8:
        if (arg0->unk8 < 0x1F4) {
            return 1;
        }
        break;
    case 9:
        v = arg0->unk0;
        if ((v < 0xC8) || (v >= 0x259)) {
            return 1;
        }
        break;
    case 10:
        v = arg0->unk0;
        if ((v < 0x190) || (v >= 0x4B1)) {
            return 1;
        }
        break;
    case 11:
        if (arg0->unk0 < 0x320) {
            return 1;
        }
        break;
    case 12:
        if (arg0->unk0 < 0x5DC) {
            return 1;
        }
        break;
    case 15:
        if (arg0->unk0 < 0x12C) {
            return 1;
        }
        break;
    case 16:
    case 17:
    case 18:
        return 1;
    case 20:
        if (arg0->unk0 >= 0x1F5) {
            return 1;
        }
        break;
    case 22:
        if (arg0->unk0 >= 0x2BD) {
            return 1;
        }
        break;
    case 24:
        if (arg0->unk0 >= 0x385) {
            return 1;
        }
        break;
    case 21:
    case 23:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
        return 1;
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    default:
        break;
    }
    return 0;
}


extern u8 D_8017E004[];

void func_80379410(u8 *arg0, u8 arg1) {
    s32 i;
    s32 j;
    u8 *p;

    i = 0;
    if (!arg1) {
        for (j = 0; j < 0x2D; j = (j + 1) & 0xFF) {
            p = arg0 + j;
            D_8017E004[j * 8 + 4] = p[0x338] & 0x7F;
        }
        return;
    }
    for (i = 0; i < 0x2D; i = (i + 1) & 0xFF) {
        p = arg0 + i;
        p[0x338] = D_8017E004[i * 8 + 4];
    }
}

extern u8 D_801BBBF0[];

u16 func_80379490(u8 *arg0, u16 arg1, u8 arg2, f32 arg3) {
    f32 k = 1.0f;
    if ((D_801BBBF0[0x1033] & 8) && (arg0 == D_801BBBF0 + 0x7E8)) {
        return 0;
    }
    if ((arg0 == D_801BBBF0 + 0x7E8) && (*(u16 *)(D_801BBBF0 + 0x2C) != 0xA)) {
        if (D_801BBBF0[0x1D] == 1) {
            k = 1.20000005f;
        } else if (D_801BBBF0[0x1D] == 2) {
            k = 1.5f;
        }
    }
    return (u32)((((f32)(arg1 * arg2) * k) / 100.0f) * arg3);
}


struct func_803795D8_Struct {
    u8 pad[0x30];
    u8 unk30;
    u8 pad31[0x396 - 0x31];
    u8 unk396;
};

void func_803795D8(struct func_803795D8_Struct *arg0, u8 arg1, u8 arg2, f32 arg3) {
    arg0->unk396 = (f32) (s32) (arg1 * 0x50 * arg2 / 100) * arg3;
    if (arg0->unk396) {
        arg0->unk30 = (arg0->unk30 & 0xFFE1) | 8;
    }
}


void func_803796C8(void) {
}


void func_803796D0(u8 *arg0) {
    *(s16 *)(arg0 + 0xA0) = 0;
    arg0[0xA6] = arg0[0xA6] & 0xFFDF;
}


struct func_803796E4_Struct {
    u8 pad[0x9E];
    s16 unk9E;
};

void func_803796E4(struct func_803796E4_Struct *arg0) {
    arg0->unk9E = 0;
}


u16 func_803796EC(s16 *arg0, u8 arg1, u16 arg2) {
    f32 t = ((f32) *arg0 * (f32) arg1) / 100.0f;
    if (t < (f32) arg2) {
        return arg2;
    }
    return (u32) t;
}


u16 func_803797F8(s16 *arg0, u8 arg1, u16 arg2) {
    f32 t = ((f32) arg0[4] * (f32) arg1) / 100.0f;
    if (t < (f32) arg2) {
        return arg2;
    }
    return (u32) t;
}

#define func_80379490 func_80379490__func_80379904
#define func_803795D8 func_803795D8__func_80379904
#define func_803795D8_Struct func_803795D8_Struct__func_80379904
#define func_803796C8 func_803796C8__func_80379904
#define func_803796D0 func_803796D0__func_80379904
#define func_803796E4 func_803796E4__func_80379904
#define func_803796E4_Struct func_803796E4_Struct__func_80379904
#define func_803796EC func_803796EC__func_80379904
#define func_803797F8 func_803797F8__func_80379904
u16 func_80379490(u8 *arg0, u16 arg1, u8 arg2, f32 arg3);
struct func_803795D8_Struct {
    u8 pad[0x30];
    u8 unk30;
    u8 pad31[0x396 - 0x31];
    u8 unk396;
};
void func_803795D8(struct func_803795D8_Struct *arg0, u8 arg1, u8 arg2, f32 arg3);
void func_803796C8(void);
void func_803796D0(u8 *arg0);
struct func_803796E4_Struct {
    u8 pad[0x9E];
    s16 unk9E;
};
void func_803796E4(struct func_803796E4_Struct *arg0);
u16 func_803796EC(s16 *arg0, u8 arg1, u16 arg2);
u16 func_803797F8(s16 *arg0, u8 arg1, u16 arg2);


typedef struct func_80379904_Struct {
    s16 hp, hpNow;
    u8 pad4[4];
    s16 mp, mpNow;
    u8 padC[0x34];
    s16 deltaHP, deltaMP;
    u8 pad44[6];
    s16 mpTotal;
    u8 pad4C[0x44];
    u8 active;
    u8 pad91[3];
    u16 amount;
    u8 side, kind, delay;
    u8 pad99;
    u16 damage;
    u8 pad9C[2];
    s16 timer, timer2;
    u8 statA2, statA3, statA4, statA5, flags;
    u8 padA7[0x231];
    u8 state, item;
} func_80379904_Struct;

extern u8 D_801BC3D8[];
extern u8 D_801BC03C[];
extern u8 D_802176F0[];
extern u8 D_803896DC[];

extern void *func_80005670(void *, void *);
extern void func_8023011C(u16, void *);

u16 func_80379904(void *arg0, func_80379904_Struct *a)
{
    func_80379904_Struct *out;
    func_80379904_Struct *enemy;
    f32 factor;
    u16 hp;
    u16 mp;
extern void func_803796C8();

    out = NULL;
    if ((D_801BBBF0 == (u8 *)a - 0x44C)) enemy = (func_80379904_Struct *)D_801BC3D8;
    else enemy = (func_80379904_Struct *)D_801BC03C;
    factor = (enemy->state == 13) ? 0.6 : 1.0;

    switch (a->item) {
    case 1:
        hp = func_803796EC((s16 *)a, 25, 100);
        a->deltaHP = -hp;
        out = func_80005670(arg0, D_802176F0);
        if (a->hp < a->hpNow + hp) {
            out->amount = a->hp - a->hpNow;
        } else {
            out->amount = hp;
        }
        if (D_801BBBF0 == (u8 *)a - 0x44C) {
            out->side = 0;
        } else {
            out->side = 1;
        }
        out->kind = 1;
        break;
    case 2:
        hp = func_803796EC((s16 *)a, 50, 500);
        a->deltaHP = -hp;
        out = func_80005670(arg0, D_802176F0);
        if (a->hp < a->hpNow + hp) {
            out->amount = a->hp - a->hpNow;
        } else {
            out->amount = hp;
        }
        if (D_801BBBF0 == (u8 *)a - 0x44C) {
            out->side = 0;
        } else {
            out->side = 1;
        }
        out->kind = 1;
        break;
    case 3:
        hp = func_803796EC((s16 *)a, 75, 1000);
        a->deltaHP = -hp;
        out = func_80005670(arg0, D_802176F0);
        if (a->hp < a->hpNow + hp) {
            out->amount = a->hp - a->hpNow;
        } else {
            out->amount = hp;
        }
        if (D_801BBBF0 == (u8 *)a - 0x44C) {
            out->side = 0;
        } else {
            out->side = 1;
        }
        out->kind = 1;
        break;
    case 4:
        a->deltaHP = a->hpNow - a->hp;
        out = func_80005670(arg0, D_802176F0);
        out->amount = -a->deltaHP;
        if (D_801BBBF0 == (u8 *)a - 0x44C) {
            out->side = 0;
        } else {
            out->side = 1;
        }
        out->kind = 1;
        break;
    case 5:
        mp = func_803797F8((s16 *)a, 25, 100);
        a->deltaMP = -mp;
        if (a->mpTotal + mp >= a->mp) {
            a->mpTotal = a->mp;
        } else {
            a->mpTotal = a->mpTotal + mp;
        }
        out = func_80005670(arg0, D_802176F0);
        if (a->mp < a->mpNow + mp) {
            out->amount = a->mp - a->mpNow;
        } else {
            out->amount = mp;
        }
        if (D_801BBBF0 == (u8 *)a - 0x44C) {
            out->side = 0;
        } else {
            out->side = 1;
        }
        out->kind = 2;
        break;
    case 6:
        mp = func_803797F8((s16 *)a, 50, 200);
        a->deltaMP = -mp;
        if (a->mpTotal + mp >= a->mp) {
            a->mpTotal = a->mp;
        } else {
            a->mpTotal = a->mpTotal + mp;
        }
        out = func_80005670(arg0, D_802176F0);
        if (a->mp < a->mpNow + mp) {
            out->amount = a->mp - a->mpNow;
        } else {
            out->amount = mp;
        }
        if (D_801BBBF0 == (u8 *)a - 0x44C) {
            out->side = 0;
        } else {
            out->side = 1;
        }
        out->kind = 2;
        break;
    case 7:
        mp = func_803797F8((s16 *)a, 75, 300);
        a->deltaMP = -mp;
        if (a->mpTotal + mp >= a->mp) {
            a->mpTotal = a->mp;
        } else {
            a->mpTotal = a->mpTotal + mp;
        }
        out = func_80005670(arg0, D_802176F0);
        if (a->mp < a->mpNow + mp) {
            out->amount = a->mp - a->mpNow;
        } else {
            out->amount = mp;
        }
        if (D_801BBBF0 == (u8 *)a - 0x44C) {
            out->side = 0;
        } else {
            out->side = 1;
        }
        out->kind = 2;
        break;
    case 8:
        a->mpTotal = a->mp;
        a->deltaMP = a->mpNow - a->mp;
        out = func_80005670(arg0, D_802176F0);
        out->amount = a->mpNow - a->mp;
        if (D_801BBBF0 == (u8 *)a - 0x44C) {
            out->side = 0;
        } else {
            out->side = 1;
        }
        out->kind = 2;
        break;
    case 9:
        hp = func_803796EC((s16 *)a, 25, 100);
        mp = func_803797F8((s16 *)a, 25, 100);
        a->deltaHP = -hp;
        a->deltaMP = -mp;
        out = func_80005670(arg0, D_802176F0);
        if (a->hp < a->hpNow + hp) {
            out->amount = a->hp - a->hpNow;
        } else {
            out->amount = hp;
        }
        if (D_801BBBF0 == (u8 *)a - 0x44C) {
            out->side = 0;
        } else {
            out->side = 1;
        }
        out->kind = 1;
        if (a->mpTotal + mp >= a->mp) {
            a->mpTotal = a->mp;
        } else {
            a->mpTotal = a->mpTotal + mp;
        }
        out = func_80005670(arg0, D_802176F0);
        if (a->mp < a->mpNow + mp) {
            out->amount = a->mp - a->mpNow;
        } else {
            out->amount = mp;
        }
        if (D_801BBBF0 == (u8 *)a - 0x44C) {
            out->side = 0;
        } else {
            out->side = 1;
        }
        out->kind = 2;
        out->delay = 20;
        break;
    case 10:
        hp = func_803796EC((s16 *)a, 50, 500);
        mp = func_803797F8((s16 *)a, 50, 200);
        a->deltaHP = -hp;
        a->deltaMP = -mp;
        out = func_80005670(arg0, D_802176F0);
        if (a->hp < a->hpNow + hp) {
            out->amount = a->hp - a->hpNow;
        } else {
            out->amount = hp;
        }
        if (D_801BBBF0 == (u8 *)a - 0x44C) {
            out->side = 0;
        } else {
            out->side = 1;
        }
        out->kind = 1;
        if (a->mpTotal + mp >= a->mp) {
            a->mpTotal = a->mp;
        } else {
            a->mpTotal = a->mpTotal + mp;
        }
        out = func_80005670(arg0, D_802176F0);
        if (a->mp < a->mpNow + 200) {
            out->amount = a->mp - a->mpNow;
        } else {
            out->amount = mp;
        }
        if (D_801BBBF0 == (u8 *)a - 0x44C) {
            out->side = 0;
        } else {
            out->side = 1;
        }
        out->kind = 2;
        out->delay = 20;
        break;
    case 11:
        hp = func_803796EC((s16 *)a, 75, 1000);
        mp = func_803797F8((s16 *)a, 75, 300);
        a->deltaHP = -hp;
        a->deltaMP = -mp;
        out = func_80005670(arg0, D_802176F0);
        if (a->hp < a->hpNow + hp) {
            out->amount = a->hp - a->hpNow;
        } else {
            out->amount = hp;
        }
        if (D_801BBBF0 == (u8 *)a - 0x44C) {
            out->side = 0;
        } else {
            out->side = 1;
        }
        out->kind = 1;
        if (a->mpTotal + mp >= a->mp) {
            a->mpTotal = a->mp;
        } else {
            a->mpTotal = a->mpTotal + mp;
        }
        out = func_80005670(arg0, D_802176F0);
        if (a->mp < a->mpNow + mp) {
            out->amount = a->mp - a->mpNow;
        } else {
            out->amount = mp;
        }
        if (D_801BBBF0 == (u8 *)a - 0x44C) {
            out->side = 0;
        } else {
            out->side = 1;
        }
        out->kind = 2;
        out->delay = 20;
        break;
    case 12:
        a->deltaHP = a->hpNow - a->hp;
        a->deltaMP = a->mpNow - a->mp;
        out = func_80005670(arg0, D_802176F0);
        out->amount = a->hp - a->hpNow;
        if (D_801BBBF0 == (u8 *)a - 0x44C) {
            out->side = 0;
        } else {
            out->side = 1;
        }
        out->kind = 1;
        a->mpTotal = a->mp;
        out = func_80005670(arg0, D_802176F0);
        out->amount = a->mp - a->mpNow;
        if (D_801BBBF0 == (u8 *)a - 0x44C) {
            out->side = 0;
        } else {
            out->side = 1;
        }
        out->kind = 2;
        out->delay = 20;
        break;
    case 13:
        func_803796D0((u8 *)a);
        break;
    case 14:
        func_803796E4((void *)a);
        break;
    case 15:
        func_803796D0((u8 *)a);
        func_803796E4((void *)a);
        a->deltaHP = a->hpNow - a->hp;
        out = func_80005670(arg0, D_802176F0);
        out->amount = -a->deltaHP;
        if (D_801BBBF0 == (u8 *)a - 0x44C) {
            out->side = 0;
        } else {
            out->side = 1;
        }
        out->kind = 1;
        break;
    case 20:
        enemy->deltaHP = func_80379490((u8 *)a, 100, enemy->statA2, factor);
        out = func_80005670(arg0, D_802176F0);
        out->amount = enemy->damage = enemy->deltaHP;
        if (D_801BBBF0 == (u8 *)a - 0x44C) {
            out->side = 1;
        } else {
            out->side = 0;
        }
        out->kind = 0;
        func_8023011C(out->amount, enemy);
        break;
    case 21:
        enemy->deltaHP = func_80379490((u8 *)a, 100, enemy->statA2, factor);
        out = func_80005670(arg0, D_802176F0);
        out->amount = enemy->damage = enemy->deltaHP;
        if (D_801BBBF0 == (u8 *)a - 0x44C) {
            out->side = 1;
        } else {
            out->side = 0;
        }
        out->kind = 0;
        func_8023011C(out->amount, enemy);
        break;
    case 22:
        enemy->deltaHP = func_80379490((u8 *)a, 80, enemy->statA3, factor);
        func_803795D8((void *)enemy, 1, enemy->statA3, factor);
        out = func_80005670(arg0, D_802176F0);
        out->amount = enemy->damage = enemy->deltaHP;
        if (D_801BBBF0 == (u8 *)a - 0x44C) {
            out->side = 1;
        } else {
            out->side = 0;
        }
        out->kind = 0;
        func_8023011C(out->amount, enemy);
        break;
    case 23:
        enemy->deltaHP = func_80379490((u8 *)a, 70, enemy->statA3, factor);
        func_803795D8((void *)enemy, 3, enemy->statA3, factor);
        out = func_80005670(arg0, D_802176F0);
        out->amount = enemy->damage = enemy->deltaHP;
        if (D_801BBBF0 == (u8 *)a - 0x44C) {
            out->side = 1;
        } else {
            out->side = 0;
        }
        out->kind = 0;
        func_8023011C(out->amount, enemy);
        break;
    case 24:
    case 25:
        if (enemy->statA4 != 0) {
            if (a->item == 24) {
                enemy->timer = 80;
            } else {
                enemy->timer = 240;
            }
            out = func_80005670(arg0, D_803896DC);
            out->active = 0;
            func_803796C8(enemy);
        }
        break;
    case 26:
        enemy->deltaHP = func_80379490((u8 *)a, 250, enemy->statA5, factor);
        out = func_80005670(arg0, D_802176F0);
        out->amount = enemy->damage = enemy->deltaHP;
        if (D_801BBBF0 == (u8 *)a - 0x44C) {
            out->side = 1;
        } else {
            out->side = 0;
        }
        out->kind = 0;
        func_8023011C(out->amount, enemy);
        break;
    case 27:
        enemy->deltaHP = func_80379490((u8 *)a, 150, enemy->statA5, factor);
        out = func_80005670(arg0, D_802176F0);
        out->amount = enemy->damage = enemy->deltaHP;
        if (D_801BBBF0 == (u8 *)a - 0x44C) {
            out->side = 1;
        } else {
            out->side = 0;
        }
        out->kind = 0;
        func_8023011C(out->amount, enemy);
        break;
    case 28:
        enemy->deltaHP = func_80379490((u8 *)a, 400, 100, 1.0f);
        out = func_80005670(arg0, D_802176F0);
        out->amount = enemy->damage = enemy->deltaHP;
        if (D_801BBBF0 == (u8 *)a - 0x44C) {
            out->side = 1;
        } else {
            out->side = 0;
        }
        out->kind = 0;
        func_8023011C(out->amount, enemy);
        break;
    case 29:
        enemy->deltaHP = func_80379490((u8 *)a, 250, 100, 1.0f);
        out = func_80005670(arg0, D_802176F0);
        out->amount = enemy->damage = enemy->deltaHP;
        if (D_801BBBF0 == (u8 *)a - 0x44C) {
            out->side = 1;
        } else {
            out->side = 0;
        }
        out->kind = 0;
        func_8023011C(out->amount, enemy);
        break;
    case 30:
        if (!(a->flags & 1)) {
            a->flags |= 1;
        }
        break;
    case 31:
        if (!(a->flags & 4)) {
            a->flags |= 4;
        }
        break;
    case 32:
        if (!(a->flags & 16)) {
            a->flags |= 16;
        }
        break;
    case 33:
        if (!(a->flags & 128)) {
            a->flags |= 128;
        }
        break;
    case 34:
        if (!(a->flags & 64)) {
            a->flags |= 64;
        }
        break;
    case 35:
        if (!(enemy->flags & 2)) {
            enemy->flags |= 2;
        }
        break;
    case 36:
        if (!(enemy->flags & 8)) {
            enemy->flags |= 8;
        }
        break;
    case 37:
        if (!(enemy->flags & 32)) {
            enemy->flags |= 32;
            enemy->timer2 = 50;
        }
        out = func_80005670(arg0, D_803896DC);
        out->active = 1;
        break;
    }
    if (out != NULL) return out->amount;
    return 0;
}
#undef func_80379490
#undef func_803795D8
#undef func_803795D8_Struct
#undef func_803796C8
#undef func_803796D0
#undef func_803796E4
#undef func_803796E4_Struct
#undef func_803796EC
#undef func_803797F8

#define func_80379490 func_80379490__func_8037A884
#define func_803795D8 func_803795D8__func_8037A884
#define func_803795D8_Struct func_803795D8_Struct__func_8037A884
#define func_803796C8 func_803796C8__func_8037A884
u16 func_80379490(u8 *arg0, u16 arg1, u8 arg2, f32 arg3);
struct func_803795D8_Struct {
    u8 pad[0x30];
    u8 unk30;
    u8 pad31[0x396 - 0x31];
    u8 unk396;
};
void func_803795D8(struct func_803795D8_Struct *arg0, u8 arg1, u8 arg2, f32 arg3);
void func_803796C8(void);


struct func_8037A884_Struct {
    u8 pad0[0x40];
    s16 deltaHP;
    u8 pad42[0x4E - 0x42];
    u16 unk4E;
    u8 pad50[0x8F - 0x50];
    u8 unk8F;
    u8 unk90;
    u8 pad91[3];
    u16 amount;
    u8 side, kind;
    u8 pad98[2];
    u16 damage;
    u8 pad9C[2];
    s16 timer, timer2;
    u8 statA2, statA3, unkA4, statA5, flags;
    u8 padA7[0x2D8 - 0xA7];
    u8 state, item;
};

void func_8037A884(void *arg0, u8 *arg1) {
    u8 v;
    struct func_8037A884_Struct *enemy;
    struct func_8037A884_Struct *out;
    f32 factor;
extern void func_803796C8();

    if (D_801BBBF0 == arg1 - 0x44C) {
        enemy = (struct func_8037A884_Struct *)D_801BC3D8;
    } else {
        enemy = (struct func_8037A884_Struct *)D_801BC03C;
    }
    factor = (enemy->state == 13) ? 0.6 : 1.0;
    switch (((struct func_8037A884_Struct *)arg1)->item) {
    case 0:
    case 5:
        v = enemy->statA2;
        break;
    case 1:
    case 6:
        v = enemy->statA3;
        func_803795D8((struct func_803795D8_Struct *)enemy, 2, v, factor);
        break;
    case 3:
        v = enemy->statA5;
        break;
    case 4:
        v = 100;
        break;
    case 2:
    case 7:
        enemy->timer = 160;
        out = (struct func_8037A884_Struct *)func_80005670(arg0, D_803896DC);
        out->unk90 = 0;
        func_803796C8(enemy);
        return;
    }
    enemy->deltaHP = func_80379490(arg1, ((struct func_8037A884_Struct *)arg1)->unk4E * 0.6, v, factor);
    out = (struct func_8037A884_Struct *)func_80005670(arg0, D_802176F0);
    out->amount = enemy->damage = enemy->deltaHP;
    if (D_801BBBF0 == arg1 - 0x44C) {
        out->side = 1;
    } else {
        out->side = 0;
    }
    out->kind = 0;
    func_8023011C(out->amount, enemy);
}
#undef func_80379490
#undef func_803795D8
#undef func_803795D8_Struct
#undef func_803796C8

