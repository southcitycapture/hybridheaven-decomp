#include "common.h"
extern s32 func_80010550(s32, void *);
typedef struct func_80242A3C_StructVec {
    f32 x, y, z;
} func_80242A3C_StructVec;
extern s32 func_8012CE9C(s32, void *, func_80242A3C_StructVec, s32);


typedef struct func_80242C58_Struct0 {
    u8 pad[0x5C];
    void *unk5C;
} func_80242C58_Struct0;

typedef struct func_80242C58_StructGlobal {
    u8 pad[0x12];
    s16 unk12, unk14;
} func_80242C58_StructGlobal;
extern void func_801268CC(s32);
extern s32 func_801270C0(void *);
extern func_80242C58_StructGlobal D_801BBBF0;
extern func_80242A3C_StructVec D_80245E04;

void func_80242C58(func_80242C58_Struct0 *arg0, s32 arg1) {
    void *temp_a1;

    temp_a1 = arg0->unk5C;
    if ((func_8012CE9C(arg1, temp_a1, D_80245E04, 10) == 0) &&
        (func_80010550(arg1, temp_a1) != 0) &&
        (func_801270C0(arg0) != 0)) {
        D_801BBBF0.unk12 = 0;
        D_801BBBF0.unk14 = 0;
        func_801268CC(0);
    }
}
