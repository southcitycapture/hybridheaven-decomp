#include "context.h"

struct func_80000A0C_Node {
    struct func_80000A0C_Node *next; /* 0x00 */
    void *data;                      /* 0x04 */
};

extern void func_80026300(void *a0, void *a1, s32 a2);

void func_80000A0C(u8 *arg0, void *arg1) {
    struct func_80000A0C_Node *node;

    node = *(struct func_80000A0C_Node **)(arg0 + 0x888);
    if (node != NULL) {
        do {
            func_80026300(node->data, arg1, 0);
            node = node->next;
        } while (node != NULL);
    }
}
