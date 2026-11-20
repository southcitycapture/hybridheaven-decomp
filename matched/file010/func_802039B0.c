#include "common.h"
extern u8 D_801BBBF0[];
extern s8 D_8021B0F0;
extern s8 D_8021B0F1;
extern f32 D_8021B0F4;
extern s16 D_8021B0F8;
extern s32 D_8021B0FC;
extern s32 D_8021B100;
extern s32 D_8021B104;
extern s32 D_8021B108;
extern s32 D_8021B10C;
extern s32 D_8021B110;
extern s32 D_8021B114;
extern s32 D_8021B118;
extern s16 D_8021B120;
extern s16 D_8021B122;
extern f32 D_8021B124;
extern f32 D_8021B128;
extern f32 D_8021B12C;
extern s16 D_8021B130;
extern s16 D_8021B132;
extern f32 D_8021B134;
extern f32 D_8021B138;


typedef struct func_802039B0_StructPos {
    u8 pad0[0x4];
    f32 x, y, z;
    u8 pad10[0x2];
    s16 angle;
    u8 pad14[0x8];
    f32 unk1C;
    u8 pad20[0x10];
    f32 unk30, unk34, unk38, unk3C, unk40, unk44;
} func_802039B0_StructPos;

typedef struct func_802039B0_StructObj24 {
    u8 pad[0x2C];
    func_802039B0_StructPos *pos;
} func_802039B0_StructObj24;

typedef struct func_802039B0_StructObj {
    u8 pad[0x24];
    func_802039B0_StructObj24 *sub;
    u8 pad28[0x4];
    s32 flags;
    u8 pad30[0x48];
    u16 unk78;
} func_802039B0_StructObj;

typedef struct func_802039B0_StructVec {
    s32 x, y, z;
} func_802039B0_StructVec;

typedef struct func_802039B0_StructTok {
    s32 v;
    s32 w[4];
} func_802039B0_StructTok;

typedef struct func_802039B0_StructEntry {
    func_802039B0_StructObj *obj;
    func_802039B0_StructObj *data;
    u8 state;
    u8 active;
    u8 pad[2];
    func_802039B0_StructVec *vec;
    f32 speed;
    s32 angle;
} func_802039B0_StructEntry;

typedef struct func_802039B0_StructGlob {
    u8 pad0[0xE8];
    func_802039B0_StructObj24 *camera;
    u8 padEC[0x18E - 0xEC];
    u16 unk18E;
    u16 unk190;
    u16 unk192;
    u16 unk194;
    u16 unk196;
    u8 pad198[0x354 - 0x198];
    u16 unk354;
    u16 unk356;
    u16 unk358;
    u8 pad35A[0x438 - 0x35A];
    f32 unk438, unk43C, unk440;
    u8 pad444[0x104C - 0x444];
    func_802039B0_StructVec pts[5];
    func_802039B0_StructEntry entries[5];
    u8 pad1100[0x112C - 0x1100];
    s32 unk112C;
} func_802039B0_StructGlob;

typedef struct func_802039B0_StructArg {
    u8 pad[0x90];
    u8 timer0;
    u8 timer1;
    u16 id;
    func_802039B0_StructTok *script;
    u8 state;
    u8 unk99;
    u8 unk9A;
    u8 count;
    s16 timer;
    u8 pad2[2];
    func_802039B0_StructTok *previous;
} func_802039B0_StructArg;

typedef struct func_802039B0_StructRet {
    u8 pad[0x90];
    f32 unk90;
} func_802039B0_StructRet;

