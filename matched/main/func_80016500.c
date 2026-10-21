#include "context.h"

s32 func_80016500(void *arg0, s32 arg1) {
    func_8001643C_StructEntry *node;
    s32 old;
    func_8001643C_StructEntry *head;
    s32 result;

    old = D_8008DFA8;
    if (arg1 != old) {
        node = &D_8008DCA8[arg1];
        D_8008DCA8[node->next].unk2 = node->unk2;
        D_8008DCA8[node->unk2].next = node->next;
        head = &D_8008DCA8[old];
        D_8008DCA8[head->next].unk2 = arg1;
        D_8008DFA8 = arg1;
        node->next = head->next;
        head->next = arg1;
        node->unk2 = old;
    }
    if (*(s32 *)((u8 *)arg0 + 8) == 0x10) {
        result = D_8008DCA8[arg1].value;
    } else {
        result = D_8008DCA8[arg1].value * 2;
    }
    return result;
}
