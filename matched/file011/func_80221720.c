#include "context.h"

extern s32 func_80224AC4(s32, s32);
extern void func_802219F8();
extern void func_80221E9C();
extern void func_80222708();
extern s32 func_803628B8();
struct func_802218D4_Obj;
void func_802218D4(struct func_802218D4_Obj *arg0, s32 arg1);
extern void func_80224BEC(s32, s32);
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

struct func_80221720_Actor {
    u8 pad0[0x5C];
    s32 unk5C;
};

void func_80221720(struct func_80221720_Actor *arg0, s32 arg1) {
    s32 sp44;
    struct func_80221720_Struct *v1;
    u8 pad;
    u8 pad2;
    u8 t0;
    struct func_8021E52C_Struct sp30;

    sp44 = arg0->unk5C;
    if ((s32)arg0 == D_801BBBF0.unkDC) {
        v1 = (struct func_80221720_Struct *)&D_801BC03C;
    } else {
        v1 = (struct func_80221720_Struct *)&D_801BC3D8;
    }
    v1->unk392 = 0;
    if (D_801BBBF0.unk1031 != 0xF) {
        if (v1->unk2D8 == 0xE) {
            t0 = 0;
        } else {
            t0 = func_80224AC4((s32)arg0, 0);
        }
        if (v1->u30.b.f == 0) {
            v1->u30.b.f = v1->unk2F9 + 2;
        }
        func_802256E4(&sp30, (s32)arg0, 0);
        if (func_80011140(arg1, sp44, sp30, 3) != 0) {
            if (t0 == 0) {
                if (v1->unk2D8 == 0xE) {
                    func_800058DC((s32)arg0, func_802219F8);
                } else if (v1->unk2D8 == 0xF) {
                    func_803628B8((s32)arg0, arg1);
                } else if (v1->unk2D8 == 0xD) {
                    func_800058DC((s32)arg0, func_80221E9C);
                } else {
                    func_800058DC((s32)arg0, func_80222708);
                }
            } else {
                func_80224BEC((s32)arg0, arg1);
                func_800058DC((s32)arg0, func_802218D4);
            }
        }
    }
}