extern s8 D_8021B0F2;
extern s32 D_8021B11C;
extern s32 D_8021B13C;
extern s32 D_8021B140;
extern s32 D_8021B144;
extern u16 D_80089474[];
extern s16 D_80089354;
extern char D_802196FC[];
extern char D_80219E6C[];
extern char D_80219ED8[];
extern char D_80219F44[];
extern char D_80219FB4[];
extern char D_8021A030[];
extern char D_8021A0A8[];
extern char D_8021A11C[];
extern char D_8021A1B0[];
extern char D_8021A21C[];
extern char D_8021A284[];
extern void func_80006214(void *);
extern s32 func_8000E634(s32);
extern u8 func_80010550(func_802039B0_StructObj24 **, void *);
extern s32 func_800178E8(void);
extern s32 func_80017910(void);
extern void func_800179B0(s32);
extern void func_80020744(u16);
extern void func_800208C4(u16);
extern u8 func_8011AAF4(char *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_801268CC(u16);
extern s32 func_801268F4(s32);
extern s32 func_801270C0(func_802039B0_StructObj *);
extern void func_80127430(f32, f32, f32, u16, f32, f32);
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern func_802039B0_StructRet *func_8012C4D0(s32, func_802039B0_StructTok, s32);
extern s32 func_8012CE9C(func_802039B0_StructObj24 **, void *, func_802039B0_StructVec, u32);
extern void func_801300B0(f32, s32, s32, f32, f32);
extern void func_80133980(u16);
extern void func_801339D0(u16);
extern s32 func_80133A24(s32);
extern void func_8013A2E0(func_802039B0_StructObj24 **, func_802039B0_StructVec);
extern void func_801C4A5C(func_802039B0_StructObj *, s32);
extern void func_801FA2E0(void);
extern void func_801FBB20(void);
extern void func_801FBB30(void);

#define G ((func_802039B0_StructGlob *)D_801BBBF0)
#define F0 (*(u8 *)&D_8021B0F0)
#define F1 (*(u8 *)&D_8021B0F1)
#define IDX(n) ((u8)s[n].v)
#define PT(n) (**(s32 **)&(n))

s32 func_802039B0(func_802039B0_StructArg *arg0, func_802039B0_StructObj24 **arg1)
{
    func_802039B0_StructEntry *entry;
    func_802039B0_StructObj24 **obj;
    s32 st;
    func_802039B0_StructRet *ret;
    func_802039B0_StructVec *va;
    func_802039B0_StructPos *pos;
    s16 t;
    u8 i;
    func_802039B0_StructTok *s;
    func_802039B0_StructVec *vb;
    void (*fn0)(void);
    s32 (*fn1)(void);

    if (arg0->script == arg0->previous) {
        D_8021B0F2 = 0;
    } else {
        *(u8 *)&D_8021B0F2 = 1;
        arg0->count++;
    }
    s = arg0->script;
    arg0->previous = s;
    D_8021B13C = G->camera->pos->unk30 * 1000.0f;
    D_8021B140 = G->camera->pos->unk30 * 1000.0f;
    D_8021B144 = G->camera->pos->unk30 * 1000.0f;
    for (i = 0; i < 5; i++) {
        if (G->entries[i].obj != NULL) {
            func_80006214(G->entries[i].obj);
            obj = arg1;
            st = G->entries[i].state;
            if (st == 1U) {
                if (G->entries[i].speed != 0.0f) {
                    if (func_8012CE9C((func_802039B0_StructObj24 **)((u32)arg1 | 0), G->entries[i].data, *G->entries[i].vec, G->entries[i].speed) == 0) {
                        G->entries[i].state = 2;
                    }
                } else {
                    G->unk440 = 0.0f;
                    G->unk43C = G->unk440;
                    G->unk438 = G->unk43C;
                    func_8013A2E0(obj, *G->entries[i].vec);
                    G->entries[i].state = 2;
                }
            }
            if (G->entries[i].state == 2) {
                G->entries[i].active = func_80010550(obj, G->entries[i].data);
                if (G->entries[i].active == 0) {
                    (*obj)->pos->angle += G->entries[i].angle;
                }
            }
        }
    }
    func_80006214(arg0);
    if (F0 != 0) {
        u8 *pf = (u8 *)((u32)&D_8021B0F1 | 0);
        *pf = func_8011AAF4(D_802196FC, 0xF2, arg0, 0, 2,
            PT(D_8021B118) / 1000.0f,
            PT(D_8021B100) / 1000.0f,
            PT(D_8021B104) / 1000.0f,
            PT(D_8021B108) / 1000.0f,
            4294967296.0f,
            PT(D_8021B10C) / 1000.0f,
            PT(D_8021B110) / 1000.0f,
            PT(D_8021B114) / 1000.0f,
            D_8021B0F4,
            PT(D_8021B11C) / 1000.0f,
            D_8021B0F8, D_8021B0FC);
        if (*pf == 0) {
            F0 = 0;
        }
    }
    if (arg0->timer0 != 0) {
        if (--arg0->timer0 == 0) {
            func_80133980(arg0->id);
        }
    }
    if (arg0->timer1 != 0) {
        if (--arg0->timer1 == 0) {
            func_801339D0(arg0->id);
        }
    }
    t = D_8021B120;
    if (t != 0) {
        D_8021B120 = t - 1;
        if (D_8021B120 == 0) {
            func_80020744(D_8021B130);
        }
    }
    st = *(s16 *)((u32)&D_8021B122 | 0);
    if (st != 0) {
        D_8021B122 = st - 1;
        if (*(s16 *)((u32)&D_8021B122 | 0) == 0) {
            func_80127430(D_8021B124, D_8021B128, D_8021B12C,
                D_8021B132, D_8021B138, D_8021B134);
        }
    }
    while (((u32)s->v | 0) != 0x12340015) {
        switch ((u32)s->v | 0) {
        case 0x12340001:
            s += 1;
            if (D_80089474[2] != 0x8000) {
                return 0;
            }
            arg0->script = s;
            break;
        case 0x12340002:
            G->unk356 = 1;
            s += 1;
            arg0->script = s;
            break;
        case 0x12340003:
            G->unk356 = 0;
            s += 1;
            arg0->script = s;
            break;
        case 0x12340004:
            s += 1;
            if (G->unk358 == 0) {
                return 0;
            }
            arg0->script = s;
            break;
        case 0x12340005:
            func_800179B0(s[1].v);
            s += 2;
            arg0->script = s;
            break;
        case 0x1234000E:
            i = IDX(3);
            if (G->entries[i].state == 1) {
                return 0;
            }
            G->entries[i].state = 0;
            {
                u32 one = ((u32)G->entries[i].state >= 0U); G->unk354 = one; G->entries[i].state = one; G->entries[i].data->unk78 = one;
            }
            G->entries[i].vec = (func_802039B0_StructVec *)s[1].v;
            G->entries[i].speed = s[2].v / 1000.0f;
            G->entries[i].angle = 0;
            s += 4;
            arg0->script = s;
            G->entries[i].active = 0;
            return 0;
        case 0x1234000F:
            i = IDX(3);
            if (G->entries[i].active) { st = (u32)i >= 0U;
                G->entries[i].state = st;
                G->entries[i].data->unk78 = st;
                G->unk354 = 0;
                G->entries[i].vec = (func_802039B0_StructVec *)s[1].v;
                G->entries[i].speed = s[2].v / 1000.0f;
                G->entries[i].angle = 0;
                s += 4;
                arg0->script = s;
                G->entries[i].active = 0;
            }
            return 0;
        case 0x1234000C:
            i = IDX(4);
            if (G->entries[i].state == 1) {
                return 0;
            }
            G->entries[i].state = 0;
            {
                u16 one;
                one = (u32)G->entries[i].state >= 0U; G->unk354 = one;
                G->entries[i].state = one;
                G->entries[i].data->unk78 = one;
            }
            G->entries[i].vec = (func_802039B0_StructVec *)s[1].v;
            G->entries[i].speed = s[2].v / 1000.0f;
            G->entries[i].angle = s[3].v / func_8000E634((s32)G->entries[i].vec);
            s += 5;
            arg0->script = s;
            G->entries[i].active = 0;
            return 0;
        case 0x1234000D:
            i = IDX(4);
            if (G->entries[i].active) { st = (u32)G->entries[i].state >= 0U;
                G->entries[i].state = st;
                G->entries[i].data->unk78 = st;
                G->unk354 = 0;
                G->entries[i].vec = (func_802039B0_StructVec *)s[1].v;
                G->entries[i].speed = s[2].v / 1000.0f;
                G->entries[i].angle = s[3].v / func_8000E634((s32)G->entries[i].vec);
                s += 5;
                arg0->script = s;
                G->entries[i].active = 0;
            }
            return 0;
        case 0x12340010:
            if (G->entries[i = IDX(1)].active == 0) {
                return 0;
            }
            G->unk354 = 0;
            s += 2;
            arg0->script = s;
            return 0;
        case 0x12340009:
            func_801FA2E0();
            s += 1;
            arg0->script = s;
            return 0;
        case 0x12340011:
            if (func_801270C0(G->entries[i = IDX(1)].obj) == 0) {
                return 0;
            }
            func_801268CC(s[2].v);
            func_80020744(7);
            s += 3;
            arg0->script = s;
            return 0;
        case 0x1234000A:
            G->entries[i = IDX(1)].obj->sub->pos->angle += s[2].v;
            s += 3;
            arg0->script = s;
            break;
        case 0x12340006:
            G->entries[i = IDX(1)].obj->flags |= s[2].v;
            s += 3;
            arg0->script = s;
            break;
        case 0x12340007:
            G->entries[i = IDX(1)].obj->flags &= ~s[2].v;
            s += 3;
            arg0->script = s;
            break;
        case 0x12340008:
            func_801C4A5C(G->entries[i = IDX(1)].obj, 0);
            s += 2;
            arg0->script = s;
            break;
        case 0x1234000B:
            i = IDX(5);
            G->entries[i].obj->sub->pos->x = s[1].v / 1000.0f;
            G->entries[i].obj->sub->pos->y = s[2].v / 1000.0f;
            G->entries[i].obj->sub->pos->z = s[3].v / 1000.0f;
            G->entries[i].obj->sub->pos->angle = s[4].v;
            s += 6;
            arg0->script = s;
            break;
        case 0x12340017:
            G->entries[i = IDX(2)].obj->sub->pos->angle += s[1].v;
            s += 3;
            arg0->script = s;
            break;
        case 0x12340012:
            if (func_80017910() == 0) {
                return 0;
            }
            s += 1;
            arg0->script = s;
            return 0;
        case 0x12340026:
            func_801300B0(s[1].v / 1000.0f, s[2].v, s[3].v, s[4].v / 1000.0f, s[5].v / 1000.0f);
            s += 6;
            arg0->script = s;
            return 0;
        case 0x12340027:
            G->unk112C = 0;
            s += 1;
            arg0->script = s;
            return 0;
        case 0x12340013:
            if (func_800178E8() == 0) {
                return 0;
            }
            s += 1;
            arg0->script = s;
            return 0;
        case 0x12340019:
            if (func_801268F4(0) == 0) {
                return 0;
            }
            s += 1;
            arg0->script = s;
            break;
        case 0x1234001A:
            st = arg0->state;
            if (st == 0) {
                if (G->unk190 != 1 && G->unk190 != 6 && (u16)G->unk18E != 0) {
                    return 0;
                }
                {
                    u16 one;
                    one = (u32)G->unk18E >= 0U; G->unk18E = one;
                    G->unk190 = 6;
                    G->unk192 = 7;
                    G->unk196 = 0;
                    arg0->state = one;
                }
                return 0;
            }
            if (st == 1 && G->unk196 == 1) {
                i = IDX(1); G->entries[i].state = 2;
                s += 2;
                arg0->state = 0;
                arg0->script = s;
                break;
            }
            return 0;
        case 0x1234001B:
            G->unk194 = 2;
            s += 1;
            arg0->script = s;
            break;
        case 0x1234001D:
            va = (func_802039B0_StructVec *)s[1].v;
            *(f32 *)va = s[2].v / 1000.0f;
            s += 2;
            arg0->script = s;
            break;
        case 0x1234001C:
            va = (func_802039B0_StructVec *)s[1].v;
            *(s32 *)va = s[2].v;
            s += 2;
            arg0->script = s;
            break;
        case 0x12340014:
            s += 2;
            arg0->script = s;
            break;
        case 0x12340016:
            return 0;
        case 0x1234001E:
            st = arg0->state;
            if (st == 0) {
                arg0->timer = s[1].v;
                arg0->state = 1;
                return 0;
            }
            if (st == 1) {
                s += 2;
                if (arg0->timer--) {
                    return 0;
                }
                arg0->state = 0;
                arg0->script = s;
            }
            break;
        case 0x1234001F:
            st = arg0->state;
            if (st == 0) {
                arg0->timer = s[1].v;
                arg0->state = 1;
                return 0;
            }
            if (st == 1) {
                s -= s[2].v;
                arg0->state = 2;
                break;
            }
            s += 3;
            if (st == 2) {
                if (arg0->timer--) {
                    arg0->state = 1;
                    return 0;
                }
            }
            arg0->state = 0;
            arg0->script = s;
            break;
        case 0x12340020:
            if (func_80133A24(s[1].v) == 0) {
                return 0;
            }
            s += 2;
            arg0->script = s;
            break;
        case 0x12340021:
            arg0->timer0 = s[2].v;
            arg0->id = s[1].v;
            if (arg0->timer0 == 0) {
                func_80133980(arg0->id);
            }
            s += 3;
            arg0->script = s;
            break;
        case 0x12340022:
            arg0->timer1 = s[2].v;
            arg0->id = s[1].v;
            if (arg0->timer1 == 0) {
                func_801339D0(arg0->id);
            }
            s += 3;
            arg0->script = s;
            break;
        case 0x12340029:
            D_8021B0FC = s[1].v;
            D_8021B0F4 = s[2].v / 1000.0f;
            D_8021B0F8 = s[3].v;
            s += 4;
            arg0->script = s;
            break;
        case 0x12340028:
            func_8011AAF4(D_80219E6C, 0x2AF, arg0, 0, 2, 0.0f,
                G->camera->pos->unk30, G->camera->pos->unk34, G->camera->pos->unk38, 0.0f,
                G->camera->pos->unk3C, G->camera->pos->unk40, G->camera->pos->unk44, 0.0f,
                G->camera->pos->unk1C, 0, D_8021B0FC);
            s += 1;
            arg0->script = s;
            return 0;
        case 0x12340024:
            F0 = 0;
            func_8011AAF4(D_80219ED8, 0x2BF, arg0, 0, 1, 5.0f,
                s[1].v / 1000.0f, s[2].v / 1000.0f, s[3].v / 1000.0f, 4294967296.0f,
                s[4].v / 1000.0f, s[5].v / 1000.0f, s[6].v / 1000.0f, 0.0f,
                s[7].v / 1000.0f, 0, 0);
            s += 8;
            arg0->script = s;
            return 0;
        case 0x12340025:
            F0 = 0;
            func_8011AAF4(D_80219F44, 0x2CD, arg0, 0, 1, 5.0f,
                s[1].v / 1000.0f, s[2].v / 1000.0f, s[3].v / 1000.0f, 4294967296.0f,
                s[4].v / 1000.0f, s[5].v / 1000.0f, s[6].v / 1000.0f, 0.0f,
                s[7].v / 1000.0f, 0, 0);
            s += 8;
            arg0->script = s;
            break;
        case 0x12340023:
            F0 = 0;
            func_8011AAF4(D_80219FB4, 0x2DD, arg0, 0, 1, 5.0f,
                s[1].v / 1000.0f, s[2].v / 1000.0f, s[3].v / 1000.0f, 4294967296.0f,
                s[4].v / 1000.0f, s[5].v / 1000.0f, s[6].v / 1000.0f, 0.0f,
                s[7].v / 1000.0f, 0, s[8].v);
            s += 9;
            arg0->script = s;
            return 0;
        case 0x1234002A:
            F0 = 1;
            D_8021B100 = (s32)&s[1];
            D_8021B104 = (s32)&s[2];
            D_8021B108 = (s32)&s[3];
            D_8021B10C = (s32)&s[4];
            D_8021B110 = (s32)&s[5];
            D_8021B114 = (s32)&s[6];
            D_8021B118 = (s32)&s[7];
            D_8021B11C = (s32)&s[8];
            func_8011AAF4(D_8021A030, 0x2F8, arg0, 0, 2, s[7].v / 1000.0f,
                s[1].v / 1000.0f, s[2].v / 1000.0f, s[3].v / 1000.0f, 4294967296.0f,
                s[4].v / 1000.0f, s[5].v / 1000.0f, s[6].v / 1000.0f, D_8021B0F4,
                s[8].v / 1000.0f, D_8021B0F8, D_8021B0FC);
            s += 9;
            arg0->script = s;
            return 0;
        case 0x1234002B:
            F0 = 0;
            func_8011AAF4(D_8021A0A8, 0x307, arg0, 0, 1, 5.0f,
                G->camera->pos->unk30, G->camera->pos->unk34, G->camera->pos->unk38, 4294967296.0f,
                s[1].v / 1000.0f, s[2].v / 1000.0f, s[3].v / 1000.0f, 0.0f,
                s[4].v / 1000.0f, 0, 0);
            s += 5;
            arg0->script = s;
            return 0;
        case 0x1234002C:
            F0 = 1;
            D_8021B100 = (s32)&D_8021B13C;
            D_8021B104 = (s32)&D_8021B140;
            D_8021B108 = (s32)&D_8021B144;
            D_8021B10C = (s32)&s[1];
            D_8021B110 = (s32)&s[2];
            D_8021B114 = (s32)&s[3];
            D_8021B118 = (s32)&s[4];
            D_8021B11C = (s32)&s[5];
            func_8011AAF4(D_8021A11C, 0x31F, arg0, 0, 2, s[4].v / 1000.0f,
                G->camera->pos->unk30, G->camera->pos->unk34, G->camera->pos->unk38, 4294967296.0f,
                s[1].v / 1000.0f, s[2].v / 1000.0f, s[3].v / 1000.0f, D_8021B0F4,
                s[5].v / 1000.0f, D_8021B0F8, D_8021B0FC);
            s += 6;
            arg0->script = s;
            return 0;
        case 0x1234002D:
            G->pts[s[4].v].x = s[1].v;
            G->pts[s[4].v].y = s[2].v;
            G->pts[s[4].v].z = s[3].v;
            s += 5;
            arg0->script = s;
            break;
        case 0x1234002E:
            F0 = 0;
            func_8011AAF4(D_8021A1B0, 0x33B, arg0, 0, 1, 5.0f,
                G->pts[s[1].v].x / 1000.0f, G->pts[s[1].v].y / 1000.0f, G->pts[s[1].v].z / 1000.0f, 4294967296.0f,
                G->pts[s[2].v].x / 1000.0f, G->pts[s[2].v].y / 1000.0f, G->pts[s[2].v].z / 1000.0f, 0.0f,
                s[3].v / 1000.0f, 0, 0);
            s += 4;
            arg0->script = s;
            break;
        case 0x1234002F:
            F0 = 1;
            D_8021B100 = (s32)&G->pts[s[1].v].x;
            D_8021B104 = (s32)&G->pts[s[1].v].y;
            D_8021B108 = (s32)&G->pts[s[1].v].z;
            D_8021B10C = (s32)&G->pts[s[2].v].x;
            D_8021B110 = (s32)&G->pts[s[2].v].y;
            D_8021B114 = (s32)&G->pts[s[2].v].z;
            D_8021B118 = (s32)&s[3];
            D_8021B11C = (s32)&s[4];
            func_8011AAF4(D_8021A21C, 0x35A, arg0, 0, 2, s[3].v / 1000.0f,
                G->pts[(u32)s[1].v].x / 1000.0f, G->pts[(u32)s[1].v].y / 1000.0f, G->pts[(u32)s[1].v].z / 1000.0f, 4294967296.0f,
                G->pts[(u32)s[2].v].x / 1000.0f, G->pts[(u32)s[2].v].y / 1000.0f, G->pts[(u32)s[2].v].z / 1000.0f, D_8021B0F4,
                s[4].v / 1000.0f, D_8021B0F8, D_8021B0FC);
            s += 5;
            arg0->script = s;
            return 0;
        case 0x12340030:
            F0 = 0;
            func_8011AAF4(D_8021A284, 0x365, arg0, 2, 1, 10.0f,
                G->camera->pos->unk30, G->camera->pos->unk34, G->camera->pos->unk38, 4294967296.0f,
                G->camera->pos->unk3C, G->camera->pos->unk40, G->camera->pos->unk44, 0.0f,
                35.0f, 0, 0);
            s += 1;
            arg0->script = s;
            return 0;
        case 0x12340031:
            s += 1;
            va = (func_802039B0_StructVec *)F1;
            if (va != 0) {
                return 0;
            }
            arg0->script = s;
            break;
        case 0x12340032:
            func_800208C4(s[1].v);
            s += 2;
            arg0->script = s;
            break;
        case 0x12340033:
            if (s[2].v == 0) {
                func_80020744(s[1].v);
            } else {
                D_8021B130 = s[1].v;
                D_8021B120 = s[2].v;
            }
            s += 3;
            arg0->script = s;
            break;
        case 0x12340034:
            D_8021B132 = s[1].v;
            D_8021B122 = s[2].v;
            D_8021B124 = G->pts[s[3].v].x / 1000.0f;
            D_8021B128 = G->pts[s[3].v].y / 1000.0f;
            D_8021B12C = G->pts[s[3].v].z / 1000.0f;
            D_8021B138 = s[4].v / 1000.0f;
            D_8021B134 = s[5].v / 1000.0f;
            s += 6;
            arg0->script = s;
            break;
        case 0x12340035:
            s += 1;
            t = D_8021B120; st = D_8021B122;
            if ((t | st) != 0) {
                return 0;
            }
            arg0->script = s;
            break;
        case 0x12340036:
            s += 1;
            va = (func_802039B0_StructVec *)D_8021B122;
            if (va != 0) {
                return 0;
            }
            arg0->script = s;
            break;
        case 0x12340037:
            ret = func_8012C4D0(s[1].v, s[2], s[3].v);
            if (ret != NULL) {
                ret->unk90 = s[4].v;
            }
            s += 5;
            arg0->script = s;
            break;
        case 0x12340038:
            va = (func_802039B0_StructVec *)s[1].v;
            ((void (*)(void))va)();
            s += 2;
            arg0->script = s;
            break;
        case 0x12340039:
            fn1 = (s32 (*)(void))s[1].v;
            if (fn1() == 0) {
                return 0;
            }
            s += 2;
            arg0->script = s;
            break;
        case 0x1234003A:
            func_801FBB20();
            s += 1;
            arg0->script = s;
            break;
        case 0x1234003B:
            func_801FBB30();
            s += 1;
            arg0->script = s;
            break;
        case 0x12340018:
            D_80089354 = s[1].v;
            s += 2;
            arg0->script = s;
            break;
        case 0x1234003C:
            func_80129FB8(s[1].v / 1000.0f, s[2].v / 1000.0f, s[3].v / 1000.0f,
                s[4].v / 1000.0f, s[5].v / 1000.0f, s[6].v / 1000.0f, s[7].v / 1000.0f,
                s[8].v, s[9].v, s[10].v, s[11].v, s[12].v, s[13].v, s[14].v, s[15].v,
                s[16].v / 1000.0f, s[17].v, s[18].v);
            s += 19;
            arg0->script = s;
            break;
        case 0x1234003D:
            s += 1;
            arg0->script = s;
            return 0;
        }
    }
    return 1;
}
