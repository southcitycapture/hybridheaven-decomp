#include "common.h"
extern s32 D_801BBCCC;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern s32 D_8038CC14;
void func_800058DC(void *arg0, void *arg1);
extern void func_801CE4D4(void *arg0, s32 arg1, s32 arg2, s32 arg3, f32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9, s32 arg10, s32 arg11, s32 arg12, s32 arg13, s32 arg14, s32 arg15, s32 arg16, f32 arg17, s32 arg18);
typedef struct func_8035AF30_Struct {
    u8 pad0[0x4C];
    u16 unk4C;
    u16 unk4E;
    u8 pad1[0x6C - 0x50];
    s32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 pad2[0x7C - 0x78];
    u8 unk7C;
    u8 pad3[0x80 - 0x7D];
    f32 unk80;
    f32 unk84;
    f32 unk88;
    u8 pad4[0x90 - 0x8C];
    void *unk90;
} func_8035AF30_Struct;
void func_8035AF30(func_8035AF30_Struct *arg0, s32 arg1);
void *func_8035AFEC(s32 arg0, u8 arg1);


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
extern void func_8035C638();
extern f32 D_8038A03C;
extern f32 D_8038A040;
extern f32 D_8038A044;
extern f32 D_8038A048;
extern f32 D_8038A04C;

typedef struct func_8035ABAC_StructBuf {
    u8 pad[0x2FA];
    u8 unk2FA;
} func_8035ABAC_StructBuf;

void func_8035ABAC(func_8035ABAC_Struct *arg0, s32 arg1) {
    func_8035ABAC_StructBuf *v;

    if (D_801BBCCC == (s32)arg0->unkC) {
        v = (func_8035ABAC_StructBuf *)D_801BC03C;
    } else {
        v = (func_8035ABAC_StructBuf *)D_801BC3D8;
    }
    if (arg0->unk7D != 0) {
        if (arg0->unk7C == 0) {
            func_800058DC(arg0, func_8035AF30);
            return;
        }
        v->unk2FA = 1;
        if (D_8038CC14 == 0) {
            func_8035AFEC((s32)arg0->unkC, arg0->unk40);
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
