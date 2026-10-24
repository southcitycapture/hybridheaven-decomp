#define func_80147370 func_80147370_ctx
#include "context.h"
#undef func_80147370

struct func_80147370_StructNode {
    u8 pad[0x10];
    struct func_80147370_StructNode *next;
};

struct func_80147370_StructArg {
    u8 pad[0x24];
    struct func_80147370_StructNode *head;
};

void func_80147370(void *arg0, u8 arg1, u8 arg2, u8 arg3, u8 arg4) {
    struct func_80147370_StructNode *node;

    node = ((struct func_80147370_StructArg *)arg0)->head;
    while (node != NULL) {
        func_80147250((struct func_80147250_Struct *)node, arg1, arg2, arg3, arg4);
        node = node->next;
    }
}
