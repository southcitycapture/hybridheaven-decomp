#include "common.h"


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
    f32 firstX, secondX, firstY, secondY, firstZ;
    s16 minY, minX;
    f32 secondZ;
    s16 maxX, minZ, maxY;
    s32 maxZ;
    func_8010ACF8_StructNode *node;
    func_8010ACF8_StructNode *start;

    arg0->distance = 2147483648.0f;
    result = 0;
    while (arg0->node->type == 0xFD) {
        arg0->node++;
    }
    if (arg0->node->type == 0xFE) {
        node = arg0->node;
        firstX = arg0->a[0];
        secondX = arg0->b[0];
        if (firstX < secondX) {
            minX = (s16)firstX;
            maxX = (s16)secondX;
        } else {
            minX = (s16)secondX;
            maxX = (s16)firstX;
        }
        firstY = arg0->a[1];
        secondY = arg0->b[1];
        if (firstY < secondY) {
            minY = (s16)firstY;
            maxY = (s16)secondY;
        } else {
            minY = (s16)secondY;
            maxY = (s16)firstY;
        }
        firstZ = arg0->a[2];
        secondZ = arg0->b[2];
        if (firstZ < secondZ) {
            minZ = (s16)firstZ;
            maxZ = (s16)secondZ;
        } else {
            minZ = (s16)secondZ;
            maxZ = (s16)firstZ;
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
