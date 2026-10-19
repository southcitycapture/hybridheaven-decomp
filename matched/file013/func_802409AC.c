#include "context.h"

struct func_802409AC_StructY {
    u8 pad0[8];
    f32 unk8;
    u8 pad1[0x24 - 0xC];
    u32 unk24;
    u8 pad2[0x30 - 0x28];
    u32 unk30;
    u8 pad3[0x48 - 0x34];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
};
struct func_802409AC_StructX {
    u8 pad0[0x24];
    u32 unk24;
    u8 pad1[0x30 - 0x28];
    struct func_802409AC_StructY *unk30;
};
struct func_802409AC_StructP {
    struct func_802409AC_StructX *unk0;
    struct func_802409AC_StructX *unk4;
};
extern void func_80005670();
extern void func_80005F6C();
extern void func_80006214();
extern void func_8012636C();
struct func_80240B84_Struct;
extern void func_80240B84(struct func_80240B84_Struct *arg0, s32 arg1);
extern s32 D_801BBC30[];
extern s32 D_801BBC40;
extern u8 D_80245D68[], D_80245D7C[], D_80245DA4[], D_80164F40[], D_8017B388[], D_8017B7F8[];

void func_802409AC(s32 arg0, struct func_802409AC_StructP *arg1) {
    func_80005670(D_801BBC30[1], D_80245D7C);
    func_80005670(D_801BBC30[1], D_80245D68);
    func_80005670(D_801BBC40, D_80245DA4);
    func_80005F6C(arg0, D_80164F40);
    func_80005F6C(arg0, D_80164F40);
    func_80006214(arg0);
    func_8012636C(arg0, 0);
    func_8012636C(arg0, 1);
    arg1->unk0->unk30->unk24 |= 0x100;
    arg1->unk0->unk30->unk30 = (u32)D_8017B7F8 | 0x40000000;
    arg1->unk0->unk30->unk48 = 0;
    arg1->unk0->unk30->unk49 = 0xFF;
    arg1->unk0->unk30->unk4A = 0;
    arg1->unk0->unk30->unk4B = 0x80;
    arg1->unk0->unk30->unk8 = -10.0f;
    arg1->unk4->unk24 = 0x80000600;
    arg1->unk4->unk30->unk24 |= 0x100;
    arg1->unk4->unk30->unk30 = (u32)D_8017B388 | 0x40000000;
    arg1->unk4->unk30->unk48 = 0;
    arg1->unk4->unk30->unk49 = 0xFF;
    arg1->unk4->unk30->unk4A = 0;
    arg1->unk4->unk30->unk8 = -55.0f;
    func_8012C89C((void *)arg0, 0, 0x80, 4);
    func_8012C89C((void *)arg0, 1, 0x80, 3);
    {
        extern void func_80133980();
        func_80133980(4);
    }
    func_800058DC((void *)arg0, (void *)func_80240B84);
}
