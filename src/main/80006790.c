#include "common.h"


struct func_80006790_StructNode {
    struct func_80006790_StructNode *unk0;
    u8 pad4[0x20];
    u32 unk24;
    u16 unk28;
    u16 unk2A;
};

struct func_80006790_StructHeader {
    u32 unk0;
    u32 unk4;
};

struct func_80006790_StructState {
    u8 pad0[0x9E];
    s16 unk9E;
    s16 unkA0;
    s16 unkA2;
    s16 unkA4;
    u8 pad_A6[0x17C - 0xA6];
    struct func_80006790_StructNode *unk17C;
};

extern struct func_80006790_StructState D_800892B0;
extern struct func_80006790_StructHeader *D_8008D5BC;

void func_800068C0(s32, void *);
s32 func_80006AB4(void *);
void func_80007750(void);
void func_800078AC(void);
void func_800079B0(struct func_80006790_StructHeader **);

void func_80006790(void) {
    s32 var_s2;
    u32 var_s1;
    struct func_80006790_StructNode *var_s0;

    {
        struct func_80006790_StructHeader *temp_v1;

        temp_v1 = D_8008D5BC++;
        temp_v1->unk0 = 0xDB060000;
        temp_v1->unk4 = 0;
    }
    if (D_800892B0.unk9E == 0) {
        func_800079B0(&D_8008D5BC);
    }
    func_80007750();
    if (D_800892B0.unkA0 == 0) {
        func_800078AC();
    }
    var_s1 = 0x8000;
    var_s2 = 0;
    if (D_800892B0.unkA4 == 0) {
        do {
            var_s0 = D_800892B0.unk17C;
            if ((var_s0 != NULL) && (var_s0->unk24 >= 0xFFFFFFFEU)) {
loop_7:
                if (((s32) var_s0->unk2A < 6) && (var_s0->unk28 & var_s1) && (func_80006AB4(var_s0) != 0)) {
                    func_800068C0(var_s1 & 0xFFFF, var_s0);
                } else {
                    var_s0 = var_s0->unk0;
                    if ((var_s0 != NULL) && (var_s0->unk24 >= 0xFFFFFFFEU)) {
                        goto loop_7;
                    }
                }
            }
            var_s2 = (var_s2 + 1) & 0xFFFF;
            var_s1 = (var_s1 >> 1) & 0xFFFF;
        } while (var_s2 < 0x10);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/main/80006790/func_800068C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/main/80006790/func_800069A8.s")


struct func_80006AB4_StructNode {
    u8 pad0[0xC];
    struct func_80006AB4_StructNode *next;
    u8 pad10[0x12];
    u8 flag;
};

s32 func_80006AB4(void *arg0) {
    u8 value;
    value = ((struct func_80006AB4_StructNode *)arg0)->flag;
    if (value != 0 && ((volatile struct func_80006AB4_StructNode *)arg0)->next != NULL) {
        arg0 = ((struct func_80006AB4_StructNode *)arg0)->next;
loop:
        value = ((struct func_80006AB4_StructNode *)arg0)->flag;
        if (value != 0) {
            arg0 = ((struct func_80006AB4_StructNode *)arg0)->next;
            if (arg0 != NULL) {
                goto loop;
            }
        }
    }
    return value;
}

