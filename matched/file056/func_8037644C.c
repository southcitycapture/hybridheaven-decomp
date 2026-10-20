#include "context.h"

extern void func_800058DC(void *, void *);
extern s32 func_803757E0(void *, s32, s32, s32);
extern s32 func_8012A94C(void *, s32);
extern void func_803764BC();




void func_8037644C(struct func_8037644C_Struct *arg0, s32 arg1) {
    struct func_8037644C_Obj *sp1C;

    sp1C = arg0->unk5C;
    if (func_803757E0(arg0, arg1, 1, (arg0->unk38->unk10 >> 8) & 0xFF) == 0 && func_8012A94C(arg0, 0x80) == 0) {
        sp1C->unk78 = 1;
        func_800058DC(arg0, (void *) func_803764BC);
    }
}
