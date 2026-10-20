#include "context.h"

typedef struct func_8012C9C0_SB { u8 pad[4]; f32 a; f32 b; f32 c; } func_8012C9C0_SB;
typedef struct func_8012C9C0_SC { u8 pad[0x2C]; func_8012C9C0_SB *x; func_8012C9C0_SB *y; } func_8012C9C0_SC;
typedef struct func_8012C9C0_SO { u8 pad[0x24]; func_8012C9C0_SC *p; u8 pad2[4]; u32 flags; u8 pad3[0x10]; f32 dx; f32 dy; f32 dz; } func_8012C9C0_SO;

void func_8012C9C0(void *arg) {
    func_8012C9C0_SO *o = (func_8012C9C0_SO *)arg;

    if (o->flags & 0x20) {
        if (o->p->x != NULL) {
            o->p->x->a = (f32)((f64)o->p->x->a + (f64)o->dx);
            o->p->x->b = (f32)((f64)o->p->x->b + (f64)o->dy);
            o->p->x->c = (f32)((f64)o->p->x->c + (f64)o->dz);
            return;
        }
        o->p->y->a = (f32)((f64)o->p->y->a + (f64)o->dx);
        o->p->y->b = (f32)((f64)o->p->y->b + (f64)o->dy);
        o->p->y->c = (f32)((f64)o->p->y->c + (f64)o->dz);
    }
}
