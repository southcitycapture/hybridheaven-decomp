#include "context.h"

typedef struct func_8036D9F8_Struct6 { s32 w[2][3]; } func_8036D9F8_Struct6;


struct func_8036D9F8_Obj {
    u8 pad0[0x30];
    s32 unk30;
    u8 pad1[0x2D9 - 0x34];
    u8 unk2D9;
};

extern func_8036D9F8_Struct3 D_80387AFC;
extern func_8036D9F8_Struct6 D_80387B08;
extern void func_8036DB90(struct func_8036D9F8_Arg *arg0, s32 arg1);
extern void func_802237B0(void *, s32);
extern void func_80226710(void *, s32, s32);
extern s32 func_80011140(s32, s32, func_8036D9F8_Struct3, s32);

void func_8036D9F8(struct func_8036D9F8_Arg *arg0, s32 arg1) {
    s32 sp5C;
    struct func_8036D9F8_Obj *sp58;
    func_8036D9F8_Struct3 sp4C;
    func_8036D9F8_Struct6 sp34;
    s32 v;

    sp5C = arg0->unk5C;
    if ((s32) arg0 == D_801BBCCC) {
        sp58 = (struct func_8036D9F8_Obj *) D_801BC03C;
    } else {
        sp58 = (struct func_8036D9F8_Obj *) D_801BC3D8;
    }
    sp4C = D_80387AFC;
    sp34 = D_80387B08;
    {
        struct { u8 g; u8 h; u8 f; } s2;
#define sp2E s2.f
        sp2E = 0;
        func_802237B0(arg0, 1);
        if (sp58->unk2D9 == 0) {
            sp2E = 1;
        }
        v = (((u32) (sp58->unk30 << 0xB) >> 0x1E) - 1) & 0xFF;
        if (v >= 3) {
            v = 2;
        }
        sp4C.w[0] = sp34.w[sp2E][v];
    }
    if (func_80011140(arg1, sp5C, sp4C, 3) != 0) {
        if ((arg0->unk36 == 0xF6) || (arg0->unk36 == 0xF4) || (arg0->unk36 == 0xF5)) {
            func_80226710(arg0, 0x230, 0x3F800000);
        }
        func_800058DC((s32) arg0, (void *) func_8036DB90);
    }
}
