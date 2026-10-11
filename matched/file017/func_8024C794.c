#include "context.h"

extern s32 func_8012C6B4(s32, void *);
extern void func_80005700(void *);
extern u8 D_801BBBF0[];

struct func_8024C794_Arg {
    u8 pad[0x3C];
    u16 unk3C;
};

struct func_8024C794_Inner {
    u8 pad[0x48];
    u8 unk48;
    u8 unk49;
    u8 unk4A;
    u8 unk4B;
    u8 unk4C;
    u8 unk4D;
    u8 unk4E;
};

struct func_8024C794_Obj {
    u8 pad[0x30];
    struct func_8024C794_Inner *unk30;
};

void func_8024C794(struct func_8024C794_Arg *arg0, struct func_8024C794_Obj **arg1) {
    (*arg1)->unk30->unk48 = D_801BBBF0[0x204];
    (*arg1)->unk30->unk49 = D_801BBBF0[0x205];
    (*arg1)->unk30->unk4A = D_801BBBF0[0x206];
    (*arg1)->unk30->unk4C = D_801BBBF0[0x208];
    (*arg1)->unk30->unk4D = D_801BBBF0[0x209];
    (*arg1)->unk30->unk4E = D_801BBBF0[0x20A];

    if (arg0->unk3C == 0) {
        goto case0;
    }
    if (arg0->unk3C == 1) {
        goto case1;
    }
    if (arg0->unk3C != 2) {
        goto end;
    }
    goto case2;

case0:
    (*arg1)->unk30->unk4B = (*arg1)->unk30->unk4B + 2;
    if ((*arg1)->unk30->unk4B >= 0x9F) {
        (*arg1)->unk30->unk4B = 0xC8;
        arg0->unk3C = 1;
    }
    goto end;

case1:
    (*arg1)->unk30->unk4B = func_8012C6B4(0x1E, arg1) + 0xAA;
    if (func_80133A24(0x132) != 0) {
        arg0->unk3C = 2;
    }
    goto end;

case2:
    (*arg1)->unk30->unk4B = (*arg1)->unk30->unk4B - 4;
    if ((*arg1)->unk30->unk4B < 4) {
        func_80005700(arg0);
    }

end:
    return;
}
