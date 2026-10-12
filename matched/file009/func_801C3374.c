#include "context.h"

extern s32 func_8012CE9C(s32, s32, struct func_801C3174_Global, s32);
extern s32 func_80010550();
extern u8 D_801BBDA0[];
extern void func_801C33FC();

void func_801C3374(struct func_801C3174_Obj *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = (s32) arg0->unk5C;
    if (func_8012CE9C(arg1, temp_a1, D_801E0B20, 0xA) == 0) {
        func_80010550(arg1, temp_a1);
        *(s16 *) (D_801BBDA0 + 0x2C) = 1;
        func_800058DC(arg0, func_801C33FC);
    }
}
