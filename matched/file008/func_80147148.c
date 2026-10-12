#include "context.h"

typedef struct func_80147148_Node {
    u8 pad0[0x10];
    struct func_80147148_Node *unk10;
    u8 pad1[0xE];
    u8 unk22;
} func_80147148_Node;

void func_80147148(func_80147148_Node *arg0, s8 arg1) {
    s8 var_v0;

    var_v0 = arg1;
    if (arg0 != NULL) {
        do {
            arg0->unk22 = var_v0;
            arg0 = arg0->unk10;
        } while (arg0 != NULL);
    }
}
