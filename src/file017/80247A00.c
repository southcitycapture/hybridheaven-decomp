#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80247A00/func_80247A00.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80247A00/func_802482A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80247A00/func_80248334.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80247A00/func_8024836C.s")


extern void func_8012D918(s32, s32, s32, s32, s32);
extern s32 func_80133A24(s32);

struct func_80248538_Target {
    u8 pad[0x4C];
    u8 unk4C;
};

struct func_80248538_Node {
    u8 pad[0x30];
    struct func_80248538_Target *unk30;
};

struct func_80248538_Args {
    u8 pad[4];
    struct func_80248538_Node *unk4;
    struct func_80248538_Node *unk8;
    struct func_80248538_Node *unkC;
};

void func_80248538(s32 arg0, struct func_80248538_Args *arg1) {
    struct func_80248538_Target *temp_a2;
    struct func_80248538_Target *temp_v0;
    struct func_80248538_Target *temp_v1;

    temp_v0 = arg1->unk4->unk30;
    temp_v0->unk4C = temp_v0->unk4C + 1;
    temp_v1 = arg1->unk8->unk30;
    temp_v1->unk4C = temp_v1->unk4C + 2;
    temp_a2 = arg1->unkC->unk30;
    temp_a2->unk4C = temp_a2->unk4C - 2;
    if (func_80133A24(0x122) == 0) {
        func_8012D918(arg0, 0x2F8, 1, 4, 0);
    } else {
        func_8012D918(arg0, 0x2F8, 0, 4, 0);
    }
    if (func_80133A24(0x123) == 0) {
        func_8012D918(arg0, 0x2F8, 1, 5, 0);
        return;
    }
    func_8012D918(arg0, 0x2F8, 0, 5, 0);
}

