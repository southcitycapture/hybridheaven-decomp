#include "context.h"

typedef struct func_8012F87C_StructObj {
    u8 pad[0x90];
    u8 mode;
} func_8012F87C_StructObj;
extern func_8012F490_StructArgs D_80178CB4;

#define CREATE(a) ((func_8012F87C_StructObj *)D_8012C4D0(a, D_80178CB4, 3))

void *func_8012F87C(s32 arg0, s32 arg1) {
    func_8012F87C_StructObj *obj;

    if (arg1 == 0) goto mode0;
    if (arg1 != 1) goto dflt;
    goto mode1;
mode0:
    obj = CREATE(arg0);
    if (obj != NULL) {
        obj->mode = 0;
    }
    obj = CREATE(arg0);
    if (obj != NULL) {
        obj->mode = 2;
    }
    return obj;
mode1:
    obj = CREATE(arg0);
    if (obj != NULL) {
        obj->mode = 1;
    }
    obj = CREATE(arg0);
    if (obj != NULL) {
        obj->mode = 2;
    }
    return obj;
dflt:
    return NULL;
}
