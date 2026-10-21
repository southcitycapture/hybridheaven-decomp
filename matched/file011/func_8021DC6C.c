#include "context.h"

struct func_8021DC6C_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x2];
    s16 unk6;
    u8 pad8[0x28];
    union {
        u32 w;
        u16 h;
        u8 b[4];
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 rest : 29;
        } f;
        struct {
            u8 b0;
            u8 x1 : 1;
            u8 c : 2;
            u8 r1 : 5;
            u8 d : 3;
            u8 r2 : 5;
        } g;
    } unk30;
    u8 pad34[0x38 - 0x34];
    union {
        u8 v;
        struct {
            u8 top : 1;
            u8 r : 7;
        } g;
    } unk38;
    u8 pad39[0x312 - 0x39];
    s16 unk312;
    u8 pad314[0x392 - 0x314];
    u8 unk392;
};
struct func_8021DC6C_Actor {
    u8 pad0[0x5C];
    s32 unk5C;
    u8 pad60[0x68 - 0x60];
    struct func_8021DC6C_Dummy *unk68;
};
struct func_8021DC6C_Dummy {
    u8 pad0[4];
    u16 unk4;
};
struct func_8021DC6C_Vec {
    s32 unk0;
    s32 unk4;
    s32 unk8;
};
struct func_8021DC6C_Dev {
    u8 pad0[0xDC];
    s32 unkDC;
    u8 padE0[0x1031 - 0xE0];
    u8 unk1031;
};
#define DEV_8021DC6C (*(struct func_8021DC6C_Dev *)&D_801BBBF0)
extern s32 D_802256E4(struct func_8021DC6C_Vec *, s32, s32);
extern s32 D_80011140(s32, s32, struct func_8021DC6C_Vec, s32);
struct func_8021F9C8_Struct;
struct func_80220F60_Struct;
extern struct func_8021F9C8_Struct D_801BC03C;
extern struct func_8021F9C8_Struct D_801BC3D8;
extern struct func_80220F60_Struct D_801BBBF0;
extern void func_8021DFA8();
extern void func_800058DC(s32 arg0, void *arg1);
void func_8022310C(s32 arg0, s32 arg1);
extern void func_802237EC();
extern s32 func_8022397C();
s32 func_802233B0(s32 arg0, s32 arg1);

void func_8021DC6C(s32 arg0, s32 arg1) {
    struct func_8021DC6C_Dummy *d;
    s32 sp40;
    struct func_8021DC6C_Struct *p;
    struct func_8021DC6C_Struct *q;
    struct func_8021DC6C_Vec sp;
    d = ((struct func_8021DC6C_Actor *)arg0)->unk68;
    sp40 = ((struct func_8021DC6C_Actor *)arg0)->unk5C;
    if (DEV_8021DC6C.unkDC == arg0) {
        p = (struct func_8021DC6C_Struct *)&D_801BC03C;
    } else {
        p = (struct func_8021DC6C_Struct *)&D_801BC3D8;
    }
    if (DEV_8021DC6C.unkDC != arg0) {
        q = (struct func_8021DC6C_Struct *)&D_801BC03C;
    } else {
        q = (struct func_8021DC6C_Struct *)&D_801BC3D8;
    }
    p->unk392 = 0;
    if (DEV_8021DC6C.unk1031 >= 0xA && DEV_8021DC6C.unk1031 != 0xF) {
        func_8022310C(arg0, arg1);
        return;
    }
    if (DEV_8021DC6C.unk1031 != 0xF) {
        D_802256E4(&sp, arg0, 0x21);
        *(u16 *)((u8 *)&sp + 6) |= 0x100;
        if (sp.unk0 == 0x03480010) {
            *(f32 *)&sp.unk8 = 4.0f;
        }
        if (sp.unk0 == 0x0410002B) {
            *(f32 *)&sp.unk8 = 5.0f;
        }
        p->unk30.g.d = 0;
        p->unk30.g.c = 0;
        p->unk38.g.top = 0;
        p->unk38.v &= 0xEF;
        p->unk38.v &= 0x9F;
        if (p->unk2 <= 0 || p->unk30.f.b != 0) {
            func_802233B0(arg0, arg1);
            return;
        }
        if ((p->unk30.h & 7) == 5) {
            func_8022397C(arg0);
            return;
        }
        if ((d->unk4 & 0x8000) && !(q->unk30.b[0] & 1) && p->unk6 >= 0x1F && q->unk2 != 0) {
            func_802237EC(arg0);
            return;
        }
        if (D_80011140(arg1, sp40, sp, 3) != 0) {
            p->unk312 = 0x5A;
            func_800058DC(arg0, func_8021DFA8);
        }
    }
}
