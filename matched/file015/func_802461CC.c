#include "context.h"

typedef struct func_802461CC_StructVec {
    f32 x, y, z;
} func_802461CC_StructVec;
typedef struct func_802461CC_StructObj {
    u8 pad[0x22];
    u8 flag;
    u8 pad23[9];
    func_802461CC_StructVec *p2C;
    func_802461CC_StructVec *p30;
} func_802461CC_StructObj;
typedef struct func_802461CC_StructGlobal {
    u8 pad[0x24];
    func_802461CC_StructObj *p24;
} func_802461CC_StructGlobal;
typedef struct func_802461CC_StructState {
    u8 pad[0x3C];
    u16 count;
    u8 pad3E[6];
    f32 velocity;
    u8 pad48[0x50];
    f32 height;
    u8 pad9C[4];
    f32 scale;
} func_802461CC_StructState;

extern void func_801C4058(void *, f32, f32, s32);
extern void func_80246388();
extern const f64 D_80258B80, D_80258B88;

void func_802461CC(func_802461CC_StructState *arg0, func_802461CC_StructObj **arg1) {
    s32 count;
    f32 velocity;
    f64 displacement;
    func_802461CC_StructVec *p;
    func_802461CC_StructVec *q;

    count = arg0->count++;
    func_801C4058(arg0, 0.0f, 0.0f, 11);
    if (count >= 30) {
        if (count == 30) {
            func_80020718(442);
        }
        velocity = arg0->velocity;
        displacement = D_80258B80;
        arg0->height += velocity;
        p = ((func_802461CC_StructGlobal *)D_8025A2A4)->p24->p2C;
        p->z += velocity;
        arg0->velocity -= 0.5;
        arg1[0]->p30->z = arg0->height;
        arg1[1]->p30->z = arg0->height;
        arg1[2]->p30->z = arg0->height;
        arg1[5]->p30->z = (arg0->scale * D_80258B88) + (arg0->height + 9.5);
        arg1[6]->p30->z = arg0->height;
        arg1[7]->p30->z = arg0->height;
        q = arg1[6]->p30;
        q->y -= displacement;
        p = arg1[7]->p30;
        p->y += displacement;
        if (count >= 60) {
            arg1[0]->flag = 0;
            arg0->count = 0;
            func_80133980(115);
            func_800058DC(arg0, func_80246388);
        }
    }
}
