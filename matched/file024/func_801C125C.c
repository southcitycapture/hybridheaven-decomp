#include "context.h"
struct func_801C3410_Struct {
    u8 pad[0x90];
    s8 unk90;
};
extern s32 D_801CC8A4;
void func_801C3410(struct func_801C3410_Struct *arg0, s32 *arg1);

s32 func_801C125C(s8 arg0) {
    if (D_801CC8A4 != 0) {
        ((struct func_801C3410_Struct *)D_801CC8A4)->unk90 = arg0;
        func_800058DC(D_801CC8A4, (void *)func_801C3410);
        return 1;
    }
    return 0;
}
