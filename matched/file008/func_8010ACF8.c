#define func_80108718 func_80108718_ctx38
#define func_80108814 func_80108814_ctx48
#include "context.h"

typedef struct func_8010ACF8_StructNode {
    u8 type;
    u8 pad1[3];
    s16 next;
    u8 pad6[2];
    s16 min[3];
    s16 max[3];
} func_8010ACF8_StructNode;

typedef struct func_8010ACF8_StructArg {
    func_8010ACF8_StructNode *node;
    f32 a[3];
    f32 b[3];
    u8 pad1C[4];
    f32 distance;
} func_8010ACF8_StructArg;

extern s32 func_8010B73C();

s32 func_8010ACF8(func_8010ACF8_StructArg *arg0)
{
    s32 result;
    f32 fa, fb, fc, fd, fe;
    u8 v;
    s16 minX, minY, minZ;
    s16 maxX, maxY, maxZ;
    func_8010ACF8_StructNode *node;
    func_8010ACF8_StructNode *base;
    func_8010ACF8_StructNode *start;

    arg0->distance = 2147483648.0f;
    result = 0;
    while (arg0->node->type == 0xFD) {
        arg0->node++;
    }
    if (arg0->node->type == 0xFE) {
        node = arg0->node;
        if (arg0->a[0] < arg0->b[0]) {
            minX = (s16)arg0->a[0];
            maxX = (s16)arg0->b[0];
        } else {
            minX = (s16)arg0->b[0];
            maxX = (s16)arg0->a[0];
        }
        if (arg0->a[1] < arg0->b[1]) {
            minY = (s16)arg0->a[1];
            maxY = (s16)arg0->b[1];
        } else {
            minY = (s16)arg0->b[1];
            maxY = (s16)arg0->a[1];
        }
        if (arg0->a[2] < arg0->b[2]) {
            minZ = (s16)arg0->a[2];
            maxZ = (s16)arg0->b[2];
        } else {
            minZ = (s16)arg0->b[2];
            maxZ = (s16)arg0->a[2];
        }
        start = arg0->node;
        if (start->type != 0xFF) {
            do {
                if (maxX >= node->min[0] && node->max[0] >= minX &&
                    maxY >= node->min[1] && node->max[1] >= minY &&
                    maxZ >= node->min[2] && node->max[2] >= minZ) {
                    arg0->node = start + node->next;
                    if (func_8010B73C(arg0)) {
                        result = 1;
                    }
                }
                node++;
            } while (node->type != 0xFF);
        }
    } else {
        if (func_8010B73C(arg0)) {
            result = 1;
        }
    }
    return result;
}
