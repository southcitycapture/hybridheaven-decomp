#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/main/80000460/func_80000460.s")


s32 func_800006F4(s32 arg0) {
    return arg0 + 8;
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80000460/func_800006FC.s")


s32 func_80000704(u8 *arg0) {
    return *(s32 *)(arg0 + 0x898);
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80000460/func_8000070C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80000460/func_80000774.s")


s32 func_800267F0();                                /* extern, unprototyped: called with 1 or 2 args */

typedef struct func_80000934_Struct {
    struct func_80000934_Struct *unk0;
    s32 unk4;
} func_80000934_Struct;

typedef struct func_80000934_Head {
    u8 pad[0x888];
    func_80000934_Struct *unk888;
} func_80000934_Head;

void func_80000934(func_80000934_Head *arg0, func_80000934_Struct *arg1, s32 arg2) {
    s32 temp_a0;

    temp_a0 = func_800267F0(1);
    arg1->unk4 = arg2;
    arg1->unk0 = arg0->unk888;
    arg0->unk888 = arg1;
    func_800267F0(temp_a0, arg1);
}



void func_80000984(u8 *arg0, s32 *arg1) {
    s32 *var_v1;
    s32 *var_a2;
    s32 temp_a0;

    var_v1 = *(s32 **)(arg0 + 0x888);
    var_a2 = NULL;
    temp_a0 = func_800267F0(1);
    if (var_v1 != NULL) {
loop_1:
        if (var_v1 == arg1) {
            if (var_a2 != NULL) {
                *var_a2 = *arg1;
            } else {
                *(s32 **)(arg0 + 0x888) = (s32 *) *arg1;
            }
        } else {
            var_a2 = var_v1;
            var_v1 = (s32 *) *var_v1;
            if (var_v1 != NULL) {
                goto loop_1;
            }
        }
    }
    func_800267F0(temp_a0, arg1, var_a2);
}


struct func_80000A0C_Node {
    struct func_80000A0C_Node *next; /* 0x00 */
    void *data;                      /* 0x04 */
};

extern void func_80026300(void *a0, void *a1, s32 a2);

void func_80000A0C(u8 *arg0, void *arg1) {
    struct func_80000A0C_Node *node;

    node = *(struct func_80000A0C_Node **)(arg0 + 0x888);
    if (node != NULL) {
        do {
            func_80026300(node->data, arg1, 0);
            node = node->next;
        } while (node != NULL);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80000460/func_80000A5C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80000460/func_80000BF0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80000460/func_80000DC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80000460/func_80000EC8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80000460/func_80000ED0.s")


typedef struct func_80000F78_Struct {
    u8 pad[0x89C];
    s32 unk89C;
} func_80000F78_Struct;

void func_80000F78(void *arg0) {
    func_80000F78_Struct *s = (func_80000F78_Struct *) arg0;
    s->unk89C = s->unk89C + 2;
}


void func_80000F88(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {

}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80000460/func_80000F9C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80000460/func_80001010.s")

