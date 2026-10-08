#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file050/801E1BE0/func_801E1BE0.s")


extern void D_8038C158();

s32 func_801E1CA8(s32 arg0, s32 arg1) {
    if (func_801C0B8C(0x90F560) != 0) {
        D_8038C158();
        return 2;
    }
    return 1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file050/801E1BE0/func_801E1CF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file050/801E1BE0/func_801E1DC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file050/801E1BE0/func_801E1DD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file050/801E1BE0/func_801E1E14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file050/801E1BE0/func_801E1EA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file050/801E1BE0/func_801E1EB0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file050/801E1BE0/func_801E1F44.s")


extern u32 D_8038D8D0;
extern s32 D_801E3A74;
extern s32 D_801E3A78;

s32 func_801E2970(s32 arg0, s32 arg1) {
    *(u8 *)(*(u32 *)(*(u32 *)(D_8038D8D0 + 0x18) + 0x30) + 0x4B) = 0xFF;
    D_801E3A74 = 0;
    D_801E3A78 = 0;
    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file050/801E1BE0/func_801E29A8.s")


extern void func_801BF628(s32 arg0, void *arg1);
extern void func_8038D28C(s32 arg0);

s32 func_801E2CF0(s32 arg0, s32 arg1) {
    u8 sp18[0x1F8];

    func_801BF628(3, sp18);
    if (*(s32 *)(sp18 + 0xC) >= 2) {
        func_8038D28C(0x502);
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file050/801E1BE0/func_801E2D40.s")


extern s32 D_801E3D90[];

void func_801E2E14(s32 arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4) {
    s32 temp_v0;

    temp_v0 = arg0 * 4;
    D_801E3D90[arg0] = arg1;
    if (arg1 != 0) {
        *(u8 *)(*(s32 *)(D_8038D8D0 + temp_v0 + 0x20) + 0x22) = 1;
    } else {
        *(u8 *)(*(s32 *)(D_8038D8D0 + temp_v0 + 0x20) + 0x22) = 0;
    }
    *(f32 *)(*(s32 *)(*(s32 *)(D_8038D8D0 + temp_v0 + 0x20) + 0x30) + 4) = arg2;
    *(f32 *)(*(s32 *)(*(s32 *)(D_8038D8D0 + temp_v0 + 0x20) + 0x30) + 8) = arg3;
    *(f32 *)(*(s32 *)(*(s32 *)(D_8038D8D0 + temp_v0 + 0x20) + 0x30) + 0xC) = arg4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file050/801E1BE0/func_801E2EAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file050/801E1BE0/func_801E2F70.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file050/801E1BE0/func_801E3420.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file050/801E1BE0/func_801E3450.s")


extern s32 func_801E2EAC(s32);

s32 func_801E37B8(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i != 0xE; i++) {
        func_801E2EAC(i);
    }
    return 4;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file050/801E1BE0/func_801E3804.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file050/801E1BE0/func_801E388C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file050/801E1BE0/func_801E38BC.s")


extern void D_8038C97C();
extern s16 D_80089354;
extern u8 D_801BBD54;
extern s32 D_801D8D60;

s32 func_801E38CC(s32 arg0, s32 arg1) {
    if (D_801BBD54 != 0) {
        return 3;
    }
    if (func_801C0B8C(0xCDFE60) != 0) {
        D_80089354 = 0;
        D_8038C97C(D_801D8D60, 0, 0, 0, 0x3C, 0, 1);
        return 4;
    }
    return 3;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file050/801E1BE0/func_801E3954.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file050/801E1BE0/func_801E397C.s")

