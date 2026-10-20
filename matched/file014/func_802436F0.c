#include "context.h"

void func_80243820(struct func_80246478_Obj *arg0, s32 arg1);
extern u8 D_801BBF7C[];
extern u8 D_8024A618[];
extern struct func_802438E4_Table D_802484DC;

void func_802436F0(struct func_80246478_Obj *arg0, s32 arg1) {
    void *sp5C;
    f32 sp50[3];

    sp5C = arg0->unk5C;
    func_8013A334(sp50, arg1, sp5C, 6);
    func_8011AAF4(D_8024A618, 0x1FF, arg0, 0, 1, 4.0f, -75.0f, 57.0f, -372.0f, 4294967296.0f, sp50[0], sp50[1], sp50[2], 0.0f, 35.0f, -1, -1);
    if (func_8012CE9C(arg1, sp5C, D_802484DC, 0xA) == 0) {
        func_80133980(0x49);
        D_801BBF7C[0x10] = 1;
        func_800058DC(arg0, (void *)func_80243820);
    }
}
