#include "context.h"
void func_800058DC(void *, s32);                    /* extern */
void func_800062F8(s32, s32);
extern void (*D_80216D10[])(void *, s32);

extern void func_8001F74C(void);
extern void func_801473F4(void *p);
extern void func_8014753C(void *p, s32 v);
extern void func_801FA410(s32 v);
extern s32 func_801FA600(s32 v);
extern u8 D_80216DE0[];
extern s16 D_8021B0C0;
extern void func_801F5960(void);

struct func_801F58AC_Sub {
    u8 pad0[0x24];
    s32 unk24;
    u8 pad28[0xA8 - 0x28];
    s32 unkA8;
    u8 padAC;
    u8 unkAD;
};

struct func_801F58AC_Obj {
    u8 pad0[0xC];
    struct func_801F58AC_Sub *unkC;
    u8 pad10[0x3C - 0x10];
    s16 unk3C;
};

void func_801F58AC(struct func_801F58AC_Obj *arg0, s32 arg1) {
    s32 sp24;

    sp24 = arg0->unkC->unkA8;
    func_8001F74C();
    arg0->unkC->unkAD = 1;
    func_801473F4(arg0->unkC);
    func_800062F8(arg0->unkC->unk24, 0x800002FE);
    func_8014753C(arg0->unkC, (s32) D_80216DE0 | 0x40000000);
    arg0->unk3C = func_801FA600(sp24) * 0x1E;
    D_8021B0C0 = -0x800;
    func_801FA410(sp24);
    func_800058DC(arg0, (s32) func_801F5960);
}
