#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80248340.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_802486B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_802487F8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_802488BC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80248B7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80248E18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80248F7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024965C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80249810.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024981C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80249854.s")


typedef struct func_8024990C_Sub {
    u8 pad[4];
    f32 unk4;
} func_8024990C_Sub;

typedef struct func_8024990C_Inner {
    u8 pad[0x2C];
    func_8024990C_Sub *unk2C;
} func_8024990C_Inner;

typedef struct func_8024990C_Obj {
    u8 pad[0x5C];
    void *unk5C;
} func_8024990C_Obj;

extern void func_80010550(void *arg0, void *arg1);
extern void func_80249970(void);

void func_8024990C(func_8024990C_Obj *arg0, func_8024990C_Inner **arg1) {
    void *tmp;

    tmp = arg0->unk5C;
    func_80010550(arg1, tmp);
    if (((*arg1)->unk2C)->unk4 >= 80.0f) {
        func_800058DC(arg0, func_80249970);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80249970.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_802499E8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80249A84.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80249B54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80249CF8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80249DD0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80249F30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_80249FC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024A120.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024A224.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024A3B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024A3C0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024A434.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024A4EC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024A588.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024A604.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024A644.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024A780.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024A7C8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024A984.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024A990.s")


struct func_8024A9C8_Inner {
    u8 pad[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad2[2];
    s16 unk12;
};

struct func_8024A9C8_Obj {
    u8 pad[0x2C];
    struct func_8024A9C8_Inner *unk2C;
};

extern void func_8024AA38(s32 arg0, s32 arg1);

void func_8024A9C8(void *arg0, struct func_8024A9C8_Obj **arg1) {
    (*arg1)->unk2C->unk4 = -70.0f;
    (*arg1)->unk2C->unk8 = -200.0f;
    (*arg1)->unk2C->unkC = -540.0f;
    (*arg1)->unk2C->unk12 = 0x1800;
    func_800058DC(arg0, (void *) func_8024AA38);
}


typedef struct func_8024AA38_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} func_8024AA38_Struct;

s32 func_80133A24(s32);
void func_8013A1B4(s32, func_8024AA38_Struct, s32);
void func_8024AAC4(void);

extern func_8024AA38_Struct D_802534A0;
extern u8 D_80253524[];

void func_8024AA38(s32 arg0, s32 arg1) {
    if (func_80133A24(0x73) != 0) {
        func_801339D0(0x73);
        func_8013A1B4(arg1, D_802534A0, 0xFFFFFF);
        func_800179B0(D_80253524);
        func_800058DC((void *) arg0, (void *) func_8024AAC4);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024AAC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024AC24.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024ACB8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024AD4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024ADE0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024AF34.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file015/80248340/func_8024B024.s")

