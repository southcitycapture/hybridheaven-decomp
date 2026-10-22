#include "context.h"

typedef struct func_802491C4_StructNode {
    u8 pad[4];
    f32 x, y;
    s32 z;
} func_802491C4_StructNode;
typedef struct func_802491C4_StructMid {
    u8 pad[0x30];
    func_802491C4_StructNode *node;
} func_802491C4_StructMid;
typedef struct func_802491C4_Struct {
    u8 pad[0x24];
    func_802491C4_StructMid *mid;
    u8 pad28[0x70];
    u16 kind;
} func_802491C4_Struct;

void func_802491C4(func_802491C4_Struct *arg0) {
    s32 pad[6];
    u16 id;
    s32 k;
    func_802491C4_StructNode *node;

    if (D_8025C7E8 != 0) {
        k = arg0->kind;
        if (k == 0) goto a0;
        if (k == 1) goto a1;
        if (k == 2) goto a2;
        if (k != 3) goto done;
        goto a3;
a0:     id = 0x5CC; if (1) goto done;
a1:     id = 0x5CD; if (1) goto done;
a2:     id = 0x5CE; if (1) goto done;
a3:     id = 0x5CF; if (1) goto done;
    } else {
        k = arg0->kind;
        if (k == 0) goto b0;
        if (k == 1) goto b1;
        if (k == 2) goto b2;
        if (k != 3) goto done;
        goto b3;
b0:     id = 0x577; if (1) goto done;
b1:     id = 0x578; if (1) goto done;
b2:     id = 0x579; if (1) goto done;
b3:     id = 0x57A;
    }
done:
    node = arg0->mid->node;
    func_801FCA4C(node->x, node->y, node->z, 0x442F0000, id);
    node = arg0->mid->node;
    func_801FCAE0(node->x, node->y, node->z, id);
}
