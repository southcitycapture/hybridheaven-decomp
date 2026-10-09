#include "context.h"

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

extern void func_80006214(void *);
extern void func_8035A490(f32 *, void *, void *, s32, f32, f32);
extern u8 D_8008DA88[];

void func_8035AF30(func_8035AF30_Struct *arg0, s32 arg1) {
    f32 sp2C[3];
    extern void func_80005700();

    if (arg0->unk4C >= arg0->unk4E) {
        if ((void *) arg0 == (void *) D_8038CC10) {
            D_8038CC10 = 0;
        }
        func_80005700(arg0);
        return;
    }
    if (!arg0->unk7C) {
        func_80006214(arg0->unk90);
        func_8035A490(sp2C, arg0->unk90, D_8008DA88, arg0->unk6C, arg0->unk70, arg0->unk74);
        func_80006214(arg0);
        arg0->unk80 = sp2C[0];
        arg0->unk84 = sp2C[1];
        arg0->unk88 = sp2C[2];
    }
}
