#include "context.h"

typedef struct func_8000F174_StructVec {
    f32 x, y, z;
} func_8000F174_StructVec;

typedef struct func_8000F174_StructSub {
    u8 pad[0x5C];
    func_8000F174_StructVec vec;
} func_8000F174_StructSub;

typedef struct func_8000F174_StructObj {
    struct func_8000F174_StructObj *next;
    u8 pad4[4];
    struct func_8000F174_StructObj *child;
    u8 padC[0x20];
    func_8000F174_StructSub *sub;
} func_8000F174_StructObj;

void D_8000F174(func_8000F174_StructObj *arg0, func_8000F174_StructVec arg1, u8 arg4);

void func_8000F174(func_8000F174_StructObj *arg0, func_8000F174_StructVec arg1, u8 arg4) {
    func_8000F174_StructObj *child;

    arg0->sub->vec = arg1;
    child = arg0->child;
    if (child != NULL) {
        D_8000F174(child, arg1, 1);
    }
    if (arg4 != 0) {
        if (arg0->next != NULL) {
            D_8000F174(arg0->next, arg1, 1);
        }
    }
}
