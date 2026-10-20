#include "context.h"

struct func_80006370_StructNode {
    u8 pad[0x10];
    struct func_80006370_StructNode *next;
    struct func_80006370_StructNode *prev;
    s32 owner;
};

struct func_80006370_StructOwner {
    u8 pad[0x24];
    struct func_80006370_StructNode *head;
};

void func_80006370(s32 arg0, void *arg1) {
    struct func_80006370_StructNode **link;
    struct func_80006370_StructNode *first;
    struct func_80006370_StructNode *next;

    first = ((struct func_80006370_StructOwner *)arg0)->head;
    if (first != NULL) {
        link = &((struct func_80006370_StructOwner *)arg0)->head;
        if (first != NULL) {
            next = *link;
            do {
                ((struct func_80006370_StructNode *)arg1)->prev = next;
                link = (struct func_80006370_StructNode **)*link;
                next = ((struct func_80006370_StructNode *)link)->next;
                link = &((struct func_80006370_StructNode *)link)->next;
            } while (next != NULL);
        }
        *link = arg1;
    } else {
        ((struct func_80006370_StructOwner *)arg0)->head = arg1;
        ((struct func_80006370_StructNode *)arg1)->prev = NULL;
    }
    ((struct func_80006370_StructNode *)arg1)->next = NULL;
    ((struct func_80006370_StructNode *)arg1)->owner = arg0;
}
