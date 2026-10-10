#include "context.h"

void func_8024458C(struct func_802433D4_Struct *arg0, s32 arg1);

typedef struct func_802444F8_Struct {
    u8 pad[0x5C];
    s32 unk5C;
} func_802444F8_Struct;

extern struct func_80243290_StructTriple D_80252418;
extern u8 D_80252844[];

void func_802444F8(func_802444F8_Struct *arg0, s32 arg1, s32 arg2) {
    s32 val = arg0->unk5C;

    if ((func_80010550(arg1, val, arg2) != 0) && (func_800178E8() != 0)) {
        func_8013A1B4((void **)arg1, D_80252418, 0xFFFFFF);
        func_800179B0(D_80252844);
        func_800058DC(arg0, (void *)func_8024458C);
    }
}
