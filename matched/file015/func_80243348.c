#include "context.h"
extern s32 func_8013A1B4();
extern s32 func_80010550(s32, s32, s32);

extern void func_802433D4();
extern struct func_80243290_StructTriple D_80252128;

void func_80243348(void *arg0, s32 volatile arg1, s32 arg2) {
    s32 unk5C;

    unk5C = *(s32 *) ((u8 *) arg0 + 0x5C);
    func_80010550(arg1, unk5C, arg2);
    if (func_80133A24(0x77) != 0) {
        func_801339D0(0x77);
        func_8013A1B4((void **) arg1, D_80252128, 0xFFFFFF);
        func_800058DC(arg0, (void *) func_802433D4);
    }
}
