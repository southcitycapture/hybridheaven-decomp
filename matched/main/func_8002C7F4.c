#include "context.h"

struct func_8002C7F4_Node {
    struct func_8002C7F4_Node *next;
    u8 pad[0xC];
    s32 key;
};

struct func_8002C7F4_Root {
    struct func_8002C7F4_Node *head;
    u8 pad[0x1C];
    s32 base;
};

s32 func_8002C7F4(struct func_8002C7F4_Root *arg0, struct func_8002C7F4_Node **arg1) {
    struct func_8002C7F4_Node *node;
    s32 best;

    *arg1 = NULL;
    best = 0x7FFFFFFF;
    node = arg0->head;
    if (node != NULL) {
        do {
            if ((node->key - arg0->base) < best) {
                *arg1 = node;
                best = node->key - arg0->base;
            }
            node = node->next;
        } while (node != NULL);
    }
    return (*arg1)->key;
}
