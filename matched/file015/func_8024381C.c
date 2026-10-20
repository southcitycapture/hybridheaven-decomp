#include "context.h"

typedef struct func_8024381C_StructArg {
    u8 pad[0x3C];
    u16 unk3C;
} func_8024381C_StructArg;

typedef struct func_8024381C_StructLocal {
    s16 unk0;
    s16 pad;
    s32 unk4;
    f32 unk8;
    u8 padC[0x14];
} func_8024381C_StructLocal;

extern void func_802438D8(void);

void func_8024381C(func_8024381C_StructArg *arg0, s32 arg1) {
    func_8024381C_StructLocal local;
    s32 temp;

    if (func_801C3044() == 0) {
        temp = arg0->unk3C++ >= 3;
        if (temp) {
            local.unk0 = 0x1000;
            local.unk4 = 0x04100027;
            local.unk8 = 6.0f;
            func_801C2F0C(4, &local.unk0);
            arg0->unk3C = 0;
            func_800058DC(arg0, func_802438D8);
            return;
        }
        local.unk0 = 0x1000;
        local.unk4 = 0x04100036;
        local.unk8 = 10.0f;
        func_801C2F0C(4, &local.unk0);
    }
}
