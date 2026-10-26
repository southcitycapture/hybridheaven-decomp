#define func_8024F188 func_8024F188__ctx
#include "context.h"
#undef func_8024F188

typedef struct func_8024F188_StructArg {
    u8 pad[0x5C];
    s32 unk5C;
} func_8024F188_StructArg;

extern u8 D_80254D64[];
extern f32 D_8025A0A4;
extern func_8024EF6C_Vec D_80254AD0;
extern void func_8024F24C();

void func_8024F188(func_8024F188_StructArg *arg0, void ** volatile arg1, void **arg2) {
    s32 id = arg0->unk5C;
    if (func_80010550(arg1, id, arg2) != 0 && func_800178E8() != 0) {
        func_80017990(D_80254D64);
        func_8013A1B4(arg1, D_80254AD0, 0xFFFFFF);
        ((func_8024EF6C_Inner *)D_801BBBF0.unkE0->unk2C)->unk4 = 150.0f;
        D_801BBBF0.unkE0->unk2C->unkC = D_8025A0A4;
        func_800058DC(arg0, (void *)func_8024F24C);
    }
}
