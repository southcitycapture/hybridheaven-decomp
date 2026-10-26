#include "common.h"
struct func_802453F0_StructG {
    u8 pad0[0x32];
    s16 unk32;
    u8 pad1[0x198 - 0x34];
    f32 unk198;
    f32 unk19C;
    f32 unk1A0;
    u8 pad2[0x29C - 0x1A4];
    f32 unk29C;
    f32 unk2A0;
    u8 pad3[0xF20 - 0x2A4];
    u8 unkF20, unkF21, unkF22, unkF23, unkF24, unkF25, unkF26, unkF27, unkF28, unkF29, unkF2A, unkF2B;
    s8 unkF2C, unkF2D, unkF2E;
    u8 padF2F[3];
    u8 unkF32, unkF33, unkF34, unkF35;
};
extern struct func_802453F0_StructG D_801BBBF0;
extern void func_80020718(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern s32 func_80133A24(u16);
extern void func_801C3B10(s32);
extern void func_801C3B2C(s32);
extern void func_80246DE0();
struct func_80246DE0_Target {
    u8 pad[0x4C];
    u8 unk4C;
};
struct func_80246DE0_Node {
    u8 pad[0x30];
    struct func_80246DE0_Target *unk30;
};
struct func_80246DE0_Args {
    u8 pad[4];
    struct func_80246DE0_Node *unk4;
    struct func_80246DE0_Node *unk8;
    struct func_80246DE0_Node *unkC;
};

struct func_80246C0C_Obj { u8 pad[0x3C]; u16 unk3C; u8 pad2[0x92-0x3E]; u8 unk92; };
struct func_80246C0C_T { u8 pad[0x4B]; u8 unk4B; };
struct func_80246C0C_N { u8 pad[0x30]; struct func_80246C0C_T *unk30; };
struct func_80246C0C_G { u8 pad[4]; u16 unk4; s16 unk6; u8 pad2[0x3A6 - 8]; u8 unk3A6; };
extern void func_8012FE50();
extern u8 D_8025C974[];
extern f32 D_8025C9AC;

void func_80246C0C(struct func_80246C0C_Obj *arg0, struct func_80246C0C_N **arg1) {
    s32 idx;
    s32 sp50;
    struct func_80246C0C_T *t;

    sp50 = arg0->unk3C++;
    func_80246DE0((s32)arg0, (struct func_80246DE0_Args *)arg1);
    if (sp50 == 0) {
        func_801C3B2C(2);
        func_801C3B10(1);
        func_8011AAF4(D_8025C974, 0x1B4, arg0, 0, 1, 0.0f, D_8025C9AC, -80.0f, 28.0f, 0.0f, 308.0f, -81.0f, 20.0f, 0.0f, 35.0f, -1, -1);
    }
    if (sp50 >= 0x2D) {
        if (sp50 == 0x2D) {
            func_80020718(0x14F);
        }
        idx = 3 - arg0->unk92;
        t = arg1[idx]->unk30;
        if (t->unk4B >= 5) {
            t->unk4B -= 4;
        }
        if (sp50 == 0x96) {
            if (func_80133A24(0x128)) {
                ((struct func_80246C0C_G *)&D_801BBBF0)->unk6 = 1;
            } else if (func_80133A24(0x129)) {
                ((struct func_80246C0C_G *)&D_801BBBF0)->unk6 = 2;
            } else {
                ((struct func_80246C0C_G *)&D_801BBBF0)->unk6 = 0;
            }
            func_80020718(0x65C);
            ((struct func_80246C0C_G *)&D_801BBBF0)->unk3A6 = 0;
            ((struct func_80246C0C_G *)&D_801BBBF0)->unk4 = 0x2D;
            func_8012FE50(0x1E, ((struct func_80246C0C_G *)&D_801BBBF0)->unk4, 1, 1, 1);
        }
    }
}
