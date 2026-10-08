#include "context.h"

extern void func_8012C228(s32, s32, s32);
extern void func_802448BC(void);
extern s32 D_8025C6F4;

void func_802447F0(s32 arg0, struct func_80244600_Struct1 **arg1) {
    func_80005F6C((void *) arg0, D_80164F40);
    func_80006214((void *) arg0);
    D_8025C6F4 = arg0;
    func_8012C89C((void *) arg0, 0, 0x3CB, 6);
    func_8012C2DC(0);
    (*arg1)->unk30->unk4 = 0.0f;
    (*arg1)->unk30->unk8 = 200.0f;
    (*arg1)->unk30->unkC = 404.0f;
    (*arg1)->unk30->unk12 = 0x1000;
    func_8012C228(arg0, 0x3CB, 0xA);
    func_800058DC((void *) arg0, func_802448BC);
}
