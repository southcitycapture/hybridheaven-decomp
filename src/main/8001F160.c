#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001F160/func_8001F160.s")


void func_8001F1D4(u8 *arg0, u8 *arg1, s32 arg2) {
    while (arg2--) {
        *arg0 = *arg1++;
        arg0++;
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001F160/func_8001F204.s")

extern s32 D_80047940;

typedef struct func_8001F290_Struct {
    s32 unk0;
    s32 unk4;
    struct func_8001F290_Struct *unk8;
    struct func_8001F290_Struct *unkC;
} func_8001F290_Struct;

extern func_8001F290_Struct *D_80091BC8;

s32 func_8001F290(arg0)
    s32 arg0;
{
    s32 temp_a0;
    s32 temp_v1;
    u8 *temp_a2;
    func_8001F290_Struct *temp_a3;
    func_8001F290_Struct *var_a1;
    func_8001F290_Struct *var_v0;

    if (arg0 <= 0) {
        return 0;
    }
    temp_v1 = (arg0 + 0x17) & ~7;
    var_a1 = D_80091BC8;
    var_v0 = var_a1->unkC;
    if (var_v0 != NULL) {
loop_4:
        temp_a0 = ((s32)var_a1 + D_80047940 + 0x10) & ~D_80047940;
        if ((var_v0->unk0 - temp_a0) < temp_v1) {
            var_a1 = var_v0;
            var_v0 = var_v0->unkC;
            if (var_v0 != NULL) {
                goto loop_4;
            }
        } else {
            goto found;
        }
    }
    return 0;
found:
        temp_a2 = (u8 *)(temp_a0 + temp_v1);
        *(func_8001F290_Struct **)(temp_a2 - 8) = var_a1;
        temp_a3 = (func_8001F290_Struct *)(temp_a2 - 0x10);
        *(func_8001F290_Struct **)(temp_a2 - 4) = var_a1->unkC;
        var_a1->unkC->unk8 = temp_a3;
        var_a1->unkC = temp_a3;
        *(s32 *)(temp_a2 - 0x10) = temp_a0;
        *(s32 *)(temp_a2 - 0xC) = temp_v1;
        return temp_a0;
}



void func_8001F334(void) {
    D_80047940 = 0xFFF;
    func_8001F290();
    D_80047940 = 7;
}


typedef struct func_8001F364_Struct {
    u32 unk0;
    s32 unk4;
    struct func_8001F364_Struct *unk8;
    struct func_8001F364_Struct *unkC;
} func_8001F364_Struct;

extern func_8001F364_Struct *D_80091BCC;

s32 func_8001F364(arg0)
    s32 arg0;
{
    s32 size;
    u32 addr;
    func_8001F364_Struct *end;
    func_8001F364_Struct *node;
    func_8001F364_Struct *prev;
    func_8001F364_Struct *next;

    if (arg0 <= 0) {
        return 0;
    }
    size = (arg0 + 0x17) & ~7;
    prev = D_80091BCC;
    next = prev->unk8;
    while (next != NULL) {
        addr = (prev->unk0 - size) & ~D_80047940;
        if (addr >= (u32)next + 0x10) {
            goto found;
        }
        prev = next;
        next = next->unk8;
    }
    return 0;
found:
        end = (func_8001F364_Struct *)((u8 *)addr + size);
        ((func_8001F364_Struct ** )end)[-2] = next;
        ((func_8001F364_Struct ** )end)[-1] = prev;
        node = end - 1;
        prev->unk8->unkC = node;
        prev->unk8 = node;
        node->unk0 = addr;
        node->unk4 = size;
        return addr;
}



void func_8001F400(void) {
    D_80047940 = 0xFFF;
    func_8001F364();
    D_80047940 = 7;
}


extern s32 func_8001F160(s32, s32);

s32 func_8001F430(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8001F290();
    func_8001F160(temp_v0, arg0);
    return temp_v0;
}



s32 func_8001F464(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_8001F364();
    func_8001F160(temp_v0, arg0);
    return temp_v0;
}


typedef struct func_8001F498_Struct {
    s32 unk0;
    s32 unk4;
    struct func_8001F498_Struct *unk8;
    struct func_8001F498_Struct *unkC;
} func_8001F498_Struct;

extern func_8001F498_Struct D_80091BC0;

void func_8001F498(func_8001F498_Struct *arg0) {
    func_8001F498_Struct *var_v1;
    func_8001F498_Struct *temp_v0;

    if (((s32) D_80091BC0.unkC & 0xFF000000) == 0x80000000) {
        if (((s32) D_80091BC0.unkC->unk8 & 0xFF000000) != 0x80000000) {
            D_80091BC0.unkC->unk8 = arg0;
            D_80091BC0.unkC->unkC = NULL;
            D_80091BC0.unkC->unk4 = 0x10;
            D_80091BC0.unkC->unk0 = D_80091BC0.unk0 + D_80091BC0.unk4 - 0x10;
            return;
        }
        var_v1 = D_80091BC0.unkC;
        if (D_80091BC0.unkC != NULL) {
loop_4:
            temp_v0 = var_v1->unk8;
            if (var_v1 != temp_v0->unkC) {
                var_v1->unk8 = arg0;
                arg0->unkC = var_v1;
                return;
            }
            if (arg0 == temp_v0) {
                arg0->unkC = var_v1;
                return;
            }
            var_v1 = temp_v0;
            if (temp_v0 != NULL) {
                goto loop_4;
            }
        }
    }
}


s32 func_8001F540(s32 arg0) {
    func_8001F498_Struct *n;
    func_8001F498_Struct *next;

    n = D_80091BC0.unk8;
    if (n != NULL) {
        do {
            next = n->unkC;
            if (next != NULL && n != next->unk8) {
                func_8001F498(n);
                return arg0;
            }
            if (arg0 == n->unk0) {
                goto found;
            }
            n = next;
        } while (n != NULL);
    }
    return arg0;
found:
    n->unk8->unkC = next;
    n->unkC->unk8 = n->unk8;
    func_8001F160(arg0, n->unk4);
    return 0;
}


extern s32 func_8001703C(s32 arg0);

s32 func_8001F5D0(s32 arg0) {
    s32 i;

    for (i = 0; i != 0x100; i++) {
        if (func_8001703C(i) == arg0) {
            return i;
        }
    }
    return -1;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8001F160/func_8001F630.s")

