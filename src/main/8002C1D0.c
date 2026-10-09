#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002C1D0/func_8002C1D0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002C1D0/func_8002C4D0.s")


struct func_8002C6A0_Struct {
    u8 pad[0x2C];
    struct func_8002C6A0_Struct *unk2C;
};

extern struct func_8002C6A0_Struct *D_800498F0;

struct func_8002C6A0_Struct *func_8002C6A0(void) {
    struct func_8002C6A0_Struct *base;
    struct func_8002C6A0_Struct *node;
    struct func_8002C6A0_Struct *ret;

    ret = NULL;
    base = D_800498F0;
    node = base->unk2C;
    if (node != NULL) {
        ret = node;
        base->unk2C = *(struct func_8002C6A0_Struct **)node;
        *(struct func_8002C6A0_Struct **)node = NULL;
    }
    return ret;
}


struct func_8002C6D0_Struct {
    u8 pad[0x2C];
    s32 unk2C;
};


void func_8002C6D0(s32 *arg0) {
    struct func_8002C6D0_Struct *temp_v0;

    temp_v0 = D_800498F0;
    *arg0 = temp_v0->unk2C;
    temp_v0->unk2C = (s32)arg0;
}


extern void func_80026890(s32);
extern void func_800268C0(s32, void *);

void func_8002C6E8(void *arg0) {
    s32 var_s0;

    var_s0 = *(s32 *)((u8 *)arg0 + 0x14);
    if (var_s0 != 0) {
        do {
            func_80026890(var_s0);
            func_800268C0(var_s0, (u8 *)arg0 + 4);
            var_s0 = *(s32 *)((u8 *)arg0 + 0x14);
        } while (var_s0 != 0);
    }
}



void func_8002C748(s32 arg0, s32 arg1) {
    func_80026890(arg1);
    func_800268C0(arg1, arg0 + 0x14);
}


extern f64 D_8004D370;

struct func_8002C780_Struct {
    u8 pad[0x44];
    s32 unk44;
};

s32 func_8002C780(struct func_8002C780_Struct *arg0, s32 arg1) {
    f32 tmp;

    tmp = ((f64) ((f32) arg1 * (f32) arg0->unk44) / D_8004D370) + 0.5;
    return (s32) tmp;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/8002C1D0/func_8002C7CC.s")


struct func_8002C7F4_Node {
    struct func_8002C7F4_Node *next;
    u8 pad[0xC];
    s32 key;
};

struct func_8002C7F4_Root {
    struct func_8002C7F4_Node *head;
    u8 pad[0x1C];
    s32 base;
};

s32 func_8002C7F4(struct func_8002C7F4_Root *arg0, struct func_8002C7F4_Node **arg1) {
    struct func_8002C7F4_Node *node;
    s32 best;

    *arg1 = NULL;
    best = 0x7FFFFFFF;
    node = arg0->head;
    if (node != NULL) {
        do {
            if ((node->key - arg0->base) < best) {
                *arg1 = node;
                best = node->key - arg0->base;
            }
            node = node->next;
        } while (node != NULL);
    }
    return (*arg1)->key;
}

