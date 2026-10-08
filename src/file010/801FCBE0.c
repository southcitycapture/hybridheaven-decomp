#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FCBE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FCD4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FCE0C.s")


extern void func_800058DC();
extern void func_801FCF40(void);

void func_801FCF14(u8 *arg0, void *arg1) {
    *(u16 *)(arg0 + 0x3C) = 0;
    func_800058DC(arg0, func_801FCF40);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FCF40.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FCF98.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FD0F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FD110.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FD168.s")


extern void func_801FD0F0(void);

struct func_801FD260_Struct {
    u8 pad0[0x2C];
    u32 unk2C;
    u8 pad1[0x72 - 0x30];
    u16 unk72;
    u8 pad2[0x8C - 0x74];
    void (*unk8C)(void);
};

void func_801FD260(struct func_801FD260_Struct *arg0, struct func_801FD260_Struct *arg1) {
    void (*temp)(void);

    temp = func_801FD0F0;
    arg0->unk2C = arg0->unk2C | 0x8000;
    arg0->unk72 = arg1->unk72;
    arg0->unk8C = temp;
}


s16 func_801FD284(s16 arg0, s16 arg1, f32 arg2) {
    s16 d;

    arg0 &= 0x1FFF;
    arg1 &= 0x1FFF;
    if (arg0 < arg1) {
        d = arg1 - arg0;
        if (d < 0x1000) {
            return (s16)(s32)((f32)arg0 + (f32)d * arg2) & 0x1FFF;
        }
        return (s16)(s32)((f32)arg0 - (f32)(0x2000 - d) * arg2) & 0x1FFF;
    }
    d = arg0 - arg1;
    if (d < 0x1000) {
        return (s16)(s32)((f32)arg0 - (f32)d * arg2) & 0x1FFF;
    }
    return (s16)(s32)((f32)arg0 + (f32)(0x2000 - d) * arg2) & 0x1FFF;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FD3EC.s")


s32 func_801FD4F4(s16 arg0, s16 arg1, s16 arg2) {
    s32 temp_v0;
    s32 temp_a2;

    temp_a2 = arg2;
    arg0 = arg0 & 0x1FFF;
    arg1 = arg1 & 0x1FFF;
    if (arg0 < arg1) {
        temp_v0 = arg1 - arg0;
        if (temp_v0 < 0x1000) {
            if (temp_a2 < temp_v0) {
                goto block_end;
            }
            return 1;
        }
        if (temp_v0 < (0x2000 - temp_a2)) {
            goto block_end;
        }
        return 1;
    }
    temp_v0 = arg0 - arg1;
    if (temp_v0 < 0x1000) {
        if (temp_a2 < temp_v0) {
            goto block_end;
        }
        return 1;
    }
    if (temp_v0 < (0x2000 - temp_a2)) {
        goto block_end;
    }
    return 1;
block_end:
    return 0;
}


s32 func_801FD5BC(f32 arg0, f32 arg1, f32 arg2) {
    if ((arg0 < -1000.0f) || (arg0 > 1000.0f) || (arg1 < -1000.0f) || (arg1 > 1000.0f) || (arg2 < -1000.0f) || (arg2 > 1000.0f)) {
        return 1;
    }
    return 0;
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FD644.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FD68C.s")


extern u8 D_801BBC0D;
extern u8 D_802174D4[];

f32 func_801FD780(u16 arg0) {
    return *(f32 *)(D_802174D4 + ((arg0 * 0xC) + (D_801BBC0D * 4)));
}


struct func_801FD7B4_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad1[0x90 - 0x3E];
    f32 unk90;
    f32 unk94;
    s32 unk98;
    u8 pad2[0xA0 - 0x9C];
    f32 unkA0;
};

extern void func_80129FB8(f32, f32, s32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern void func_801FC830(f32, f32, s32, s32, s32);
extern f32 D_8021922C;
extern void func_801FD884(void);

void func_801FD7B4(struct func_801FD7B4_Struct *arg0, s32 arg1) {
    f32 zero = 0.0f;

    func_80129FB8(arg0->unk90, arg0->unk94, arg0->unk98, zero, zero, zero, zero, 0xFF, 0xFF, 0xFF, 0, 0xFF, 0, 0xB4, -4, D_8021922C, 0x14, 0);
    func_801FC830(arg0->unk90, arg0->unk94, arg0->unk98, 0x43160000, 0x3A8);
    arg0->unk3C = 0;
    arg0->unkA0 = 0.0f;
    func_800058DC(arg0, func_801FD884);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FD884.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FD97C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FDB3C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FDB90.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FDCD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FDDC8.s")


struct func_801FDE78_Struct {
    u8 pad0[0xB0];
    u16 unkB0;
};

extern void func_80002BAC(s32);
extern void func_80020718(s32);
extern void func_801FDEDC(void);

void func_801FDE78(struct func_801FDE78_Struct *arg0, void *arg1) {
    s32 var_s0;

    arg0->unkB0 = 0;
    var_s0 = 0;
    do {
        func_80002BAC(var_s0 & 0xFF);
        var_s0 = (var_s0 + 1) & 0xFF;
    } while (var_s0 < 4);
    func_80020718(0xF);
    func_800058DC(arg0, func_801FDEDC);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FDEDC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FDF1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FE0A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FE250.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FE5F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FE700.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FE790.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FE840.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FEA04.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/801FCBE0/func_801FEA74.s")

