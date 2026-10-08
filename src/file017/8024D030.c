#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024D030.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024D650.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024D768.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024D9B8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024DB60.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024DD20.s")


extern void func_800058DC(void *arg0, void *arg1);
extern void func_80020718(s32 arg0);
extern void func_80133980(s32 arg0);
extern void func_8015115C(s32 arg0, void *arg1);
extern s32 func_801516CC(s32 arg0);
extern void func_801C4058(void *arg0, s32 arg1, s32 arg2, s32 arg3);
extern void func_8024CF18(s32 arg0, s32 arg1);
extern void func_8024F0B0(void);
extern void func_8024DEC4(void);
extern s32 D_8025DDF0;
extern s32 D_80259054;

struct func_8024DDE4_Struct {
    u8 pad[0x3C];
    u16 unk3C;
};

void func_8024DDE4(struct func_8024DDE4_Struct *arg0) {
    s32 var_s0;
    u16 temp_s0;

    temp_s0 = arg0->unk3C;
    arg0->unk3C = (u16) (temp_s0 + 1);
    func_8024F0B0();
    func_801C4058(arg0, 0xBE4CCCCD, 0xBECCCCCD, 0);
    if ((s32) temp_s0 >= 0x2D) {
        func_80133980(0x131);
        arg0->unk3C = 0U;
        for (var_s0 = 1; var_s0 < func_801516CC(D_8025DDF0); var_s0++) {
            func_8024CF18(D_8025DDF0, var_s0 & 0xFF);
        }
        func_8015115C(D_8025DDF0, &D_80259054);
        func_80020718(0x185);
        func_800058DC(arg0, &func_8024DEC4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024DEC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024DFA8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024E230.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024E3F0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024E598.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024E5E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024E654.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024E79C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024EA0C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024EE8C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024F030.s")


typedef struct func_8024F078_StructInner {
    u8 pad[0x22];
    u8 unk22;
} func_8024F078_StructInner;

typedef struct func_8024F078_Struct {
    u8 pad[4];
    func_8024F078_StructInner *unk4;
} func_8024F078_Struct;

extern s32 func_80133A24(s32);

void func_8024F078(s32 arg0, func_8024F078_Struct *arg1) {
    if (func_80133A24(0x138) != 0) {
        arg1->unk4->unk22 = 0;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024F0B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024D030/func_8024F294.s")

