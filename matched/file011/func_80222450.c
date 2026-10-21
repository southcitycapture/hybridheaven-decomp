#include "context.h"

struct func_80222450_Struct {
    u8 pad0[0x2];
    s16 unk2;
    u8 pad4[0x30 - 4];
    union {
        u32 w;
        u16 h;
        u8 b0;
        struct {
            u32 a : 1;
            u32 b : 2;
            u32 nib : 4;
            u32 p7 : 2;
            u32 c : 2;
            u32 p11 : 16;
            u32 x : 2;
            u32 rest : 3;
        } f;
    } u30;
    u8 unk34[0x2F1 - 0x34];
    u8 unk2F1;
    u8 pad2F2[0x2F9 - 0x2F2];
    u8 unk2F9;
    u8 pad2FA[0x328 - 0x2FA];
    u8 unk328;
    u8 pad329[0x390 - 0x329];
    u8 unk390;
    u8 unk391;
    u8 unk392;
    u8 unk393;
};
struct func_80222450_Actor {
    u8 pad0[0x36];
    u16 unk36;
    u8 pad38[0x5C - 0x38];
    s32 unk5C;
};
extern s32 func_80366B30();
extern s32 func_803667C4();
extern void func_8013C7F8(s32, s32, s32);
extern void func_8013C6FC(s32, s32, s32);
extern void func_802227A4();

void func_80222450(s32 arg0, s32 arg1, u16 arg2) {
    s32 sp44;
    struct func_80222450_Struct *v1;
    struct func_80222450_Struct *a2;
    struct func_8021E52C_Struct sp30;
    u32 t;

    sp44 = ((struct func_80222450_Actor *)arg0)->unk5C;
    v1 = (arg0 == D_801BBBF0.unkDC) ? (struct func_80222450_Struct *)&D_801BC03C : (struct func_80222450_Struct *)&D_801BC3D8;
    a2 = (arg0 != D_801BBBF0.unkDC) ? (struct func_80222450_Struct *)&D_801BC03C : (struct func_80222450_Struct *)&D_801BC3D8;
    v1->unk392 = 0;
    if (D_801BBBF0.unk1031 != 0xF) {
        { extern void func_802237B0(); func_802237B0(arg0, 0, a2, &D_801BBBF0); }
        v1->unk2F1 = 0;
        ((u8 *)&v1->u30.w)[2] &= 0xFF1F;
        v1->unk391 = 0;
        v1->unk393 = 0;
        v1->unk328 = 0;
        if (v1->unk2 <= 0 || v1->u30.f.b != 0) {
            func_802233B0(arg0, arg1);
            return;
        }
        if ((v1->u30.h & 7) == 5) {
            func_8022397C(arg0);
            return;
        }
        t = v1->u30.f.nib;
        if (t == 4 && a2->unk2 > 0 && a2->u30.f.b == 0) {
            func_80366B30(arg0, arg1);
            return;
        }
        if (t == 1 && a2->unk2 > 0 && a2->u30.f.b == 0) {
            func_803667C4(arg0, arg1);
            return;
        }
        if (t == 2) {
            v1->u30.b0 &= 0xFFE1;
        }
        if (v1->u30.f.c == 0) {
            v1->u30.f.c = v1->unk2F9 + 2;
        }
        func_802256E4(&sp30, arg0, 0);
        if (((struct func_80222450_Actor *)arg0)->unk36 == 0x11D && v1->u30.f.x != 0 && v1->unk390 == 2) {
            sp30.unk0 = 0x0191009E;
        }
        if (func_80011140(arg1, sp44, sp30, arg2) != 0) {
            func_8013C7F8(arg0, arg1, 0);
            if (((struct func_80222450_Actor *)arg0)->unk36 != 0x11D) {
                func_8013C6FC(arg0, arg1, 1);
            }
            func_800058DC(arg0, (void *)func_802227A4);
        }
        v1->unk392 = 0;
    }
}
