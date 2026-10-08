#include "context.h"

extern s32 func_801C3044(void);
extern void func_80020718(s32);
extern void func_801C2F0C(s32, s16 *);
extern void func_80241C88(void);

typedef struct func_80241C1C_Struct {
    s16 sp18;
    s16 pad;
    s32 sp1C;
    f32 sp20;
    s32 pad2[5];
} func_80241C1C_Struct;

void func_80241C1C(s32 arg0, s32 arg1) {
    func_80241C1C_Struct sp;

    if (func_801C3044() == 0) {
        func_80020718(0x1A9);
        sp.sp18 = 0;
        sp.sp1C = 0x04100046;
        sp.sp20 = 3.0f;
        func_801C2F0C(4, &sp.sp18);
        func_800058DC((void *)arg0, func_80241C88);
    }
}
