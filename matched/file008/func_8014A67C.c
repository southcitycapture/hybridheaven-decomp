#include "context.h"

typedef struct func_8014A67C_Struct {
    u8 pad0[0x10];
    struct func_8014A67C_Struct *next;
    u8 pad1[0xE];
    u8 flag;
} func_8014A67C_Struct;

extern void func_80148FC4(void *, void *, s32, s32);
extern void func_8014A774(s32, s32);
extern void func_8014ABD0(s32, s32);

void func_8014A67C(func_80148270_Struct *arg0, s32 arg1) {
    u32 savedValue;
    u8 value;
    func_8014A67C_Struct *node;

    node = (func_8014A67C_Struct *)D_801BED18;
    value = D_80181ABD[arg0->unk91 * 0x78 + arg0->unk90 * 6];
    if (node != NULL) {
        do {
            if ((node != (func_8014A67C_Struct *)D_80181D5C) &&
                (node != (func_8014A67C_Struct *)D_80181D60)) {
                node->flag = 0;
            }
            node = node->next;
        } while (node != NULL);
    }
    savedValue = value;
    if (func_80126944() == 1 && func_801487F0(savedValue) != 0) {
        func_80147218((s32)arg0);
        func_80148FC4(arg0, func_8014ABD0, 2, 0);
        return;
    }
    func_800058DC(arg0, func_8014A774);
}
