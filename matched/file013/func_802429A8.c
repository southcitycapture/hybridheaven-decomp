#include "context.h"
typedef struct func_80242A3C_StructVec {
    f32 x, y, z;
} func_80242A3C_StructVec;
extern s32 func_8012CE9C(s32, void *, func_80242A3C_StructVec, s32);
extern s32 func_80010550(s32, void *);
void func_80242A3C(func_80242958_Struct0 *arg0, s32 arg1);

typedef struct func_802429A8_StructVec { f32 x, y, z; } func_802429A8_StructVec;
extern func_802429A8_StructVec D_80245DD4;

void func_802429A8(func_80242958_Struct0 *arg0, s32 arg1) {
    func_80242958_Struct5C *sp24;

    sp24 = arg0->unk5C;
    if (func_8012CE9C(arg1, sp24, *(func_80242A3C_StructVec *)&D_80245DD4, 0xA) == 0) {
        func_80010550(arg1, sp24);
        if (func_80133A24(8) != 0) {
            sp24->unk78 = 1;
            func_800058DC((s32)arg0, func_80242A3C);
        }
    }
}
