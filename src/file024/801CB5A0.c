#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CB5A0/func_801CB5A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CB5A0/func_801CB788.s")


extern s32 func_8037D598(void);
extern void func_800058DC(void *, void *);
extern void func_801CB788(void);

void func_801CBB88(void *arg0, void **arg1) {
    s32 i;

    if (func_8037D598() != 0) {
        i = 0;
        do {
            ((u8 *)arg1[i])[0x22] = 1;
            i = (i + 1) & 0xFF;
        } while (i < 9);
        func_800058DC(arg0, func_801CB788);
    }
}


extern void func_80005670(void *, void *);
extern u8 D_8017DD93;
extern u8 D_80044090[];
extern void func_801CBC48(void);
extern void func_801CBD54(void);

void func_801CBBEC(void *arg0, void *arg1) {
    if (D_8017DD93 != 0) {
        func_80005670(arg0, D_80044090);
        func_800058DC(arg0, func_801CBC48);
        return;
    }
    func_800058DC(arg0, func_801CBD54);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CB5A0/func_801CBC48.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CB5A0/func_801CBCE8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file024/801CB5A0/func_801CBD54.s")

