#include "context.h"
struct func_8021E52C_Struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
extern void func_802256E4(struct func_8021E52C_Struct *arg0, s32 arg1, s32 arg2);
extern void func_800058DC(s32 arg0, void *arg1);
extern void func_8021E59C();
void func_8021E52C(s32 arg0, s32 arg1);
struct func_8021F9C8_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad1[0x30 - 0x4];
    u16 unk30;
    u8 unk32;
    u8 pad2[0x328 - 0x33];
    u8 unk328;
    u8 pad3[0x392 - 0x329];
    u8 unk392;
};
extern struct func_8021F9C8_Struct D_801BC03C;
extern struct func_8021F9C8_Struct D_801BC3D8;
extern s32 func_80224AC4(s32, s32);
extern s32 func_80011140(s32, s32, struct func_8021E52C_Struct, s32);
struct func_80221720_Struct {
    u8 pad0[0x30];
    union {
        u32 w;
        struct {
            u8 b0;
            u8 b1x : 1;
            u8 f : 2;
            u8 b1y : 5;
        } b;
    } u30;
    u8 pad1[0x2D8 - 0x34];
    u8 unk2D8;
    u8 pad2[0x2F9 - 0x2D9];
    u8 unk2F9;
    u8 pad3[0x392 - 0x2FA];
    u8 unk392;
};
extern s32 D_801BBCCC;

struct func_8021E414_Actor {
    u8 pad0[0x5C];
    s32 unk5C;
};

void func_8021E414(s32 arg0, s32 arg1) {
    s32 sp3C;
    struct func_80221720_Struct *sp38;
    u16 sp36;
    struct func_8021E52C_Struct sp28;

    sp3C = ((struct func_8021E414_Actor *) arg0)->unk5C;
    if (arg0 == D_801BBCCC) {
        sp38 = (struct func_80221720_Struct *) &D_801BC03C;
    } else {
        sp38 = (struct func_80221720_Struct *) &D_801BC3D8;
    }
    sp36 = func_80224AC4(arg0, 0);
    if (sp38->u30.b.f == 0) {
        sp38->u30.b.f = sp38->unk2F9 + 2;
    }
    sp38->unk392 = 0;
    func_802256E4(&sp28, arg0, 0);
    if (func_80011140(arg1, sp3C, sp28, 0xA) != 0) {
        if (sp36 == 0) {
            func_800058DC(arg0, (void *) func_8021E59C);
            return;
        }
        func_800058DC(arg0, (void *) func_8021E52C);
    }
}
