#include "context.h"

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
