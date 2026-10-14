#include "context.h"
void func_801FA864(s32 arg0, s32 arg1);
extern s32 D_802170B0;
void func_801FA870(s32 arg0, s32 arg1);

struct func_801FA6FC_Local {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
};
struct func_801FA6FC_Obj {
    u8 pad0[0x10];
    s32 unk10;
};
struct func_801FA6FC_Inner {
    u8 pad0[0x18];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
    s32 unk24;
    u8 pad28[0x30 - 0x28];
    s32 unk30;
    u8 pad34[0x4C - 0x34];
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
    u8 unk4F;
};
struct func_801FA6FC_Outer {
    u8 pad0[0x30];
    struct func_801FA6FC_Inner *unk30;
};

extern struct func_801FA6FC_Local D_80164F40;
extern u8 D_801BBBF0[];
extern f32 D_80218E08;
extern s32 func_8000C3B0(void *);
extern void func_80005E44(void *, void *);
extern void func_80006214(void *);
extern void func_8001F74C(void *);
extern void func_8012636C(void *, s32);
extern s32 func_80126CC0(void *, void *);
extern void func_8012C784(void *, s32, s32);

void func_801FA6FC(struct func_801FA6FC_Obj *arg0, struct func_801FA6FC_Outer **arg1) {
    struct func_801FA6FC_Local sp28;
    f32 fv;
    s32 r;

    sp28 = D_80164F40;
    D_802170B0 = (s32) arg0;
    arg0->unk10 = 2;
    if (func_80126CC0(arg0, &func_801FA870) != 0) {
        func_8001F74C(arg0);
        sp28.unk4 = 0x80000C00;
        func_80005E44(arg0, &sp28);
        func_80006214(arg0);
        func_8012636C(arg0, 0);
        func_8012C784(arg0, 0, 0);
        (*arg1)->unk30->unk24 = 0x15;
        r = func_8000C3B0(*arg1);
        fv = D_80218E08;
        (*arg1)->unk30->unk30 = r;
        (*arg1)->unk30->unk18 = fv;
        (*arg1)->unk30->unk1C = fv;
        (*arg1)->unk30->unk20 = fv;
        (*arg1)->unk30->unk4C = D_801BBBF0[0xF32];
        (*arg1)->unk30->unk4D = D_801BBBF0[0xF33];
        (*arg1)->unk30->unk4E = D_801BBBF0[0xF34];
        (*arg1)->unk30->unk4F = D_801BBBF0[0xF35];
        func_800058DC((s32) arg0, &func_801FA864);
    }
}
