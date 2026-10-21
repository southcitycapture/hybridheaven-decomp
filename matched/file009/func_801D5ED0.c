#include "context.h"
typedef struct func_801D5ED0_StructB {
    u8 pad0[0x30];
    u8 *unk30;
} func_801D5ED0_StructB;
typedef struct func_801D5ED0_StructC {
    u8 pad0[0x4C];
    u16 unk4C;
} func_801D5ED0_StructC;
typedef struct func_801D5ED0_Struct {
    u8 pad0[0xC];
    func_801D5ED0_StructC *unkC;
    u8 pad10[0x6B];
    u8 unk7B;
    u8 pad7C[0x14];
    u16 unk90;
    u16 unk92;
    u8 unk94;
} func_801D5ED0_Struct;

extern u8 D_801CD500(s32, u8, f32);

void func_801D5ED0(func_801D5ED0_Struct *arg0, func_801D5ED0_StructB **arg1) {
    s32 i;
    f32 f;
    func_801D5ED0_StructB **p;

    func_8012D7A8();
    if (arg0->unk90 - 10 < arg0->unk92) {
        f = (arg0->unk92 - arg0->unk90 + 10) / 10.0;
        for (i = 0, p = *(func_801D5ED0_StructB ***)&arg1; i < arg0->unk94; i++, p++) {
            u8 *s = (*p)->unk30;
            s[0x4B] = D_801CD500(arg0->unk7B, 0, f);
        }
    }
    if (arg0->unk90 < arg0->unk92++ || (arg0->unkC->unk4C & 0x8000)) {
        func_801CE5B0((void *)arg0, (s32 *)arg1);
        func_800058DC(arg0, (s32)func_801CE898);
    }
}
