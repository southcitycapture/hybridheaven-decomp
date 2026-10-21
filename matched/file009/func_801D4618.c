#include "context.h"

typedef struct func_801D4618_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801D4618_StructB;
typedef struct func_801D4618_StructA {
    u8 pad0[0x30];
    func_801D4618_StructB *unk30;
} func_801D4618_StructA;

void func_801D4618(u8 *arg0, func_801D4618_StructA **arg1) {
    func_801D4618_StructB *p;
    s16 ang;
    s8 sp59;
    u8 i;
    extern void func_801D47E0();

    sp59 = 0;
    if (func_801CE0E8(arg0, &sp59) == 0) {
        for (i = 0; i < arg0[0x94]; i++) {
            ang = (i << 13) / arg0[0x94];
            p = arg1[i]->unk30;
            p->unk4 += func_8001EAD0(ang) * 5.0;
            p->unkC += func_8001EB64(ang) * 5.0;
            p->unk8 += func_8012C6B4(200) / 10.0;
            p->unk20 *= func_8012C6B4(2) + 1.0;
            p->unk1C = p->unk20;
            p->unk18 = p->unk20;
        }
        func_800058DC(arg0, (s32)func_801D47E0);
    }
}
