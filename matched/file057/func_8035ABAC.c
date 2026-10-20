#include "context.h"

typedef struct func_8035ABAC_StructInner {
    u8 pad0[0x36];
    u16 unk36;
} func_8035ABAC_StructInner;

typedef struct func_8035ABAC_Struct {
    u8 pad0[0xC];
    func_8035ABAC_StructInner *unkC;
    u8 pad1[0x34 - 0x10];
    u8 unk34;
    u8 unk35;
    u8 unk36;
    u8 pad2;
    u8 unk38;
    u8 unk39;
    u8 unk3A;
    u8 pad3[0x40 - 0x3B];
    u8 unk40;
    u8 pad4[0x7C - 0x41];
    u8 unk7C;
    u8 unk7D;
    u8 pad5[2];
    s32 unk80;
    s32 unk84;
    f32 unk88;
} func_8035ABAC_Struct;

struct func_8035AF30_Struct;
void func_8035AF30(struct func_8035AF30_Struct *arg0, s32 arg1);
extern void func_8035AFEC();
extern void func_8035C638();
extern f32 D_8038A03C;
extern f32 D_8038A040;
extern f32 D_8038A044;
extern f32 D_8038A048;
extern f32 D_8038A04C;

void func_8035ABAC(func_8035ABAC_Struct *arg0, s32 arg1) {
    u8 *v;

    if (D_801BBCCC == (s32)arg0->unkC) {
        v = D_801BC03C;
    } else {
        v = D_801BC3D8;
    }
    if (arg0->unk7D != 0) {
        if (arg0->unk7C == 0) {
            func_800058DC(arg0, func_8035AF30);
            return;
        }
        v[0x2FA] = 1;
        if (D_8038CC14 == 0) {
            func_8035AFEC(arg0->unkC, arg0->unk40);
        } else {
            *(u8 *)(D_8038CC14 + 0x31) = 1;
        }
        func_8035C638(arg0);
        func_801CE4D4(arg0, 0x11, arg0->unk80, arg0->unk84, arg0->unk88, arg0->unk34, arg0->unk35, arg0->unk36, 0xC0, 0, arg0->unk38, arg0->unk39, arg0->unk3A, 0xC0, 0, 0xA, 0x28, D_8038A03C, 1);
        if (arg0->unkC->unk36 == 0x148) {
            func_801CE4D4(arg0, 0x1F, arg0->unk80, arg0->unk84, arg0->unk88, arg0->unk34, arg0->unk35, arg0->unk36, 0xFF, 0, arg0->unk38, arg0->unk39, arg0->unk3A, 0xFF, 0, 1, 0x18, D_8038A040, 5);
            func_801CE4D4(arg0, 0x20, arg0->unk80, arg0->unk84, arg0->unk88, arg0->unk34, arg0->unk35, arg0->unk36, 0xFF, 0, arg0->unk38, arg0->unk39, arg0->unk3A, 0xFF, 0, 1, 0x1E, D_8038A044, 1);
        } else {
            func_801CE4D4(arg0, 0x1D, arg0->unk80, arg0->unk84, arg0->unk88, arg0->unk34, arg0->unk35, arg0->unk36, 0xFF, 0, arg0->unk38, arg0->unk39, arg0->unk3A, 0xFF, 0, 1, 0x18, D_8038A048, 5);
            func_801CE4D4(arg0, 0x1E, arg0->unk80, arg0->unk84, arg0->unk88, arg0->unk34, arg0->unk35, arg0->unk36, 0xFF, 0, arg0->unk38, arg0->unk39, arg0->unk3A, 0xFF, 0, 1, 0x1E, D_8038A04C, 1);
        }
        func_800058DC(arg0, func_8035AF30);
    }
}
