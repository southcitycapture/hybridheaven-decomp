#include "common.h"


struct func_80006AB4_StructNode {
    u8 pad0[0xC];
    const struct func_80006AB4_StructNode *next;
    u8 pad10[0x12];
    u8 flag;
};

s32 func_80006AB4(void *arg0) {
    s32 value;
    const struct func_80006AB4_StructNode *node = arg0;
    value = node->flag;
    while (value != 0 && node->next != NULL) {
        node = node->next;
        value = node->flag;
    }
    return value;
}
