#include "common.h"
#define HZC2(a, b) a##b
#define HZC(a, b) HZC2(a, b)
#define func_80241974 HZC(hz80241974_, __LINE__)
extern s32 D_80248800;
struct func_80246730_Struct {
    u8 pad0[4];
    u16 unk4;
    u8 pad6[0x34D - 6];
    u8 unk34D;
    u8 pad34E[0x3A6 - 0x34E];
    u8 unk3A6;
    u8 unk3A7;
};
extern struct func_80246730_Struct D_801BBBF0;
#define F(o) (*(f32 *) ((u8 *) &D_801BBBF0 + (o)))
extern void func_800058DC(void *, void (*)(void));
extern void func_80020718(s32);
extern void func_8011AAF4(void *, s32, void *, s32, s32, f32, f32, f32, f32, f32, f32, f32, f32, f32, f32, s32, s32);
extern void func_8015115C(s32, void *);
extern void func_801512CC(s32, f32, f32, f32);
#define MYCAT2(a, b) a##b
#define MYCAT(a, b) MYCAT2(a, b)
#define func_80241974 MYCAT(myctx_80241974_, __LINE__)
struct func_80243A8C_Arg1 {
    u8 pad[0x14];
    u8 *unk14;
};
struct func_80243A8C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x52];
    u8 unk90;
    u8 pad91[0xF];
    f32 unkA0;
};
void func_80243A8C(struct func_80243A8C_Struct *arg0, struct func_80243A8C_Arg1 *arg1);
void func_802465F8(f32 arg0, f32 arg1, f32 arg2, f32 arg3);


struct func_8024372C_Struct {
    u8 pad0[0x3C];
    u16 unk3C;
    u8 pad3E[0x52];
    u8 unk90;
    u8 pad91[3];
    f32 unk94;
    u8 pad98[8];
    f32 unkA0;
};
struct func_8024372C_Inner {
    u8 pad0[8];
    f32 unk8;
};
struct func_8024372C_Node {
    u8 pad0[0x30];
    struct func_8024372C_Inner *unk30;
};
struct func_8024372C_Args {
    u8 pad0[0x14];
    struct func_8024372C_Node *unk14;
};
extern f64 D_80248490;
extern f64 D_80248498;
extern f64 D_802484A0;
extern f64 D_802484A8;
extern f64 D_802484B0;
extern f64 D_802484B8;
extern f64 D_802484C0;
extern f64 D_802484C8;
extern u8 D_80247D48[];
extern u8 D_80246864[];
extern f32 D_802484D0;
extern f32 D_802484D4;
extern f32 D_802484D8;
extern f32 D_802484DC;
extern f32 D_802484E0;
extern f32 D_802484E4;
extern f32 D_802484E8;

void func_8024372C(struct func_8024372C_Struct *arg0, struct func_8024372C_Args *arg1) {
    s32 v;

    v = arg0->unk3C++;
    if (v < 0xF) {
        arg1->unk14->unk30->unk8 = arg1->unk14->unk30->unk8 + arg0->unk94;
        arg0->unk94 = arg0->unk94 - D_80248490;
    }
    if (v != 0xF) {
        if (v != 0x10) {
            if (v != 0x11) goto done;
            goto c17;
        }
        goto c16;
    }
    func_802465F8(0.0f, 7.0f, -12.0f, 0.2f);
    func_80020718(0x19C);
    goto done;
c16:
    func_802465F8(5.0f, 13.0f, -13.0f, 0.2f);
    goto done;
c17:
    func_802465F8(0.0f, 11.0f, -13.0f, 0.2f);
done:
    func_8011AAF4(D_80247D48, 0x596, arg0, 0, 1, 0.0f, F(0x1E8), F(0x1EC), F(0x1F0), 0.0f, F(0x1F4), F(0x1F8), F(0x1FC), 0.0f, 58.5f, 0, (s32) arg0->unkA0);
    F(0x1E8) = F(0x1E8) + D_80248498;
    F(0x1EC) = F(0x1EC) + D_802484A0;
    F(0x1F0) = F(0x1F0) + D_802484A8;
    F(0x1F4) = F(0x1F4) + D_802484B0;
    F(0x1F8) = F(0x1F8) + D_802484B8;
    F(0x1FC) = F(0x1FC) + D_802484C0;
    arg0->unkA0 = arg0->unkA0 + D_802484C8;
    F(0x1EC) = (!(v % 2) ? 0.5 : -0.5) + F(0x1EC);
    if (v >= 0x18) {
        F(0x1E8) = D_802484D0;
        F(0x1EC) = D_802484D4;
        F(0x1F0) = D_802484D8;
        F(0x1F4) = D_802484DC;
        F(0x1F8) = D_802484E0;
        F(0x1FC) = D_802484E4;
        func_801512CC(D_80248800, 0, 0, -110.0f);
        func_8015115C(D_80248800, D_80246864);
        arg0->unk3C = 0;
        arg0->unk90 = 0;
        arg0->unkA0 = D_802484E8;
        func_800058DC(arg0, (void (*)(void)) func_80243A8C);
    }
}
