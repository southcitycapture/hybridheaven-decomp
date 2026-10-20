#include "context.h"

void func_8012C89C(void *, s32, s32, s32);
extern void func_8001F74C();
extern void func_800058DC(s32, void *);
extern void func_80005F6C(void *, void *);
extern void func_80006214(void *);
extern void func_800062F8(void *, u32);
struct func_80242200_Struct16 { s32 a, b, c, d; };
struct func_80242200_Inner {
    u8 pad0[0x24];
    u32 unk24;
    u8 pad1[0x30 - 0x28];
    u32 unk30;
    u8 pad2[0x4B - 0x34];
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};
struct func_80242200_Outer {
    u8 pad0[0x30];
    struct func_80242200_Inner *unk30;
};
struct func_80242200_Sub { u8 pad[0x10]; u32 unk10; };
struct func_80242200_Arg { u8 pad[0x38]; struct func_80242200_Sub *unk38; };
struct func_80242200_Glob { u8 pad[0x63]; u8 unk63; };

extern struct func_80242200_Glob *D_801BBCCC;
extern u8 D_80250FA0[];
extern void func_8012D918(void *, s32, s32, s32, s32);
extern void func_80020744(s32);
extern void func_802423B4();

void func_80242200(struct func_80242200_Arg *arg0, struct func_80242200_Outer **arg1) {
    struct func_80242200_Struct16 sp28;

    if (D_801BBCCC->unk63 != 0) {
        func_8001F74C();
        sp28 = *(struct func_80242200_Struct16 *)D_80164F40;
        *(u32 *)((u8 *)&sp28 + 4) = 0x80000600;
        func_80005F6C(arg0, &sp28);
        func_80006214(arg0);
        if ((arg0->unk38->unk10 >> 24) != 0) {
            func_8012C89C(arg0, 0, 0x501, 7);
            func_8012D918(arg0, 0x501, 4, 0, 0);
        } else {
            func_8012C89C(arg0, 0, 0x501, 6);
            func_8012D918(arg0, 0x500, 3, 0, 0);
        }
        (*arg1)->unk30->unk30 = (u32)D_80250FA0 | 0x40000000;
        (*arg1)->unk30->unk24 |= 0x4100;
        (*arg1)->unk30->unk4B = 0xDC;
        (*arg1)->unk30->unk4C = 0;
        (*arg1)->unk30->unk4D = 0;
        (*arg1)->unk30->unk4E = 0xFF;
        (*arg1)->unk30->unk4F = 0xFF;
        if ((arg0->unk38->unk10 >> 24) != 0) {
            func_80020744(0x6BB);
        }
        func_800062F8(*arg1, 0x80000400);
        func_800058DC((s32)arg0, func_802423B4);
    }
}
