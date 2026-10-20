#include "context.h"
extern u8 D_801E1238;
struct func_801CF418_Struct {
    s32 unk0;
    u16 unk4;
};
extern struct func_801CF418_Struct D_801E1248;
void func_801CF860(s32 arg0);
extern u8 D_8008DA88[];

struct func_801CF180_Struct { s32 x; s32 y; f32 z; };
struct func_801CF180_Obj { u8 pad[0x5C]; struct func_801CF180_Struct v; };
struct func_801CF180_Cam { u8 pad[0x2C]; struct func_801CF180_Obj *o; };
struct func_801CF180_Arg { u8 pad[4]; struct func_801CF180_Cam *c; };
struct func_801CF180_Q { u8 pad[0x76]; u8 f; };
struct func_801CF180_P { u8 pad[0x5C]; struct func_801CF180_Q *q; };

extern u8 D_801BC025[];
extern s32 func_801CC540();
extern void func_8013A28C(u8 *, struct func_801CF180_Struct);
extern s32 func_80011140(void *, void *, struct func_801CF180_Struct, u32);
extern s32 func_80010550(void *, void *);
extern void func_801CF5A0(void *);
extern void func_801CF700(void *);

void func_801CF180(struct func_801CF180_P *arg0, s32 arg1_) {
    struct func_801CF180_Arg *arg1 = (struct func_801CF180_Arg *)arg1_;
    struct func_801CF180_Struct *p;
    struct func_801CF180_Q *q;
    if (func_801CC540() != 0) {
        func_800058DC(arg0, func_801CF180);
        return;
    }
    if (D_801DADFC != 0) {
        func_80006214(arg0);
        func_8013A28C(D_8008DA88, *(struct func_801CF180_Struct *)D_801DADFC);
        q = arg0->q;
        q->f = 1;
        D_801DADFC = 0;
    }
    p = (struct func_801CF180_Struct *)D_801DAE00;
    if (p != 0) {
        if (func_80011140(arg1, arg0->q, *p, (u32)p->z) != 0) {
            D_801DAE00 = 0;
        }
    } else {
        if (func_80010550(arg1, arg0->q) != 0) {
            D_801DAE08 = 1;
        } else {
            D_801DAE08 = 0;
        }
        *(struct func_801CF180_Struct *)&D_801E1248 = arg1->c->o->v;
        *(struct func_801CF180_Struct *)&D_801E1238 = *(struct func_801CF180_Struct *)(D_801BC025 + 3);
    }
    if (D_801DADE0 != 0) func_801CF5A0(arg0);
    if (D_801DADE4 != 0) func_801CF700(arg0);
    if (D_801DAE0C != 0) func_801CF860(arg0);
}
