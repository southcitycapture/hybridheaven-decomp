#include "context.h"

typedef struct func_8012E6BC_Struct {
    u8 pad[0x24];
    void *unk24;
} func_8012E6BC_Struct;

extern void func_8012E31C(void *, s32);
extern u8 D_801BCC21;

void func_8012E6BC(func_8012E6BC_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != NULL) {
        func_8012E25C((struct func_8012E25C_StructA *) arg0, arg1);
        if ((func_80126944() != 1) || (D_801BCC21 == 5) || (D_801BCC21 == 7) || (D_801BCC21 == 0xA) || (D_801BCC21 == 0xB)) {
            func_8012CD28(arg0);
            func_8012C9C0(arg0);
            func_8012CE10(arg0);
            func_8012B1E4(arg0, 1);
            func_8012BFA0(arg0);
            func_8012D7A8(arg0);
            func_8012E31C(arg0, arg1);
        }
    }
}
