#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376300/func_80376300.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376300/func_803763D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376300/func_803764CC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376300/func_803765D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376300/func_80376708.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376300/func_803767F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376300/func_80376900.s")


extern void func_803763D4(void);
extern void func_803764CC(void *);
extern void func_803765D4(void);
extern void func_80376708(void);
extern void func_803767F4(void);
extern void func_80376900(void *);
extern u8 D_801BBBF0;
extern u8 D_801BC03C;
extern u8 D_801BC3D8;

void func_80376B2C(void *arg0) {
    u8 *var_v0;
    u32 temp_v1;

    if ((u32) arg0 == (u32) &D_801BBBF0 + 0x44C) {
        var_v0 = &D_801BC3D8;
    } else {
        var_v0 = &D_801BC03C;
    }
    temp_v1 = *(u32 *) ((u8 *) arg0 + 0x38);
    if ((temp_v1 >> 0x1F) == 0) {
        if (((u32) (*(u32 *) (var_v0 + 0x30) << 0xB) >> 0x1E) != 0) {
            func_803767F4();
            func_80376900(arg0);
            return;
        }
        func_803763D4();
        func_803764CC(arg0);
        return;
    }
    if (((u32) (temp_v1 * 8) >> 0x1F) == 1) {
        func_80376708();
        return;
    }
    func_803765D4();
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80376300/func_80376BE4.s")


struct func_80376CCC_Struct {
    u8 pad[0x2D8];
    u8 unk2D8;
    u8 unk2D9;
};

void func_80376CCC(struct func_80376CCC_Struct *arg0) {
    if (arg0->unk2D9 < 0x14) {
        arg0->unk2D8 = 0xB;
        return;
    }
    if (arg0->unk2D9 < 0x1E) {
        arg0->unk2D8 = 0xC;
        return;
    }
    arg0->unk2D8 = 0xB;
}

