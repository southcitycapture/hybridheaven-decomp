#include "context.h"

void func_801C3618(struct func_801C3174_Obj *arg0, s32 arg1) {
    s32 temp_a1;

    temp_a1 = (s32)arg0->unk5C;
    if (func_8012CE9C(arg1, temp_a1, D_801E0B20, 0xA) == 0) {
        if (func_80010550(arg1, temp_a1) != 0) {
            func_800058DC(arg0, func_801C3174);
        }
    }
}
