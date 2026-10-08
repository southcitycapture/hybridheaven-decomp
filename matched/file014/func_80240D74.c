#include "common.h"

typedef struct func_80240D74_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    s16 unk10;
    s16 unk12;
} func_80240D74_StructC;

typedef struct func_80240D74_StructB {
    u8 pad0[0x30];
    func_80240D74_StructC *unk30;
} func_80240D74_StructB;

typedef struct func_80240D74_StructA {
    u8 pad0[0x24];
    func_80240D74_StructB *unk24;
    u8 pad1[0x94 - 0x28];
    s16 unk94;
} func_80240D74_StructA;

extern void func_800058DC(void *, void *);
extern void func_80020744(s32);
extern void func_8012C89C(void *, s32, s32, s32);
extern s32 func_80133A24(s32);
extern f32 D_8024A324;
extern f32 D_8024A328;
extern f32 D_8024A32C;
extern void func_80240E38(void);

void func_80240D74(func_80240D74_StructA *arg0, s32 arg1) {
    if (func_80133A24(0x47) != 0) {
        func_8012C89C(arg0, 0, 0x23B, 0);
        arg0->unk24->unk30->unk4 = D_8024A324;
        arg0->unk24->unk30->unk8 = D_8024A328;
        arg0->unk24->unk30->unkC = D_8024A32C;
        arg0->unk24->unk30->unk10 = 1;
        arg0->unk24->unk30->unk12 = -1;
        arg0->unk94 = 0x12C;
        func_80020744(0x141);
        func_800058DC(arg0, func_80240E38);
    }
}
