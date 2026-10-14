#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file017/80247A00/func_80247A00.s")


extern void func_800058DC(void *arg0, void *arg1);
extern void *func_801505AC(s32 arg0);
void func_80248334(void);

typedef struct func_802482A0_StructObj {
    u8 pad[0x3C];
    u16 unk3C;
} func_802482A0_StructObj;

typedef struct func_802482A0_StructSub {
    u8 pad[0x91];
    u8 unk91;
} func_802482A0_StructSub;

void func_802482A0(func_802482A0_StructObj *arg0, s32 arg1) {
    s32 temp_v0;
    s32 temp_v1;
    func_802482A0_StructSub *temp_v0_2;
    func_802482A0_StructSub *temp_v0_3;

    temp_v0 = arg0->unk3C;
    temp_v1 = arg0->unk3C < 2;
    arg0->unk3C = temp_v0 + 1;
    if (!temp_v1) {
        if (func_80133A24(0x125) != 0) {
            temp_v0_2 = func_801505AC(3);
            temp_v0_2->unk91 = temp_v0_2->unk91 | 0x40;
        }
        if (func_80133A24(0x124) != 0) {
            temp_v0_3 = func_801505AC(2);
            temp_v0_3->unk91 = temp_v0_3->unk91 | 0x40;
        }
        func_800058DC(arg0, &func_80248334);
    }
}


extern void func_80241910(f32 a, f32 b, f32 c);

void func_80248334(void) {
    extern void func_80248538();

    func_80248538();
    func_80241910(0.0f, -200.0f, 0.0f);
}

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

