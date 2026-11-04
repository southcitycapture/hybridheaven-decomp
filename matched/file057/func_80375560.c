#include "common.h"
extern u8 D_8038CCE0[];


typedef struct func_80375560_StructNode {
    struct func_80375560_StructNode *left;
    u8 pad[4];
    struct func_80375560_StructNode *right;
} func_80375560_StructNode;

typedef struct func_80375560_StructData {
    u8 pad[0xC];
    u16 count;
} func_80375560_StructData;

typedef struct func_80375560_Struct {
    u8 pad[0x24];
    func_80375560_StructNode *root;
    u8 pad2[0x34];
    func_80375560_StructData *data;
} func_80375560_Struct;

extern func_80375560_StructNode *D_8038CD00[];

void func_80375560(func_80375560_Struct *arg0, func_80375560_StructNode **arg1) {
    func_80375560_StructNode **cursor;
    s32 popped;
    s32 i;
    u8 depth;
    u8 *out;
    s32 j;
    func_80375560_StructNode *left;
    func_80375560_StructData *data;
    func_80375560_StructNode *node;

    data = arg0->data;
    depth = 0;
    node = arg0->root;
    for (i = 0; i < data->count; i++) {
            for (j = 0; j < data->count; j++) {
                if (node == arg1[j]) {
                    break;
                }
            }
            D_8038CCE0[i] = j;
            left = node->left;
            if (node->right != NULL) {
                if (left != NULL) {
                    D_8038CD00[depth] = left;
                    depth = (depth + 1) & 0xFF;
                }
                node = node->right;
            } else {
                node = left;
                if ((left == NULL) && (depth != 0)) {
                    node = D_8038CD00[--depth];
                } else {
                    node = left;
                }
            }
    }
}
