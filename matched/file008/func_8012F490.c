#include "context.h"

typedef struct func_8012F490_StructArgs {
    s32 words[5];
} func_8012F490_StructArgs;

typedef struct func_8012F490_StructObj {
    u8 pad[0x92];
    s16 unk92;
    u8 pad94[4];
    s16 unk98;
} func_8012F490_StructObj;

extern func_8012F490_StructArgs D_80178C10;

extern func_8012F490_StructObj *D_8012C4D0(s32, func_8012F490_StructArgs, u8);

#define SPAWN(a) D_8012C4D0(a, D_80178C10, 3)

void *func_8012F490(s32 arg0, s32 arg1) {
    func_8012F490_StructObj *obj;

    if (arg1 == 0) goto mode0;
    if (arg1 != 1) goto def;
    goto mode1;
mode0:
    {
        obj = SPAWN(arg0);
        if (obj != NULL) {
            obj->unk92 = 1;
            obj->unk98 = 0;
        }
        obj = SPAWN(arg0);
        if (obj != NULL) {
            obj->unk92 = 1;
            obj->unk98 = 1;
        }
        obj = SPAWN(arg0);
        if (obj != NULL) {
            obj->unk92 = 1;
            obj->unk98 = 2;
        }
        obj = SPAWN(arg0);
        if (obj != NULL) {
            obj->unk92 = 1;
            obj->unk98 = 3;
        }
        obj = SPAWN(arg0);
        if (obj != NULL) {
            obj->unk92 = 1;
            obj->unk98 = 4;
        }
        return obj;
    }
mode1:
    {
        obj = SPAWN(arg0);
        if (obj != NULL) {
            obj->unk92 = 0;
            obj->unk98 = 0;
        }
        obj = SPAWN(arg0);
        if (obj != NULL) {
            obj->unk92 = 0;
            obj->unk98 = 1;
        }
        obj = SPAWN(arg0);
        if (obj != NULL) {
            obj->unk92 = 0;
            obj->unk98 = 2;
        }
        obj = SPAWN(arg0);
        if (obj != NULL) {
            obj->unk92 = 0;
            obj->unk98 = 3;
        }
        obj = SPAWN(arg0);
        if (obj != NULL) {
            obj->unk92 = 0;
            obj->unk98 = 4;
        }
        return obj;
    }
def:
    return NULL;
}
