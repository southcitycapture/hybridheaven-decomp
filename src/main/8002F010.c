#include "common.h"


typedef struct func_8002F010_StructC {
    s32 a, b, c;
} func_8002F010_StructC;
typedef struct func_8002F010_StructD {
    s32 a, b;
} func_8002F010_StructD;
typedef struct func_8002F010_StructB {
    s32 a;
    s32 b;
    u8 type;
    u8 pad9[3];
    func_8002F010_StructC *c;
    func_8002F010_StructD *d;
} func_8002F010_StructB;
typedef struct func_8002F010_StructA {
    u8 pad0[4];
    void *fn;
    u8 pad8[0x10];
    s32 v18;
    s32 v1C;
    s32 v20;
    s32 v24;
    func_8002F010_StructB *src;
    s32 v2C;
    u8 pad30[8];
    s32 v38;
    s32 v3C;
    s32 v40;
    s32 v44;
} func_8002F010_StructA;

extern void func_80031AE0(void *, s32, s32, void *);
extern u8 func_8002F1E4[];
extern u8 func_8002F6BC[];

void func_8002F010(func_8002F010_StructA *arg0, s32 arg1, func_8002F010_StructB *arg2) {
    if (arg1 != 4) {
        if (arg1 == 5) {
            arg0->src = arg2;
            arg0->v44 = arg2->a;
            arg0->v38 = 0;
            switch (arg2->type) {
            case 0:
                arg0->fn = func_8002F6BC;
                arg0->src->b = (arg0->src->b / 9) * 9;
                arg0->v2C = arg0->src->d->a * 0x10 * arg0->src->d->b;
                if (arg0->src->c != NULL) {
                    arg0->v1C = arg0->src->c->a;
                    arg0->v20 = arg0->src->c->b;
                    arg0->v24 = arg0->src->c->c;
                    func_80031AE0(arg0->src->c + 1, arg0->v18, 0x20, arg0);
                } else {
                    arg0->v24 = 0;
                    arg0->v20 = 0;
                    arg0->v1C = 0;
                }
                break;
            case 1:
                arg0->fn = func_8002F1E4;
                if (arg0->src->c != NULL) {
                    arg0->v1C = arg0->src->c->a;
                    arg0->v20 = arg0->src->c->b;
                    arg0->v24 = arg0->src->c->c;
                } else {
                    arg0->v24 = 0;
                    arg0->v20 = 0;
                    arg0->v1C = 0;
                }
                break;
            }
        }
    } else {
        arg0->v3C = 0;
        arg0->v40 = 1;
        arg0->v38 = 0;
        if (arg0->src != NULL) {
            arg0->v44 = arg0->src->a;
            if (arg0->src->type == 0) {
                if (arg0->src->c != NULL) {
                    arg0->v24 = arg0->src->c->c;
                }
            } else if (arg0->src->type == 1) {
                if (arg0->src->c != NULL) {
                    arg0->v24 = arg0->src->c->c;
                }
            }
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002F010/func_8002F1E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002F010/func_8002F590.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002F010/func_8002F6BC.s")

