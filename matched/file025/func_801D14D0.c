#include "context.h"
/* starting point: func_801D2D3C (file025), whose assembly is 100% the same as this function's */
/* starting point: func_801D6D98 (file025), whose assembly is 97% the same as this function's */

struct func_801D14D0_StructA { s32 a, b, c; };
struct func_801D14D0_StructB { s32 a, b; f32 c; };
struct func_801D14D0_StructP { u8 pad[0x5C]; s32 u5C, u60, u64; };
struct func_801D14D0_StructQ { u8 pad[0x76]; u8 u76; };
struct func_801D14D0_StructR { u8 pad[4]; struct func_801D14D0_StructS *u4; };
struct func_801D14D0_StructS { u8 pad[0x2C]; struct func_801D14D0_StructP *u2C; };
struct func_801D14D0_StructT { u8 pad[0x5C]; struct func_801D14D0_StructQ *u5C; };
void func_80006214();
extern s32 func_801CC540();
extern s32 func_80010550(void *, void *);
extern s32 func_80011140(void *, void *, struct func_801D14D0_StructB, u32);
extern void func_8013A28C(void *, struct func_801D14D0_StructA);
extern u8 D_8008DA88[];
extern u8 D_801BC025[];

void func_801D14D0(struct func_801D14D0_StructT *arg0, struct func_801D14D0_StructR *arg1) {
    struct func_801D14D0_StructB *p;
    struct func_801D14D0_StructQ *q;
    if (func_801CC540() != 0) {
        func_800058DC(arg0, (void (*)(void))func_801D14D0);
        return;
    }
    if (D_801DB144 != 0) {
        func_80006214((s32)arg0);
        func_8013A28C(D_8008DA88, *(struct func_801D14D0_StructA *)D_801DB144);
        q = arg0->u5C;
        q->u76 = 1;
        D_801DB144 = 0;
    }
    p = (struct func_801D14D0_StructB *)D_801DB148;
    if (p != 0) {
        if (func_80011140(arg1, arg0->u5C, *p, (u32)p->c) != 0) {
            D_801DB148 = 0;
        }
    } else {
        if (func_80010550(arg1, arg0->u5C) != 0) {
            D_801DB14C = 1;
        } else {
            D_801DB14C = 0;
        }
        *(struct func_801D14D0_StructA *)&D_801E1380 = *(struct func_801D14D0_StructA *)&arg1->u4->u2C->u5C;
        *(struct func_801D14D0_StructA *)&D_801E1370 = *(struct func_801D14D0_StructA *)&D_801BC025[3];
    }
}
