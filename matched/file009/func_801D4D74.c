#include "context.h"

typedef struct func_801D4D74_StructB {
    u8 pad0[4];
    f32 unk4;
    f32 unk8;
    f32 unkC;
    u8 pad10[0x2D];
    u8 unk3D;
    u16 unk3E;
} func_801D4D74_StructB;

typedef struct func_801D4D74_StructC {
    u8 pad0[0x22];
    u8 unk22;
    u8 pad23[0xD];
    func_801D4D74_StructB *unk30;
} func_801D4D74_StructC;

typedef struct func_801D4D74_StructA {
    u8 pad0[0x6C];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 pad78[0x1C];
    u8 unk94;
} func_801D4D74_StructA;

extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);
extern u8 func_801D4F88[];

void func_801D4D74(func_801D4D74_StructA *arg0, func_801D4D74_StructC **arg1) {
    func_801D4D74_StructB *p;
    u16 v;
    s8 sp61;
    u8 i;

    sp61 = 0;
    if (func_801CE0E8(arg0, &sp61) == 0) {
        i = 0;
        if (arg0->unk94 > 0) {
            do {
                v = func_8012C6B4(0x2000);
                p = arg1[i]->unk30;
                p->unk4 = func_8001EAD0(v) * 5.0 + arg0->unk6C;
                p->unkC = func_8001EB64(v) * 5.0 + arg0->unk74;
                p->unk8 = ((func_8012C6B4(0xF) - 7.0) / 10.0 + arg0->unk70) + (u32)i;
                p->unk3E |= 1;
                p->unk3D = (arg0->unk94 * 10) / 24;
                if (i > 0) {
                    arg1[i]->unk22 = 0;
                }
                i++;
            } while (i < arg0->unk94);
        }
        func_800058DC(arg0, (s32)func_801D4F88);
    }
}
