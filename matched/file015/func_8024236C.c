#include "context.h"

typedef struct func_8024236C_Struct {
    u8 pad0[0x3C];
    s16 unk3C;
} func_8024236C_Struct;

typedef struct func_8024236C_StructLocal {
    s16 unk0;
    s16 pad;
    s32 unk4;
    f32 unk8;
    s16 unkC;
    u8 pad2[0x12];
} func_8024236C_StructLocal;

extern void func_802423E0(void);

void func_8024236C(func_8024236C_Struct *arg0, void *arg1) {
    func_8024236C_StructLocal sp18;

    if (func_801C3044() == 0) {
        sp18.unk0 = 0x1000;
        sp18.unk4 = 0x04100026;
        sp18.unkC = 0xA;
        sp18.unk8 = 1.0f;
        arg0->unk3C = 0;
        func_801C2F0C(3, (s16 *) &sp18);
        func_800058DC(arg0, func_802423E0);
    }
}
