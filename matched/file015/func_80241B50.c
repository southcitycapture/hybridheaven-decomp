#include "context.h"

extern void func_80241BBC(void);
extern s32 func_801C3044(void);
extern void func_801C2F0C(s32, s16 *);
extern void func_800058DC(void *, void *);

typedef struct func_80241B50_Struct {
    s16 sp18;
    s16 pad;
    s32 sp1C;
    f32 sp20;
    s16 sp24;
    u8 pad2[0x12];
} func_80241B50_Struct;

void func_80241B50(s32 arg0, s32 arg1) {
    func_80241B50_Struct sp;

    if (func_801C3044() == 0) {
        sp.sp18 = 0x1000;
        sp.sp1C = 0x04100045;
        sp.sp24 = 0xA;
        sp.sp20 = 1.0f;
        func_801C2F0C(3, &sp.sp18);
        func_800058DC((void *) arg0, (void *) func_80241BBC);
    }
}
