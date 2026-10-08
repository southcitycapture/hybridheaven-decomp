#include "context.h"

struct func_801471DC_Node {
    u8 pad0[0x10];
    struct func_801471DC_Node *unk10;
};

void func_801471DC(struct func_801471DC_Node *arg0) {
    if (arg0 != NULL) {
        do {
            func_80006088(arg0);
            arg0 = arg0->unk10;
        } while (arg0 != NULL);
    }
}
