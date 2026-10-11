#include "context.h"
extern void func_800058DC(void *, void *);
extern void func_80020744(s32);

typedef struct func_80240B24_StructC {
    u8 pad0[8];
    f32 unk8;
} func_80240B24_StructC;

typedef struct func_80240B24_StructB {
    u8 pad0[0x30];
    func_80240B24_StructC *unk30;
} func_80240B24_StructB;

typedef struct func_80240B24_StructA {
    u8 pad0[0x24];
    func_80240B24_StructB *unk24;
    u8 pad1[0x40 - 0x28];
    f32 unk40;
    f32 unk44;
    f32 unk48;
} func_80240B24_StructA;

extern u8 D_801BBBF0[];
extern void func_80240BD8(void);
extern s32 func_8012AAE8(void *, s32, s32, s32, f32);

void func_80240B24(func_80240B24_StructA *arg0, s32 arg1) {
    if (func_8012AAE8(arg0, 0xC3C80000, 0xC30D0000, 0xC3910000, 0.5f) != 0) {
        *(f32 *) &D_801BBBF0[0x390] = arg0->unk40;
        *(f32 *) &D_801BBBF0[0x394] = arg0->unk44;
        *(f32 *) &D_801BBBF0[0x398] = arg0->unk48;
        return;
    }
    func_80020744(0x6AF);
    *(f32 *) &D_801BBBF0[0x390] = 0.0f;
    *(f32 *) &D_801BBBF0[0x394] = 0.0f;
    *(f32 *) &D_801BBBF0[0x398] = 0.0f;
    arg0->unk24->unk30->unk8 = -4000.0f;
    func_800058DC(arg0, &func_80240BD8);
}
