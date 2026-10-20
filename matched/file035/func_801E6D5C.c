#include "context.h"

extern f32 D_801E8D48;

typedef struct func_801E6D5C_Obj {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad1[2];
    s16 unk12;
} func_801E6D5C_Obj;

#define FUNC_801E6D5C_GET(p, off) (*(u8 **)((u8 *)(p) + (off)))
#define FUNC_801E6D5C_OBJ ((func_801E6D5C_Obj *) FUNC_801E6D5C_GET(FUNC_801E6D5C_GET(FUNC_801E6D5C_GET(FUNC_801E6D5C_GET(FUNC_801E6D5C_GET(D_801DAB14, 8), 8), 8), 0x24), 0x2C))

s32 func_801E6D5C(s32 arg0, s32 arg1) {
    if (D_801E8718 == 0) goto case0;
    if (D_801E8718 == 1) goto case1;
    return 5;
case0:
    if (func_801C0B8C(0x29FE534) != 0) {
        FUNC_801E6D5C_OBJ->unk4 = 0.0f;
        FUNC_801E6D5C_OBJ->unk8 = 0.0f;
        FUNC_801E6D5C_OBJ->unkC = D_801E8D48;
        FUNC_801E6D5C_OBJ->unk12 = 0x1800;
        D_801E8718 = 1;
    }
    goto ret5;
case1:
    if (func_801C0B8C(0x2C60AD4) != 0) {
        func_801CC4D8(2, 0x03480042, 0, 0, 5.0f);
        return 6;
    }
    goto ret5;
ret5:
    return 5;
}
