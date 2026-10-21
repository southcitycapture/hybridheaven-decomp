#include "context.h"

extern s32 func_801C1088(s32, s32, s32);
extern void func_801C10D8(s32, s32);
extern s32 func_801C1134(s32, s32);
extern f32 D_801E7948;

typedef struct func_801E65AC_StructVals {
    u8 pad[4];
    f32 x;
    f32 y;
    f32 z;
} func_801E65AC_StructVals;

typedef struct func_801E65AC_StructNode {
    u8 pad[8];
    struct func_801E65AC_StructNode *next;
    u8 padC[0x18];
    struct func_801E65AC_StructNode *obj;
    u8 pad28[4];
    func_801E65AC_StructVals *vals;
} func_801E65AC_StructNode;

#define VALS (((func_801E65AC_StructNode *)func_801DAAF0[9])->next->next->next->next->obj->vals)

s32 func_801E65AC(s32 arg0, s32 arg1) {
    func_801E65AC_StructVals *p;
    f32 ratio;

    ratio = (f32)(u32)func_801C1134(4, 3) / 75.0f;
    VALS->z = -20.0f * ratio + 69.0f;
    if (func_801D7634(0x01B80047, 6) || func_801D7634(0x01B80047, 0x24)) {
        p = VALS;
        func_8038D33C(p->x, p->y, *(s32 *)&p->z, 0x654, D_801E7948, 1.0f);
    }
    if (func_801C1088(4, 3, 0x4B)) {
        func_801C10D8(4, 3);
        return 0x14;
    }
    return 0x13;
}
