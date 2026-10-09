#include "common.h"

extern void func_800058DC(void *arg0, void *arg1);

struct func_80205720_Inner {
    u8 pad[0x10];
    u32 unk10;
};

struct func_80205720_Struct {
    u8 pad[0x38];
    struct func_80205720_Inner *unk38;
};

extern void func_80005700(void *);
extern s32 func_80133A24(u32, void *);
extern u8 func_8020577C[];

void func_80205720(struct func_80205720_Struct *arg0, void *arg1) {
    void **pa1;

    pa1 = &arg1;
    if (func_80133A24(arg0->unk38->unk10 >> 0x10, *pa1) != 0) {
        func_80005700(arg0);
        return;
    }
    func_800058DC(arg0, func_8020577C);
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80205720/func_8020577C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80205720/func_80205A60.s")


struct func_80206118_Struct2 { u8 pad[0x4B]; u8 unk4B; };
struct func_80206118_Struct1 { u8 pad[0x22]; u8 unk22; u8 pad2[0x30 - 0x23]; struct func_80206118_Struct2 *unk30; };
struct func_80206118_Struct0 { u8 pad[0x2C]; s32 unk2C; };

extern void func_80206180();

void func_80206118(void *arg0, void **arg1) {
    struct func_80206118_Struct2 *temp_v0;

    temp_v0 = ((struct func_80206118_Struct1 *) *arg1)->unk30;
    temp_v0->unk4B = temp_v0->unk4B - 4;
    if (((struct func_80206118_Struct1 *) *arg1)->unk30->unk4B < 8) {
        ((struct func_80206118_Struct0 *) arg0)->unk2C &= ~0x800;
        ((struct func_80206118_Struct1 *) *arg1)->unk22 = 0;
        func_800058DC(arg0, func_80206180);
    }
}

#pragma GLOBAL_ASM("asm/nonmatchings/file010/80205720/func_80206180.s")

