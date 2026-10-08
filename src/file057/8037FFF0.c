#include "common.h"


extern void func_80005670(s32, void *);
extern u8 D_801BC3D8[];
extern u8 D_803897CC[];
extern s32 D_8038CFB0;

s32 func_8037FFF0(s32 arg0) {
    if (*(u16 *)&D_801BC3D8[0x3B2] == 0) {
        func_80005670(arg0, D_803897CC);
        D_8038CFB0 = arg0;
        *(u16 *)&D_801BC3D8[0x3B2] = 1;
        return 0;
    }
    if (*(u16 *)&D_801BC3D8[0x3B2] == 2) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037FFF0/func_8038005C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037FFF0/func_80380140.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037FFF0/func_8038047C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037FFF0/func_803805A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037FFF0/func_803807D8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037FFF0/func_8038092C.s")


extern void func_80005700(void);

struct func_80380AF4_Struct {
    u8 pad[8];
    s32 unk8;
};

void func_80380AF4(struct func_80380AF4_Struct *arg0, s32 arg1) {
    if (arg0->unk8 == 0) {
        func_80005700();
        *(s16 *)&D_801BC3D8[0x3B2] = 2;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037FFF0/func_80380B30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037FFF0/func_80380CD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037FFF0/func_80381230.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/8037FFF0/func_803812C0.s")

