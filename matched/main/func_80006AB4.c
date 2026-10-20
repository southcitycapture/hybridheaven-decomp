#include "context.h"

struct func_80006AB4_StructNode {
    u8 pad0[0xC];
    struct func_80006AB4_StructNode *next;
    u8 pad10[0x12];
    u8 flag;
};

s32 func_80006AB4(void *arg0) {
    u8 value;
    value = ((struct func_80006AB4_StructNode *)arg0)->flag;
    if (value != 0 && ((volatile struct func_80006AB4_StructNode *)arg0)->next != NULL) {
        arg0 = ((struct func_80006AB4_StructNode *)arg0)->next;
loop:
        value = ((struct func_80006AB4_StructNode *)arg0)->flag;
        if (value != 0) {
            arg0 = ((struct func_80006AB4_StructNode *)arg0)->next;
            if (arg0 != NULL) {
                goto loop;
            }
        }
    }
    return value;
}
