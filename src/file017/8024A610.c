#include "common.h"

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024A610.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024ABC0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024ACD8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024AF30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024B0E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024B2A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024B368.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024B444.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024B524.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024B7A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024B96C.s")


extern void func_80126968();
extern void func_801268CC(s32);
extern void func_80020744(s32);
extern void func_800058DC(s32, void (*)());
extern s16 D_801BBF90[];
extern void func_8024BB68();

void func_8024BB18(s32 arg0, s32 arg1) {
    func_80126968();
    D_801BBF90[2] = 0x133;
    func_801268CC(0);
    func_80020744(0xA);
    func_800058DC(arg0, func_8024BB68);
}


extern void func_8024CEA0(void);
extern s32 func_80133A24(s32);
extern s32 func_80126944(void);
extern void func_801C3B2C(s32);
extern void func_801C3B10(s32);
extern void func_801FBB30(void);
extern void func_8024BBD4(void);

void func_8024BB68(s32 arg0) {
    func_8024CEA0();
    if (func_80133A24(0x133) != 0) {
        if (func_80126944() != 1) {
            func_801C3B2C(2);
            func_801C3B10(1);
            func_801FBB30();
            func_800058DC(arg0, func_8024BBD4);
        }
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024BBD4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024BD1C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024BF7C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024C3BC.s")


struct func_8024C560_StructInner {
    u8 pad[0x22];
    u8 unk22;
};

struct func_8024C560_Struct {
    s32 pad0;
    struct func_8024C560_StructInner *unk4;
};

extern void func_8024C5A8(void);

void func_8024C560(s32 arg0, struct func_8024C560_Struct *arg1) {
    if (func_80133A24(0x138) != 0) {
        arg1->unk4->unk22 = 0;
        func_800058DC(arg0, func_8024C5A8);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024C5A8.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024C5B4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024C794.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024C8F4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024CA74.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024CCC4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024CEA0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024CF18.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file017/8024A610/func_8024CF9C.s")

