#include "context.h"
typedef struct func_80241C1C_Struct {
    s16 sp18;
    s16 pad;
    s32 sp1C;
    f32 sp20;
    s32 pad2[5];
} func_80241C1C_Struct;
void func_80241C1C(s32 arg0, s32 arg1);

void func_80241BBC(s32 arg0, s32 arg1) {
    func_80241C1C_Struct sp;

    if (func_801C3044() == 0) {
        sp.sp18 = 0;
        sp.sp1C = 0x04100045;
        sp.sp20 = 3.0f;
        func_801C2F0C(4, &sp.sp18);
        func_800058DC((void *) arg0, (void *) func_80241C1C);
    }
}
