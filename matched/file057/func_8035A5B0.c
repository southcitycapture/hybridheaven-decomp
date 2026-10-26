#include "common.h"
#include "common.h"
typedef struct func_8035A5B0_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
    u8 pad3E[2];
    u8 unk40;
    u8 pad1[0x5C - 0x41];
    s32 unk5C;
    u8 pad2[0x6C - 0x60];
    f32 unk6C;
    f32 unk70;
    f32 unk74;
    u8 pad3[0x7C - 0x78];
    u8 unk7C;
    u8 pad4[3];
    f32 unk80;
    f32 unk84;
    f32 unk88;
    void *unk8C;
    void *unk90;
} func_8035A5B0_Struct;
typedef struct func_8035A5B0_G {
    u8 pad0[0xDC];
    func_8035A5B0_Struct *unkDC;
    u8 pad1[0xEC - 0xE0];
    func_8035A5B0_Struct *unkEC;
} func_8035A5B0_G;
extern func_8035A5B0_G D_801BBBF0;
extern u8 D_801BC03C[];
extern u8 D_801BC3D8[];
extern u8 D_80385554[];
extern u8 D_8008DA88[];
extern func_8035A5B0_Struct *D_8038CC10;
extern void *func_80005670(void *, void *);
extern void func_80006214(void *);
extern void func_8013A334(void *, s32, s32, u16);
extern void func_8035A490(f32 *, void *, void *, f32, f32, f32);

void *func_8035A5B0(void *arg0, s32 arg1, f32 arg2, f32 arg3, f32 arg4, u8 arg5) {
    func_8035A5B0_Struct *s2;
    u8 *s1;
    s32 sp4C;
    s32 pad[2];
    f32 sp38[3];

    if (arg0 != D_801BBBF0.unkDC) {
        s2 = D_801BBBF0.unkDC;
    } else {
        s2 = D_801BBBF0.unkEC;
    }
    sp4C = s2->unk5C;
    if (arg0 == D_801BBBF0.unkDC) {
        s1 = D_801BC03C;
    } else {
        s1 = D_801BC3D8;
    }
    D_8038CC10 = func_80005670(arg0, D_80385554);
    if (D_8038CC10 != NULL) {
        D_8038CC10->unk40 = arg5;
        D_8038CC10->unk6C = arg2;
        D_8038CC10->unk70 = arg3;
        D_8038CC10->unk74 = arg4;
        func_80006214(s2);
        if (s1[0x2DA] != 0) {
            func_8013A334(sp38, (s32)D_8008DA88, sp4C, 0x1A);
        } else {
            func_8035A490(sp38, s2, D_8008DA88, arg2, arg3, arg4);
        }
        func_80006214(arg0);
        D_8038CC10->unk80 = sp38[0];
        D_8038CC10->unk84 = sp38[1];
        D_8038CC10->unk88 = sp38[2];
        D_8038CC10->unk8C = arg0;
        D_8038CC10->unk90 = s2;
        D_8038CC10->unk3C = 0;
        D_8038CC10->unk7C = s1[0x2DA];
        s1[0x2FA] = 0;
    }
    return D_8038CC10;
}
