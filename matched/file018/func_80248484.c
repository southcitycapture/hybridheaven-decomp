#define LP(p,l) LQ(p,l)
#define LQ(p,l) p##_##l
#define func_80248484 func_80248484_ctx
#define func_80247754 LP(fA, __LINE__)
#include "context.h"
#undef func_80248484
#undef func_80247754

typedef struct func_80248484_Struct {
    u8 pad0[0x2C];
    s32 unk2C;
    u8 pad30[0x2C];
    s32 unk5C;
    u8 pad60[0x30];
    s16 unk90;
} func_80248484_Struct;

typedef struct func_80248484_Obj {
    u8 pad0[0x90];
    s16 unk90;
    u8 pad92[0x8];
    s16 unk9A;
} func_80248484_Obj;

typedef struct func_80248484_Node {
    u8 pad0[0x4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2];
    s16 unk12;
} func_80248484_Node;

extern func_80247C54_Struct5 D_80258EB8;
extern s32 D_80258FD8;
extern u8 D_8025C4C0[];
extern void func_80248738();

void func_80248484(func_80248484_Struct *arg0, s32 arg1) {
    s32 sp7C;
    s32 pad[2];
    f32 a;
    f32 b;
    s32 i;
    f32 dx;
    f32 dz;
    func_802472C8_StructB *v;
    func_80247C54_StructE *e;
    func_80248484_Obj *obj;
    func_802474E4_StructMid *m;
    s16 t;

    sp7C = arg0->unk5C;
    arg0->unk2C |= 0x80;
    v = D_801BBCD8->unk2C;
    a = v->f[0];
    if (a < D_8025C71C) {
        dx = -(a - D_8025C71C);
    } else {
        dx = a - D_8025C71C;
    }
    b = v->f[2];
    if (b < D_8025C724) {
        dz = -(b - D_8025C724);
    } else {
        dz = b - D_8025C724;
    }
    if ((dz + dx) > 50.0f && D_8025C7E8 == 0) {
        func_8011AAF4(D_8025C4C0, 0x5C9, arg0, 0, 1, 4.0f, a, v->f[1], b, 4294967296.0f, D_8025C71C, D_8025C720, D_8025C724, 0.0f, 35.0f, -1, -1);
    }
    func_80010550(arg1, sp7C);
    if (D_80258FD8 != 4) {
        if ((arg0->unk90 % 12) == 0) {
            e = (func_80247C54_StructE *)D_8025C728;
            for (i = 0; i != 8; i++, e++) {
                if (e->unk0 == 0) {
                    break;
                }
            }
            if (i != 8) {
                obj = func_8012C4D0(arg0, D_80258EB8, 3);
                if (obj != NULL) {
                    obj->unk90 = i;
                    obj->unk9A = D_80258FD8;
                    D_80258FD8++;
                    m = D_801BBCD0;
                    e->unk4 = ((func_80248484_Node *)m->unk2C)->unk4;
                    e->unk8 = ((func_80248484_Node *)m->unk2C)->unk8;
                    e->unkC = ((func_80248484_Node *)m->unk2C)->unkC;
                    e->unk10 = ((func_80248484_Node *)m->unk2C)->unk12;
                    e->unk0 = 1;
                }
            }
        }
    }
    t = arg0->unk90;
    arg0->unk90 = t - 1;
    if (t == 0) {
        func_800058DC(arg0, func_80248738);
    }
}
