#include "context.h"
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
void func_8013A334(void *, s32, s32, u16);
s32 func_8035A434(void *arg0);

typedef struct func_8035A734_StructTmp {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8035A734_StructTmp;

extern void func_8035A5B0(void *, s32, func_8035A734_StructTmp, s32);

void func_8035A734(void *arg0, s32 arg1, u16 arg2) {
    s32 sp34;
    u8 *sp30;
    func_8035A734_StructTmp sp24;

    sp34 = *(s32 *)((u8 *)arg0 + 0x5C);
    if (arg0 == (void *)D_801BBCCC) {
        sp30 = D_801BC03C;
    } else {
        sp30 = D_801BC3D8;
    }
    func_8013A334(&sp24, arg1, sp34, arg2);
    func_8035A5B0(arg0, arg1, sp24, func_8035A434(sp30));
}
