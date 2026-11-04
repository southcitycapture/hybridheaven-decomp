#include "common.h"
#define HZC2(a, b) a##b
#define HZC(a, b) HZC2(a, b)
extern u16 D_8038A8F8;
extern void func_800058DC(void *, void *);
extern void func_80006214(void *);
struct func_80378034_Sub {
    u8 pad[0x2C];
    u16 unk2C;
};
struct func_80378034_Struct {
    u8 pad[0xC];
    struct func_80378034_Sub *unkC;
};
void func_80378034(struct func_80378034_Struct *arg0, s32 arg1);
struct func_80378190_Inner {
    u8 pad0[0x2C];
    u16 unk2C;
};
struct func_80378190_Ctx {
    u8 pad0[0xC];
    struct func_80378190_Inner *unkC;
    u8 pad10[0x68];
    u8 unk78[4];
    u8 unk7C[4];
    u8 unk80[4];
    u8 unk84[4];
    u8 pad88[8];
    u16 unk90;
    u16 unk92;
};
void func_80378190(struct func_80378190_Ctx *arg0, void **arg1);

extern s32 func_80377FC4(void *, s32, s32, s8 *);
extern void func_8012D814(void *, s32, s32, s32, s32);
extern void func_801CD924(u8, u8, u8, f32);
extern f64 D_803893B8;

struct func_80378064_Struct_Sub {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
};
struct func_80378064_Struct_Mid {
    u8 pad0[0x30];
    struct func_80378064_Struct_Sub *unk30;
};
struct func_80378064_Struct {
    u8 pad0[0x78];
    u8 unk78;
    u8 unk79;
    u8 unk7A;
    u8 pad7B[0x19];
    u8 unk94;
};

void func_80378064(struct func_80378064_Struct *arg0, struct func_80378064_Struct_Mid **arg1) {
    f64 pad_38;
    s8 sp37;
    s32 i;
    struct func_80378064_Struct_Sub *p;

    sp37 = 0;
    arg0->unk94 = 1;
    if (func_80377FC4(arg0, 0x371, 1, &sp37) != 0) {
        func_800058DC(arg0, func_80378034);
    }
    func_8012D814(arg0, 0x371, 0, 0x3F800000, 1);
    func_80006214(arg0);
    i = 0;
    if (arg0->unk94 > 0) {
    do {
        p = arg1[i]->unk30;
        p->unk18 = (f32) (p->unk18 * 0.45);
        p->unk1C = (f32) (p->unk1C * 2.5);
        p->unk20 = (f32) (p->unk20 * 0.45);
        i++;
    } while (i < arg0->unk94);
    }
    func_801CD924(arg0->unk78, arg0->unk79, arg0->unk7A, 0.8f);
    D_8038A8F8 = 0;
    func_800058DC(arg0, func_80378190);
}
