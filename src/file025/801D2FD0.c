#include "common.h"


extern void func_8013B570(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);
extern s32 D_801DB354;
extern s32 D_801DB358;
extern s32 D_801DB35C;
extern void func_801D3024();

void func_801D2FD0(s32 arg0, s32 arg1) {
    D_801DB354 = 0;
    D_801DB358 = 0;
    D_801DB35C = 1;
    func_8013B570(arg0, 0x2F, 0, 4, &func_801D3024);
}

/* starting point: func_801D8764 (file025), whose assembly is 100% the same as this function's */
struct func_801D3024_Struct { u8 pad[0x24]; s32 unk24; };
extern void func_801D306C();
extern u8 D_801D3024[];

void func_801D3024(struct func_801D3024_Struct *arg0, s32 arg1) {
    if (arg0->unk24 != 0) {
        func_800058DC(arg0, (void (*)(void))func_801D306C);
        return;
    }
    func_800058DC(arg0, (void (*)(void))D_801D3024);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file025/801D2FD0/func_801D306C.s")



s32 func_801D3260(void) {
    return D_801DB358 != 0;
}



s32 func_801D3270(void) {
    if (D_801DB358 != 0) {
        return 0;
    }
    if (D_801DB354 != 0) {
        return 0;
    }
    return D_801DB35C;
}

extern u8 D_801E1480;

u8 *func_801D32B0(void) {
    return &D_801E1480;
}


struct func_801D32BC_Struct {
    s32 unk0;
    u16 unk4;
};

extern struct func_801D32BC_Struct D_801E1490;

s32 func_801D32BC(s32 arg0, u16 arg1) {
    if (arg0 != D_801E1490.unk0) {
        return 0;
    }
    return D_801E1490.unk4 == arg1;
}

