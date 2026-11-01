#include "common.h"
extern u8 D_801BBBF0[];
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
extern f64 D_8038BA78;
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
    factor = (enemy->state == 13) ? D_8038BA78 : 1.0;

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
