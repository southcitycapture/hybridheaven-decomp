#include "context.h"

typedef struct func_801D47E0_StructB {
    u8 pad0[0x4];
    f32 unk4;
    u8 pad8[4];
    f32 unkC;
    u8 pad10[4];
    s16 unk14;
} func_801D47E0_StructB;
typedef struct func_801D47E0_StructC {
    u8 pad0[0x30];
    func_801D47E0_StructB *unk30;
} func_801D47E0_StructC;
typedef struct func_801D47E0_StructD {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801D47E0_StructD;
typedef struct func_801D47E0_Struct {
    u8 pad0[0xC];
    func_801D47E0_StructD *unkC;
    u8 pad10[0x5C];
    f32 unk6C;
    u8 pad70[4];
    f32 unk74;
    u8 pad78[0x18];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D47E0_Struct;
extern f32 func_8001EAD0(s16);
extern f32 func_8001EB64(s16);

void func_801D47E0(func_801D47E0_Struct *arg0, func_801D47E0_StructC **arg1) {
    s32 i;
    s32 j;
    s16 ang;
    func_801D47E0_StructB *p;
    u16 t;

    {
        extern void func_801CD878();
        func_801CD878();
    }
    i = 0;
    j = 0;
    if (arg0->unk94 > 0) {
        do {
            ang = arg0->unk92 * 0x180 + (j << 13) / arg0->unk94;
            p = arg1[i]->unk30;
            p->unk4 = func_8001EAD0(ang) * 5.0 + arg0->unk6C;
            p->unkC = func_8001EB64(ang) * 5.0 + arg0->unk74;
            i = (i + 1) & 0xFF;
            p->unk14 = p->unk14 + 4096.0 * ((j - arg0->unk94 / 2) - 0.5);
            j = i;
            p->unk14 = p->unk14 & 0x1FFF;
        } while (i < arg0->unk94);
    }
    if (arg0->unk90 < arg0->unk92++ || (arg0->unkC->unk4C & 0x8000)) {
        func_801CE5B0((void *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}
