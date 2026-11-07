#include "common.h"
struct func_8013DA10_StructB {
    s16 x0;
    s16 x2;
    s16 x4;
    s16 x6;
    u8 pad8[0x20];
    f32 f28;
    f32 f2C;
    u8 pad30[4];
    f32 f34;
    f32 f38;
    f32 f3C;
    f32 f40;
    f32 f44;
    f32 f48;
    f32 f4C;
    f32 f50;
    f32 f54;
};
struct func_8013DA10_StructC {
    u8 pad[0x2C];
    struct func_8013DA10_StructB *p2C;
};
struct func_8013DA10_StructD {
    u8 pad[0x26C];
    struct func_8013DA10_StructC *p26C;
};
extern struct func_8013DA10_StructD D_801BBBF0;
extern f32 D_801BEB40;
extern f32 D_801BEB44;
extern f32 D_801BEB48;
extern s16 D_801BEB4C;
extern s16 D_801BEB4E;
extern s32 D_801BEB50;
extern f32 func_8001EAD0(s32);
extern f32 func_8001EB64(s32);
extern s32 func_801302CC();


struct func_8013DC60_S30 {
    u8 pad0[4];
    f32 f4;
    f32 f8;
    f32 fC;
    s16 pad10;
    s16 s12;
};
struct func_8013DC60_Obj {
    u8 pad0[0x22];
    u8 f22;
    u8 pad23[0xD];
    struct func_8013DC60_S30 *p30;
};
struct func_8013DC60_E {
    u8 pad0[0x2C];
    struct func_8013DC60_S30 *p2C;
};
struct func_8013DC60_F {
    u8 pad0[0x44];
    f32 f44;
};
struct func_8013DC60_Ent {
    s32 a;
    f32 *p4;
    f32 *p8;
    f32 *pC;
};
struct func_8013DC60_W {
    u8 pad0[8];
    s32 f8;
};
struct func_8013DC60_V {
    s16 x;
    s16 y;
    s16 z;
};
struct func_8013DC60_P {
    s16 x;
    s16 y;
};
extern s32 func_80126944();
extern s32 func_8001F718();
extern s32 func_80108280();
extern s32 func_80119F9C(s16 *, s16 *);
extern struct func_8013DC60_V D_8017E170[][10];
extern struct func_8013DC60_P D_8017E404[];

#define G(T, off) (*(T *)((u8 *)&D_801BBBF0 + (off)))
#define E0 G(struct func_8013DC60_E *, 0xE0)
#define OBJ(i) arg1[i]
#define CAM D_801BBBF0.p26C->p2C

