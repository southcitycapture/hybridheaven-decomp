#include "context.h"

typedef struct func_801D52FC_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2E];
    u16 unk3E;
} func_801D52FC_StructC;
typedef struct func_801D52FC_StructA {
    u8 pad0[0xC];
    func_801CE618_In *unkC;
    u8 pad10[0x84];
    u8 unk94;
} func_801D52FC_StructA;
typedef struct func_801D52FC_StructB {
    u8 pad0[0x30];
    func_801D52FC_StructC *unk30;
} func_801D52FC_StructB;
extern void func_801D5380();

void func_801D52FC(func_801D52FC_StructA *arg0, func_801D52FC_StructB **arg1) {
    func_801D52FC_StructC *o;
    s8 sp18[2];

    sp18[1] = 0;
    arg0->unk94 = 1;
    if (func_801CE0E8(arg0, &sp18[1]) == 0) {
        o = (*arg1)->unk30;
        o->unk4 = arg0->unkC->unk6C;
        o->unk8 = arg0->unkC->unk70;
        o->unkC = arg0->unkC->unk74;
        o->unk3E |= 1;
        func_800058DC(arg0, (s32)func_801D5380);
    }
}
