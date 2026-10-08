#include "common.h"


extern void func_801BF6C4(s32 a0);
extern void func_8038C9FC(s32 a0, s32 a1);
extern s32 D_8038DB6C;
extern s32 D_8038DB70;
extern s32 D_8038DB74;

void func_8038C8D0(void) {
    D_8038DB6C = 0;
    func_8038C9FC(D_8038DB70, D_8038DB74);
    func_801BF6C4(6);
    D_8038DB6C = 1;
}


extern s32 func_801BF968(void);
extern void func_801BF850(void *a0, s32 a1, void *a2);
extern void func_8038CA0C(void);
extern u8 D_8038DB60[];
extern u8 D_8038E100[];

void func_8038C914(void) {
    if (func_801BF968() != 0) {
        D_8038DB70 = 0;
        D_8038DB74 = 0;
        func_801BF850(D_8038DB60, 6, D_8038E100);
        func_8038CA0C();
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038C8D0/func_8038C968.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038C8D0/func_8038C974.s")


extern void func_801C276C(void);
extern void func_8001E978(s32, u8, u8, u8, s32, s32, s32, s32);

void func_8038C97C(s32 arg0, u8 arg1, u8 arg2, u8 arg3, u16 arg4, u16 arg5, u8 arg6) {
    func_801C276C();
    func_8001E978(arg0, arg1, arg2, arg3, (s32) arg4, (s32) arg5, (s32) arg6, 0);
}


extern u8 D_801BBD54;

s32 func_8038C9D8(void) {
    s32 ret;

    ret = 0;
    return (D_801BBD54 != 0) ? 1 : ret;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038C8D0/func_8038C9FC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038C8D0/func_8038CA0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038C8D0/func_8038CA14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038C8D0/func_8038CA20.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file100/8038C8D0/func_8038CA2C.s")

