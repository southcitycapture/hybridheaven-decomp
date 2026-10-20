#include "context.h"
void func_8037EABC(struct func_8037EABC_Struct *arg0);
typedef struct func_803804F0_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x97 - 0x3E];
    s8 unk97;
} func_803804F0_Struct;
void func_803804F0(func_803804F0_Struct *arg0, s32 arg1);
extern void func_80147DCC(s32 a0);

typedef struct func_803803E4_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad1[0x57];
    u8 unk95;
    s8 unk96;
    u8 pad2[0xD];
    struct func_8037FCF8_Sub *unkA4;
} func_803803E4_Struct;

extern void func_8037EBB0(void *);

void func_803803E4(func_803803E4_Struct *arg0, s32 arg1) {
    struct func_8037FCF8_Sub *sp24;
    s32 temp_a2;
    s32 var_v0;
    u16 temp_a1;

    sp24 = arg0->unkA4;
    temp_a1 = sp24->unkC;
    var_v0 = arg0->unk96;
    temp_a2 = var_v0 & 0xFFFF;
    if ((temp_a1 & 0x800) && (var_v0 > 0)) {
        arg0->unk96 = var_v0 - 1;
        var_v0 = arg0->unk96;
    }
    if ((temp_a1 & 0x400) && (var_v0 < (arg0->unk95 - 0xA))) {
        arg0->unk96 = var_v0 + 1;
        var_v0 = arg0->unk96;
    }
    if (temp_a2 != var_v0) {
        func_80020744(0x300);
        func_8037EBB0(arg0);
    }
    func_8037EABC((struct func_8037EABC_Struct *)arg0);
    var_v0 = sp24->unk4;
    if (var_v0 & 0x4000) {
        func_80147DCC(2);
        arg0->unk3C = 0;
        func_801471DC(D_8038A9AC);
        func_800058DC(arg0, func_803804F0);
        return;
    }
    if (var_v0 & 0x1000) {
        func_80148E44(arg0);
        func_80148FC4(arg0, func_8014AB48, 4, 1);
    }
}
