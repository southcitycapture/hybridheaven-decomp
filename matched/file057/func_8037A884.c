#include "common.h"
extern u8 D_801BBBF0[];
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_802176F0[];
extern u8 D_803896DC[];
extern void *func_80005670(void *, void *);
extern void func_8023011C(u16, void *);
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
