#include "common.h"
struct func_8020C39C_StructInner {
    u8 pad0[4];
    f32 x, y, z;
    u8 pad10[2];
    s16 angle;
};
struct func_8020C39C_StructPlayer {
    u8 pad0[0x2C];
    struct func_8020C39C_StructInner *inner;
};
extern struct func_8020C39C_StructPlayer *D_801BBCD0;
extern s16 D_80217CAC;
extern void func_80129FB8(f32, f32, f32, f32, f32, f32, f32, s32, s32, s32, s32, s32, s32, s32, s32, f32, s32, s32);
extern s32 func_8012C6B4();
extern s32 func_801FD644(f32, f32, f32, f32, s32, f32, f32, u32);
struct func_80206598_Inner {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[8];
    s32 unk30;
    u8 pad34[0x18];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};
struct func_80206598_Outer {
    u8 pad0[0x30];
    struct func_80206598_Inner *unk30;
};


struct func_8020C61C_StructActor {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x52];
    u8 unk90;
    u8 pad91;
    s16 unk92;
    f32 unk94, unk98, unk9C;
    u8 padA0[0xC];
    u8 unkAC;
};
extern void *func_801C3BA0(void);
extern void func_801C3B94(s32);

#define COUNT (*(u16 *)&D_80217CAC)

s32 func_8020C61C(struct func_8020C61C_StructActor *arg0, struct func_80206598_Outer **arg1) {
    struct func_8020C61C_StructRandom { s32 x, z; } random;

    switch (arg0->unk90) {
    case 2:
        if (COUNT != 0) {
            arg0->unk90 = 4;
            arg0->unk3C = 0;
        }
        if (func_801C3BA0() == arg0) {
            func_801C3B94(0);
            arg0->unkAC |= 1;
            COUNT = 0xEF;
            func_801FD644(arg0->unk94, arg0->unk98, arg0->unk9C, 15.0f,
                (u16)((u16)(D_801BBCD0->inner->angle + 0x1000) & 0x1FFF), 3.0f, 0.4f, 0xF);
        }
        if (arg0->unk92-- == 0) {
            random.x = func_8012C6B4(0x190);
            random.z = func_8012C6B4(0x190);
            func_80129FB8((f32)(((f64)(random.x - 0xC8) / 100.0) + arg0->unk94),
                arg0->unk98 + 5.0f,
                (f32)(((f64)(random.z - 0xC8) / 100.0) + arg0->unk9C),
                0.0f, 0.0f, 0.0f, 0.0f, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0, 0xA0, -6, 0.07f, 0x12, 0);
            arg0->unk92 = func_8012C6B4(0x3C) + 0x1E;
        }
        break;
    case 4:
        if (COUNT == 0) {
            arg0->unk90 = 2;
            arg0->unk3C = 0;
        } else if (arg0->unkAC & 1) {
            COUNT--;
        }
        break;
    }
    if (!(arg0->unk3C++ & 1)) {
        (*arg1)->unk30->unk4C = (u32)((f64)(f32)(u32)COUNT * 0.26666666666666666 + 192.0);
        (*arg1)->unk30->unk4D = (u32)((f64)(f32)(u32)COUNT * 0.26666666666666666 + 192.0);
        (*arg1)->unk30->unk4E = (u32)((f64)(f32)(u32)COUNT * 0.26666666666666666 + 192.0);
        (*arg1)->unk30->unk4F = (u32)((f64)(f32)(u32)COUNT * 0.26666666666666666 + 192.0);
    } else {
        (*arg1)->unk30->unk4C = 0xFF;
        (*arg1)->unk30->unk4D = 0xFF;
        (*arg1)->unk30->unk4E = 0xFF;
        (*arg1)->unk30->unk4F = 0xFF;
    }
    return 1;
}
