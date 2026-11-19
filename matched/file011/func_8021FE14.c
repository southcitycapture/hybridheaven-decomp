#include "common.h"
typedef struct {
    u8 pad0[0xE];
    u16 unkE;
    u8 pad10[0x74 - 0x10];
    u8 unk74;
    u8 pad75[0x9C - 0x75];
    u8 unk9C;
} func_8021E59C_Struct3C;
typedef struct {
    u8 pad0[0x2];
    u16 unk2;
    u16 unk4;
    s16 unk6;
    s16 unk8;
} func_8021E59C_Struct68;
typedef struct {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    func_8021E59C_Struct3C *unk5C;
    u8 pad60[0x68 - 0x60];
    func_8021E59C_Struct68 *unk68;
} func_8021E59C_Actor;
#define A ((func_8021E59C_Actor *)arg0)
struct func_80220F60_Struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 pad1[0xEC - 0xE0];
    s32 unkEC;
    u8 pad2[0x1031 - 0xF0];
    u8 unk1031;
};
extern struct func_80220F60_Struct D_801BBBF0;
typedef struct {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
} func_8021E59C_Dev;
#define DEV ((func_8021E59C_Dev *)&D_801BBBF0)
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
extern void func_800058DC(s32 arg0, void *arg1);
extern s32 func_8001EF38(f32, f32);
extern void func_8021E59C();
typedef struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x6 - 0x4];
    s16 unk6;
    u8 pad8[0xA - 0x8];
    s16 unkA;
    u8 padC[0x30 - 0xC];
    union {
        u32 w;
        u16 h;
        u8 b[4];
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 pad3 : 6;
            u32 c : 2;
            u32 d : 2;
            u32 pad13 : 19;
        } f;
        struct {
            u16 pad0 : 13;
            u16 e : 3;
            u8 b2;
            u8 top : 1;
            u8 pad1 : 7;
        } g;
    } unk30;
    u8 pad34[0x42 - 0x34];
    s16 unk42;
    s16 unk44;
    u8 pad46[0x328 - 0x46];
    u8 unk328;
    u8 pad329[0x390 - 0x329];
    u8 unk390;
    u8 pad391[0x3A8 - 0x391];
    f32 unk3A8;
} func_8021E59C_Player;
extern void func_8021ECD4(void *, s32);
extern void func_802237B0(s32, s32);

extern void func_8022038C(s32, s32, s16);
extern void func_8021FF78(s32, s32);

void func_8021FE14(s32 arg0, s32 arg1) {
    struct func_8021F9C8_Struct *v;
    func_8021E59C_Struct68 *p;
    f32 x;
    f32 y;
    s32 ang;
    s16 a;

    if (arg0 == DEV->unkDC) {
        v = &D_801BC03C;
    } else {
        v = &D_801BC3D8;
    }
    p = A->unk68;
    a = (s16)(0x2800 -*(s16 *)((u8 *)&D_801BBBF0 + 0x232)) & 0x1FFF;
    v->unk392 = 0;
    x = (f32)((f64)-p->unk6 / 20.0);
    y = (f32)((f64)p->unk8 / 20.0);
    if ((f64)(x * x + y * y) > 1.0) {
        func_802237B0(arg0, 1);
        ang = func_8001EF38(x, y) + a;
        func_8022038C(arg0, arg1, ang);
        return;
    }
    func_802237B0(arg0, 0);
    if (((func_8021E59C_Player *)v)->unk390 == 4) {
        func_8021FF78(arg0, arg1);
        return;
    }
    func_8021ECD4(arg0, arg1);
    func_800058DC(arg0, func_8021E59C);
}
