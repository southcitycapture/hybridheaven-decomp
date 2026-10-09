#include "common.h"

extern void func_800058DC(void *arg0, void *arg1);

extern s32 func_80133A24();
extern void *func_801505AC();
extern s32 func_80240994;

void func_802408F0(s32 arg0, s32 arg1) {
    void *temp_v0;

    func_80133A24(0x164);
    func_80133A24(0x165);
    func_80133A24(0x166);
    func_80133A24(0x167);
    if ((func_80133A24(0x164) != 0) && (func_80133A24(0x165) != 0) && (func_80133A24(0x166) != 0) && (func_80133A24(0x167) != 0)) {
        temp_v0 = func_801505AC(0);
        if (temp_v0 != NULL) {
            *(u8 *)((u8 *)temp_v0 + 0xA5) = 1;
            func_800058DC((void *)arg0, (void *)&func_80240994);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file019/802408F0/func_80240994.s")


extern s32 func_801C3D90();
extern void func_802409DC();

void func_802409A0(void *arg0, s32 arg1) {
    if (func_801C3D90() != 0) {
        *(s16 *)((u8 *)arg0 + 0x3C) = 0;
        func_800058DC(arg0, func_802409DC);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file019/802408F0/func_802409DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file019/802408F0/func_80240A68.s")