void func_8013DC60(s32 arg0, struct func_8013DC60_Obj **arg1) {
    s32 i;
    u16 room;
    u16 sub;
    s16 sp6E;

    G(u8, 0x39E) = 0;
    arg1[0]->f22 = 0;
    arg1[1]->f22 = 0;
    for (i = 0; i < 3; i++) {
        arg1[i + 2]->f22 = 0;
    }
    if (func_80126944() != 0 || func_8001F718() != 0) {
        return;
    }
    if (G(u16, 0xEF0) & 0x40) {
        return;
    }
    if (G(u16, 0x18E) != 0) {
        return;
    }
    if (G(struct func_8013DC60_W *, 0x58)->f8 != 0) {
        return;
    }
    if ((G(u16, 0xA0) & 0x4000) && G(u8, 0x39F) == 0) {
        G(u8, 0x39C) = G(u8, 0x39C) + 1;
        G(u8, 0x39C) = G(u8, 0x39C) & 1;
    }
    i = func_80108280();
    arg0 = i >> 8;
    sub = i & 0xFF;
    room = arg0;
    if (room == 0 || sub == 0) {
        return;
    }
    if (arg0) {}
    if (G(u8, 0x39C) != 1) {
        return;
    }
    G(u8, 0x39E) = 1;
    arg1[0]->f22 = 1;
    arg1[1]->f22 = 1;
    if (func_801302CC() == 0) {
        D_801BEB40 = (E0->p2C->f4 + D_8017E170[room - 1][sub - 1].x) * 0.1;
        if (G(struct func_8013DC60_F *, 0xDC)->f44 == 0.0f) {
            D_801BEB44 = E0->p2C->f8 + D_8017E170[room - 1][sub - 1].y;
        }
        D_801BEB48 = (E0->p2C->fC + D_8017E170[room - 1][sub - 1].z) * 0.1;
        D_801BEB4C = E0->p2C->s12;
    } else {
        D_801BEB40 = (E0->p2C->f4 + D_8017E170[room - 1][sub - 1].x) * 0.075;
        if (G(struct func_8013DC60_F *, 0xDC)->f44 == 0.0f) {
            D_801BEB44 = E0->p2C->f8 + D_8017E170[room - 1][sub - 1].y;
        }
        D_801BEB48 = (E0->p2C->fC + D_8017E170[room - 1][sub - 1].z) * 0.075;
        D_801BEB4C = E0->p2C->s12;
    }
    if (G(u8, 0x17) == 1) {
        D_801BEB4E = 0x1800;
    } else {
        func_80119F9C(&D_801BEB4E, &sp6E);
    }
    if (func_801302CC() == 0) {
        arg1[0]->p30->f4 = func_8001EB64((s16)(D_801BEB4E + 0xB80)) * 100.0f;
        arg1[0]->p30->f8 = 0.0f;
        arg1[0]->p30->fC = func_8001EAD0((s16)(D_801BEB4E + 0xB80)) * 100.0f;
        arg1[1]->p30->f4 = func_8001EB64((s16)(D_801BEB4E + 0xB80)) * 100.0f + D_801BEB40;
        arg1[1]->p30->f8 = D_801BEB44;
        arg1[1]->p30->fC = func_8001EAD0((s16)(D_801BEB4E + 0xB80)) * 100.0f + D_801BEB48;
        arg1[1]->p30->s12 = D_801BEB4C;
    } else {
        arg1[0]->p30->f4 = func_8001EB64((s16)(D_801BEB4E + 0xA00)) * 120.0f;
        arg1[0]->p30->f8 = 0.0f;
        arg1[0]->p30->fC = func_8001EAD0((s16)(D_801BEB4E + 0xA00)) * 120.0f;
        arg1[1]->p30->f4 = func_8001EB64((s16)(D_801BEB4E + 0xA00)) * 120.0f + D_801BEB40;
        arg1[1]->p30->f8 = D_801BEB44;
        arg1[1]->p30->fC = func_8001EAD0((s16)(D_801BEB4E + 0xA00)) * 120.0f + D_801BEB48;
        arg1[1]->p30->s12 = D_801BEB4C;
    }
    for (i = 0; i != 3; i++) {
        if (((struct func_8013DC60_Ent *)&D_801BEB50)[i].a != 0) {
            arg1[i + 2]->f22 = 1;
            if (func_801302CC() == 0) {
                arg1[i + 2]->p30->f4 = (*((struct func_8013DC60_Ent *)&D_801BEB50)[i].p4 + D_8017E170[room - 1][sub - 1].x) * 0.1 + func_8001EB64((s16)(D_801BEB4E + 0xB80)) * 100.0f;
                arg1[i + 2]->p30->f8 = *((struct func_8013DC60_Ent *)&D_801BEB50)[i].p8 + D_8017E170[room - 1][sub - 1].y;
                arg1[i + 2]->p30->fC = (*((struct func_8013DC60_Ent *)&D_801BEB50)[i].pC + D_8017E170[room - 1][sub - 1].z) * 0.1 + func_8001EAD0((s16)(D_801BEB4E + 0xB80)) * 100.0f;
            } else {
                arg1[i + 2]->p30->f4 = (*((struct func_8013DC60_Ent *)&D_801BEB50)[i].p4 + D_8017E170[room - 1][sub - 1].x) * 0.075 + func_8001EB64((s16)(D_801BEB4E + 0xA00)) * 120.0f;
                arg1[i + 2]->p30->f8 = *((struct func_8013DC60_Ent *)&D_801BEB50)[i].p8 + D_8017E170[room - 1][sub - 1].y;
                arg1[i + 2]->p30->fC = (*((struct func_8013DC60_Ent *)&D_801BEB50)[i].pC + D_8017E170[room - 1][sub - 1].z) * 0.075 + func_8001EAD0((s16)(D_801BEB4E + 0xA00)) * 120.0f;
            }
        }
    }
    CAM->f28 = D_8017E404[room - 1].x;
    CAM->f2C = D_8017E404[room - 1].y;
    CAM->f34 = D_801BEB40 - 1.0f;
    CAM->f38 = D_801BEB44 - 100.0f;
    CAM->f3C = D_801BEB48;
    CAM->f40 = D_801BEB40;
    CAM->f44 = D_801BEB44;
    CAM->f48 = D_801BEB48;
    CAM->f4C = func_8001EAD0((s16)((-0x800 - D_801BEB4E) & 0x1FFF));
    CAM->f54 = func_8001EB64((s16)((-0x800 - D_801BEB4E) & 0x1FFF));
    if (room == 4 && sub == 6) {
        CAM->f28 = 50.0f;
        CAM->f2C = 150.0f;
    }
    if (room == 4 && sub == 8) {
        CAM->f28 = 30.0f;
        CAM->f2C = 170.0f;
    }
}
