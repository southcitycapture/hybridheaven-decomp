#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_80108280.s")

s32 func_80108664(s32 arg0);
extern void (*D_801BBAD4)(void);

extern void func_80108280();
extern s32 func_80108868(f32, f32, s32, s32, f32, f32);
extern s32 D_801BBAD0;
extern s32 D_801BBF7C;

s32 func_801083BC(f32 arg0, f32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5) {
    s32 var_v1;

    func_80108280();
    D_801BBAD4 = func_80108664;
    var_v1 = func_80108868(arg0, arg1, arg2, arg3, arg4, arg5);
    if (D_801BBF7C != D_801BBAD0) {
        var_v1 = 0;
    }
    return var_v1;
}


void func_8010843C(f32 arg0, f32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5) {
    s32 *sp28;
    s32 *sp2C;

    sp28 = &arg2;
    sp2C = &arg3;
    D_801BBAD4 = func_80108664;
    func_80108868(arg0, arg1, arg2, arg3, arg4, arg5);
}

s32 func_80108670(s32 arg0);
s32 func_80108670(s32 arg0);

void func_80108480(f32 arg0, f32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5) {
    s32 *sp28;
    s32 *sp2C;

    sp28 = &arg2;
    sp2C = &arg3;
    D_801BBAD4 = func_80108670;
    func_80108868(arg0, arg1, arg2, arg3, arg4, arg5);
}

s32 func_801086C4(s32 arg0);
s32 func_801086C4(s32 arg0);

void func_801084C4(f32 arg0, f32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5) {
    s32 *sp28;
    s32 *sp2C;

    sp28 = &arg2;
    sp2C = &arg3;
    D_801BBAD4 = func_801086C4;
    func_80108868(arg0, arg1, arg2, arg3, arg4, arg5);
}

s32 func_80108718(s32 arg0);
s32 func_80108718(s32 arg0);

void func_80108508(f32 arg0, f32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5) {
    s32 *sp28;
    s32 *sp2C;

    sp28 = &arg2;
    sp2C = &arg3;
    D_801BBAD4 = func_80108718;
    func_80108868(arg0, arg1, arg2, arg3, arg4, arg5);
}

s32 func_8010876C(s32 arg0);
s32 func_8010876C(s32 arg0);

void func_8010854C(f32 arg0, f32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5) {
    s32 *sp28;
    s32 *sp2C;

    sp28 = &arg2;
    sp2C = &arg3;
    D_801BBAD4 = func_8010876C;
    func_80108868(arg0, arg1, arg2, arg3, arg4, arg5);
}

s32 func_801087C0(s32 arg0);
s32 func_801087C0(s32 arg0);

void func_80108590(f32 arg0, f32 arg1, s32 arg2, s32 arg3, f32 arg4, f32 arg5) {
    s32 *sp28;
    s32 *sp2C;

    sp28 = &arg2;
    sp2C = &arg3;
    D_801BBAD4 = func_801087C0;
    func_80108868(arg0, arg1, arg2, arg3, arg4, arg5);
}


extern void func_8010A1AC(u8, f32, f32, f32, f32, f32, f32);
extern void func_80108814();

void func_801085D4(u8 arg0, f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6) {
    D_801BBAD4 = func_80108814;
    func_8010A1AC(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_80108634.s")


s32 func_80108664(s32 arg0) {
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_80108670.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_801086C4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_80108718.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_8010876C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_801087C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_80108814.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_80108868.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_80109560.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_8010A1AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_8010A6A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_8010ACF8.s")


typedef struct {
    u8 type;
    u8 pad1[3];
    s16 next;
    u8 pad6[2];
    s16 min[3];
    s16 max[3];
} func_8010AF98_Node;

typedef struct {
    func_8010AF98_Node *node;
    f32 a[3];
    f32 b[3];
} func_8010AF98_Arg;

extern s32 func_8010C21C();

s32 func_8010AF98(func_8010AF98_Arg *arg0) {
    func_8010AF98_Node *base;
    s32 i;
    s32 stride;
    s16 x0, y0, z0, x1, y1, z1;

    if (arg0->node->type == 0xFD) {
        arg0->node++;
    }
    if (arg0->node->type == 0xFE) {
        stride = 0x14;
        if (arg0->a[0] < arg0->b[0]) {
            x0 = arg0->a[0];
            x1 = arg0->b[0];
        } else {
            x0 = arg0->b[0];
            x1 = arg0->a[0];
        }
        if (arg0->a[1] < arg0->b[1]) {
            y0 = arg0->a[1];
            y1 = arg0->b[1];
        } else {
            y0 = arg0->b[1];
            y1 = arg0->a[1];
        }
        if (arg0->a[2] < arg0->b[2]) {
            z0 = arg0->a[2];
            z1 = arg0->b[2];
        } else {
            z0 = arg0->b[2];
            z1 = arg0->a[2];
        }
        base = arg0->node;
        for (i = 0; base[i].type != 0xFF; i++) {
            if (x1 >= base[i].min[0] && base[i].max[0] >= x0 && y1 >= base[i].min[1] && base[i].max[1] >= y0 &&
                z1 >= base[i].min[2] && base[i].max[2] >= z0) {
                arg0->node = &base[i];
                stride = base[i].next;
                arg0->node = &base[stride];
                if (func_8010C21C(arg0) != 0) {
                    return 1;
                }
            }
        }
    } else if (func_8010C21C(arg0) != 0) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_8010B238.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_8010B4D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_8010B634.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_8010B73C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_8010C21C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file008/80108280/func_8010CC68.s")

