#include "common.h"


typedef struct func_8012F30C_StructNode {
    struct func_8012F30C_StructNode *next;
    u8 pad4[4];
    struct func_8012F30C_StructNode *child;
    u8 padC[0x29];
    u8 id;
} func_8012F30C_StructNode;

typedef struct func_8012F30C_StructGlobal {
    u8 pad[0x108];
    u8 id;
} func_8012F30C_StructGlobal;

extern u8 D_801BBBF0[];

s32 func_8012F30C(func_8012F30C_StructNode *arg0) {
    if (arg0->id != 0 && arg0->id == ((func_8012F30C_StructGlobal *)D_801BBBF0)->id) {
        return 1;
    }
    arg0 = arg0->child;
    if (arg0 != NULL) {
        while (arg0 != NULL) {
            if (arg0->id != 0 && arg0->id == ((func_8012F30C_StructGlobal *)D_801BBBF0)->id) {
                return 1;
            }
            arg0 = arg0->next;
        }
    }
    return 0;
}
