#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80373BB0/func_80373BB0.s")


struct func_80373BF0_Struct {
    u8 pad[4];
    s32 *unk4;
};

extern struct func_80373BF0_Struct *D_80171CEC[];

s32 func_80373BF0(u16 arg0, u16 arg1) {
    return D_80171CEC[arg0]->unk4[arg1];
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80373BB0/func_80373C24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80373BB0/func_80373D14.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80373BB0/func_80373F3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80373BB0/func_80374254.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80373BB0/func_80374260.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80373BB0/func_8037470C.s")


struct func_8037488C_StructInner {
    u8 pad0[0x30];
    u16 unk30;
    u16 unk32;
    u8 pad1[0x1C];
    f32 unk50;
};

struct func_8037488C_StructBase {
    u8 pad0[0xE4];
    struct func_8037488C_StructInner *unkE4;
};

struct func_8037488C_StructOut {
    u16 unk0;
    u16 unk2;
    s16 unk4;
    s16 pad6;
    f32 unk8;
};

extern struct func_8037488C_StructBase D_801BCC24;
extern struct func_8037488C_StructOut D_8038CCB0;

void func_8037488C(s32 arg0) {
    struct func_8037488C_StructInner *inner;

    inner = D_801BCC24.unkE4;
    D_8038CCB0.unk0 = inner->unk30;
    D_8038CCB0.unk2 = inner->unk32;
    D_8038CCB0.unk4 = 0;
    D_8038CCB0.unk8 = inner->unk50;
}


extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern u8 D_801BBBF0[];

void func_803748C0(s32 arg0) {
    u8 *temp_a2;
    u8 *temp_v0;

    temp_a2 = *(u8 **)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x2C);
    temp_v0 = *(u8 **)(*(u8 **)(temp_a2 + 0x24) + 0x2C);
    *(f32 *)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x34) = *(f32 *)(temp_v0 + 0x4);
    *(f32 *)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x38) = *(f32 *)(temp_v0 + 0x8);
    *(f32 *)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x3C) = *(f32 *)(temp_v0 + 0xC);
    *(s16 *)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x40) = *(s16 *)(temp_v0 + 0x12);
    *(f32 *)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x44) = func_8001EAD0(*(s16 *)(temp_v0 + 0x12));
    *(f32 *)(*(u8 **)(D_801BBBF0 + 0x1118) + 0x48) = func_8001EB64(*(s16 *)(temp_v0 + 0x12));
    func_8037488C(arg0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80373BB0/func_80374960.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80373BB0/func_80374994.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80373BB0/func_80374B74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80373BB0/func_80374BAC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80373BB0/func_80374CB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80373BB0/func_80374CE4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80373BB0/func_80374D3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80373BB0/func_80374DF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80373BB0/func_80374E48.s")


extern s32 func_80374260(s32, u16, u16, s32);

s32 func_80374E88(s32 arg0, u16 *arg1, u8 arg2) {
    s32 temp_v0;
    s32 temp_v1;

    if (arg1 == NULL) {
        return 0;
    }
    temp_v0 = func_80374260(arg0, arg1[0], arg1[1], 0);
    temp_v1 = temp_v0 & 0xFF;
    if ((temp_v0 != 0) || (arg2 == 0)) {
        return temp_v1;
    }
    return func_80374260(arg0, arg1[0], arg1[1], 1);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80373BB0/func_80374F04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80373BB0/func_8037532C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file057/80373BB0/func_803753C4.s")

