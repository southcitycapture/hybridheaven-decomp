#include "context.h"

typedef struct func_801D16BC_StructA {
    u8 pad0[0x94];
    u8 unk94;
} func_801D16BC_StructA;
typedef struct func_801D16BC_StructC {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[8];
    f32 unk18;
    f32 unk1C;
    f32 unk20;
} func_801D16BC_StructC;
typedef struct func_801D16BC_StructB {
    u8 pad0[0x30];
    func_801D16BC_StructC *unk30;
} func_801D16BC_StructB;

extern f32 func_8001EB64(s16);
extern f32 func_8001EAD0(s16);
extern s16 D_801BBE22;

void func_801D16BC(func_801D16BC_StructA *arg0, func_801D16BC_StructB **arg1) {
    f32 temp_fs1;
    f32 temp_fs3;
    f32 temp_fs4;
    s16 temp_s0;
    s32 i;
    s8 sp5B;
    func_801D16BC_StructC *p;

    temp_s0 = (s16)(0x2800 - D_801BBE22) & 0x1FFF;
    temp_fs3 = func_8001EB64(temp_s0);
    temp_fs4 = func_8001EAD0(temp_s0);
    sp5B = 0;
    if (func_801CE0E8(arg0, &sp5B) == 0) {
        i = 0;
        if (arg0->unk94 > 0) {
            do {
                temp_fs1 = func_8012C6B4(0x14) / 20.0;
                p = arg1[i]->unk30;
                p->unk4 += temp_fs3 * temp_fs1 + func_8012C6B4(0x14) / 20.0;
                p->unkC += temp_fs4 * temp_fs1 + func_8012C6B4(0x14) / 20.0;
                p->unk8 += func_8012C6B4(0x14) / 20.0;
                p->unk20 *= func_8012C6B4(8) + 2.0;
                i = (i + 1) & 0xFF;
                p->unk1C = p->unk20;
                p->unk18 = p->unk20;
            } while (i < arg0->unk94);
        }
        func_800058DC(arg0, (s32)func_801CE7A8);
    }
}
