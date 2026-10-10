#include "context.h"

/* Exact context.h declarations for names used before the file declares them. */
extern void func_8001F74C();
extern void func_800058DC(s32, void *);
extern u8 D_80164F40[];
extern void func_80005F6C(void *, void *);
extern void func_80006214(void *);
extern void func_800062F8(void *, u32);
void func_8012C89C(void *, s32, s32, s32);
void func_802427B4();

extern u8 D_80251040[];

struct func_80242688_Inner {
    u8 pad0[0x24];
    u32 unk24;
    u8 pad1[0x30 - 0x28];
    u32 unk30;
    u8 pad2[0x48 - 0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};

struct func_80242688_Outer {
    u8 pad0[0x30];
    struct func_80242688_Inner *unk30;
};

void func_80242688(s32 arg0, struct func_80242688_Outer **arg1) {
    func_8001F74C();
    func_80005F6C((void *) arg0, D_80164F40);
    func_80006214((void *) arg0);
    func_8012C89C((void *) arg0, 0, 0x501, 8);
    func_8012D8C8(arg0, 0x501, 9, 0x3F000000, 1, 0);
    (*arg1)->unk30->unk24 = (*arg1)->unk30->unk24 | 0x300;
    func_800062F8(*arg1, 0x800003FF);
    (*arg1)->unk30->unk30 = ((u32) D_80251040 | 0x40000000);
    (*arg1)->unk30->unk48 = 0xFF;
    (*arg1)->unk30->unk49 = 0xFF;
    (*arg1)->unk30->unk4A = 0xFF;
    (*arg1)->unk30->unk4C = 0x32;
    (*arg1)->unk30->unk4D = 0xFF;
    (*arg1)->unk30->unk4E = 0xFF;
    (*arg1)->unk30->unk4B = 0x78;
    func_800058DC(arg0, (void *) func_802427B4);
}
